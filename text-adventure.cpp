#include <iostream>

int main() {
  std::cout << "Welcome to my adventure story program. You will be given a description of the scene and then be asked to make choices to progrss in the tale. Have fun! \n";
  std::cout << "You start your journey a yellow wood and come to fork in the road. There is one well-marked and one less traveled, which do you choose to follow? \n";

for (int i = 0; i < 4; i++) {
  std::cout << "Enter 1 if you would like to walk down the more traveled path. \n";
  std::cout << "Enter 2 if you would like to walk down the less traveled path. \n";

  int choice_one;

  std::cin >> choice_one;
  if (i == 3) {
    std::cout << "You have not learned from you mistakes and your adventure is over.  \n";
    return 0;
  }
    if (choice_one == 1) {
    std::cout << "You stride down the path of the known and well-trodden. \n";
    std::cout << "As you walk ahead you see a McDonalds restaurant. You have chosen a boring path and receive a boring reward. Enjoy your burger and obesity. \n";
    std::cout << "As you eat your food, you feel a strange rumbling in your stomach and find yourself back on the path at the first fork in the road. \n";
    }

  if (choice_one == 2) {
  std::cout << "You stride down the path of the unknown and untrodden. \n";
  std::cout << "As you walk ahead you see a waterfall that is flowing with that looks like chocolate milk. There are three such waterfalls with other flavors of delicious drinks including strawberry milk and Pepsi. \n";
  std::cout << "Which will you try first? \n";
  std::cout << "Enter 1 if you choose the chocolate milk. \n";
  std::cout << "Enter 2 if you choose the Pepsi. \n";
  break;
  }
}

int choice_two;

std::cin >> choice_two;

  if (choice_two == 1) {
    std::cout << "You dive headfirst into the chocolate milk waterfall. \n";
  }
  if (choice_two == 2) {
    std::cout << "You dive headfirst into the Pepsi milk waterfall. \n";
  }

  std::cout << "You drink your fill and move on after swimming around in the natural beauty of the waterfall. \n";
  std::cout << "As you continue down the path there are two objects lying in the road. \n";
  std::cout << "The first is a shoe and the second is a rubber ball. \n";
  std::cout << "Which will you choose to pick up? \n";
  std::cout << "Enter 1 if you choose the shoe. \n";
  std::cout << "Enter 2 if you choose the rubber ball. \n";

int choice_three;

std::cin >> choice_three;

std::cout << "As soon as your fingertips touch the surface of the object, you feel like you have begun to fall. A bright light flashes and you close your eyes only to find yourself in your bed. As you wonder what happened, your mom comes into your room and asks what you want for breakfast. Was it all a dream? \n";
std::cout << "Feel free to play again. \n";

  return 0;
}
