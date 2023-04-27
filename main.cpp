#include <iostream>
using namespace std;

class Score {
private:
    int score1,score2,score3; //private에 학생의 세 과목 점수 멤버변수 선언
public:
    Score(); // 기본생성자 선언
    Score(int score1,int score2,int score3); // 매개변수가 있는 생성자 선언
    Score(const Score& origin); //복사생성자 const를 붙히면 원본이 LV이건 RV이건 상관없이 안전하게 동작.

    void print() const; //학생들의 점수를 출력할 print()함수
    int sum() const; // 학생들의 점수의 합을 리턴할 sum()함수
};

int main() {
    Score s1; // 점수 없이 객체 생성, 0,1,2로 초기화
    s1.print();
    cout<<s1.sum()<<endl;

    Score s2{10, 20, 30}; // 점수를 10,20,30인 채로 객체 생성
    s2.print();
    cout<<s2.sum()<<endl;

    Score s3{s2}; // s2 학생의 객체를 복사해서 생성
    s3.print();
    cout<<s3.sum()<<endl;
}
Score::Score()// 기본생성자 정의 점수를 0,1,2로 초기화
    :score1{0},score2{1},score3{2}{ // 멤버 이니셜라이저 리스트 : 괄호 안에 값으로 멤버변수 초기화 int score1 = 0 처럼 동작한다.
}
Score::Score(int score1,int score2,int score3) // 매개변수 있는 생성자 매개변수에 들어오는 값으로 초기화
    :score1{score1},score2{score2},score3{score3}{
}
Score::Score(const Score& origin) //복사 생성자 정의
    :score1{origin.score1},score2{origin.score2},score3{origin.score3}{
}
void Score::print() const {
    cout<<score1<<" "<<score2<<" "<<score3<<endl;
}
int Score::sum() const{
    return score1+score2+score3;
}

