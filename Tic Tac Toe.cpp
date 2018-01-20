#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

char sq[10]={'o','1','2','3','4','5','6','7','8','9'};
int check();
void board();
int main()
{
	int i,choice,pl=1;
	char mark;
	
	  do
	  {
		board();
		pl=(pl%2)?1:2;
		cout<< "player" <<pl <<", enter a no.:";
		cin>>choice;
		mark=(pl==1)?'X':'O';
		if(choice==1&&sq[1]=='1')
		sq[1]=mark;
		else if(choice==2 && sq[2]=='2')
		sq[2]=mark;
		else if(choice==3 && sq[3]=='3')
		sq[3]=mark;
		else if(choice==4 && sq[4]=='4')
		sq[4]=mark;
		else if(choice==5 && sq[5]=='5')
		sq[5]=mark;
		else if(choice==6 && sq[6]=='6')
		sq[6]=mark;
		else if(choice==7 && sq[7]=='7')
		sq[7]=mark;
		else if(choice==8 && sq[8]=='8')
		sq[8]=mark;
		else if(choice==9 && sq[9]=='9')
		sq[9]=mark;
		else
		{
			cout<<"invalid move";
			pl--;
			getch();
			
		}
		i=check();
		pl++;
		
		
	}while(i==-1);
	board();
	if(i==1)
	
		cout<<"==>\a player"<<--pl<<"  win";
		
	else
	cout<<"==>\a game draw";
	getch();
	return 0;
	
}

int check()
{
	if (sq[1] == sq[2] && sq[2] == sq[3])
	return 1;
	else if (sq[4] == sq[5] && sq[5] == sq[6])
	return 1;
	 else if (sq[7] == sq[8] && sq[8] == sq[9])
	return 1;
	else if (sq[1] == sq[4] && sq[4] == sq[7])
	return 1;
	else if (sq[2] == sq[5] && sq[5] == sq[8])
	return 1;
	else if (sq[3] == sq[6] && sq[6] == sq[9])
	return 1;
	else if (sq[1] == sq[5] && sq[5] == sq[9])
	return 1;
	else if (sq[3] == sq[5] && sq[5] == sq[7])
	return 1;
	else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' 
                    && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' 
                  && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
                  return 0;
                  else
                  return -1;
                  
}
void board(){
	system("cls");
	cout<<"\n\n\t Tic Tac Toe \n \n";
	cout<<"Player1(X) -  Player2(O)"<<endl<<endl;
	cout<<endl;
    cout << "     |     |     " << endl;
	cout << "  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;
	
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	
	cout << "  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;

    cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	
	cout << "  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;

	cout << "     |     |     " << endl << endl;
	
	
	
}
