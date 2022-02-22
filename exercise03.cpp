#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box {
int Height, Width, Length;

};
int main() {
  struct Box;
  int Box1;
  int box1height,box1width,box1length;
  
  int totalVolume;

  struct Box;
  int Box2;
  int box2height,box2width,box2length;
  
  int totalvolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1height;
    cout << "Enter Box 1 Width : ";
    cin >> box1width;
    cout << "Enter Box 1 Length : ";
    cin >> box1length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2height;
    cout << "Enter Box 2 Width : ";
    cin >> box2width;
    cout << "Enter Box 2 Length : ";
    cin >> box2length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1height,box1width ,box1length )
             + volume(box2height,box2width ,box2length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  int volume;
  volume = height * width * length;
  return volume;
  }