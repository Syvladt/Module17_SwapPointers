#include <iostream>

void swap_pointer(int* pa, int* pb)
{
	std::swap(*pa, *pb);
	return;
}

int main()
{
	setlocale(LC_ALL, "RU_ru");
	int num1, num2;
	std::cout << "������� ��� ����� �� -500 �� 500: ";
	std::cin >> num1 >> num2;
	if (num1 >= -500 and num1 <= 500 and num2 >= -500 and num2 <= 500)
	{
		std::cout << "�� �����:\n����� 1 = " << num1 << "\n����� 2 = " << num2 << '\n';
		swap_pointer(&num1, &num2);
		std::cout << "\n����� ������ �������:\n����� 1 = " << num1 << "\n����� 2 = " << num2;
	}
	else
		std::cout << "�� ����� ������������ �����.";
}
