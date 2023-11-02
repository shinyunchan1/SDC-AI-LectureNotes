//stdio => Standard IO�� ����
//printf() �� ����Ϸ���#include <stdio.h> �� �ʿ��մϴ�.
#include <stdio.h>
#include "second.h"

//�Լ��� �ۼ��ϴ� ���
//1. ���� return(����) Ÿ���� �ۼ��մϴ�.
//	[ ���� Ÿ���̶� ��������� ����� �ǹ��մϴ�.	] -> return * -> ���� *���� ���´�.
//2. �Լ��� �̸��� �ۼ��մϴ� (�����Ӱ� �ۼ�) <- � �۾����� �ǹ� ������ ���� �̸��� �ۼ��մϴ�.
//	[ ���ڷ� �̸��� ������ ȥ���� �߻� �� �� �����Ƿ� Ǯ ���̹����� �ۼ��սô�!	]
//3. �Ұ�ȣ�� ���� ���� ���� �Ķ����(���� Ȥ�� �Է�) Ÿ���� �ۼ��մϴ�.
void second_function(void)
{
	//������ �����ΰ�?
	// �޸� ������ �Ҵ�
	// => Ư���� ������Ÿ���� �޸� ������ ������ ����
	// ������ Ÿ�� => int, float, double, short, char, long, long long int, long long double
	// int(4byte), float(4byte), double(8byte), short(2byte), char(1byte)

	// byte�� �����ΰ�?
	// bit��� ������ �����ϸ� �� bit�� 8�� ���̸� 1byte�� �˴ϴ�.
	// bit�� �����ΰ�?
	// bit�� 0 Ȥ�� 1�� ǥ���� �� �ִ� ����
	// 1bit�� ǥ�� ������ ���ڰ� 2�� (2^1)
	// 2bit�� ǥ�� ������ ���ڰ� 4�� (2^2)
	// 3bit�� ǥ�� ������ ���ڰ� 8�� (2^3)
	// 8bit(1byte) => 2^8 => (0~255 ���), (-128~127 ���� ����)
	// ������ : int, short, char, long long int
	// �Ҽ������� : float, double, long long double
	// char�� ���ڷε� ����
	
	int number = 3;
	printf("���� = %d\n", number);

}