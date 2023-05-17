#include <bits/stdc++.h>
#include <unistd.h>
#include <conio.h>
#include <math.h>
using namespace std;
struct p{//pixel
	int x;//width size
	float y;//height size
};
struct p1{//pixel
	int x;//width size
	int y;//height size
};
struct p2{//pixel
	int x;//width size
	int y;//height size
	int z;
};
struct p3{//pixel
	int x;//width size
	int y;//height size
	int z;
	int n;
};
int in=0;
int speedbl1x=-1;
int speedbl2x=1;
bool hpny_running=0;
int mn_rs=2;
int count1=0;
int test_snake=0;
int level=50;
int n=1;
int px=0;
int count2=0;
int py=0;
int dum=0;
int speed1x =1;
int speed1y =1;
bool gamerunning=false;
char screen[100][100];
int width=100;
int height=30;
int width1=50;
int height1=40;
p speed;
int bl=0;
char muiten='>';
bool menu_running=true;
bool levelrunning=false;
bool loi_chuc=false;
void clearboard(){
	memset(screen,' ',sizeof(screen));
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			if(j==0||j==(width-1)||j==(width-25)){
				screen[i][j]='|';
				
			}
			if(i==0||i==(height-1)){
				screen[i][j]='_';
			}
				if(i==(height-1)&&(j==0||j==(width-1)||j==(width-25))){
				screen[i][j]='|';
				
			}
		}
	}
}
void clearboard2(){
	memset(screen,' ',sizeof(screen));
for(int i=0;i<height1;i++){
	for(int j=0;j<width1;j++){
	
			if(i==0||i==(height1-1)){
				screen[i][j]='_';
			}
				if((j==0||j==(width1-1))&&i!=0){
			
				screen[i][j]='|';
			
				
			}
	}
}
}
void frame(){
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			cout<<screen[i][j];
		}
		cout<<endl;
	}
}
void frame1(){
	for(int i=0;i<height1;i++){
		for(int j=0;j<width1;j++){
			cout<<screen[i][j];
		}
		cout<<endl;
	}
}
class menu1{
	public:
	vector <string> menu_selection[2];
	vector <string>menu_level[2];
	p1 m;
	p1 l;
	int level;
	bool choice_lv[3];
	bool choice_selection[5];
	int leve=0;
	int choice;
	void init(){

		m.x=20;
		m.y=6;
		menu_selection[0].push_back("<|==========NOKIA_1280_GAME=========|>");
		menu_selection[0].push_back("                                      ");
		menu_selection[0].push_back("           chuc mung nam moi");
		menu_selection[0].push_back("           snack_game");
		menu_selection[0].push_back("           ligmaball_game");
		menu_selection[0].push_back("           huong_dan");
		menu_selection[0].push_back("           cai_dat");
		menu_selection[0].push_back("           thoat");
		menu_selection[0].push_back("                                      ");
		menu_selection[0].push_back("<|==================================|>");
		
		menu_selection[1].push_back("      3=>  CHUC MUNG NAM MOI");
		menu_selection[1].push_back("      3=>  SNACK_GAME");
		menu_selection[1].push_back("      3=>  LIGMABALL_GAME");
		menu_selection[1].push_back("      3=>  HUONG_DAN");
		menu_selection[1].push_back("      3=>  CAI_DAT");
		menu_selection[1].push_back("      3=>  THOAT");
		l.x=20;
		l.y=6;
		menu_level[0].push_back("<|==========NOKIA_1280_GAME=========|>");
		menu_level[0].push_back("                                      ");
		menu_level[0].push_back("           de");
		menu_level[0].push_back("           binh_thuong");
		menu_level[0].push_back("           kho");
		menu_level[0].push_back("                                      ");
		menu_level[0].push_back("                                      ");
		menu_level[0].push_back("<|==================================|>");
		
		menu_level[1].push_back("      3=>  DE          (Se bi delay vi chinh theo FPS)");
		menu_level[1].push_back("      3=>  BINH_THUONG (Hoi hoi delay)");
		menu_level[1].push_back("      3=>  KHO         (Muot)");		
	}
	
