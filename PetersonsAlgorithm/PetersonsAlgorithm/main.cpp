#include <thread>
#include <iostream>
#include <queue>
#include <mutex>
#include <string>


bool flag[2] = { false,false };
int turn = 1;

std::mutex mx;
std::condition_variable cv;

std::vector<std::thread> m_threads;

const int numProcesses = 10;

int last[numProcesses], in[numProcesses];


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

void cs(int i) {
	while (true) {
		/*entry*/

		for (int j = 0; j < numProcesses; j++) {
			/*entry protocol*/
			/*remember process i is in stage j and is last */
			in[i] = j;
			last[j] = i;

			for (int k = 0; k < numProcesses; k++) {
				
				//k different than i
				if (i != k) {

					
					/* wait if process k is in higher numbered stage
					and process i was the last to enter stage j */

					while (in[k] >= in[i] && last[j] == i) {



					}
				}
			}

		}

		std::cout << "Process num: " + std::to_string(i) << std::endl;
		in[i] = -1; //Exit protocol

	}

}
int main() {
	//Two Processes
	//std::thread t1(cs1);
	//std::thread t2(cs2);

	//t1.join();
	//t2.join();

	//std::cin.get();


	//N Processes

	for (int i = 0; i < numProcesses; i++) {

		m_threads.push_back(std::thread(cs, i));

	}

	for (int i = 0; i < numProcesses; i++) {

		m_threads[i].join();

	}

	std::cin.get();


}