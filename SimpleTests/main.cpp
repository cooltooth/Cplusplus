//a+max(b,c) going up.

#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> dv;


int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(){
    dv div={{75},
            {95,64},
            {17,47,82},
            {18,35,87,10},
            {20,04,82,47,65},
            {19,01,23,75,03,34},
            {88,02,77,73,07,63,67},
            {99,65,04,28,06,16,70,92},
            {41,41,26,56,83,40,80,70,33},
            {41,48,72,33,47,32,37,16,94,29},
            {53,71,44,65,25,43,91,52,97,51,14},
            {70,11,33,28,77,73,17,78,39,68,17,57},
            {91,71,52,38,17,14,91,43,58,50,27,29,48},
            {63,66,04,68,89,53,67,30,73,16,69,87,40,31},
            {04,62,98,27,23, 9,70,98,73,93,38,53,60,04,23}};



    for(int a = div.size()-2;a>0;a--){
        for(auto x : div[a]){

        }

    }

    return 0;

}


/* BIG INTS DONT WORK :(
#include <iostream>
#include "BigIntegerLibrary.hh"

int main(){
    unsigned long long sum = 2;
    for(int i=1;i<=1000;i++){
        sum = sum * 2;
        std::cout<<sum;
    }
    return 0;
}

/* 14 seemed a little too easy...
// n → n/2 (n is even)
// n → 3n + 1 (n is odd)
// longest chain

#include<iostream>

int main(){
    int longest_chain;
    int chained;

    for(long i=2;i<1000000;i++){
        unsigned long long temp = i;
        int it = 0;
        while(1){
            if(temp==1) {
                it++;
                break;
            }
            if(temp%2==0){
                temp = temp/2;
            }else{
                temp = (3*temp)+1;
            }
            it++;
            //std::cout<<temp<<std::endl;
        }
        if(it>longest_chain) {
            longest_chain = it;
            chained = i;
        }
    }
    std::cout<<"Chain:\n"<<longest_chain<<"\nNumber:\n"<<chained;

}



/* 13 what a pain in the ass
#include <iostream>
#include <vector>
#include <sstream> // for std::stoull

typedef std::vector<std::string> ves;

int main(){
    ves i;
    i = {"37107287533902102798797998220837590246510135740250",
            "46376937677490009712648124896970078050417018260538",
            "74324986199524741059474233309513058123726617309629",
            "91942213363574161572522430563301811072406154908250",
            "23067588207539346171171980310421047513778063246676",
            "89261670696623633820136378418383684178734361726757",
            "28112879812849979408065481931592621691275889832738",
            "44274228917432520321923589422876796487670272189318",
            "47451445736001306439091167216856844588711603153276",
            "70386486105843025439939619828917593665686757934951",
            "62176457141856560629502157223196586755079324193331",
            "64906352462741904929101432445813822663347944758178",
            "92575867718337217661963751590579239728245598838407",
            "58203565325359399008402633568948830189458628227828",
            "80181199384826282014278194139940567587151170094390",
            "35398664372827112653829987240784473053190104293586",
            "86515506006295864861532075273371959191420517255829",
            "71693888707715466499115593487603532921714970056938",
            "54370070576826684624621495650076471787294438377604",
            "53282654108756828443191190634694037855217779295145",
            "36123272525000296071075082563815656710885258350721",
            "45876576172410976447339110607218265236877223636045",
            "17423706905851860660448207621209813287860733969412",
            "81142660418086830619328460811191061556940512689692",
            "51934325451728388641918047049293215058642563049483",
            "62467221648435076201727918039944693004732956340691",
            "15732444386908125794514089057706229429197107928209",
            "55037687525678773091862540744969844508330393682126",
            "18336384825330154686196124348767681297534375946515",
            "80386287592878490201521685554828717201219257766954",
            "78182833757993103614740356856449095527097864797581",
            "16726320100436897842553539920931837441497806860984",
            "48403098129077791799088218795327364475675590848030",
            "87086987551392711854517078544161852424320693150332",
            "59959406895756536782107074926966537676326235447210",
            "69793950679652694742597709739166693763042633987085",
            "41052684708299085211399427365734116182760315001271",
            "65378607361501080857009149939512557028198746004375",
            "35829035317434717326932123578154982629742552737307",
            "94953759765105305946966067683156574377167401875275",
            "88902802571733229619176668713819931811048770190271",
            "25267680276078003013678680992525463401061632866526",
            "36270218540497705585629946580636237993140746255962",
            "24074486908231174977792365466257246923322810917141",
            "91430288197103288597806669760892938638285025333403",
            "34413065578016127815921815005561868836468420090470",
            "23053081172816430487623791969842487255036638784583",
            "11487696932154902810424020138335124462181441773470",
            "63783299490636259666498587618221225225512486764533",
            "67720186971698544312419572409913959008952310058822",
            "95548255300263520781532296796249481641953868218774",
            "76085327132285723110424803456124867697064507995236",
            "37774242535411291684276865538926205024910326572967",
            "23701913275725675285653248258265463092207058596522",
            "29798860272258331913126375147341994889534765745501",
            "18495701454879288984856827726077713721403798879715",
            "38298203783031473527721580348144513491373226651381",
            "34829543829199918180278916522431027392251122869539",
            "40957953066405232632538044100059654939159879593635",
            "29746152185502371307642255121183693803580388584903",
            "41698116222072977186158236678424689157993532961922",
            "62467957194401269043877107275048102390895523597457",
            "23189706772547915061505504953922979530901129967519",
            "86188088225875314529584099251203829009407770775672",
            "11306739708304724483816533873502340845647058077308",
            "82959174767140363198008187129011875491310547126581",
            "97623331044818386269515456334926366572897563400500",
            "42846280183517070527831839425882145521227251250327",
            "55121603546981200581762165212827652751691296897789",
            "32238195734329339946437501907836945765883352399886",
            "75506164965184775180738168837861091527357929701337",
            "62177842752192623401942399639168044983993173312731",
            "32924185707147349566916674687634660915035914677504",
            "99518671430235219628894890102423325116913619626622",
            "73267460800591547471830798392868535206946944540724",
            "76841822524674417161514036427982273348055556214818",
            "97142617910342598647204516893989422179826088076852",
            "87783646182799346313767754307809363333018982642090",
            "10848802521674670883215120185883543223812876952786",
            "71329612474782464538636993009049310363619763878039",
            "62184073572399794223406235393808339651327408011116",
            "66627891981488087797941876876144230030984490851411",
            "60661826293682836764744779239180335110989069790714",
            "85786944089552990653640447425576083659976645795096",
            "66024396409905389607120198219976047599490197230297",
            "64913982680032973156037120041377903785566085089252",
            "16730939319872750275468906903707539413042652315011",
            "94809377245048795150954100921645863754710598436791",
            "78639167021187492431995700641917969777599028300699",
            "15368713711936614952811305876380278410754449733078",
            "40789923115535562561142322423255033685442488917353",
            "44889911501440648020369068063960672322193204149535",
            "41503128880339536053299340368006977710650566631954",
            "81234880673210146739058568557934581403627822703280",
            "82616570773948327592232845941706525094512325230608",
            "22918802058777319719839450180888072429661980811197",
            "77158542502016545090413245809786882778948721859617",
            "72107838435069186155435662884062257473692284509516",
            "20849603980134001723930671666823555245252804609722",
            "53503534226472524250874054075591789781264330331690"};
    unsigned long long tempint = 0;
    unsigned int layover = 0;

    for(int it = 1; it<39;it++){
        tempint = 0;
        for(auto x : i){
            tempint += std::stoi(x.substr(x.size() - it, 1));
        }
        //std::cout<<tempint<<std::endl;
        tempint += layover;
        layover = tempint/10;
    }

    layover = tempint/10;
    tempint = layover;

    for(auto x : i){
        tempint += std::stoull(x.substr(0, 10));
        //std::cout<<x.substr(0, 10)<<std::endl;
    }

    std::cout<<tempint/100;
}


/* // 12 FIRST TRY :D
#include<iostream>

int main(){
    int factorCount = 0;
    int sum = 0;

    for(int i = 0; factorCount<1000;i++){
        factorCount=0;
        sum=0;
        for(int j=0;j<=i;j++){
            sum += j;
        }
        for(int k=1;k<sum;k++){
            if(sum%k==0){
                factorCount++;
                //std::cout<<i<<":"<<":"<<factorCount<<'\n';
            }
        }
        //std::cout<<sum<<":"<<factorCount;
        if(factorCount>501)
            break;
    }
    std::cout<<sum;
    return 0;
}


/* // 11 FUCK THIS ONE
#include <vector>
#include <iostream>
int largestSum = 0;

typedef std::vector<int> IV;
typedef std::vector<IV> vector2d;


void diag(vector2d a)
{
    std::cout<<"DIAGR:\n";
    int sum;
    for(int x=0;x<17;x++){
        for(int j=0;j<17;j++){
            sum = a[x][j] * a[x+1][j+1] * a[x+2][j+2] * a[x+2][j+3];
            if(sum>largestSum) {
                largestSum = sum;
                std::cout << x << ":" << j << "=" << largestSum << '\n';
            }
            //std::cout<<a[x][j]<<','<<a[x+1][j+1]<<','<<a[x+2][j+2]<<','<<a[x+3][j+3]<<"="<<sum<<'\n';
        }
    }
    std::cout<<"DIAGV:\n";
    for(int x=19;x>3;x--){
        for(int j=16;j>0;j--){
            //std::cout<<a[x][j]<<','<<a[x-1][j-1]<<','<<a[x-2][j-2]<<','<<a[x-3][j-3]<<"="<<sum<<'\n';
            sum = a[x][j] * a[x-1][j+1] * a[x-2][j+2]* a[x-3][j+3];
            if(sum>largestSum) {
                largestSum=sum;
                std::cout << x << ":" << j << "=" << largestSum << '\n';
            }
        }
    }


}
void vertical(vector2d a)
{
    std::cout<<"VERT:\n";
    int sum;
    for(int x=0;x<17;x++){
        for(int j=0;j<20;j++) {
            sum = a[x][j] * a[x+1][j] * a[x+2][j] * a[x+3][j];
            if (sum > largestSum) {
                largestSum = sum;
                std::cout << x << ":" << j << "=" << largestSum << '\n';

            }
        }
    }

}
void horizontal(IV x)
{
    int sum;
    for(int i=0;i<17;i++){
        sum = x[i] * x[i+1] * x[i+2] * x[i+3];
        if(sum>largestSum){
            largestSum=sum;
            std::cout <<x[i]<<','<< x[i+1] <<','<< x[i+2] <<','<< x[i+3]<<'='<< largestSum << '\n';;
        }
    }

}

int main(){

    IV a = { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8};
    IV b = {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00};
    IV c = {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65};
    IV d = {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91};
    IV e = {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80};
    IV f = {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50};
    IV g = {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70};
    IV h = {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21};
    IV i = {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72};
    IV j = {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95};
    IV k = {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92};
    IV l = {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57};
    IV m = {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58};
    IV n = {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40};
    IV o = {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66};
    IV p = {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69};
    IV q = {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36};
    IV r = {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16};
    IV s = {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54};
    IV t = {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48};

    vector2d farr;
    farr.push_back(a);
    farr.push_back(b);
    farr.push_back(c);
    farr.push_back(d);
    farr.push_back(e);
    farr.push_back(f);
    farr.push_back(g);
    farr.push_back(h);
    farr.push_back(i);
    farr.push_back(j);
    farr.push_back(k);
    farr.push_back(l);
    farr.push_back(m);
    farr.push_back(n);
    farr.push_back(o);
    farr.push_back(p);
    farr.push_back(q);
    farr.push_back(r);
    farr.push_back(s);
    farr.push_back(t);

    vertical(farr);
    std::cout<<"HORZ:\n";
    for (auto x : farr){
        horizontal(x);
    }
    diag(farr);

    std::cout<<'\n'<<largestSum;
    return 0;
}



/* 10
#include <iostream>

int main(){
    unsigned long long total=0;
    bool isPrime;
    for(int i=2;i<2000000;i++){
        isPrime = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime) {
            total += i;
            //std::cout << i << std::endl;
        }
    }
    std::cout<<total;
}


/* 9 : not exactly as planned but whatever...
#include<iostream>
#include<math.h>

int s(double x){
    return x*x;
}


int main() {
    double c;
    for (double a=1; a < 1000; a++) {
            for (double b=1; b<a; b++) {

                c = sqrt(s(a) + s(b));
                if (a + b + c == 1000) {
                    std::cout << a << ":" << b << ":" << c << std::endl;
                    std::cout << a * b * c;
                }
            }
        }


    return 0;
}




/* 8 : don't type it wrong DX
#include <iostream>
#include <algorithm>

int main(){
    int largestP = 0;

    char string[1001] = "73167176531330624919225119674426574742355349194934"
            "96983520312774506326239578318016984801869478851843"
            "85861560789112949495459501737958331952853208805511"
            "12540698747158523863050715693290963295227443043557"
            "66896648950445244523161731856403098711121722383113"
            "62229893423380308135336276614282806444486645238749"
            "30358907296290491560440772390713810515859307960866"
            "70172427121883998797908792274921901699720888093776"
            "65727333001053367881220235421809751254540594752243"
            "52584907711670556013604839586446706324415722155397"
            "53697817977846174064955149290862569321978468622482"
            "83972241375657056057490261407972968652414535100474"
            "82166370484403199890008895243450658541227588666881"
            "16427171479924442928230863465674813919123162824586"
            "17866458359124566529476545682848912883142607690042"
            "24219022671055626321111109370544217506941658960408"
            "07198403850962455444362981230987879927244284909188"
            "84580156166097919133875499200524063689912560717606"
            "05886116467109405077541002256983155200055935729725"
            "71636269561882670428252483600823257530420752963450";

    for(int i=0;i<(1001-13);i++){
        int product = 1;
        for(int j=0;j<=13;j++){
            product *= (string[i+j]-'0');
            std::cout<<product<<std::endl;
        }
        if(product>largestP){
            largestP=product;
        }
    }
    std::cout<<largestP;
    return 0;
}




/* 6 : 10001st prime
#include <iostream>

int main(){

    int primeL = 1;
    int it = 0;
    for(int i=2;;i++){
        bool isPrime = true;
        for(int j=2;j<i;j++){
            if (i % j == 0) {
                //std::cout<<i<<":"<<j<<std::endl;
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            primeL = i;
            it++;
        }
        if(it==10001){
            break;
        }
    }
    std::cout<<primeL;
}


/* //5
#include<iostream>

int main(){
    int squareSum= 0;
    int sumSquare= 0;
    for (int i=1;i<=100;i++){
        squareSum += i*i;
        sumSquare += i;
    }
    sumSquare = sumSquare*sumSquare;
    std::cout<<sumSquare-squareSum;
    return 0;
}

/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 * HAHAHAHAHAHAHA
 *

#include<iostream>

int main(){
    int x =1;

    while(1){

        if(!(x%1)){
            if(!(x%2)){
                if(!(x%3)){
                    if(!(x%4)){
                        if(!(x%5)){
                            if(!(x%6)){
                                if(!(x%7)){
                                    if(!(x%8)){
                                        if(!(x%9)){
                                            if(!(x%10)){
                                                if(!(x%11)){
                                                    if(!(x%12)){
                                                        if(!(x%13)){
                                                            if(!(x%14)){
                                                                if(!(x%15)){
                                                                    if(!(x%16)){
                                                                        if(!(x%17)){
                                                                            if(!(x%18)){
                                                                                if(!(x%19)){
                                                                                    if(!(x%20)){
                                                                                        break;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        x++;
    }
    std::cout<<x;
    return 0;
}

/* Prob:4
#include <iostream>
#include <algorithm>

int main(){
    int largestPal;
    for(int i =100;i<1000;i++){
        for(int j=100;j<1000;j++){
            auto s = std::to_string(i*j);
            int hs = 0;
            if(s.size()%2){
                hs=s.size()/2;
            }else{
                hs=(s.size()+1)/2;
            }
            auto s1 = s.substr(0,hs);
            auto s2 = s.substr(hs,s.size());
            std::reverse(std::begin(s2),std::end(s2));
            int size = s.size();
            //std::cout<<i<<"*"<<j<<"="<<s<<std::endl;
            if(s1==s2){
                //std::cout<<s<<std::endl;
                if((i*j)>largestPal)
                    largestPal = i*j;
            }
        }

    }
    std::cout<<largestPal;
    return 0;
}



/* BRUTE FORCE prob:3
#include <iostream>

int main(){
    long int n =600851475143 ;

    for(long int i=2;i<n/2;i++){

        if(!(n%i)){
            bool isprime = true;
            for(long int j=2;j<i/2;j++) {
                if (i % j== 0) {
                    isprime = false;
                    break;
                }

            }

            (isprime)?std::cout << i << std::endl:std::cout<<"n";
        }

    }
    return 0;
}






/*
 * Prob: 2
 * #include <iostream>

int main(){
    int fn1 = 1;
    int fn2 = 2;
    int fnx = 0;
    int x = 4000000;
    int total = 0;
    std::cout<<fn1<<std::endl<<fn2<<std::endl;
    while(fnx<x){
        fnx=fn1+fn2;
        fn1 = fn2;
        fn2 = fnx;
        if(!(fnx%2))
            total+=fnx;
        std::cout<<fnx<<std::endl;
    }

    std::cout<<total;
}







/* THE AXE
 * *      *
 * ** ** **
 * ********
 * ** ** **
 * *  **  *
 *    **
 *    **
 *    **
 *    **
 * Can I get it into 1 loop?
 * Apparently I can.
 *


#include <iostream>
using std::streamsize;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include <limits>
using std::numeric_limits;

int main() {

    int bladeHeight;

    // input validation, not part of the build loop
    for(;;)
    {
        cout << "Please enter blade height: ";
        cin  >> bladeHeight;

        if(bladeHeight>0 && bladeHeight<2147483647) { // range(0,INTMAX_MAX-1)
            break;
        } else {
            cout << "Please enter a valid positive integer" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    int  row            = 0;                        // Row counter, VERY CRITICAL
    int  handleCounter  = 0;                        // Tracker for handle length.
    int  triBool        = 0;                        // Fake Tri-bool (0,1,2)

    int  bladeWidth     = (bladeHeight/2)+1;        // Not exactly necessary but helps legibility

    bool mid            = false;                    // Tracker for mid point of blade.

    while(row >= 0 || handleCounter < 10)
    {
        if(row >= bladeWidth)    // Flip blade build direction ++/--
            mid = true;

        switch(triBool)
        {
            case 0:                         // LEFT BLADE
                cout << string(row, '*');
                cout << string(bladeWidth-row,' ');
                ++triBool;
                break;

            case 1:                         // HANDLE
                if (row == bladeHeight / 2 || (handleCounter >= 1 && handleCounter < 10)) {
                    cout << "**";
                    ++handleCounter;
                } else {
                    cout << "  ";
                }
                ++triBool;
                break;

            case 2:                         // RIGHT BLADE
                cout << string(bladeWidth-row,' ');
                cout << string(row, '*');
                mid ? ((row==0 && handleCounter < 10)? : --row) : ++row; // Brackets added for legibility
                cout << endl;
                triBool = 0;
                break; // Next row
        }
    }
    return 0;
}

/*
*
* Axe with 2 loops

        if(r >= (bladeHeight / 2) + 1)
            mid = true;

        for(int c=0; c>=0; halfPoint ? --c : ++c)
        {
            cout << (c < r ? '*' : ' ');

            if(c == bladeHeight / 2 && !halfPoint)
            {
                halfPoint       = true;
                handleTrigger   = true;
                ++c;
            }

            if (handleTrigger)
            {
                // Handle check, row is Bladeheight/2(int rounding) and handle hasn't started/ended yet
                if (r == bladeHeight / 2 || handleCounter >= 1 && handleCounter < 10) {
                    cout << "**";
                    handleCounter++;
                } else {
                    cout << "  ";
                }
                handleTrigger = false;
            }
        }
    }
    return 0;
}
*/