	void input(){
		for(int i=m.y;i<menu_selection[0].size()+m.y;i++){
			int y=i-m.y-2;
			if(y>=0&&y<menu_selection[1].size()){
				
			
			if(choice_selection[y]){
				for(int j=m.x;j<menu_selection[1][y].length()+m.x;j++){
					screen[i][j]=menu_selection[1][y][j-m.x];
				}
			}
			else{
				for(int j=m.x;j<menu_selection[0][i-m.y].length()+m.x;j++){
					screen[i][j]=menu_selection[0][i-m.y][j-m.x];
				}
			}
		}
		else{
			for(int j=m.x;j<menu_selection[0][i-m.y].length()+m.x;j++){
					screen[i][j]=menu_selection[0][i-m.y][j-m.x];
				}
		}
		}
	}
	void input1(){
		for(int i=l.y;i<menu_level[0].size()+l.y;i++){
			int x=i-l.y-2;
			if(x>=0&&x<menu_level[1].size()){
				if(choice_lv[x]){
					for(int j=l.x;j<menu_level[1][x].length()+l.x;j++){
						screen[i][j]=menu_level[1][x][j-l.x];
					}
	
			}else{
				for(int j=l.x;j<menu_level[0][i-l.y].length()+l.x;j++){
						screen[i][j]=menu_level[0][i-l.y][j-l.x];	
			}
						}
		}
		else{
							for(int j=l.x;j<menu_level[0][i-l.y].length()+l.x;j++){
						screen[i][j]=menu_level[0][i-l.y][j-l.x];	
			}
		}
	}
}
	};
	menu1 level1;
	menu1 Mune;
