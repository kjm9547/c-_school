#include <iostream>
using namespace std;
class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape() { next = NULL; }
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	void paint() {
		draw();
	}
	Shape* getNext() { return next; }
};
class Circle : public Shape {
	virtual void draw() {
		cout << "Circle" << endl;
	}
	
};
class Line : public Shape {
	virtual void draw() {
		cout << "Line" << endl;
	}
};
class Rect : public Shape {
	virtual void draw() {
		cout << "Rect" << endl;
	}
};

class UI {
public:
	static int getMenu() {
		int key;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
		cin >> key;
		return key;
	}
	static int detail_shape() {
		int key;
		cout << "선:1, 원:2, 사각형:3 >>";
		cin >> key;
		return key;
	}
	static int delete_index() {
		int key;
		cout << "삭제하고자 하는 도형의 인덱스 >>";
		cin >> key;
		return key;
	}
};

class GraphicEditor {
	Shape* head;
	Shape* tail;
public:
	GraphicEditor() { head = tail = NULL; }
	void insertItem(int type) {
		Shape *p = NULL;
		switch (type)
		{
		case 1:
			p = new Line();
			break;
		case 2:
			p = new Circle();
			break;
		case 3:
			p = new Rect();
			break;
		default:
			break;
		}
		if (head == NULL) {
			head = p;
			tail = p;
			return;
		}
		tail->add(p);
		tail = tail->getNext();

	}
	void show() {
		Shape* tmp = head;
		int i = 1;
		while (tmp != NULL) {
			cout << i++ << ":";
			tmp->paint();
			tmp = tmp->getNext();
		}
	}
	void run() {
		cout << "그래픽 에디터입니다." << endl;
		int menu, index, type;
		while (true) {
			menu = UI::getMenu();
			switch (menu) {
			case 1:
				type = UI::detail_shape();
				insertItem(type);
				break;
			case 3:
				show();
				break;
			default:
				return;
			}
		

		}
	}
};
int main() {
	GraphicEditor g;
	g.run();

	return 0;
}