/*
 * Axe with 4 loops
 *
int main() {

    int bladeHeight;

    // input validation, not part of the build loop
    for (;;)
    {
        cout << "Please enter blade height: ";
        cin  >> bladeHeight;

        if(bladeHeight>0) {
            break;
        }else{
            cout << "Please enter a valid positive integer" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
        }
    }

    bool mid            = false;                    // Tracker for mid point of blade.
    bool handleTrigger  = false;                    // Trigger for handle...
    int  handleCounter  = 0;                        // Tracker for handle length.

    for(int r=0; r >= 0 || handleCounter < 10; mid ? --r : ++r) // set int r=1; to remove initial line
    {
        bool halfPoint = false;

        if(r >= (bladeHeight / 2) + 1)
            mid = true;

        for(int c=0; c>=0; halfPoint ? --c : ++c)
        {
            cout << (c < r ? '*' : ' ');

            if(c == bladeHeight / 2 && !halfPoint)
            {
                halfPoint       = true;
                handleTrigger   = true;
                ++c;
            }

            if (handleTrigger)
            {
                // Handle check, row is Bladeheight/2(int rounding) and handle hasn't started/ended yet
                if (r == bladeHeight / 2 || handleCounter >= 1 && handleCounter < 10) {
                    cout << "**";
                    handleCounter++;
                } else {
                    cout << "  ";
                }
                handleTrigger = false;
            }
        }
        cout<<endl;                                         // Next row
    }
    return 0;
}

/*  Alternative triple-loop version
 *
 * for(int r=1;r>0 || handleEnd<10;(mid)?r--:r++){
        // Flip blade building direction when mid point is reached
        if(r>=(bladeHeight/2)+1){
            mid = true;
        }

        //left side of the blade
        for(int c1=1;c1<=(bladeHeight/2)+1;c1++){
            if(c1<=r) {
                cout << '*';
            }else{
                cout << ' ';
            }
        }

        // Handle check, row is Bladeheight/2(int rounding) and handle hasn't started/ended yet
        if(r==(bladeHeight/2)&&!(handleEnd>1&&handleEnd<10)){
            cout<<"**";
            handleEnd++;
        }else if(handleEnd>=1&&handleEnd<10){
            cout<<"**";
            handleEnd++;
        }else{
            cout<<"  ";
        }

        // Right side of the blade
        for(int c3=(bladeHeight/2)+1;c3>0;c3--){
            if(c3>r) {
                cout << ' ';
            }else{
                cout << '*';
            }
        }
                cout<<endl;                                         // Next row
    }

*/