class hpny_game{
	public:
	p1 pcar;
	p1 pboss;
	p1 pboss1;
	vector <p1> pdammay;
	int emotion=0;
	int carshoot=0;
	vector <string> car[2];
	vector <p1> bullet;
	vector <p2> bom;
	vector <string> boss1[3];
	vector <string> boss[3];
	vector <string> dammay[2];
	vector <string> hpcar[16];
	vector <string> hpboss[10];
	int chpcar=0;
	int chpboss=0;
	int	lvboss;
	vector <p3> bossbullet;
	vector<string> loichuc;
	int hehe=0;
	int hoho=0;
	p1 ploichuc;
	vector <p1> hieuung;
	void init(){
		ploichuc.x=5;
		ploichuc.y=12;
		loichuc.push_back(" Ban Da chinh phuc thanh cong nam 2023,");
		loichuc.push_back(" Chuc ban va gia dinh nam moi vui ve,");
		loichuc.push_back(" suc khoe doi rao,");
		loichuc.push_back(" Gap nhieu may man, van su nhu y");
		loichuc.push_back(" tien vao nhu nuoc,tien ra nho giot ");
		hpboss[0].push_back("100%");
		hpboss[1].push_back("90%");
		hpboss[2].push_back("70%");
		hpboss[3].push_back("60%");
		hpboss[4].push_back("50%");
		hpboss[5].push_back("40%");
		hpboss[6].push_back("30%");
		hpboss[7].push_back("20%");
		hpboss[8].push_back("10%");
		hpboss[9].push_back("0%");
		

	hpcar[0].push_back("100%");
	hpcar[1].push_back("93%");
	hpcar[2].push_back("87%%");
	hpcar[3].push_back("80%%");
	hpcar[4].push_back("73%");
	hpcar[5].push_back("66%");
	hpcar[6].push_back("60%");
	hpcar[7].push_back("53%");
	hpcar[8].push_back("46%");
	hpcar[9].push_back("39%");
	hpcar[10].push_back("32%");
	hpcar[11].push_back("25%");
	hpcar[12].push_back("18%");
	hpcar[13].push_back("12%");
	hpcar[14].push_back("6%");
	hpcar[15].push_back("0%");

	
	
		pcar.x=20;
		pcar.y=30;
		
		car[0].push_back("  /\\ ");
		car[0].push_back(" |||| ");
		car[0].push_back("/|__|\\");
		car[1].push_back("     ");
		car[1].push_back(" |  | ");
		car[1].push_back("/|__|\\");
		dammay[0].push_back(" _-----___");
		dammay[0].push_back("/       _/");
		dammay[0].push_back("\\__--_/");
		
		dammay[1].push_back(" __----____");
		dammay[1].push_back("|        _/");
		dammay[1].push_back(" \\___-_/");
		
		pboss.x=25;
		pboss.y=10;
		boss[0].push_back("          ");
		boss[0].push_back("          ");
		boss[0].push_back(" /\\____/\\");
		boss[0].push_back("( ^ __ ^ )");
		boss[0].push_back(" |      \\");
		boss[0].push_back(" |     / \\   ");
		boss[0].push_back(" | |   |  |___/");
		pboss1.x=2;
		pboss1.y=10;
		boss1[0].push_back("  ___________________________________________");
		boss1[0].push_back("  |                                         |");
		boss1[0].push_back("  |                                         |");
		boss1[0].push_back("  |                                         |");
		boss1[0].push_back("  |                                         |");
		boss1[0].push_back("  |                                         |");
		boss1[0].push_back("  |                                         |");
		boss1[0].push_back("  |__  _____________________________________|");
		boss1[0].push_back("     \\|       ");
		boss1[0].push_back("    /\\____/\\");
		boss1[0].push_back("   ( ^ __ ^ )");
		boss1[0].push_back("    |      \\");
		boss1[0].push_back("    |     / \\   /");
		boss1[0].push_back("    | |   |  |__/");
	
		boss1[1].push_back("  ___________________________________________");
		boss1[1].push_back("  |                                         |");
		boss1[1].push_back("  |                                         |");
		boss1[1].push_back("  |                                         |");
		boss1[1].push_back("  |                                         |");
		boss1[1].push_back("  |                                         |");
		boss1[1].push_back("  |                                         |");
		boss1[1].push_back("  |__  _____________________________________|");
		boss1[1].push_back("     \\|       ");
		boss1[1].push_back("    /\\____/\\");
		boss1[1].push_back("   ( - __ - )");
		boss1[1].push_back("    |      \\");
		boss1[1].push_back("    |     / \\   ");
		boss1[1].push_back("    | |   |  |____");
		
		
		boss[1].push_back("          ");
		boss[1].push_back("          ");
		boss[1].push_back(" /\\____/\\");
		boss[1].push_back("( - __ - )");
		boss[1].push_back(" |      \\");
		boss[1].push_back(" |     / \\   ");
		boss[1].push_back(" | |   |  |____");
		boss[2].push_back("    /\\____/\\");
		boss[2].push_back("   ( @ __ @ )");
		boss[2].push_back("    |      \\");
		boss[2].push_back("    |     / \\   ");
		boss[2].push_back("    | |   |  |____");
	}
	void inputloichuc(int &n){
		++n;
		for(int i=ploichuc.y;i<loichuc.size()+ploichuc.y;i++){
			if(hehe>i-ploichuc.y){
				for(int j=ploichuc.x;j<loichuc[i-ploichuc.y].length()+ploichuc.x;j++){
					screen[i][j]=loichuc[i-ploichuc.y][j-ploichuc.x];
				}
			}
			else if(hehe==i-ploichuc.y){
			if(hoho==0){
			
				hoho=loichuc[i-ploichuc.y].length();}
					for(int j=ploichuc.x;j<loichuc[i-ploichuc.y].length()+ploichuc.x-hoho;j++){
					screen[i][j]=loichuc[i-ploichuc.y][j-ploichuc.x];
				

				}
			}	
			}
			if(n>=2){
					n=0;
					--hoho;
				}
				if(hoho==0){
					++hehe;
				}
		}
		void checkwin(){
			hpny_running=(chpboss>=9)?false:true;
			loi_chuc=!hpny_running;
		}
		void hieu_ung(int &i,int &n){
	
		i++;
		srand(time(NULL));

int rd = rand() % 45 + 1;
int rd3 = rand() % 45 + 1;
int rd4 = rand() % 45 + 1;
		if(i>=10){	
		
		p1 x;
		p1 x2;
		p1 x4;
		x.x=rd;
		x.y=0;
		x2.x=rd3;
		x2.y=-1;
		x4.x= rd4;
		x4.y= -2;
		

		
		
		hieuung.push_back(x4);
		hieuung.push_back(x);
		hieuung.push_back(x2);
		i=0;
		}
		if(hieuung.size()>0){
	
			
		int rd2 = rand() % 2 ;
		for(int i=0;i<hieuung.size();i++){
			if(hieuung[i].y>=height1-1){
		hieuung.erase(hieuung.begin()+i);
		}}
		for(int i=0;i<hieuung.size();i++){
			
			
			++hieuung[i].y;
			
		
				if(rd2==0){
				
				screen[hieuung[i].y][hieuung[i].x]='$';
			}else if(rd2==1){

				screen[hieuung[i].y][hieuung[i].x]='<';
				screen[hieuung[i].y][hieuung[i].x+1]='3';
			}
			}
			}
		}
			
			
		
		
	
	
	void inputboss1(){
			in++;
		for(int i=pboss1.y;i<boss1[emotion].size()+pboss1.y;i++){
			for(int j=pboss1.x;j<boss1[emotion][i-pboss1.y].length()+pboss1.x;j++){
				screen[i][j]=boss1[emotion][i-pboss1.y][j-pboss1.x];
			}
		}
		if(in>=4){
		
		emotion=(emotion==1)?0:1;in=0;}
	}
	void spammay(int &i){
		i++;
		srand(time(NULL));

int rd = rand() % 37 + 1;
int rd3 = rand() % 37 + 1;
int rd4 = rand() % 37 + 1;
		if(i>=20){	
		
		p1 x;
		p1 x2;
		p1 x4;
		x.x=rd;
		x.y=-1;
		x2.x=rd3;
		x2.y=-3;
		x4.x= rd4;
		x4.y= -7;
		

		
		
		pdammay.push_back(x4);
		pdammay.push_back(x);
		pdammay.push_back(x2);

		i=0;
		}
		if(pdammay.size()>0){
	
			
		int rd2 = rand() % 2 ;
		for(int i=0;i<pdammay.size();i++){
			if(pdammay[i].y>=height1-2){
		pdammay.erase(pdammay.begin()+i);
		}
			++pdammay[i].y;
			for(int j=pdammay[i].y;j<dammay[rd2].size()+pdammay[i].y;j++){
				for(int n=pdammay[i].x;n<dammay[rd2][j-pdammay[i].y].length()+pdammay[i].x;n++){
				
				if(pdammay[i].y>0&&pdammay[i].y<(height1-1))
				screen[j][n]=dammay[rd2][j-pdammay[i].y][n-pdammay[i].x];
			}
			}
			
		}
		}
	}
	void inputhp()	{
		for(int i=pboss.y-1;i<hpboss[chpboss].size()+pboss.y-1;i++){
			for(int j=pboss.x+2;j<hpboss[chpboss][0].length()+pboss.x+2;j++){
				screen[i][j]=hpboss[chpboss][0][j-(pboss.x+2)];
			}
		}
		for(int i=pcar.y+4;i<hpcar[chpcar].size()+pcar.y+4;i++){
			for(int j=pcar.x+2;j<hpcar[chpcar][0].length()+pcar.x+2;j++){
				screen[i][j]=hpcar[chpcar][0][j-(pcar.x+2)];
			}
		}
	}
	void inputbossbullet(){
		++bl;
		if(bl>=lvboss){
		p3 x1;
		p3 x2;
		p3 x3;
		x1.x=pboss.x+5;
		x1.y=pboss.y+5;
		x2.x=pboss.x+5;
		x2.y=pboss.y+5;
		x3.x=pboss.x+5;
		x3.y=pboss.y+5;
		x1.z=0;
		x2.z=0;
		x3.z=0;
		x1.n=1;
		x2.n=2;
		x3.n=3;
		bossbullet.push_back(x1);
		bossbullet.push_back(x2);
		bossbullet.push_back(x3);
		bl=0;
		}
		if(bossbullet.size()>0){
			for(int i=0;i <bossbullet.size();i++){
				screen[bossbullet[i].y][bossbullet[i].x]='o';
			}

			for(int i=0;i<bossbullet.size();i++){
	
				if(bossbullet[i].n==1){
				
					bossbullet[i].y=bossbullet[i].y+1;}
				if((bossbullet[i].n==2&&bossbullet[i].x>=1)&&bossbullet[i].z==0){
					
					bossbullet[i].y=bossbullet[i].y+1;
					bossbullet[i].x=bossbullet[i].x+speedbl1x;
					}
					else if((bossbullet[i].n==2&&bossbullet[i].x>=1)&&bossbullet[i].z==1){
				
					bossbullet[i].y=bossbullet[i].y+1;
					bossbullet[i].x=bossbullet[i].x-speedbl1x;	
					}
					else if((bossbullet[i].n==2&&bossbullet[i].x<1)&&bossbullet[i].z==0){
					bossbullet[i].z=1;
					bossbullet[i].y=bossbullet[i].y+1;
					bossbullet[i].x=bossbullet[i].x-speedbl1x;	
					}
					
			
			if((bossbullet[i].n==3&&bossbullet[i].x<=width1-2)&&bossbullet[i].z==0){
			
					bossbullet[i].y=bossbullet[i].y+1;
					bossbullet[i].x=bossbullet[i].x+speedbl2x;
					dum=0;
					}
				else if((bossbullet[i].n==3&&bossbullet[i].x<=width1-2)&&bossbullet[i].z==1){
					bossbullet[i].y=bossbullet[i].y+1;
					bossbullet[i].x=bossbullet[i].x-speedbl2x;
					dum=0;	
					}
				else if((bossbullet[i].n==3&&bossbullet[i].x>width1-2)&&bossbullet[i].z==0){
					bossbullet[i].z=1;
					bossbullet[i].y=bossbullet[i].y+1;
					bossbullet[i].x=bossbullet[i].x-speedbl2x;
					dum=0;	
					}
			
					
					
			}
		
int v[6];
int n=0;
int temp;
int o=0;
		for(int i=0;i <bossbullet.size();i++){
			
			if(bossbullet[i].y>=height1-1){
				v[n]=i;
				n++;
			}
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(v[i]<v[j]){
					temp=v[i];
					v[i]=v[j];
					v[j]=temp;
				}
			}
		}
		
		while(o<n){
			bossbullet.erase(bossbullet.begin()+v[o]);
			o++;	
		}
			
		}
	}
	void inputcar(){
		for(int i=pcar.y;i<car[carshoot].size()+pcar.y;i++){
			for(int j=pcar.x;j<car[carshoot][i-pcar.y].length()+pcar.x;j++){
				screen[i][j]=car[carshoot][i-pcar.y][j-pcar.x];
			}
		}
	}
		void inputboss(int &i){	
		i++;
		for(int i=pboss.y;i<boss[emotion].size()+pboss.y;i++){
			for(int j=pboss.x;j<boss[emotion][i-pboss.y].length()+pboss.x;j++){
				screen[i][j]=boss[emotion][i-pboss.y][j-pboss.x];
			}
		}
		if(i>=4){
		
		emotion=(emotion==1)?0:1;i=0;}
	}
	void inputbullet(){
		
	
		if(bullet.size()>0){
				if(bullet[0].y<=1){
			bullet.erase(bullet.begin());
		}
			for(int i=0;i<bullet.size();i++){
			--bullet[i].y;
			screen[bullet[i].y+1][bullet[i].x]='|';
			screen[bullet[i].y+1][bullet[i].x+1]='|';
			screen[bullet[i].y][bullet[i].x]='/';
			screen[bullet[i].y][bullet[i].x+1]='\\';
			}
		}
		
	}
	void colli(int &i){
		++i;
		if(i>=2){
		pboss.x+=speed1x;
		pboss.y+=speed1y;
		i=0;
	}
		if(pboss.x>width1-17){
			speed1x=-1;
		}
			if(pboss.x<2){
			speed1x=1;
		}
				if(pboss.y<2){
			speed1y=1;
		}
		if(pboss.y>height1-25){
			speed1y=-1;
		}
		for(int i=0;i<bullet.size();i++){
			if((bullet[i].x>pboss.x&&bullet[i].x<pboss.x+boss[emotion][4].length()+1)&&(bullet[i].y>pboss.y&&bullet[i].y<pboss.y+boss[emotion].size())){
				p2 p;
				p.x=bullet[i].x;
				p.y=bullet[i].y;
				p.z=4;
				bom.push_back(p);
				bom.push_back(p);
				bom.push_back(p);
				bom.push_back(p);
				bom.push_back(p);
				bom.push_back(p);
				bom.push_back(p);
				bom.push_back(p);			
				bullet.erase(bullet.begin()+i);
				emotion=2;
				if(chpboss<9)
				chpboss++;
				
			}}
			if(bom.size()>0){
			
			for(int i=0;i<bom.size();i++){
				screen[bom[i].y][bom[i].x]='*';
			}
			for(int i=0;i<bom.size();i++){
				++count1;
			
				if(count1==1){
					bom[i].x=bom[i].x+1;
					bom[i].y=bom[i].y+1;
					--bom[i].z;
				}
				if(count1==2){
					bom[i].x=bom[i].x-1;
					bom[i].y=bom[i].y-1;
					--bom[i].z;
				}
				if(count1==3){
					bom[i].x=bom[i].x-1;
					bom[i].y=bom[i].y+1;
					--bom[i].z;
				}
				if(count1==4){
					bom[i].x=bom[i].x+1;
					bom[i].y=bom[i].y-1;
					--bom[i].z;
				}
					if(count1==5){
					bom[i].x=bom[i].x+1;
					--bom[i].z;
					
				}
					if(count1==6){
					bom[i].x=bom[i].x-1;
					--bom[i].z;
					
				}
					if(count1==7){
					
					bom[i].y=bom[i].y-1;
					--bom[i].z;
				}
						if(count1==8){
					
					bom[i].y=bom[i].y+1;
					--bom[i].z;
					count1=0;
					
				}
				
			
			}
			if(bom[0].z==0){
			
			for(int i=0;i<8;i++){
					bom.erase(bom.begin());
				}
			
	} 
		
	}
	for(int i=bossbullet.size()-1;i>-1;i--){
		if((bossbullet[i].x>=pcar.x&&bossbullet[i].x<=pcar.x+6)&&(bossbullet[i].y>=pcar.y&&bossbullet[i].x<=pcar.y+3)){
			bossbullet.erase(bossbullet.begin()+i);
			++chpcar;
		}
	}
	
}


};
hpny_game game_cat;

