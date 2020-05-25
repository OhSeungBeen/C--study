//abstraclass,vector exemple
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint() { draw(); };
};

class Circle : public Shape {

protected:
	virtual void draw() override { cout << "Circle" << endl; };
};

class Rect : public Shape {
protected:
	virtual void draw() { cout << "Rect" << endl; };
};

class Line : public Shape {
protected:
	virtual void draw() { cout << "Line" << endl; };
};

int main(void) {
	vector<Shape*> shape;
	cout << "그래픽 에디터입니다." << endl;
	while (1) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
		int input;
		cin >> input;
		if (input == 1) {
			cout << "선:1, 원:2, 사각형:3 >>";
			cin >> input;
			if (input == 1) {
				shape.push_back(new Line);
			}
			else if (input == 2) {
				shape.push_back(new Circle);
			}
			else if (input == 3) {
				shape.push_back(new Rect);
			}
		}
		else if (input == 2) {
			cout << "삭제하고자 하는 도형의 인덱스 >>";
			int index;
			cin >> index;
			shape.erase(shape.begin() + index);
		}
		else if (input == 3) {
			int cnt = 0;
			for (auto iter = shape.begin(); iter != shape.end(); ++iter){
				cout << cnt << ": ";
				Shape* s = *iter;
				s->paint();
				cnt++;
			}
		}
		else if (input == 4) {
			return 0;
		}
	}
	return 0;

}
