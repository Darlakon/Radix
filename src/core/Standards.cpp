/*
===========================================================================
Radix
				*******************************************
				*		DO NOT DELETE ANY FUNCTIONS		  *
				*******************************************
2017
===========================================================================
*/

///////////////////////////////////////////////////////////////////////////////
//	Standard titles.
///////////////////////////////////////////////////////////////////////////////
/*

	i_unique_model_number - ���������� ��������������� ���������� ����� ��� ������ ������.
	i_settings_create_template - �������� ����� ��������. (0 - �� ������� �������� �����. 1 - ������� �������� �����)

*/

///////////////////////////////////////////////////////////////////////////////
//	Formalization of comments.
///////////////////////////////////////////////////////////////////////////////
/*

// Short comment

///////////////////////////////////////////////////////////////////////////////
//	Separating the code block
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Description:
//		{DESCRIPTION}
//
// Code: {NAME}
///////////////////////////////////////////////////////////////////////////////

===========================================================================
{FULL_DESCRIPTION}
===========================================================================

(fast separating the code block)
//-----------------------------------------------------------------------------
*/

///////////////////////////////////////////////////////////////////////////////
//	Key
///////////////////////////////////////////////////////////////////////////////
/*

Delete in stable version
//	DELETE

Test function
Delete in stable version
//	TEST

Check for errors
//	DEBUG

Speed up the execution of the block/function
Make soup
//	SOUP

*/

///////////////////////////////////////////////////////////////////////////////
//	Threads
///////////////////////////////////////////////////////////////////////////////
void v_thread() {

}

///////////////////////////////////////////////////////////////////////////////
//	files
///////////////////////////////////////////////////////////////////////////////
void v_search() {

}

/*
	����� ��������� ������ ��������
		1 - �������
		0 - �� �������
		-1 - ������
	�� ���� ������� �������� int - ���������� ��������������� ���������� ����� ��� ������ ������. (i_unique_model_number)
	��������� ������
		\\PATCH\\assets\\firmware
	�������� ������:
		{int}.rar
		\	\_____
		 \________int - ���������� ��������������� ���������� ����� ��� ������ ������. (i_unique_model_number)
*/
int i_search(int i_unique_model_number) {

	return -1;
}

/*
	�������� �������� ����� ���� ��������
		1 - �������
		0 - �� �������
		-1 - ������
	�� ���� ������� �������� int - ���������� ��������������� ���������� ����� ��� ������ ������. (i_unique_model_number)
*/
int i_internet(int i_unique_model_number) {

	return -1;
}

///////////////////////////////////////////////////////////////////////////////
//	Graphic.
///////////////////////////////////////////////////////////////////////////////

void v_window() {

}

///////////////////////////////////////////////////////////////////////////////
//	Logging.
///////////////////////////////////////////////////////////////////////////////
/*
		������
		����������� �������:
			void LOG(string s);
			void WARN(string s);
			void MSG(string s);
		�����������:
			LOG("{MESSAGE}");
			WARN("{MESSAGE}");
			MSG("{MESSAGE}");
		������ ����:
			0 - MSG �������. ����� ������ ��� �������
				������:
					[                   ] MSG
			1 - LOG �������. ����������� ��������� ��������, �����������, ���������� �������. ������ �������
				������:
					[2017/10/24 21:57:45] [LOG]	LOG
			2 - WARN �������. ��������� ������
				������:
					[2017/10/24 21:57:45] [WARN]	WARN
*/