class snake{
	public:

		int direction=0;
		vector <p> psnake;
		void vitrixuatphat(int x,int y){
		
		p po;
		po.x=x;
		po.y=y;
		psnake.push_back(po);}
void Fsnake(){
	

	
	for(int i=0;i<psnake.size();i++){
	
		screen[(int)psnake[i].y][psnake[i].x]='O';
		
		

	}	
	screen[(int)psnake[psnake.size()-1].y][psnake[psnake.size()-1].x]=muiten;
}

};


class food{	
	public:
	int foodX;
	int foodY;
	void create(){
		srand(time(NULL));
		do{
		
		foodX=((rand()%100)+1)/1.45;
		foodY=((rand()%100)+1)/3.5;
		}while(foodY==0||foodX==0);
		cout<<foodX<<endl;
	}

	void drawfood(){
		screen[foodY][foodX]='0';
	}
};

void input(){
	
	bool down=(speed.y!=-0.5);
	bool up=(speed.y!=+0.5);
	bool right=(speed.x!=-1);
	bool left=(speed.x!=+1);
    if (kbhit()){
	char key=getch();
	if(menu_running){
		switch(key){
		case 80://down
		Mune.choice_selection[Mune.choice]=0;
		Mune.choice++;
		if(Mune.choice>5){
			Mune.choice=5;
		}
		Mune.choice_selection[Mune.choice]=1;	
			break;
			case 72://up
			Mune.choice_selection[Mune.choice]=0;
			Mune.choice--;
			if(Mune.choice<0)
				Mune.choice=0;
			Mune.choice_selection[Mune.choice]=1;
			break;
			case 13:
			if(Mune.choice_selection[0]==1){
				levelrunning=true;
				hpny_running=true;
				menu_running=false;	
			}
			if(Mune.choice_selection[1]==1){
				levelrunning=true;
				gamerunning=true;
				menu_running=false;
			}
				
			default:
				break;
			}
	}
	else{
	if(levelrunning){
		switch(key){
		case 80://down
			level1.choice_lv[level1.leve]=0;
			level1.leve++;
			if(level1.leve>2){
			level1.leve=2;	
			}
			level1.choice_lv[level1.leve]=1;
			break;
			case 72://up
			level1.choice_lv[level1.leve]=0;
			level1.leve--;
			if(level1.leve<0){
			level1.leve=0;	
			}
			level1.choice_lv[level1.leve]=1;
			break;
			case 13:
				if(level1.choice_lv[0]){
					level1.level=100;
					levelrunning=false;
					game_cat.lvboss=8;
				}
				if(level1.choice_lv[1]){
					level1.level=75;
					levelrunning=false;
					game_cat.lvboss=4;
				}
				if(level1.choice_lv[2]){
					level1.level=50;
					levelrunning=false;
					game_cat.lvboss=1;
				}
		
				
			default:
				break;
			}
	}
	if(gamerunning&&!levelrunning){
	switch(key){
		case 80://down
		if(down){
		
			speed.y=0.5;
			speed.x=0;
			muiten='v';
				}
			
			break;
			case 72://up
			if(up){
			speed.y=-0.5;
			speed.x=0;
				muiten='^';
			}
			break;
			case 77://right
			if(right){
			speed.y=0;
			speed.x=1;
			muiten='>';
			}
				
			break;
			case 75://left
			if(left){
			speed.y=0;
			speed.x=-1;
				muiten='<';
		}
			break;	
			default:
				break;
			}
		}
	else{
			switch(key){
		case 80://down
			test_snake=1;
			
			break;
			case 72://up
			test_snake=0;
			break;
			case 13:
				if(test_snake==0){
				mn_rs=0;
				gamerunning=true;
				}else if(test_snake==1){
				mn_rs=1;
				gamerunning=true;
					
				}
			default:
				break;
	}
	}
	if(hpny_running&&!levelrunning){
			switch(key){
		case 80://down
		if(	game_cat.pcar.y<height1-4)
		
			game_cat.pcar.y=game_cat.pcar.y+1;
			
			
			break;
			case 72://up
				if(	game_cat.pcar.y>height1-15)
				game_cat.pcar.y=game_cat.pcar.y-1;
		
			
			break;
			case 77://right
			if(game_cat.pcar.x<width1-7)
		game_cat.pcar.x=game_cat.pcar.x+2;
	
				
			break;
			
			case 75://left
			if(game_cat.pcar.x>1)
			game_cat.pcar.x=game_cat.pcar.x-2;
			break;
			case 32:
			p1 x;
			x.y=game_cat.pcar.y;
			x.x=game_cat.pcar.x+2;
			game_cat.bullet.push_back(x);
			default:
				break;
			}
}
	}
	
	}
}

	void move(snake &s,food &f,int &c,p &y,bool &eated){
			
			int i=0;
				
	
				p x;
				
				x.x=s.psnake[s.psnake.size()-1].x+speed.x;
				y.y=y.y+speed.y;
				
				
				
				if((int)(y.y)!=(int)(s.psnake[s.psnake.size()-1].y)||speed.x==1||speed.x==-1){
				x.y=y.y;
				s.psnake.push_back(x);
				i=1;
			}
			
				
		if((int)s.psnake[s.psnake.size()-1].y==f.foodY&&s.psnake[s.psnake.size()-1].x==f.foodX){
			c++;
			f.create();
			eated=true;
		}
		else if((int)(y.y)!=(int)(s.psnake[s.psnake.size()-1].y)||speed.x==1||speed.x==-1||i==1){
			s.psnake.erase((s.psnake.begin()));
		}
		

	
		
}
	
