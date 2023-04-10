// In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

// Example: (input --> output)

// "ATTGC" --> "TAACG"
// "GTAT" --> "CATA"

#include <string>

std::string DNAStrand(const std::string& dna)
{
  //your code here
      int l = dna.length();
	  std::string strand = dna;
    for(auto i=0; i < l; i++){
        if (dna[i] == 'A')
            strand[i] = 'T';
        else if (dna[i] == 'T')
            strand[i] = 'A';
        else if (dna[i] == 'G')
            strand[i] = 'C';
        else if (dna[i] == 'C')
            strand[i] = 'G';
    }
    return strand;

}
