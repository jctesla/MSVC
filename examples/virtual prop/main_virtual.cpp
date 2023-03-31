#include <iostream>
#include <string>

 using namespace std;

//---------------------------------------------
//            CLASES
//---------------------------------------------

// Clase Principal
class Entity{

public:
    // method public.
    std::string GetName(){
      return "Public Entity!";
    }
};

// SubClase de la clase Principal.
class Player : public Entity{

  private:
    std::string m_Name;                 // store a name

  public:
    Player(const std::string& name)     // constructor de la clase, pedimos un 'name'
      : m_Name(name){}

};


//---------------------------------------------
//            Main
//---------------------------------------------
int main(){
  printf("      MAIN     \n");

  Entity* e = new Entity();
  std::cout << e->GetName() << std::endl;
  
  Player* p = new Player("Cherno");
  std::cout << p->GetName() << std::endl;

  return 0;

}