char convert1(int count){
	
		return ((count%10)+48);
	
}	
char convert2(int count){
	return ((count/10)+48);
}	
void check(int count,bool &eated,int &n){
system("cls");
	vector <string> score;
	vector <string> burn[2];
	
	p1 c;	
	c.y=5;
	c.x=76;
	score.push_back("     ---------- ");
	score.push_back("     |SCORE:|");

	score.push_back("     ---------- ");
		score[1].insert(score[1].begin()+12, convert1(count));
	score[1].insert(score[1].begin()+12, convert2(count));
	p1 b1;
	b1.x=80;
	b1.y=17;
	burn[0].push_back("             ");
	burn[0].push_back("             ");
	burn[0].push_back("             ");
	burn[0].push_back("             ");
	burn[0].push_back("             ");
	burn[0].push_back("     ______     ");
	burn[0].push_back("     \\ ~ ~/\     ");
	burn[0].push_back("      \\ ~/\    ");
	burn[0].push_back("       \\/\      ");
	burn[0].push_back("             ");
		p1 b2;
	b2.x=80;
	b2.y=17;
	burn[1].push_back(" ############### ");
	burn[1].push_back("  ############# ");
	burn[1].push_back("   ###########  ");
	burn[1].push_back("    #########   ");
	burn[1].push_back("     *  *  *    ");
	burn[1].push_back("     \\  | /   ");
	burn[1].push_back("     \\ ~ ~/\   ");
	burn[1].push_back("      \\ ~/\     ");
	burn[1].push_back("       \\/\      ");
	burn[1].push_back(" YOU GOT IT BRAH");
	
	

	
			for(int i=c.y;i<score.size()+c.y;i++){
			for(int j=c.x;j<score[i-c.y].length()+c.x;j++){
				screen[i][j]=score[i-c.y][j-c.x];
			}
			
		}
			for(int i=b1.y;i<burn[0].size()+b1.y;i++){
			for(int j=b1.x;j<burn[0][i-b1.y].length()+b1.x;j++){
				screen[i][j]=burn[0][i-b1.y][j-b1.x];
			}
			
		}
		if(eated){
			n++;
				for(int i=b2.y+6;i<burn[1].size()+b2.y;i++){
			for(int j=b2.x;j<burn[1][i-b2.y].length()+b2.x;j++){
				screen[i][j]=burn[1][i-b2.y][j-b2.x];
			}
		}
			if(n>=2){
		
			for(int j=b2.x;j<burn[1][5].length()+b2.x;j++){
				screen[b2.y+5][j]=burn[1][5][j-b2.x];
			}
			}
				if(n>=4){
		
			for(int j=b2.x;j<burn[1][4].length()+b2.x;j++){
				screen[b2.y+4][j]=burn[1][4][j-b2.x];
			}
			}
				if(n>=6){
		
			for(int j=b2.x;j<burn[1][3].length()+b2.x;j++){
				screen[b2.y+3][j]=burn[1][3][j-b2.x];
			}
			}
				if(n>=8){
		
			for(int j=b2.x;j<burn[1][2].length()+b2.x;j++){
				screen[b2.y+2][j]=burn[1][2][j-b2.x];
			}
			}
				if(n>=10){
		
			for(int j=b2.x;j<burn[1][1].length()+b2.x;j++){
				screen[b2.y+1][j]=burn[1][1][j-b2.x];
			}
			}
				if(n>=12){
		
			for(int j=b2.x;j<burn[1][0].length()+b2.x;j++){
				screen[b2.y+0][j]=burn[1][0][j-b2.x];
			}
				n=0;
			eated=false;
			}
		
			
				}
		
	
}	

	                     
void colli(snake s)	{
	for(int i=0;i<s.psnake.size();i++){
		if(s.psnake[s.psnake.size()-1].x==s.psnake[i].x&&s.psnake[s.psnake.size()-1].y==s.psnake[i].y&&i!=(s.psnake.size()-1)){
			gamerunning=false;
			mn_rs==2;
		}
		
		
	}
	if(s.psnake[s.psnake.size()-1].x<1||s.psnake[s.psnake.size()-1].x>=(width-25)){
		gamerunning=false;
		mn_rs==2;
	}
	if(s.psnake[s.psnake.size()-1].y<1||s.psnake[s.psnake.size()-1].y>=(height-1)){
		gamerunning=false;
		mn_rs==2;
	}
	
	

}
class endmenu	{
	public:
	p1 game;
	p1 task;
	vector <string> endpic;
	vector <string> selectionbar[2];
	void input(){
	game.x=2;
	game.y=4;
		endpic.push_back("    GGGGGGG       AA            M         M       EEEEEEEEE");
		endpic.push_back("  G              A  A          M M       M M      E");
		endpic.push_back(" G              A    A        M   M     M   M     E");
		endpic.push_back(" G             AAAAAAAA      M    M     M    M    EEEEEEEEE") ;
		endpic.push_back(" G       GGG  A        A    M      M   M      M   E");
		endpic.push_back(" G        G  A          A  M        M M        M  E");
   		endpic.push_back("   GGGGGGG  A            A M         M          M EEEEEEEEE");


 task.x=9;
 task.y=12;		
selectionbar[0].push_back("                                 OO    V       V  EEEEEEE  RRR");
selectionbar[0].push_back("                               O    O   V     V   E        R    R");
selectionbar[0].push_back("   >>Restart<<                O      O   V   V    EEEEEEE  RRR");		
selectionbar[0].push_back("      Menu                     O    O     V V     E        R  R");	
selectionbar[0].push_back("                                 OO        V      EEEEEEE  R    R");	

selectionbar[1].push_back("                                 OO    V       V  EEEEEEE  RRR");
selectionbar[1].push_back("                               O    O   V     V   E        R    R");
selectionbar[1].push_back("     Restart                  O      O   V   V    EEEEEEE  RRR");		
selectionbar[1].push_back("    >>Menu<<                   O    O     V V     E        R  R");	
selectionbar[1].push_back("                                 OO        V      EEEEEEE  R    R");			

	}
	void inputscreen()	{
		for(int i=0;i<endpic.size();i++){
			for(int j=0;j<endpic[i].length();j++){
				screen[i+game.y][j+game.x]=endpic[i][j];
				
			}
		}

			for(int i=task.y;i<selectionbar[test_snake].size()+task.y;i++){
				for(int j=task.x;j<selectionbar[test_snake][i-task.y].length()+task.x;j++){
					screen[i][j]=selectionbar[test_snake][i-task.y][j-task.x];
				}
			}
		
		
	}
};
	



