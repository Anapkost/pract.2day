������ 3
3.1 �������� ������� ��� ������ � ����������� ������� :

struct Node {
	int val;
	Item* next;
};

-������������� �������� ������������ ������ ������

void init(Node * node);


-����������� ������������ ������ �� �����

void show(Node * head);

-���������� �������� � ����������� ������

void pushNode(Node * head, Node * node);


3.2 �������� ������� � ����������� � ���������
������� 1:

�������� ������� ������������� size ��������� ������ �������� ��������� val.

void initList(Node * head, int size, int val)

������� 2:

�������� ������� ����������� ��������� ������� source � ����� ������ dest

void copyMas(Node * source, Node * dest);


������� 3:

�������� ������� ��������� ������� source � dest.���� ������ ����� 0, ���� �� ����� - 1
int compareMas(Node * source, Node * dest);



������� 4:

�������� ������� �������� �� ������� ����� n - �� �������� ������.
void deleteList(Node * head, int n);


������� 5:

�������� ������� ������ �������� ������ �� n - ��������� � ����������� ������� ��������� ������
void rShiftList(Node * head, int n);



������� 6:

�������� ������� ������ �������� ����� �� n - ��������� � ����������� ������� ��������� ������.
void lShiftList(Node * head, int n);


������� 7:

�������� ������� ������ �������� ����� �� n - ��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(Node * head, int n, int size);


������� 8:

�������� ������� ���������� �������� �������� ��������� ������.
int averageList(Node * head, int size);


������� 9:

�������� ������� ���������� ������ ��������������� ���������� ��������� ������.
int SkoFromList(Node * head, int size);


������ 4. �������� ����� ��� ����� ������� �� 3.1 � 3.2