/* FIZZBUZZ
 * for(int i=1; i<=100; i%3 && i%5?std::cout<<i<<'\n':i%3?std::cout<<"buzz\n":i%5?std::cout<<"fizz\n":std::cout<<"fizzbuzz\n",i++);
 */
/*
int main(){

   for(int i=1; i<=100;i++){
       int n = 0;
       if(i%3==0) {
           std::cout << "fizz";
           n=1;
       }
       if(i%5==0) {
           std::cout << "buzz";
           n=1;
       }
       if(n==0)
           std::cout<<i;

       std::cout<<std::endl;
   }

   char x;
   std::cin>>x;
   return 0;
}
*/



/* Reverse a string or sentence
int main(){
    std::string string = "canada likes dogs";
    std::string reverseString   = "";

    for(int i=0;i<=string.length();i++){
        reverseString.append(string,(string.length()-i),1);
    }

    std::cout<<reverseString;
    return 0;
}
*/

/*
 * Find the minimum value in a List
 *//*
#include <array>

int main(){

    int arr[]       = {9,3,1,5,7,3,6};
    int min;
    min = arr[0];
    for(auto x : arr){
        if(x<=min){
            min = x;
        }
    }
    std::cout<<"Minimum value in array is: "<<min;
}*/

/*
 * Calculate a remainder (given a numerator and denominator)
 *

int main (){

    int num;
    cin>>num;
    cin.ignore();
    int den;
    cin>>den;
    cin.ignore();
    if(den!=0) {
        int rem = (num % den);
        std::cout << "Remainder: " << rem;
    }
    else
        std::cout<< "Cannot divide by 0.";
    return 0;
} */