/*
MNMMMNyNMMMdNdMMMMMNMMmMMddMMMMMMMyohsmdyoooooooooooooydhMMMosm/NmMMMy+h +MMysyo+oshhMMMMMNMy` /Mh  
MmMMMMdyMMMhdhNMMMMmMMNNmNsNMMMMMMmssyooooooooooooooosomyNMMh+No+mMMMM.h-:yMNsooooooy-yMMMMMMs  sMo 
MmNMMMNhmMMhymdMMMMMdMMmmmyhMMNMMMMdosoooossoooooooooyohhmMMN/ym.hmMMM/oy``sMmo+ooooysNMMMMMMM/ `hN/
MmdMMMMmyNMdodhNMMMMmmMmmydoNMNmMMMMyooooossoooooooooshsmdMMM+/m/-mMMM+`o  `hMhoooo+oyyMMMMMMMm. .mN
MNhMMMMMhhMdosddMMMMMhNMdsdshMMmNMMMNooooossoooosdNNmodsmhMMMd/hd+dMMN` :.  .mNsoso+oosdMMMMMMMh  :N
MMyNMMMMNsmdooyyMMMMNNhMhoyssNMMdmMMMdoysoyoooohNMMMMNdymhMMMN--ho-NMs.`--:/yhMmddo+ooosNMMMMMMN+  +
MMydMMMMMdyhoosydMMMhMddsoosohMMmhmMMNsyyoyoshNdMMMMMMMdmdNMMM- /o:dm/shhmNNMMMMydds++++yMNMMMMMm.  
MMdomMMMMMysooosyNMMhhNyooooosNMMdyNMMdyooshNMMdNMMMMMMNmmNNdM: -yohydNMMMMNMMMMmsMNs++osNMMMMMMMo  
MMmssmMMNMmsooooomMMN:NdoooooodMMNyyMMNsosmMMMMNmMMMMMMMNNNmoM//:odNMMNmhs/-/NMMNymMNs+oohMMMMMMMN` 
MMNsoyMMmMMhoooooyMNM++NsoooooyMMMhddMMdyNMMMMMMmMMMMMMMMmNh/Mo/hNMMmy-.`    sMmydyMMNy+osMMMMMMMM+ 
MMMssodMdNMNsoooooNdNh`dmooooohNMMms+NMMdNNMMMMMNNMMMMMMMNN//yoNMmymm-       :Nd/dsNNohsosdMMMMMMMh 
MMMhyoomdmMmhoooosdmyN`:NyooosmNNNm:ssMMmNdMMMMMNNMMMMMMMNo-shMMy.`sm.       -ys/shmNymNoyyMMMMMNMN.
MMMdysosddMmysooohhM/m-`dmooodMMNdN/+/mMNmsMMMMMMNMMMMMMh:./sMMMo  sh`       `++++ddMNNMmysNMMh+oNM/
MMMmyhoodhMM+hoooddN:s/ /NssdMMMMoM+.ooMMm/mMMMMMMMMMMd+``/.NMos. -d:     -:/++o:/sdMdNMMdydMMd+/yMo
MMMNsmoodyMM++yooNNm:-/ .mmymMMMN:N+`o-mMN:yMMMMMMMNd+`  -.+Mh--/:s:    `+/:--y/-+/mMMMMMNyyMMMMy-+:
NMMMymsohsMMo`hohMNm:.+:/sNsMMMMd`h/`/`yMN:/MMMMNms:`    ` hNy+.s/`    .//+/.-+:://mNdMMMd:-mMMMs :-
dMMMdmyosoMMs oymMMN+:+` .NhMMMM/ y:`: :MN-.Nmho:`        `sy``-    `.:::+/-`+::::/ddoMMMMd/NMMM+ yo
yNMMNdhoooMMy`:mNMMm::o+//hmMMNs` s. - `mN` +`             /:     `::-:+:.::/:+:-:/hs+dMMMNoNNhm/ o:
mhMMMmdoooNMh-.ydMNo..::--+mMN+/:.o  `  so `-`         `-  `    `.+..---/:--::/:--/h:/sMMMNoNh:y. +.
dymMMMNsosNMy`:omMNyhmNNNMMMMNmNy/-`    :.  `-         `:    ```..o/:://::::--/--./s`//MMMNoNMMm  +.
sdyMMMNsooMMd+/sNMMMNmyo+yNNs//dmso:``  ``   .-        `:     ``..-:::--:------/../:`/:MMMNoMMMs  o`
oyydMMMhosMMmhNMMNmNd:--:`..  -m: `.--`       -`        :    ````..::--:-------.:.-. -+NMMmsMMM: ./ 
oohomMMNyhMMMMMNy:`.os` /o--/sy-              `.        .:.  ``.....::---.-.``.`:``. `oNymdyMMd``-  
ooosyNMMNdMMMNy-    -``:/o++:.               ` -         `+s    ```..:...``.````.- `. sMMMddMM+     
hoosoyMMMMMMN/                          .``````.-```       o:       `.-`````    `:  ``sMMMhNMM+     
sho+osNMMMMM+                         ``.:..`..`/: ``      .+       ``-```` `   `/   `mmyNhNMMNo    
oyhsyyydMMMMN+`                    .`....::---../o` `       -         `.        -:   /Ms.hdMNMMMy.  
/.:so+oomMMNhhy/` .--.---`      ./o:-...--:--....```      `/           .`       o/  `dM/`hmN-:smMN+`
   .msosoNMMmoooo+-   `.`.+//oyss/-.-:--::-:-...````   `  `:.      `   `.       :/  oMM/ hN+   `-+yh
:-:/ydysysNMMm+++o/.``-:..+yoo:--:--::--.-.:.````````     --.     -/    :`         /NMM/`ms`       `
sooo+oydddsmNNm/o/::::---+:-------------....:.`           :`:   .+N/    /-        +NMMM/-y`         
NdymdyysdddymNdd///::-:-:/:::------......```-.            +`-++`mMM-    `       `sNMMMMoo.          
osmdymNNNNhdNMNddo:+:::-:-:::-:---..-..`` `              `o+oys.NMN.           .dMMMMMMd-           
/hNNdshNNNNNMNmNhy+:+:--:--:-.......````              `:osssooo-hMm.          /mMMMMNhMN`           
y-/hNNho-.:yMMmdmhoo:/..-.-.::.````     ``    ``  `:+oyyys+/+++:/mN.        `+NMMMMMM/yM/           
.. `.oN:   -dMMNdmNdy/:--````.-.`      .hs..:sssssyyysyhso/`.//-`sN.       .yNMMMMMMMs`oh`        `-
y+````/so+oyhMMMMNmNhso:--``  `::`     +ys+/:oooooo++++syo+:-///.:y`      -hhmMMMMMMMm` /:    `-:/++
MMdhhyo/omMNmNNMMMMNNdoo+o.`   -++     +hys:+-:+++//+///os+:://:--s`    `+m+`.+ydmNNMMo``---:+++:--.
MMMMMMMMMMMMMMNNMMMMNNNy:/oo`   ..     .mys:o::://///////o/:::::.-/-   `sms`   ``-:+oyhso///:---````
MMMMMMMMMMMMMMMMMMMMmdhdh+-:/:`         sdo+++://////::::/::::::-:`/  .ydo. `.-:/o/+::::--::.```````
MMMMMMy//sNMMMMMMMMMMMNmdhs+--::.       `+-/:s.///:::::-:::-----:-./ .hdo+-///:-.```.://-.``````````
MMMMMN.  `yNMMMMMMMMMMMMMMMNmdo/++-`      -/-/-.oo/:---:-:---::+/--..hdoy+-` ````.://-``````````````
NMMMMMd+odh/shsdMMMMMMMMMMMMMNyossysoo/:-..`-:::-:+oso+/////o+:`   -hh+oo` ` ``.-:.`````````````````
ydNMMMMdsdNd.-+hNMMMMMMMMMMMMMm/+o+++o+oss+ooo+++++/++o+/:/:`...`:sho++:` ````.`````````````````````
-+sNMMMMsoymh/../dNMMMMMMMMMMMMo-.-:+o++o+/://+/++sooo+o++os:` `/d+/:-``  ``````````````````````````
:-++dMMMN:oyhh/-:/+sNMMMMMMMMMMh-`   `.:+s+/+/////+///++///:/+/++````` `` `````````````````````````.
:::s/sMMMd.oosy///-//yNMMMMMMMMN-`       .---/:+o/:-.`        ``      ```````````````````````````.-:
`-::s:oNMMo-+:y/////:++mMMMMMMMm.  `-      `-+o/                    `````````````````````````....-::
:`.://-+NMd::o-y-:/:/-+:hMMMMMMh`   ::`  `:o/.                       ` ``````.-:`````````````...-:::
-/-`-++.+NN+-/:s--:///::-oNMMMM/    `:-`/o/.              `         `````````.:.:-`````..`..--:/-:::
.--/`.o/-:Nh-://--:-//://:/NMMy`     `/o:.`          ``--:--`` ` `  ```````````-:-::..----::-:::::::

*/