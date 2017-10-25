#include <fstream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file logger.log
///////////////////////////////////////////////////////////////////////////////
/*
	�������� ����� ����������������� ���������.
		logger.log - ���� � ����� ������
*/
void v_templates_create_logger_log() {
	try {
		ofstream fout("logger.log");
		fout << "[				    ] " << "Creating file logger.log" << "\n";
		fout.close();
	} catch(exception) {

	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file rules.txt
///////////////////////////////////////////////////////////////////////////////
/*
	�������� ����� ����������������� ���������.
		rules.txt - ���� � ���������������� �����������
*/
void v_templates_create_rules_txt() {
	try {
		ofstream fout("rules.txt");
		fout << "Copyright (c) 2017 Radix" << "\n";
		fout << "\n";
		fout << "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A " << "\n";
		fout << "PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN " << "\n";
		fout << "ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE." << "\n";
		fout.close();
	} catch(exception) {

	}
}

///////////////////////////////////////////////////////////////////////////////
//	Creating a standard file settings.ini
///////////////////////////////////////////////////////////////////////////////
/*
	�������� ����� ��������.
		settings.ini - ���� � �����������
*/
void v_templates_create_settings_ini() {
	try {
		ofstream fout("settings.ini");
		fout << "#Radix" << "\n";
		fout << "#2017" << "\n";
		fout << "\n";
		fout << "[START]" << "\n";
		fout << "rules = true" << "\n";
		fout << "logger = true"<< "\n";
		fout << "[END]";
		fout.close();
	} catch(exception) {

	}
}