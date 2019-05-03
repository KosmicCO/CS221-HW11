#include "cities.hh"
#include "climb_chromosome.hh"
#include "chromosome.hh"

int main(){

    Cities * c = new Cities("small.tsv");

    Chromosome * c1 = new ClimbChromosome(c);
    Chromosome * c2 = new ClimbChromosome(c);

    auto children = c1->recombine(c2);

    children.first->mutate();

    delete children.first;
    delete children.second;
    delete c1;
    delete c2;
    delete c;
}
