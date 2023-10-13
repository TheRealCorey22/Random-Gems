#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;


class Gem
{
public:
    // Attributes
    string Adjective;
    string Rock;


    // Constructor
    Gem(string A, string B)
    {
    Adjective = A;
    Rock = B;
    }

    // Method to Reveal Object
    void Reveal()
    {
    cout << Adjective << " " << Rock << endl;
    }
};

int main()
{




    // List of Gems & Adjectives to Roll From.
    vector<string> GemStones = { "Ruby","Garnet","Amethyst","Obsidian","Opal","Tourmaline","Jade","Citrine","Topaz","Emerald","Sapphire","Onyx","Diamond","Pearl","Amber","Agate","Quartz","Aquamarine","Moonstone","Peridot","Lapis Lazuli","Alexandrite","Bismuth","Fool's Gold","Malachite","Jasper","Flourite","Ammolite","Tanzanite","Howlite","Beryl","Coral","Tiger Eye","Sunstone"};
    vector<string> Adjectives = { "Weird","Charming","Eerie","Radiant","Confused","Spicy","Confident","Brave","Mystic","Mysterious","Bold","Shy","Industrious","Brilliant","Defiant","Iridescent","Shimmering","Elusive","Dazzling","Reserved","Charismatic","Proud","Captivating","Compassionate","Energetic","Exuberant","Focused","Observant","Vibrant","Favorable","Immaculate","Meandering","Serene", "Ruthless"};


    // Random Seeds
    srand(static_cast <unsigned> (time(nullptr)));
 

    //Go Again?

    bool moreGems = true;

    cout << "Press Space for Another!" << endl;

    while (moreGems)
    {
        // Randomization
        int randGems = rand() % GemStones.size();
        int randAdj = rand() % Adjectives.size();


        // Object
        Gem Gem1(Adjectives[randAdj], GemStones[randGems]);

        // Using Object
        Gem1.Reveal();

        //Another one?.
        
        char choice = _getch();
        moreGems = (choice == ' ');


    }
    // Use this to Check How many Gems & Adjectives there are!

    /* int size_t = GemStones.size(); 
    int size_v = Adjectives.size();
    cout << size_t << " Gems." << endl << size_v << " Adjectives." << endl;
    
    */
    
    return 0;
}


