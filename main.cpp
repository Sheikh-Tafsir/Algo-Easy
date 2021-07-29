//Sheikh Tafsir Rahman
//IUT CSE
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <bits/stdc++.h>
#include <time.h>
using namespace sf;
using namespace std;

int main()
{
      srand(time(0));
      //sf::sleep(sf::milliseconds(20));
      sf::RenderWindow window(sf::VideoMode(1600, 900), "Algo Visualiser!");
      window.setFramerateLimit(200);


      int n=120,i,j,k,key,s=0,r,x,m;
      int pivot,l=1,h=n;
      int arax[n+1]={},aray[n+1]={};

      /*for(int i=1;i<=n;i++){
            arax[i]=100+ i*10;
            aray[i]=10*i;
      }*/

      for(int i=1;i<=n;i++){
            arax[i]=50+ i*10;
            aray[i]=rand()%900 +1;
      }


      sf::Font myFont;
      if (!myFont.loadFromFile("Font/FFF_Tusj.ttf")) {

      }
      /*sf::Music music;
      if (!music.openFromFile("music/punch2.ogg")){

      }*/

      Texture t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
      t1.loadFromFile("images/red.png");
      t2.loadFromFile("images/green.png");
      t3.loadFromFile("images/300.png");
      t4.loadFromFile("images/loading.png");
      t5.loadFromFile("images/start.png");
      t6.loadFromFile("images/finish.png");
      t7.loadFromFile("images/700.png");
      t8.loadFromFile("images/800.png");
      t9.loadFromFile("images/900.png");

      Sprite block[1000],loading(t4),start(t5),finish(t6);

      for (int i=1;i<=n;i++){

            block[i].setTexture(t9);
            block[i].setPosition(arax[i],aray[i]);
      }



      int men =-1;
      while (window.isOpen())
      {
            sf::Event event;
            while (window.pollEvent(event))
            {
                  if (event.type == sf::Event::Closed)
                  window.close();
            }
            if(men==-1){
                 for(int pk=0;pk<=25;pk++){
                        window.clear();
                        window.draw(loading);
                        window.display();
                 }
                 men=0;
            }
            else if(men==0){
                  menu:
                  men=0;
                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Sort;
                  Sort.setFont( myFont );
                  Sort.setString("Sort");
                  if((mx>=700 && mx<=800) && (my>=250 && my<300))Sort.setFillColor(sf::Color::Yellow);
                  else Sort.setFillColor(sf::Color::White);
                  Sort.setStyle(sf::Text::Regular);
                  Sort.setCharacterSize(40);
                  Sort.setPosition(700, 250);

                  sf::Text Find;
                  Find.setFont( myFont );
                  Find.setString("Find");
                  if((mx>=700 && mx<=800) && (my>=350 && my<400))Find.setFillColor(sf::Color::Yellow);
                  else Find.setFillColor(sf::Color::White);
                  Find.setStyle(sf::Text::Regular);
                  Find.setCharacterSize(40);
                  Find.setPosition(700, 350);

                  sf::Text Extra;
                  Extra.setFont( myFont );
                  Extra.setString("Extra");
                  if((mx>=700 && mx<=800) && (my>=450 && my<500))Extra.setFillColor(sf::Color::Yellow);
                  else Extra.setFillColor(sf::Color::White);
                  Extra.setStyle(sf::Text::Regular);
                  Extra.setCharacterSize(40);
                  Extra.setPosition(700, 450);

                  sf::Text End;
                  End.setFont( myFont );
                  End.setString("End");
                  if((mx>=700 && mx<=800) && (my>=550 && my<600))End.setFillColor(sf::Color::Yellow);
                  else End.setFillColor(sf::Color::White);
                  End.setStyle(sf::Text::Regular);
                  End.setCharacterSize(40);
                  End.setPosition(700, 550);


                  if((mx>=700 && mx<=900) && (my>=250 && my<300) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto sorts;
                  }
                  else if((mx>=700 && mx<=900) && (my>=350 && my<400) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Find;
                  }
                  else if((mx>=700 && mx<=900) && (my>=450 && my<500) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Extra;
                  }
                  else if((mx>=700 && mx<=900) && (my>=550 && my<600) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        return 0;
                  }

                  window.clear();
                  //window.draw(menu);
                  window.draw(Sort);
                  window.draw(Find);
                  window.draw(Extra);
                  window.draw(End);
                  window.display();


            }
            else if(men==1){
                  sorts:
                  men=1;
                  window.clear();
                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Sort;
                  Sort.setFont( myFont );
                  Sort.setString("Usual Sort");
                  if((mx>=700 && mx<=900) && (my>=200 && my<=250))Sort.setFillColor(sf::Color::Yellow);
                  else Sort.setFillColor(sf::Color::White);
                  Sort.setStyle(sf::Text::Regular);
                  Sort.setCharacterSize(40);
                  Sort.setPosition(700, 200);

                  sf::Text BSort;
                  BSort.setFont( myFont );
                  BSort.setString("Bubble Sort");
                  if((mx>=700 && mx<=950) && (my>=300 && my<=350))BSort.setFillColor(sf::Color::Yellow);
                  else BSort.setFillColor(sf::Color::White);
                  BSort.setStyle(sf::Text::Regular);
                  BSort.setCharacterSize(40);
                  BSort.setPosition(700, 300);

                  sf::Text ISort;
                  ISort.setFont( myFont );
                  ISort.setString("Intersection Sort");
                  if((mx>=700 && mx<=1050) && (my>=400 && my<=450))ISort.setFillColor(sf::Color::Yellow);
                  else ISort.setFillColor(sf::Color::White);
                  ISort.setStyle(sf::Text::Regular);
                  ISort.setCharacterSize(40);
                  ISort.setPosition(700, 400);

                  sf::Text SSort;
                  SSort.setFont( myFont );
                  SSort.setString("Slection Sort");
                  if((mx>=700 && mx<=950) && (my>=500 && my<=550))SSort.setFillColor(sf::Color::Yellow);
                  else SSort.setFillColor(sf::Color::White);
                  SSort.setStyle(sf::Text::Regular);
                  SSort.setCharacterSize(40);
                  SSort.setPosition(700, 500);

                  sf::Text QSort;
                  QSort.setFont( myFont );
                  QSort.setString("Quick Sort");
                  if((mx>=700 && mx<=950) && (my>=600 && my<=650)) QSort.setFillColor(sf::Color::Yellow);
                  else QSort.setFillColor(sf::Color::White);
                  QSort.setStyle(sf::Text::Regular);
                  QSort.setCharacterSize(40);
                  QSort.setPosition(700, 600);

                  sf::Text MSort;
                  MSort.setFont( myFont );
                  MSort.setString("Merge Sort");
                  if((mx>=700 && mx<=950) && (my>=700 && my<=750))MSort.setFillColor(sf::Color::Yellow);
                  else MSort.setFillColor(sf::Color::White);
                  MSort.setStyle(sf::Text::Regular);
                  MSort.setCharacterSize(40);
                  MSort.setPosition(700, 700);

                  sf::Text Gback;
                  Gback.setFont( myFont );
                  Gback.setString("Go back");
                  if((mx>=700 && mx<=800) && (my>=850 && my<=870))Gback.setFillColor(sf::Color::Yellow);
                  else Gback.setFillColor(sf::Color::White);
                  Gback.setStyle(sf::Text::Regular);
                  Gback.setCharacterSize(20);
                  Gback.setPosition(700, 850);


                  if((mx>=700 && mx<=1000) && (my>=200 && my<250) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Usual;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=300 && my<350) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Bubble;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=400 && my<450) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Intersection;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=500 && my<550) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Selection;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=600 && my<650) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Quick;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=700 && my<750) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Mergee;
                  }
                  else if((mx>=700 && mx<=900) && (my>=850 && my<=870) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto menu;
                  }

                  //window.draw(menu);
                  window.draw(Sort);
                  window.draw(BSort);
                  window.draw(ISort);
                  window.draw(SSort);
                  window.draw(QSort);
                  window.draw(MSort);
                  window.draw(Gback);
                  window.display();
            }

            else if(men==2){
                  Find:
                  men=2;
                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Bsearch;
                  Bsearch.setFont( myFont );
                  Bsearch.setString("Binary search");
                  if((mx>=700 && mx<=1000) && (my>=300 && my<=350)) Bsearch.setFillColor(sf::Color::Yellow);
                  else Bsearch.setFillColor(sf::Color::White);
                  Bsearch.setStyle(sf::Text::Regular);
                  Bsearch.setCharacterSize(40);
                  Bsearch.setPosition(700, 300);

                  sf::Text Ubound;
                  Ubound.setFont( myFont );
                  Ubound.setString("Upper Bound");
                  if((mx>=700 && mx<=1000) && (my>=400 && my<=450))Ubound.setFillColor(sf::Color::Yellow);
                  else Ubound.setFillColor(sf::Color::White);
                  Ubound.setStyle(sf::Text::Regular);
                  Ubound.setCharacterSize(40);
                  Ubound.setPosition(700, 400);

                  sf::Text Lbound;
                  Lbound.setFont( myFont );
                  Lbound.setString("Lower Bound");
                  if((mx>=700 && mx<=1000) && (my>=500 && my<=550))Lbound.setFillColor(sf::Color::Yellow);
                  else Lbound.setFillColor(sf::Color::White);
                  Lbound.setStyle(sf::Text::Regular);
                  Lbound.setCharacterSize(40);
                  Lbound.setPosition(700, 500);

                  sf::Text Gback;
                  Gback.setFont( myFont );
                  Gback.setString("Go back");
                  if((mx>=700 && mx<=900) && (my>=850 && my<=870))Gback.setFillColor(sf::Color::Yellow);
                  else Gback.setFillColor(sf::Color::White);
                  Gback.setStyle(sf::Text::Regular);
                  Gback.setCharacterSize(20);
                  Gback.setPosition(700, 850);


                  if((mx>=700 && mx<=1000) && (my>=300 && my<=350) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Binary;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=400 && my<=450) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Upper;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=500 && my<=550) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Lower;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=850 && my<=870) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto menu;
                  }


                  window.clear();
                  window.draw(Bsearch);
                  window.draw(Ubound);
                  window.draw(Lbound);
                  window.draw(Gback);
                  window.display();

            }

            else if(men==3){
                  Extra:
                  men=3;

                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Pnumber;
                  Pnumber.setFont( myFont );
                  Pnumber.setString("Prime Number");
                  if((mx>=700 && mx<=1000) && (my>=300 && my<=350))Pnumber.setFillColor(sf::Color::Yellow);
                  else Pnumber.setFillColor(sf::Color::White);
                  Pnumber.setStyle(sf::Text::Regular);
                  Pnumber.setCharacterSize(40);
                  Pnumber.setPosition(700, 300);

                  sf::Text Mmax;
                  Mmax.setFont( myFont );
                  Mmax.setString("Max Number");
                  if((mx>=700 && mx<=1000) && (my>=400 && my<=450))Mmax.setFillColor(sf::Color::Yellow);
                  else Mmax.setFillColor(sf::Color::White);
                  Mmax.setStyle(sf::Text::Regular);
                  Mmax.setCharacterSize(40);
                  Mmax.setPosition(700, 400);

                  sf::Text Gback;
                  Gback.setFont( myFont );
                  Gback.setString("Go back");
                  if((mx>=700 && mx<=900) && (my>=850 && my<=870))Gback.setFillColor(sf::Color::Yellow);
                  else Gback.setFillColor(sf::Color::White);
                  Gback.setStyle(sf::Text::Regular);
                  Gback.setCharacterSize(20);
                  Gback.setPosition(700, 850);

                  if((mx>=700 && mx<=1000) && (my>=300 && my<=350) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto Prime;
                  }
                  else if((mx>=700 && mx<=1000) && (my>=400 && my<=450) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto maxx;
                  }
                  else if((mx>=700 && mx<=900) && (my>=850 && my<=870) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto menu;
                  }

                  window.clear();
                  window.draw(Pnumber);
                  window.draw(Mmax);
                  window.draw(Gback);
                  window.display();
            }

            else{

            window.clear();
            for(int i=1;i<=n;i++){
                  window.draw(block[i]);
            }
            window.display();


            // Usual sort

            Usual:{
            for(int pk=0;pk<25;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }
            sf::Text name;
            name.setFont( myFont );
            name.setString("Usual \n Sort");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(80);
            name.setPosition(1300, 300);

            for (i=1;i<=n;i++){
                  for (j=i+1;j<=n;j++){
                        if (aray[i]<aray[j]){
                              swap(aray[i],aray[j]);
                              window.clear();
                              for( k=1;k<=n;k++){
                                    if(k==j)block[k].setTexture(t1);
                                    else if(k==i)block[k].setTexture(t2);
                                    else block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                                    window.draw(block[k]);
                              }
                              window.draw(name);
                              window.display();
                        }
                  }
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  for(int i=1;i<=n;i++){
                        window.draw(block[i]);
                  }
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }
            return 0;
            }



            //bubble sort
            Bubble:{

            for(int pk=0;pk<5;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Bubble \n  Sort");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(80);
            name.setPosition(1300, 300);

            for(i=1;i<=n;i++){
                  for(j=1;j<=n-i;j++){
                        if (aray[j] < aray[j+1]){
                              swap(aray[j], aray[j+1]);
                              window.clear();
                              //music.play();
                              for( k=1;k<=n;k++){
                                    if(k==j)block[k].setTexture(t1);
                                    else block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                                    window.draw(block[k]);
                              }
                              window.draw(name);
                              window.display();
                        }
                  }
            }
            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  for(int i=1;i<=n;i++){
                        window.draw(block[i]);
                  }
                  window.display();
            }
            window.display();
            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }
            return 0;
            }


            //intersection sort
            Intersection:{

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Intersection \n      Sort");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(80);
            name.setPosition(1100, 300);

            for(i=1;i<=n;i++) {
                  key=aray[i];
                  j=i-1;
                  while(j>=0 && aray[j]<key){
                        aray[j + 1] = aray[j];
                        j = j - 1;
                        window.clear();
                        sf::Music music;
                        music.openFromFile("music/punch.ogg");
                        music.play();
                        for(k=1;k<=n;k++){
                              if(k==j)block[k].setTexture(t1);
                              else if(k==i)block[i].setTexture(t2);
                              else block[k].setTexture(t9);
                              block[k].setPosition(arax[k],aray[k]);
                              window.draw(block[k]);
                        }
                        window.draw(name);
                        window.display();

                  }
                  aray[j + 1] = key;
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  for(int i=1;i<=n;i++){
                        window.draw(block[i]);
                  }
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }
            return 0;
            }

            //selection sort
            Selection:{

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            int min_idx;
            sf::Text name;
            name.setFont( myFont );
            name.setString("Selection \n    Sort");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(80);
            name.setPosition(1250, 300);

            for (i=0;i<=n;i++) {
                  min_idx=i;
                  for (j=i+1;j<=n;j++){
                          if (aray[j]>aray[min_idx]){
                              min_idx=j;
                              window.clear();
                              for(k=1;k<=n;k++){
                                    if(k==i)block[k].setTexture(t2);
                                    else if(k==min_idx)block[k].setTexture(t1);
                                    else block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                                    window.draw(block[k]);
                              }
                              window.draw(name);
                              window.display();
                          }
                  }
                  swap(aray[min_idx],aray[i]);
                  window.clear();
                  for(k=1;k<=n;k++){
                        if(k==i)block[k].setTexture(t2);
                        else if(k==min_idx)block[k].setTexture(t1);
                        else block[k].setTexture(t9);
                        block[k].setPosition(arax[k],aray[k]);
                        window.draw(block[k]);
                  }
                  window.draw(name);
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  for(int i=1;i<=n;i++){
                        window.draw(block[i]);
                  }
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }
            return 0;
            }




            //quick sort
            Quick:{

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Quick \n  Sort");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(80);
            name.setPosition(1300, 300);

            l=1,h=n;
            int stack[h - l + 1];
            int top = -1;
            stack[++top] = l;
            stack[++top] = h;

            while (top >= 0) {
                  h = stack[top--];
                  l = stack[top--];

                  int x=aray[h];
                  i=(l-1);

                  for(j=l;j<=h-1;j++){
                        if(aray[j]>=x){
                              i++;
                              swap(aray[i],aray[j]);
                              window.clear();
                              for(k=1;k<=n;k++){
                                    if(k==i || k==j)block[k].setTexture(t1);
                                    else if(k==h)block[k].setTexture(t2);
                                    else block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                                    window.draw(block[k]);
                              }
                              window.draw(name);
                              window.display();
                        }
                  }

                  swap(aray[i + 1],aray[h]);
                  window.clear();
                  for(k=1;k<=n;k++){
                        if(k==i+1)block[k].setTexture(t1);
                        else if(k==h)block[k].setTexture(t2);
                        else block[k].setTexture(t9);
                        block[k].setPosition(arax[k],aray[k]);
                        window.draw(block[k]);
                  }
                  window.draw(name);
                  window.display();

                  int p=i+1;

                  if(p-1>l) {
                        stack[++top]=l;
                        stack[++top]=p-1;
                  }


                  if(p+1<h) {
                        stack[++top]=p+1;
                        stack[++top]=h;
                  }
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  for(int i=1;i<=n;i++){
                        window.draw(block[i]);
                  }
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }
            return 0;
            }


            //merge sort

            Mergee:{

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Merge \n  Sort");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(80);
            name.setPosition(1300, 300);

            int curr_size;
            int left_start;

            for (curr_size=1; curr_size<=n; curr_size = 2*curr_size){
                  for (left_start=1; left_start<=n; left_start += 2*curr_size){
                        int mid = min(left_start + curr_size - 1, n);
                        int right_end = min(left_start + 2*curr_size - 1, n);

                        i, j;
                        int k;
                        int n1 = mid - left_start + 1;
                        int n2 =  right_end - mid;

                        int L[n1], R[n2];


                        for (i = 0; i <n1; i++)L[i] = aray[left_start + i];
                        for (j = 0; j <n2; j++)R[j] = aray[mid + 1+ j];


                        i = 0;
                        j = 0;
                        k = left_start;

                        while (i < n1 && j < n2){
                             if (L[i] >= R[j]){
                                    aray[k] = L[i];
                                    window.clear();
                                    for(int k1=1;k1<=n;k1++){
                                          if(k1==k)block[k].setTexture(t2);
                                          else if(aray[k1]==L[i])block[k].setTexture(t1);
                                          else block[k1].setTexture(t9);
                                          block[k1].setPosition(arax[k1],aray[k1]);
                                          window.draw(block[k1]);
                                    }
                              window.draw(name);
                              window.display();
                              i++;
                              }
                              else{
                                    aray[k] = R[j];
                                    j++;
                                    window.clear();
                                    for(int k1=1;k1<=n;k1++){
                                          if(k1==k)block[k].setTexture(t2);
                                          else if(aray[k1]==R[j])block[k].setTexture(t1);
                                          else block[k].setTexture(t9);
                                          block[k].setPosition(arax[k1],aray[k1]);
                                          window.draw(block[k1]);
                                    }
                                    window.draw(name);
                                    window.display();
                              }
                              k++;
                        }

                        while (i < n1){
                              aray[k] = L[i];
                              window.clear();
                              for(int k1=1;k1<=n;k1++){
                                    if(k1==k)block[k].setTexture(t2);
                                    else if(aray[k1]==L[i])block[k].setTexture(t1);
                                    else block[k1].setTexture(t9);
                                    block[k1].setPosition(arax[k1],aray[k1]);
                                    window.draw(block[k1]);
                              }
                              window.draw(name);
                              window.display();
                              i++;
                              k++;
                        }

                        while (j < n2){
                              aray[k] = R[j];
                              window.clear();
                              for(int k1=1;k1<=n;k1++){
                                    if(k1==k)block[k].setTexture(t2);
                                    else if(aray[k1]==R[j])block[k].setTexture(t1);
                                    else block[k1].setTexture(t9);
                                    block[k1].setPosition(arax[k1],aray[k1]);
                                    window.draw(block[k1]);
                              }
                              window.draw(name);
                              window.display();
                              j++;
                              k++;
                        }
                  }
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  for(int i=1;i<=n;i++){
                        window.draw(block[i]);
                  }
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }
            return 0;
            }



            //binary search

            Binary:{

            for(int pk=0;pk<5;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Binary \n Search");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(60);
            name.setPosition(1300, 200);

            l=1,r=n;
            x=((rand()%100)*10)%800;

            string str1="Finding ";
            string str=str1+'\n'+to_string(x);

            sf::Text xname;
            xname.setFont( myFont );
            xname.setString(str);
            xname.setFillColor(sf::Color::White);
            xname.setStyle(sf::Text::Regular);
            xname.setCharacterSize(60);
            xname.setPosition(1300, 500);

            while(l<=r){
                  m = l + (r - l) / 2;
                  if (aray[m] == x){
                        for(int pk=0;pk<10;pk++){
                        window.clear();
                        for(k=1;k<=n;k++){
                              if(k==m && pk%2==0){
                                    block[k].setTexture(t2);
                                    block[k].setPosition(arax[k],0);
                              }
                              else if(k==m && pk%2==1){
                                    block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              else if(k==l || k==r){
                                    block[k].setTexture(t1);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              else{
                                    block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              window.draw(block[k]);
                        }
                        window.draw(name);
                        window.draw(xname);
                        window.display();
                        }
                        return 0;
                  }

                  window.clear();
                  for(k=1;k<=n;k++){
                        if(k==m)block[k].setTexture(t2);
                        else if(k==l || k==r)block[k].setTexture(t1);
                        else block[k].setTexture(t9);
                        block[k].setPosition(arax[k],aray[k]);
                        window.draw(block[k]);
                  }

                  if(aray[m]<x)l=m+1;
                  else r=m-1;

                  window.draw(name);
                  window.draw(xname);
                  window.display();
            }

            window.clear();
            for(k=1;k<=n;k++){
                  block[k].setTexture(t1);
                  block[k].setPosition(arax[k],aray[k]);
                  window.draw(block[k]);
            }
            window.draw(name);
            window.display();

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }

            return 0;
            }




            //Upper Bound
            Upper:{

            for(int pk=0;pk<5;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Upper \n Bound");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(60);
            name.setPosition(1300, 200);

            l=1,r=n;
            x=rand()%1000;

            string str1="U.Bound ";
            string str=str1+'\n'+to_string(x);

            sf::Text xname;
            xname.setFont( myFont );
            xname.setString(str);
            xname.setFillColor(sf::Color::White);
            xname.setStyle(sf::Text::Regular);
            xname.setCharacterSize(60);
            xname.setPosition(1300, 500);

            while(l<=r){
                  m = l + (r - l) / 2;
                  if (aray[m]>x && aray[m-1]<=x){
                        for(int pk=0;pk<10;pk++){
                        window.clear();
                        for(k=1;k<=n;k++){
                              if(k==m && pk%2==0){
                                    block[k].setTexture(t2);
                                    block[k].setPosition(arax[k],0);
                              }
                              else if(k==m && pk%2==1){
                                    block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              else if(k==l || k==r){
                                    block[k].setTexture(t1);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              else{
                                    block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              window.draw(block[k]);
                        }
                        window.draw(name);
                        window.draw(xname);
                        window.display();
                        }
                        return 0;
                  }

                  window.clear();
                  for(k=1;k<=n;k++){
                        if(k==m)block[k].setTexture(t2);
                        else if(k==l || k==r)block[k].setTexture(t1);
                        else block[k].setTexture(t9);
                        block[k].setPosition(arax[k],aray[k]);
                        window.draw(block[k]);
                  }

                  if(aray[m]<x)l=m+1;
                  else r=m-1;

                  window.draw(name);
                  window.draw(xname);
                  window.display();
            }

            window.clear();
            for(k=1;k<=n;k++){
                  block[k].setTexture(t1);
                  block[k].setPosition(arax[k],aray[k]);
                  window.draw(block[k]);
            }
            window.draw(name);
            window.draw(xname);
            window.display();

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }

            return 0;
            }




            //Lower Bound
            Lower:{

            for(int pk=0;pk<5;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Lower \n Bound");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(60);
            name.setPosition(1300, 200);

            l=1,r=n;
            x=rand()%1000;

            string str1="L.Bound ";
            string str=str1+'\n'+to_string(x);

            sf::Text xname;
            xname.setFont( myFont );
            xname.setString(str);
            xname.setFillColor(sf::Color::White);
            xname.setStyle(sf::Text::Regular);
            xname.setCharacterSize(60);
            xname.setPosition(1300, 500);

            while(l<=r){
                  m = l + (r - l) / 2;
                  if (aray[m]>=x && aray[m-1]<x){
                        for(int pk=0;pk<10;pk++){
                        window.clear();
                        for(k=1;k<=n;k++){
                              if(k==m && pk%2==0){
                                    block[k].setTexture(t2);
                                    block[k].setPosition(arax[k],0);
                              }
                              else if(k==m && pk%2==1){
                                    block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              else if(k==l || k==r){
                                    block[k].setTexture(t1);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              else{
                                    block[k].setTexture(t9);
                                    block[k].setPosition(arax[k],aray[k]);
                              }
                              window.draw(block[k]);
                        }
                        window.draw(name);
                        window.draw(xname);
                        window.display();
                        }
                        return 0;
                  }

                  window.clear();
                  for(k=1;k<=n;k++){
                        if(k==m)block[k].setTexture(t2);
                        else if(k==l || k==r)block[k].setTexture(t1);
                        else block[k].setTexture(t9);
                        block[k].setPosition(arax[k],aray[k]);
                        window.draw(block[k]);
                  }

                  if(aray[m]<x)l=m+1;
                  else r=m-1;

                  window.draw(name);
                  window.draw(xname);
                  window.display();
            }

            window.clear();
            for(k=1;k<=n;k++){
                  block[k].setTexture(t1);
                  block[k].setPosition(arax[k],aray[k]);
                  window.draw(block[k]);
            }
            window.draw(name);
            window.draw(xname);
            window.display();

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }

            return 0;
            }



            //prime numbers
            Prime:{

            for(int pk=0;pk<5;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            n=144;
            int ak=1;
            int prime[n+1]={},arx[500]={},ary[500]={};
            string str[500];
            sf::Text nname[500];
            sf::Text xname[500];

            for(i=1;i<=12;i++){
                  for(j=1;j<=12;j++){
                        arx[ak]=i*130 -130;
                        ary[ak]=j*75-75;
                        ak++;
                  }
            }
            prime[1]=1;
            for (int p=2;p<=n;p++){
                  if (prime[p] == 0){
                        for(i=2*p;i<=n;i+=p){
                              prime[i]=1;
                              window.clear();
                              for(int ak=1;ak<=144;ak++){
                                    str[ak]=to_string(ak);
                                    nname[ak].setFont( myFont );
                                    nname[ak].setString(str[ak]);
                                    nname[ak].setFillColor(sf::Color::White);
                                    nname[ak].setStyle(sf::Text::Regular);
                                    nname[ak].setCharacterSize(60);
                                    nname[ak].setPosition(arx[ak],ary[ak]);
                                    window.draw(nname[ak]);
                              }
                              for(int pk=1;pk<=144;pk++){
                                    if(prime[pk]==1){
                                    xname[pk].setFont( myFont );
                                    if(pk<10)xname[pk].setString("x");
                                    else if(pk<100)xname[pk].setString("xx");
                                    else xname[pk].setString("xxx");
                                    xname[pk].setFillColor(sf::Color::Yellow);
                                    xname[pk].setStyle(sf::Text::Regular);
                                    xname[pk].setCharacterSize(60);
                                    xname[pk].setPosition(arx[pk],ary[pk]);
                                    window.draw(xname[pk]);
                                    }
                              }
                              window.display();

                        }
                  }
            }
            return 0;
            }


            //max/min
            maxx:{

            for(int pk=0;pk<5;pk++){
                  window.clear();
                  window.draw(start);
                  window.display();
            }

            sf::Text name;
            name.setFont( myFont );
            name.setString("Max");
            name.setFillColor(sf::Color::White);
            name.setStyle(sf::Text::Regular);
            name.setCharacterSize(60);
            name.setPosition(1300, 200);

            int mi=aray[1];
            int ma=aray[1];
            j=1,n=120;

            for(i=1;i<=n;i++){
                  if(aray[i]>=mi){
                        mi=aray[i];
                        j=i;
                  }
                  window.clear();
                  for(k=1;k<=n;k++){
                        if(k==j && i%4==0){
                              block[k].setTexture(t2);
                              block[k].setPosition(arax[k],0);
                              window.draw(block[k]);
                        }
                        else{
                              if(k==i)block[k].setTexture(t1);
                              else block[k].setTexture(t9);
                              block[k].setPosition(arax[k],aray[k]);
                        }
                        window.draw(block[k]);
                  }
                  window.draw(name);
                  window.display();


            }
            for(int pk=1;pk<25;pk++){
                  for(k=1;k<=n;k++){
                        if(k==j && pk%4==0){
                              block[k].setTexture(t2);
                              block[k].setPosition(arax[k],0);
                              window.draw(block[k]);
                        }
                        else{
                              block[k].setTexture(t9);
                              block[k].setPosition(arax[k],aray[k]);
                        }
                        window.draw(block[k]);
                  }
                  window.draw(name);
                  window.display();
            }

            for(int pk=0;pk<=25;pk++){
                  window.clear();
                  window.draw(finish);
                  window.display();
            }

            return 0;
            }

            }
      }

      return 0;
}

//Sheikh Tafsir Rahman
//IUT CSE
