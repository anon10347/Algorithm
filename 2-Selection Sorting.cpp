#include <iostream>
using namespace std;
//��������(Selection Sorting)
//�������� : ��ü�� ���ؼ� ���� ���� ���� ������ ���� ������������ �����ϴ� ���!


int main()
{
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int min, tmp, index;					//min  = �ּڰ��� ã�� ���� ����, tmp = swap �� �� �ӽ� ���� ����
											//index = min�� �´� j���� �����ϱ� ���� ���� 
											//->�� swap�� for(j)���� ������� �ʾ�����?
											//���� j�� swap���� �־��ٸ� for(i)�� 10��, for(j)�� 10-i���� �ϰ� �ȴ�.
											//�㳪 for(i)���� ���� �� 10���� �ϸ� �Ǳ� �����̴�.
	for (int i = 0; i < 10; i++)
	{
		min = 9999;							//ó���� ū ���� �־ ���� �Է��� �迭�� ó���� ������ �� �� �ֵ��� ����

		for (int j = i; j < 10; j++)
		{
			if (min > arr[j])				//min���� ���� arr�� ������
			{
				min = arr[j];				//min�� arr�� ����
				index = j;					//for(j)�� �ۿ��� j���� ����ϱ� ���ؼ��̴�.
			}
		}

		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;


	return 0;
}