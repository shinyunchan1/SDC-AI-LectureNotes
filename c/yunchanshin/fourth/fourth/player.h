#define MAX_PLAYER_NAME_LENGTH		32
#define MAX_PLAYER_NUMBER			2

extern char player[MAX_PLAYER_NAME_LENGTH][MAX_PLAYER_NAME_LENGTH];

// �ֻ��� �����ٸ� �����ϰ� ����� ���ϱ�
// ������ �ʱ� ��ȹ���� �ٸ� ���·� �ڵ尡 �����ϰ� ��
// �׷��� ���� ������ ���� �����ϸ� ����
// (������ ������ �ٸ���)
void set_player_info(char name[]);
void print_player_info(int);