/*
 * Return distinct values from a list including duplicates (i.e. "1 3 5 3 7 3 1 1 5" -> "1 3 5 7")
 *
#include <vector>
using std::vector;
#include <algorithm>
using std::find;

int main(){
    vector<int>             arr  = {1, 3, 5, 3, 7, 3, 1, 1, 5};
    vector<int>             temp = {};
    vector<int>::iterator   it;

    for(int x : arr){
        it = find(temp.begin(),temp.end(),x);
        if (it == temp.end()){
            temp.push_back(x);
        }
    }

    for(int x : temp){
        cout<<x;
    }

}

*/
/*
 * Return distinct values and their counts (i.e. the list above becomes "1(3) 3(3) 5(2) 7(1)")
 *//*

#include <vector>
using std::vector;
#include <algorithm>
using std::find;
#include <array>
using std::array;

int main() {
    vector<int> vector1 = {1, 3, 5, 3, 7, 3, 1, 1, 5};
    vector<int> vector2;
    vector<array<int,2>> vectorArray;
    vector<int>::iterator it;

    for(int x : vector1){
        it = find(vector2.begin(),vector2.end(),x);
        if (it == vector2.end()){
            vector2.push_back(x);
        }
    }

    for(int x : vector2){
        int count =0;
        for(int y : vector1){
            if(x==y)
                count++;
        }

        vectorArray.push_back({x,count});
    }

    for(auto x : vectorArray){
        cout<<x[0]<<"("<<x[1]<<") ";
    }
}
*/

