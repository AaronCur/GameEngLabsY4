#include <thread>
#include <iostream>
#include <queue>
#include <mutex>


bool flag[2] = { false,false };
int turn = 1;

std::mutex mx;
std::condition_variable cv;


void cs1() {

	while (true) {
		/*entry*/

		flag[0] = true;
		turn = 1;
		/*wait*/
		while (flag[1] && turn == 1) {


		}
		/*critical selection*/
		std::cout << "1" << std::endl;
		flag[0] = false;


	}

}
void cs2() {
	while (true) {
		/*entry*/

		flag[1] = true;
		turn = 0;
		/*wait*/
		while (flag[0] && turn == 0) {


		}
		/*critical selection*/
		std::cout << "2" << std::endl;
		flag[1] = false;


	}

}
int main() {

	std::thread t1(cs1);
	std::thread t2(cs2);

	t1.join();
	t2.join();

	std::cin.get();

}