void gamestart(){
	int cc=0;
	int ss=0;
	int o=0;
	bool eated;
	int count=0;
	snake s;
	food f;
	p y;
	int kk=0;
	int p=0;
	int b=0;
	int i=0;
	endmenu menu;

	f.create();
	s.vitrixuatphat(40,15);
	y.y=s.psnake[s.psnake.size()-1].y;
	string press="Press A Key To Start";
	menu.input();

	while(menu_running){
		input();
		system("cls");
		
		clearboard();
		Mune.input();
		frame();
		_sleep(100);	
	}
	while(levelrunning){
			input();
			
		system("cls");
		clearboard();
		level1.input1();
		
		frame();
		_sleep(100);
	}
while(hpny_running){
	input();
	system("cls");
	clearboard2();
	game_cat.spammay(o);
	game_cat.inputhp();
	game_cat.inputboss(p);
	game_cat.inputcar();
	game_cat.inputbullet();
	game_cat.inputbossbullet();
	
	game_cat.colli(b);
	game_cat.checkwin();
	frame1();
	
	_sleep(20);		
		}
loi_chuc=true;
		while(loi_chuc){
	system("cls");
	clearboard2();
	game_cat.inputboss1();
		game_cat.hieu_ung(cc,ss);
	game_cat.inputloichuc(kk);

	frame1();
	_sleep(20);	
		}
	while(gamerunning){
		input();
	
		clearboard();
		
		f.drawfood();
	
		move(s,f,count,y,eated);
		
		s.Fsnake();
			if(speed.x==0&&speed.y==0){
			for(int i=0;i<press.length();i++){
				screen[15][i+30]=press[i];
			}
		}
		check(count,eated,i);
		frame();

		colli(s);
		_sleep(level1.level);
		
	}

	
	
	while(!gamerunning){
		input();
		system("cls");
		clearboard();
		menu.inputscreen();
		frame();
	
	
		_sleep(17);
		
	} 
	
		if(mn_rs==0){
			speed.x=0;
			speed.y=0;
			gamestart();
		}
		
			if(mn_rs==1){
			speed.x=0;
			speed.y=0;
			menu_running=true;
			levelrunning=false;
			gamerunning=false;
			gamestart();
		}		
}


int main(){

	system("color 0f");

    ios_base::sync_with_stdio(NULL);
    cout.tie(NULL);
    	
		Mune.init();
	level1.init();	
	game_cat.init();
		
	

	gamestart();
	
	
}