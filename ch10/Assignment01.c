/*파일명: Core C Assignment01

*내용 : 인터넷 사이트에 로그링할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오. 아이디와 패스워드는 각각 최대 20글자 까지 
* 입력할 수 있다. LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오. 패스워드를 출력할 떄는 패스워드의
* 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.
*작성자 : 정찬민

*날짜 : 2025.06.05

*버전 : v1.0
*/

#include "Am01_login.h"


void Assignment01()
{
	struct LOGIN user;
	
	getLogin(&user);
	printLogin(&user);

}

int main()
{
	Assignment01();
	return 0;
}
