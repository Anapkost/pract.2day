Задача 3
3.1 Написать функцию для работы с односвязным списком :

struct Node {
	int val;
	Node* next;
}

-Инициализации элемента односвязного списка нулями

void init(Node * node) {
        node->val = 0;
	node->next = NULL;
}


-Отображения односвязного списка на экран

void show(Node * head) {
	Node* p = head;
	while (p->next !=NULL) {
		cout << p->val << " ";
		p = p->next;
	}
        cout << endl;
}    

-Добавления элемента в односвязный список

void pushNode(Node * head, Node * node) {
	Node* t = head;
	while (t->next != NULL) { 
		t = t->next;
	}	
	*head = node;
	t->val = node->val;
	*head->next = t;  
} 


3.2 Написать функции в соответсвии с вариантом
Вариант 1:

Написать функцию инициализации size элементов списка заданным значением val.

void initList(Node*& head, int size, int val) {
	if (size <= 0) {
        head = nullptr;
        return;
        }

	head = new Node;
        head->val = val;
        head->next = nullptr;
        	for (int i = 1; i < size; ++i) {
        		Node* n = new Node;
        		n->val = val;
        		n->next = head->next;
        		head->next = n;
    		}
}


Вариант 2:

Написать функцию копирования элементов массива source в новый массив dest

void copyMas(Node * source, Node * dest);


Вариант 3:

Написать функцию сравнение списков source и dest.Если списки равны 0, если не равны - 1
int compareMas(Node * source, Node * dest);



Вариант 4:

Написать функцию удаления со сдвигом влево n - го элемента списка.
void deleteList(Node * head, int n);


Вариант 5:

Написать функцию сдвига значений вправо на n - элементов с заполнением крайних элементов нулями
void rShiftList(Node * head, int n);



Вариант 6:

Написать функцию сдвига значений влево на n - элементов с заполнением крайних элементов нулями.
void lShiftList(Node * head, int n);


Вариант 7:

Написать функцию сдвига значений влево на n - элементов с переносом вытесненных элементов в конец
void lRoundShiftMas(Node * head, int n, int size);


Вариант 8:

Написать функцию вычисления среднего значения элементов списка.
int averageList(Node * head, int size);


Вариант 9:

Написать функцию вычисления средне квадратического отклонения элементов списка.
int SkoFromList(Node * head, int size);


Задача 4. Написать тесты для Ваших функций из 3.1 и 3.2
	
Node *ho, *ht, *hth;
initList(ho, 7, 9);
show(ho);
initList(ht, 0, 8);
show(ht);
initList(hth, 3, 6);
show(hth);

Node* n = new Node();
init(ha);

pushNode(ho, ha);
show(ho);
pushNode(ht, ha);
show(ht);
pushNode(hth, ha);
show(hth);
}