/*
 * Given a string of expressions (only variables, +, and -) and a set of variable/value pairs (i.e. a=1, b=7, c=3, d=14) return the result of the expression ("a + b+c -d" would be -3).
 *
#include <vector>
using std::vector;
#include <sstream>
using std::istringstream;
using std::getline;
#include <algorithm>
using std::string;

int main() {
    // Virtual CIN because I'm lazy
    istringstream stringFull;
    stringFull.str("a=1, b=7, c=3, d=14");

    // Vector of strings because I'm lazy and don't want to worry about deleting the array or leave dangling pointers
    vector<string> stringVector;

    // Need temporary string in order to check if a push back is needed
    string temp;

    // Put all values into a string vector split by comma
    while (getline(stringFull, temp, ','))
        stringVector.push_back(temp);


    // Clean the strings of non-numeric values.
    for(int i = 0; i<stringVector.size();i++){
        if (stringVector[i] != "") {
            stringVector[i].erase(remove_if(stringVector[i].begin(), stringVector[i].end(), ::isspace),
                                  stringVector[i].end());
            stringVector[i].erase(remove_if(stringVector[i].begin(), stringVector[i].end(), ::ispunct),
                                  stringVector[i].end());
            stringVector[i].erase(remove_if(stringVector[i].begin(), stringVector[i].end(), ::isalpha),
                                  stringVector[i].end());
        }
    }

    // hahaha stoi = StringTOInteger... Why have I never seen this before? (is ATOI AutoTOInt?)
    cout << "\na + b + c - d = " << stoi(stringVector[0])+stoi(stringVector[1])+stoi(stringVector[2])-stoi(stringVector[3]);


//  Below did not work because I believe the new str is a "Copy" of the string not a pointer to it
//  for (string str : stringVector) {
//      str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
//      str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end());
//      str.erase(remove_if(str.begin(), str.end(), ::isalpha), str.end());
//  cout<<str<<":";
//  }
//
}
*/
/*
 * Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1. to 1000 digits
 *//*

int main(){

    long double fn1 = 1;
    long double fn2 = 0;
    long double x = 10E1000;
    int it = 0;
    while(fn1<x){
        std::cout<<"F"<<++it<<"="<<fn1<<'\n';
        fn1 = fn1+fn2;
        fn2 = fn1;
    }
    std::cout<<"F"<<++it<<"="<<fn1<<'\n';
    fn1 = fn1+fn2;
    fn2 = fn1;
}

*/