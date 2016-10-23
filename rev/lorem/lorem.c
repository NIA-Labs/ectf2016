// apt-get install gcc openssl libssl-dev
// gcc lorem.c -I/opt/ssl/include/ -L/opt/ssl/lib -lcrypto
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "openssl/sha.h"
char flag[250] = {'S','d','K',':','N','l','0','q','T','6','%','D','A','V','6','@','"','&','D','s','P','a','P','M','D','Q',',',',','p','D','N','S','5','C','q','T','m','U','d','E','M','N','|','&',']','X','y','O','O','}','M','W','N','J','D','/','n','t','h','/','n','T','r','_','%','s','7','G','8','I','c','&','K','f','_','/','H','R','^','9','{','X','h','j','P',']','}','x','H','X','<','A','?','#','g','5','`','n','G','R','G','/','g','a','{','\'','@','+','j','0','\\','R','h','y','*','2','b','%','t','8','\\','V','@',':','I','H','&','$','P','M','`','f','(','7','B','0','?','Q','E','s','j','z','U','Y','l','>','f','}','-','&','I','^','z','5',';','m','{','*','\\','l','M','*',';','t','?','G','u','U','f','n','[',')','#','*','V',',','k','*','z','.','0','W','$','A','4','D','u','N','N','v','(','t','<',']','}','T','9','P','#','7','B','y','3','f','n','p','[','v','A','W','d','O','=','a','#','h','-','h','(','/','C','H','Q','H','.','H','r','^','`','"','a','r','X','/','k','-','U','x','0','P','V','a','*','b','=','W','t','2','3','\0'};
char flagsha256[] = "adc3af4e3d430005499353383d33815b38c6645737822ad622463ba9c02764ac";
void sha256(char *string, char outputBuffer[65])
{
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, string, strlen(string));
    SHA256_Final(hash, &sha256);
    int i = 0;
    for(i = 0; i < SHA256_DIGEST_LENGTH; i++)
    {
        sprintf(outputBuffer + (i * 2), "%02x", hash[i]);
    }
    outputBuffer[64] = 0;
}
int main() {
srand(time(NULL));
static unsigned char buffer[65];
int r;

	LABEL0:
	// Checking char
	flag[224] = 'u';
	goto LABEL100;
	
	LABEL1:
	// Checking char
	flag[208] = 'a';
	goto LABEL2;
	
	LABEL2:
	// Checking char
	flag[189] = 's';
	goto LABEL3;
	
	LABEL3:
	// Checking char
	flag[102] = 'o';
	goto LABEL4;
	
	LABEL4:
	// Setting char
	flag[242] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL104;
	
	else 
		goto LABEL5;
	
	LABEL5:
	// Checking char
	flag[142] = 'a';
	goto LABEL6;
	
	LABEL6:
	// Checking char
	flag[137] = '_';
	goto LABEL106;
	
	LABEL7:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9:
	// Setting char
	flag[147] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL10;
	
	else 
		goto LABEL8;
	
	LABEL10:
	// Setting char
	flag[123] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL110;
	
	else 
		goto LABEL11;
	
	LABEL11:
	// Checking char
	flag[65] = 's';
	goto LABEL12;
	
	LABEL12:
	// Setting char
	flag[135] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL112;
	
	else 
		goto LABEL13;
	
	LABEL13:
	// Checking char
	flag[212] = 'm';
	goto LABEL14;
	
	LABEL14:
	// Setting char
	flag[119] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL114;
	
	else 
		goto LABEL15;
	
	LABEL15:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL16:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL17:
	// Checking char
	flag[231] = '}';
	goto LABEL117;
	
	LABEL18:
	// Checking char
	flag[211] = 's';
	goto LABEL17;
	
	LABEL19:
	// Checking char
	flag[107] = 'o';
	goto LABEL18;
	
	LABEL20:
	// Checking char
	flag[22] = '5';
	goto LABEL19;
	
	LABEL21:
	// Setting char
	flag[13] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL121;
	
	else 
		goto LABEL20;
	
	LABEL22:
	// Checking char
	flag[28] = '~';
	goto LABEL21;
	
	LABEL23:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL24:
	// Setting char
	flag[178] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL25;
	
	else 
		goto LABEL23;
	
	LABEL25:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL26:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL27:
	// Setting char
	flag[183] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL28;
	
	else 
		goto LABEL26;
	
	LABEL28:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL29:
	// Checking char
	flag[73] = 'I';
	goto LABEL30;
	
	LABEL30:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL31:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL32:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL33:
	// Checking char
	flag[16] = 'i';
	goto LABEL32;
	
	LABEL34:
	// Checking char
	flag[212] = ';';
	goto LABEL33;
	
	LABEL35:
	// Checking char
	flag[158] = 'h';
	goto LABEL34;
	
	LABEL36:
	// Checking char
	flag[176] = '>';
	goto LABEL35;
	
	LABEL37:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL38:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL39:
	// Setting char
	flag[75] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL139;
	
	else 
		goto LABEL38;
	
	LABEL40:
	// Setting char
	flag[77] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL140;
	
	else 
		goto LABEL39;
	
	LABEL41:
	// Checking char
	flag[195] = '}';
	goto LABEL40;
	
	LABEL42:
	// Checking char
	flag[8] = 'C';
	goto LABEL41;
	
	LABEL43:
	// Checking char
	flag[248] = 'N';
	goto LABEL42;
	
	LABEL44:
	// Setting char
	flag[82] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL144;
	
	else 
		goto LABEL43;
	
	LABEL45:
	// Checking char
	flag[162] = 'X';
	goto LABEL44;
	
	LABEL46:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL47:
	// Checking char
	flag[72] = '.';
	goto LABEL48;
	
	LABEL48:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL49:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL50:
	// Checking char
	flag[64] = 'E';
	goto LABEL49;
	
	LABEL51:
	// Setting char
	flag[82] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL151;
	
	else 
		goto LABEL50;
	
	LABEL52:
	// Setting char
	flag[112] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL53;
	
	else 
		goto LABEL51;
	
	LABEL53:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL54:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL55:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL56:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL57:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL58:
	// Checking char
	flag[143] = 'i';
	goto LABEL57;
	
	LABEL59:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL60:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL61:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL62:
	// Checking char
	flag[238] = 'K';
	goto LABEL61;
	
	LABEL63:
	// Checking char
	flag[30] = 'S';
	goto LABEL62;
	
	LABEL64:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL65:
	// Checking char
	flag[188] = 'z';
	goto LABEL64;
	
	LABEL66:
	// Checking char
	flag[117] = '=';
	goto LABEL65;
	
	LABEL67:
	// Checking char
	flag[248] = '!';
	goto LABEL66;
	
	LABEL68:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL69:
	// Setting char
	flag[236] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL70;
	
	else 
		goto LABEL68;
	
	LABEL70:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL71:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL72:
	// Setting char
	flag[138] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL73;
	
	else 
		goto LABEL71;
	
	LABEL73:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL74:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL75:
	// Checking char
	flag[154] = 'g';
	goto LABEL175;
	
	LABEL76:
	// Checking char
	flag[91] = '}';
	goto LABEL75;
	
	LABEL77:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL78:
	// Setting char
	flag[233] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL178;
	
	else 
		goto LABEL77;
	
	LABEL79:
	// Checking char
	flag[167] = '0';
	goto LABEL78;
	
	LABEL80:
	// Checking char
	flag[208] = 'k';
	goto LABEL79;
	
	LABEL81:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL82:
	// Checking char
	flag[13] = 'q';
	goto LABEL81;
	
	LABEL83:
	// Setting char
	flag[137] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL84;
	
	else 
		goto LABEL82;
	
	LABEL84:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL85:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL86:
	// Checking char
	flag[118] = 'r';
	goto LABEL87;
	
	LABEL87:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL88:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL89:
	// Checking char
	flag[187] = 'Z';
	goto LABEL88;
	
	LABEL90:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL91:
	// Checking char
	flag[90] = 'v';
	goto LABEL90;
	
	LABEL92:
	// Checking char
	flag[6] = '*';
	goto LABEL93;
	
	LABEL93:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL94:
	// Checking char
	flag[111] = 'g';
	goto LABEL95;
	
	LABEL95:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL96:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL97:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL98:
	// Checking char
	flag[136] = '4';
	goto LABEL97;
	
	LABEL99:
	// Checking char
	flag[79] = '=';
	goto LABEL98;
	
	LABEL100:
	// Checking char
	flag[230] = 'i';
	goto LABEL101;
	
	LABEL101:
	// Setting char
	flag[171] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1;
	
	else 
		goto LABEL102;
	
	LABEL102:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL103:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL104:
	// Checking char
	flag[176] = 'W';
	goto LABEL103;
	
	LABEL105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL106:
	// Setting char
	flag[28] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL206;
	
	else if (r == 1)
		goto LABEL107;
	
	else 
		goto LABEL105;
	
	LABEL107:
	// Setting char
	flag[4] = 'm';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7;
	
	else if (r == 1)
		goto LABEL207;
	
	else 
		goto LABEL108;
	
	LABEL108:
	// Checking char
	flag[79] = 'c';
	goto LABEL109;
	
	LABEL109:
	// Checking char
	flag[108] = 'm';
	goto LABEL9;
	
	LABEL110:
	// Checking char
	flag[227] = '5';
	goto LABEL210;
	
	LABEL111:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL112:
	// Checking char
	flag[240] = 'u';
	goto LABEL111;
	
	LABEL113:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL114:
	// Checking char
	flag[239] = 'r';
	goto LABEL115;
	
	LABEL115:
	// Checking char
	flag[245] = 'o';
	goto LABEL116;
	
	LABEL116:
	// Setting char
	flag[223] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL16;
	
	else 
		goto LABEL216;
	
	LABEL117:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL118:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL119:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL120:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL121:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL122:
	// Checking char
	flag[93] = '}';
	goto LABEL22;
	
	LABEL123:
	// Checking char
	flag[231] = 'j';
	goto LABEL122;
	
	LABEL124:
	// Checking char
	flag[71] = '4';
	goto LABEL24;
	
	LABEL125:
	// Checking char
	flag[145] = '[';
	goto LABEL126;
	
	LABEL126:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL127:
	// Checking char
	flag[179] = 'I';
	goto LABEL27;
	
	LABEL128:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL129:
	// Setting char
	flag[233] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL29;
	
	else if (r == 1)
		goto LABEL130;
	
	else 
		goto LABEL128;
	
	LABEL130:
	// Setting char
	flag[32] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL230;
	
	else 
		goto LABEL131;
	
	LABEL131:
	// Checking char
	flag[158] = 'w';
	goto LABEL31;
	
	LABEL132:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL133:
	// Checking char
	flag[0] = 'a';
	goto LABEL132;
	
	LABEL134:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL135:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL136:
	// Checking char
	flag[70] = 'g';
	goto LABEL36;
	
	LABEL137:
	// Checking char
	flag[27] = '=';
	goto LABEL37;
	
	LABEL138:
	// Checking char
	flag[97] = '_';
	goto LABEL137;
	
	LABEL139:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL140:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL141:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL142:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL143:
	// Checking char
	flag[207] = 'p';
	goto LABEL243;
	
	LABEL144:
	// Checking char
	flag[4] = 'U';
	goto LABEL143;
	
	LABEL145:
	// Checking char
	flag[109] = 'A';
	goto LABEL45;
	
	LABEL146:
	// Setting char
	flag[110] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL46;
	
	else 
		goto LABEL145;
	
	LABEL147:
	// Setting char
	flag[41] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL47;
	
	else 
		goto LABEL146;
	
	LABEL148:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL149:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL150:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL151:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL152:
	// Checking char
	flag[221] = 'T';
	goto LABEL52;
	
	LABEL153:
	// Setting char
	flag[62] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL253;
	
	else 
		goto LABEL152;
	
	LABEL154:
	// Setting char
	flag[129] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL54;
	
	else 
		goto LABEL153;
	
	LABEL155:
	// Setting char
	flag[43] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL55;
	
	else 
		goto LABEL154;
	
	LABEL156:
	// Setting char
	flag[156] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL56;
	
	else if (r == 1)
		goto LABEL157;
	
	else 
		goto LABEL155;
	
	LABEL157:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL158:
	// Checking char
	flag[166] = 'l';
	goto LABEL58;
	
	LABEL159:
	// Setting char
	flag[178] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL59;
	
	else 
		goto LABEL158;
	
	LABEL160:
	// Checking char
	flag[71] = 'p';
	goto LABEL60;
	
	LABEL161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL162:
	// Checking char
	flag[127] = '%';
	goto LABEL161;
	
	LABEL163:
	// Setting char
	flag[128] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL63;
	
	else 
		goto LABEL164;
	
	LABEL164:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL165:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL166:
	// Setting char
	flag[61] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL266;
	
	else 
		goto LABEL165;
	
	LABEL167:
	// Setting char
	flag[163] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL67;
	
	else 
		goto LABEL166;
	
	LABEL168:
	// Checking char
	flag[20] = '1';
	goto LABEL167;
	
	LABEL169:
	// Setting char
	flag[39] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL69;
	
	else 
		goto LABEL168;
	
	LABEL170:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL171:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL172:
	// Checking char
	flag[127] = ']';
	goto LABEL72;
	
	LABEL173:
	// Setting char
	flag[186] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL273;
	
	else 
		goto LABEL172;
	
	LABEL174:
	// Setting char
	flag[168] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL74;
	
	else 
		goto LABEL173;
	
	LABEL175:
	// Checking char
	flag[219] = 'D';
	goto LABEL174;
	
	LABEL176:
	// Checking char
	flag[42] = 's';
	goto LABEL76;
	
	LABEL177:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL178:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL179:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL180:
	// Setting char
	flag[175] = '*';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL80;
	
	else if (r == 1)
		goto LABEL280;
	
	else 
		goto LABEL179;
	
	LABEL181:
	// Checking char
	flag[48] = 'i';
	goto LABEL180;
	
	LABEL182:
	// Checking char
	flag[137] = 'W';
	goto LABEL181;
	
	LABEL183:
	// Setting char
	flag[227] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL83;
	
	else 
		goto LABEL182;
	
	LABEL184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL185:
	// Setting char
	flag[93] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL85;
	
	else 
		goto LABEL186;
	
	LABEL186:
	// Checking char
	flag[79] = 'F';
	goto LABEL86;
	
	LABEL187:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL188:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL189:
	// Setting char
	flag[200] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL89;
	
	else 
		goto LABEL188;
	
	LABEL190:
	// Checking char
	flag[117] = 'R';
	goto LABEL189;
	
	LABEL191:
	// Setting char
	flag[230] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL91;
	
	else 
		goto LABEL190;
	
	LABEL192:
	// Setting char
	flag[237] = '{';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL92;
	
	else if (r == 1)
		goto LABEL292;
	
	else 
		goto LABEL191;
	
	LABEL193:
	// Checking char
	flag[62] = 'm';
	goto LABEL192;
	
	LABEL194:
	// Setting char
	flag[159] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL94;
	
	else 
		goto LABEL195;
	
	LABEL195:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL196:
	// Checking char
	flag[203] = 'K';
	goto LABEL96;
	
	LABEL197:
	// Setting char
	flag[147] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL198;
	
	else 
		goto LABEL196;
	
	LABEL198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL199:
	// Checking char
	flag[220] = '.';
	goto LABEL99;
	
	LABEL200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL201:
	// Setting char
	flag[68] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL202;
	
	else 
		goto LABEL200;
	
	LABEL202:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL203:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL204:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL205:
	// Setting char
	flag[114] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL305;
	
	else 
		goto LABEL204;
	
	LABEL206:
	// Setting char
	flag[118] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL306;
	
	else 
		goto LABEL205;
	
	LABEL207:
	// Checking char
	flag[153] = 'E';
	goto LABEL208;
	
	LABEL208:
	// Checking char
	flag[212] = '}';
	goto LABEL308;
	
	LABEL209:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL210:
	// Checking char
	flag[145] = 'Y';
	goto LABEL209;
	
	LABEL211:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL212:
	// Checking char
	flag[235] = '6';
	goto LABEL211;
	
	LABEL213:
	// Setting char
	flag[67] = '&';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL113;
	
	else if (r == 1)
		goto LABEL214;
	
	else 
		goto LABEL212;
	
	LABEL214:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL215:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL216:
	// Checking char
	flag[213] = 'n';
	goto LABEL217;
	
	LABEL217:
	// Checking char
	flag[82] = 'i';
	goto LABEL218;
	
	LABEL218:
	// Setting char
	flag[29] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL118;
	
	else 
		goto LABEL219;
	
	LABEL219:
	// Setting char
	flag[57] = 'A';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL119;
	
	else if (r == 1)
		goto LABEL319;
	
	else 
		goto LABEL220;
	
	LABEL220:
	// Checking char
	flag[60] = 'F';
	goto LABEL120;
	
	LABEL221:
	// Checking char
	flag[5] = 'H';
	goto LABEL321;
	
	LABEL222:
	// Checking char
	flag[196] = 'y';
	goto LABEL221;
	
	LABEL223:
	// Setting char
	flag[125] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL123;
	
	else 
		goto LABEL222;
	
	LABEL224:
	// Setting char
	flag[87] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL124;
	
	else 
		goto LABEL225;
	
	LABEL225:
	// Checking char
	flag[204] = 'm';
	goto LABEL125;
	
	LABEL226:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL227:
	// Checking char
	flag[37] = 'u';
	goto LABEL127;
	
	LABEL228:
	// Setting char
	flag[246] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL229;
	
	else 
		goto LABEL227;
	
	LABEL229:
	// Checking char
	flag[85] = 'p';
	goto LABEL129;
	
	LABEL230:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL231:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL232:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL233:
	// Setting char
	flag[48] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL133;
	
	else 
		goto LABEL232;
	
	LABEL234:
	// Checking char
	flag[202] = '-';
	goto LABEL134;
	
	LABEL235:
	// Setting char
	flag[182] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL135;
	
	else 
		goto LABEL335;
	
	LABEL236:
	// Setting char
	flag[171] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL136;
	
	else 
		goto LABEL235;
	
	LABEL237:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL238:
	// Setting char
	flag[22] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL138;
	
	else 
		goto LABEL237;
	
	LABEL239:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL240:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL241:
	// Checking char
	flag[65] = '!';
	goto LABEL141;
	
	LABEL242:
	// Setting char
	flag[87] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL142;
	
	else 
		goto LABEL241;
	
	LABEL243:
	// Checking char
	flag[178] = 'R';
	goto LABEL242;
	
	LABEL244:
	// Checking char
	flag[146] = 'i';
	goto LABEL344;
	
	LABEL245:
	// Checking char
	flag[214] = 'X';
	goto LABEL244;
	
	LABEL246:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL247:
	// Setting char
	flag[164] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL147;
	
	else if (r == 1)
		goto LABEL347;
	
	else 
		goto LABEL246;
	
	LABEL248:
	// Setting char
	flag[216] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL148;
	
	else 
		goto LABEL247;
	
	LABEL249:
	// Setting char
	flag[193] = '}';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL149;
	
	else if (r == 1)
		goto LABEL349;
	
	else 
		goto LABEL248;
	
	LABEL250:
	// Setting char
	flag[5] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL150;
	
	else 
		goto LABEL249;
	
	LABEL251:
	// Setting char
	flag[150] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL351;
	
	else 
		goto LABEL250;
	
	LABEL252:
	// Checking char
	flag[132] = '[';
	goto LABEL251;
	
	LABEL253:
	// Setting char
	flag[10] = 'N';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL353;
	
	else if (r == 1)
		goto LABEL254;
	
	else 
		goto LABEL252;
	
	LABEL254:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL255:
	// Checking char
	flag[167] = '"';
	goto LABEL355;
	
	LABEL256:
	// Setting char
	flag[32] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL156;
	
	else 
		goto LABEL255;
	
	LABEL257:
	// Setting char
	flag[191] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL357;
	
	else 
		goto LABEL256;
	
	LABEL258:
	// Checking char
	flag[190] = 'y';
	goto LABEL257;
	
	LABEL259:
	// Setting char
	flag[136] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL159;
	
	else 
		goto LABEL258;
	
	LABEL260:
	// Setting char
	flag[204] = ';';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL160;
	
	else if (r == 1)
		goto LABEL261;
	
	else 
		goto LABEL259;
	
	LABEL261:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL262:
	// Checking char
	flag[15] = '@';
	goto LABEL162;
	
	LABEL263:
	// Checking char
	flag[244] = '|';
	goto LABEL163;
	
	LABEL264:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL268:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL269:
	// Setting char
	flag[37] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL169;
	
	else 
		goto LABEL268;
	
	LABEL270:
	// Setting char
	flag[95] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL170;
	
	else 
		goto LABEL269;
	
	LABEL271:
	// Checking char
	flag[9] = '}';
	goto LABEL171;
	
	LABEL272:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL274:
	// Checking char
	flag[25] = '3';
	goto LABEL374;
	
	LABEL275:
	// Checking char
	flag[173] = 'n';
	goto LABEL274;
	
	LABEL276:
	// Setting char
	flag[21] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL176;
	
	else 
		goto LABEL275;
	
	LABEL277:
	// Checking char
	flag[186] = 'n';
	goto LABEL177;
	
	LABEL278:
	// Setting char
	flag[222] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL279;
	
	else 
		goto LABEL277;
	
	LABEL279:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL280:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL281:
	// Checking char
	flag[169] = '(';
	goto LABEL282;
	
	LABEL282:
	// Checking char
	flag[139] = 'z';
	goto LABEL382;
	
	LABEL283:
	// Checking char
	flag[107] = 'b';
	goto LABEL183;
	
	LABEL284:
	// Setting char
	flag[191] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL184;
	
	else 
		goto LABEL283;
	
	LABEL285:
	// Setting char
	flag[214] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL185;
	
	else if (r == 1)
		goto LABEL286;
	
	else 
		goto LABEL284;
	
	LABEL286:
	// Checking char
	flag[72] = 'N';
	goto LABEL287;
	
	LABEL287:
	// Setting char
	flag[233] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL187;
	
	else 
		goto LABEL288;
	
	LABEL288:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL289:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL290:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL291:
	// Checking char
	flag[246] = 'c';
	goto LABEL290;
	
	LABEL292:
	// Checking char
	flag[159] = 'D';
	goto LABEL291;
	
	LABEL293:
	// Checking char
	flag[248] = 'D';
	goto LABEL193;
	
	LABEL294:
	// Checking char
	flag[73] = 'd';
	goto LABEL194;
	
	LABEL295:
	// Checking char
	flag[32] = 'j';
	goto LABEL294;
	
	LABEL296:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL297:
	// Setting char
	flag[29] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL197;
	
	else 
		goto LABEL296;
	
	LABEL298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL299:
	// Setting char
	flag[206] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL199;
	
	else 
		goto LABEL298;
	
	LABEL300:
	// Checking char
	flag[143] = '}';
	goto LABEL301;
	
	LABEL301:
	// Setting char
	flag[68] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL201;
	
	else 
		goto LABEL401;
	
	LABEL302:
	// Checking char
	flag[184] = 'I';
	goto LABEL303;
	
	LABEL303:
	// Checking char
	flag[101] = ']';
	goto LABEL203;
	
	LABEL304:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL305:
	// Checking char
	flag[120] = 'm';
	goto LABEL304;
	
	LABEL306:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL307:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL308:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL309:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL310:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL311:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL312:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL313:
	// Setting char
	flag[240] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL213;
	
	else 
		goto LABEL314;
	
	LABEL314:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL315:
	// Setting char
	flag[89] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL215;
	
	else 
		goto LABEL415;
	
	LABEL316:
	// Checking char
	flag[31] = 'p';
	goto LABEL315;
	
	LABEL317:
	// Setting char
	flag[174] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL318;
	
	else 
		goto LABEL316;
	
	LABEL318:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL319:
	// Setting char
	flag[169] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL419;
	
	else 
		goto LABEL320;
	
	LABEL320:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL321:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL322:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL323:
	// Setting char
	flag[183] = ';';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL223;
	
	else if (r == 1)
		goto LABEL324;
	
	else 
		goto LABEL322;
	
	LABEL324:
	// Setting char
	flag[33] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL224;
	
	else 
		goto LABEL325;
	
	LABEL325:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL326:
	// Checking char
	flag[37] = '-';
	goto LABEL226;
	
	LABEL327:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL328:
	// Checking char
	flag[240] = 't';
	goto LABEL228;
	
	LABEL329:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL330:
	// Checking char
	flag[28] = '_';
	goto LABEL331;
	
	LABEL331:
	// Checking char
	flag[221] = '$';
	goto LABEL231;
	
	LABEL332:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL333:
	// Checking char
	flag[228] = 'S';
	goto LABEL233;
	
	LABEL334:
	// Checking char
	flag[173] = 'j';
	goto LABEL234;
	
	LABEL335:
	// Checking char
	flag[123] = 'a';
	goto LABEL435;
	
	LABEL336:
	// Checking char
	flag[60] = '#';
	goto LABEL236;
	
	LABEL337:
	// Checking char
	flag[106] = 'n';
	goto LABEL336;
	
	LABEL338:
	// Setting char
	flag[85] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL238;
	
	else 
		goto LABEL337;
	
	LABEL339:
	// Setting char
	flag[111] = 'v';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL239;
	
	else if (r == 1)
		goto LABEL439;
	
	else 
		goto LABEL338;
	
	LABEL340:
	// Setting char
	flag[178] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL240;
	
	else 
		goto LABEL339;
	
	LABEL341:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL342:
	// Checking char
	flag[235] = '?';
	goto LABEL343;
	
	LABEL343:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL344:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL345:
	// Setting char
	flag[83] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL245;
	
	else 
		goto LABEL445;
	
	LABEL346:
	// Setting char
	flag[27] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL446;
	
	else 
		goto LABEL345;
	
	LABEL347:
	// Setting char
	flag[158] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL348;
	
	else 
		goto LABEL346;
	
	LABEL348:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL349:
	// Checking char
	flag[9] = '(';
	goto LABEL449;
	
	LABEL350:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL351:
	// Setting char
	flag[82] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL451;
	
	else 
		goto LABEL352;
	
	LABEL352:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL353:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL354:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL355:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL356:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL357:
	// Checking char
	flag[97] = 'p';
	goto LABEL358;
	
	LABEL358:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL359:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL360:
	// Setting char
	flag[129] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL260;
	
	else 
		goto LABEL361;
	
	LABEL361:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL362:
	// Setting char
	flag[123] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL262;
	
	else 
		goto LABEL363;
	
	LABEL363:
	// Checking char
	flag[151] = 'N';
	goto LABEL263;
	
	LABEL364:
	// Checking char
	flag[228] = 'a';
	goto LABEL264;
	
	LABEL365:
	// Checking char
	flag[1] = 'K';
	goto LABEL265;
	
	LABEL366:
	// Checking char
	flag[137] = '0';
	goto LABEL365;
	
	LABEL367:
	// Checking char
	flag[143] = ':';
	goto LABEL267;
	
	LABEL368:
	// Checking char
	flag[198] = '^';
	goto LABEL367;
	
	LABEL369:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL370:
	// Setting char
	flag[34] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL270;
	
	else 
		goto LABEL470;
	
	LABEL371:
	// Setting char
	flag[29] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL271;
	
	else if (r == 1)
		goto LABEL372;
	
	else 
		goto LABEL370;
	
	LABEL372:
	// Setting char
	flag[236] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL272;
	
	else 
		goto LABEL373;
	
	LABEL373:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL374:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL375:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL376:
	// Setting char
	flag[135] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL276;
	
	else 
		goto LABEL375;
	
	LABEL377:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL378:
	// Setting char
	flag[157] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL278;
	
	else 
		goto LABEL379;
	
	LABEL379:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL380:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL381:
	// Setting char
	flag[25] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL281;
	
	else 
		goto LABEL380;
	
	LABEL382:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL383:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL384:
	// Setting char
	flag[210] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL484;
	
	else 
		goto LABEL383;
	
	LABEL385:
	// Setting char
	flag[152] = 'B';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL285;
	
	else if (r == 1)
		goto LABEL386;
	
	else 
		goto LABEL384;
	
	LABEL386:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL387:
	// Checking char
	flag[105] = ';';
	goto LABEL388;
	
	LABEL388:
	// Checking char
	flag[214] = 'V';
	goto LABEL389;
	
	LABEL389:
	// Checking char
	flag[79] = '+';
	goto LABEL289;
	
	LABEL390:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL391:
	// Checking char
	flag[70] = 'b';
	goto LABEL390;
	
	LABEL392:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL393:
	// Setting char
	flag[17] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL293;
	
	else 
		goto LABEL392;
	
	LABEL394:
	// Checking char
	flag[35] = 'e';
	goto LABEL393;
	
	LABEL395:
	// Checking char
	flag[244] = 'B';
	goto LABEL295;
	
	LABEL396:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL397:
	// Checking char
	flag[201] = '3';
	goto LABEL297;
	
	LABEL398:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL399:
	// Setting char
	flag[70] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL299;
	
	else 
		goto LABEL398;
	
	LABEL400:
	// Checking char
	flag[48] = 'r';
	goto LABEL300;
	
	LABEL401:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL402:
	// Checking char
	flag[11] = 'O';
	goto LABEL302;
	
	LABEL403:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL404:
	// Checking char
	flag[230] = 'f';
	goto LABEL403;
	
	LABEL405:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL406:
	// Checking char
	flag[146] = 'z';
	goto LABEL405;
	
	LABEL407:
	// Checking char
	flag[147] = '%';
	goto LABEL307;
	
	LABEL408:
	// Setting char
	flag[1] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL508;
	
	else 
		goto LABEL407;
	
	LABEL409:
	// Setting char
	flag[209] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL309;
	
	else 
		goto LABEL408;
	
	LABEL410:
	// Setting char
	flag[10] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL310;
	
	else if (r == 1)
		goto LABEL510;
	
	else 
		goto LABEL409;
	
	LABEL411:
	// Setting char
	flag[230] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL311;
	
	else 
		goto LABEL410;
	
	LABEL412:
	// Setting char
	flag[82] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL312;
	
	else 
		goto LABEL411;
	
	LABEL413:
	// Setting char
	flag[97] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL313;
	
	else if (r == 1)
		goto LABEL513;
	
	else 
		goto LABEL412;
	
	LABEL414:
	// Checking char
	flag[246] = '7';
	goto LABEL413;
	
	LABEL415:
	// Checking char
	flag[231] = 'P';
	goto LABEL414;
	
	LABEL416:
	// Checking char
	flag[17] = '}';
	goto LABEL516;
	
	LABEL417:
	// Setting char
	flag[163] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL317;
	
	else if (r == 1)
		goto LABEL517;
	
	else 
		goto LABEL416;
	
	LABEL418:
	// Checking char
	flag[117] = '*';
	goto LABEL417;
	
	LABEL419:
	// Setting char
	flag[141] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL519;
	
	else if (r == 1)
		goto LABEL420;
	
	else 
		goto LABEL418;
	
	LABEL420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL421:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL422:
	// Checking char
	flag[166] = 'C';
	goto LABEL421;
	
	LABEL423:
	// Setting char
	flag[155] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL323;
	
	else if (r == 1)
		goto LABEL424;
	
	else 
		goto LABEL422;
	
	LABEL424:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL425:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL426:
	// Checking char
	flag[63] = 'z';
	goto LABEL326;
	
	LABEL427:
	// Setting char
	flag[51] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL327;
	
	else 
		goto LABEL426;
	
	LABEL428:
	// Setting char
	flag[146] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL328;
	
	else 
		goto LABEL427;
	
	LABEL429:
	// Checking char
	flag[91] = '3';
	goto LABEL329;
	
	LABEL430:
	// Setting char
	flag[49] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL330;
	
	else 
		goto LABEL429;
	
	LABEL431:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL432:
	// Checking char
	flag[111] = '6';
	goto LABEL332;
	
	LABEL433:
	// Setting char
	flag[123] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL333;
	
	else 
		goto LABEL432;
	
	LABEL434:
	// Checking char
	flag[175] = '*';
	goto LABEL334;
	
	LABEL435:
	// Checking char
	flag[93] = 'O';
	goto LABEL434;
	
	LABEL436:
	// Checking char
	flag[232] = 'y';
	goto LABEL536;
	
	LABEL437:
	// Checking char
	flag[214] = '(';
	goto LABEL436;
	
	LABEL438:
	// Checking char
	flag[207] = '^';
	goto LABEL437;
	
	LABEL439:
	// Checking char
	flag[223] = '5';
	goto LABEL438;
	
	LABEL440:
	// Setting char
	flag[50] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL340;
	
	else 
		goto LABEL540;
	
	LABEL441:
	// Setting char
	flag[244] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL341;
	
	else 
		goto LABEL440;
	
	LABEL442:
	// Setting char
	flag[54] = 'v';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL342;
	
	else if (r == 1)
		goto LABEL542;
	
	else 
		goto LABEL441;
	
	LABEL443:
	// Checking char
	flag[110] = 'L';
	goto LABEL442;
	
	LABEL444:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL445:
	// Checking char
	flag[166] = '+';
	goto LABEL545;
	
	LABEL446:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL447:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL448:
	// Checking char
	flag[33] = ':';
	goto LABEL447;
	
	LABEL449:
	// Setting char
	flag[107] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL549;
	
	else 
		goto LABEL448;
	
	LABEL450:
	// Checking char
	flag[197] = '2';
	goto LABEL350;
	
	LABEL451:
	// Setting char
	flag[109] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL452;
	
	else 
		goto LABEL450;
	
	LABEL452:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL453:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL454:
	// Checking char
	flag[54] = 'D';
	goto LABEL354;
	
	LABEL455:
	// Checking char
	flag[32] = 'B';
	goto LABEL454;
	
	LABEL456:
	// Checking char
	flag[56] = 'g';
	goto LABEL356;
	
	LABEL457:
	// Checking char
	flag[215] = 'L';
	goto LABEL456;
	
	LABEL458:
	// Checking char
	flag[161] = '.';
	goto LABEL457;
	
	LABEL459:
	// Setting char
	flag[138] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL359;
	
	else 
		goto LABEL559;
	
	LABEL460:
	// Setting char
	flag[105] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL360;
	
	else 
		goto LABEL459;
	
	LABEL461:
	// Checking char
	flag[155] = '#';
	goto LABEL460;
	
	LABEL462:
	// Setting char
	flag[84] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL362;
	
	else 
		goto LABEL461;
	
	LABEL463:
	// Checking char
	flag[102] = '@';
	goto LABEL462;
	
	LABEL464:
	// Setting char
	flag[13] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL364;
	
	else if (r == 1)
		goto LABEL465;
	
	else 
		goto LABEL463;
	
	LABEL465:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL466:
	// Checking char
	flag[103] = '=';
	goto LABEL366;
	
	LABEL467:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL468:
	// Setting char
	flag[6] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL368;
	
	else if (r == 1)
		goto LABEL568;
	
	else 
		goto LABEL467;
	
	LABEL469:
	// Setting char
	flag[129] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL369;
	
	else 
		goto LABEL468;
	
	LABEL470:
	// Checking char
	flag[20] = '_';
	goto LABEL469;
	
	LABEL471:
	// Setting char
	flag[3] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL371;
	
	else 
		goto LABEL472;
	
	LABEL472:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL473:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL474:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL475:
	// Checking char
	flag[36] = 'Q';
	goto LABEL474;
	
	LABEL476:
	// Checking char
	flag[204] = 'w';
	goto LABEL376;
	
	LABEL477:
	// Setting char
	flag[54] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL377;
	
	else 
		goto LABEL577;
	
	LABEL478:
	// Setting char
	flag[145] = 'V';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL378;
	
	else if (r == 1)
		goto LABEL578;
	
	else 
		goto LABEL477;
	
	LABEL479:
	// Checking char
	flag[245] = ';';
	goto LABEL478;
	
	LABEL480:
	// Checking char
	flag[103] = ',';
	goto LABEL479;
	
	LABEL481:
	// Checking char
	flag[111] = 'h';
	goto LABEL381;
	
	LABEL482:
	// Setting char
	flag[174] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL483;
	
	else 
		goto LABEL481;
	
	LABEL483:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL484:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL485:
	// Checking char
	flag[45] = ')';
	goto LABEL385;
	
	LABEL486:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL487:
	// Setting char
	flag[143] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL387;
	
	else 
		goto LABEL488;
	
	LABEL488:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL489:
	// Checking char
	flag[174] = 'U';
	goto LABEL490;
	
	LABEL490:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL491:
	// Checking char
	flag[231] = 'h';
	goto LABEL391;
	
	LABEL492:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL493:
	// Checking char
	flag[137] = 'p';
	goto LABEL593;
	
	LABEL494:
	// Setting char
	flag[121] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL394;
	
	else 
		goto LABEL493;
	
	LABEL495:
	// Checking char
	flag[111] = 'i';
	goto LABEL395;
	
	LABEL496:
	// Setting char
	flag[214] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL396;
	
	else if (r == 1)
		goto LABEL497;
	
	else 
		goto LABEL495;
	
	LABEL497:
	// Setting char
	flag[126] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL397;
	
	else 
		goto LABEL498;
	
	LABEL498:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL499:
	// Checking char
	flag[35] = 'H';
	goto LABEL399;
	
	LABEL500:
	// Checking char
	flag[247] = '(';
	goto LABEL400;
	
	LABEL501:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL502:
	// Checking char
	flag[155] = '.';
	goto LABEL402;
	
	LABEL503:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL504:
	// Checking char
	flag[58] = 'v';
	goto LABEL404;
	
	LABEL505:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL506:
	// Checking char
	flag[187] = '{';
	goto LABEL406;
	
	LABEL507:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL508:
	// Checking char
	flag[38] = 't';
	goto LABEL507;
	
	LABEL509:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL510:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL511:
	// Checking char
	flag[133] = 'O';
	goto LABEL611;
	
	LABEL512:
	// Setting char
	flag[203] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL612;
	
	else 
		goto LABEL511;
	
	LABEL513:
	// Setting char
	flag[104] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL613;
	
	else 
		goto LABEL512;
	
	LABEL514:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL515:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL516:
	// Checking char
	flag[195] = '1';
	goto LABEL515;
	
	LABEL517:
	// Setting char
	flag[13] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL617;
	
	else 
		goto LABEL518;
	
	LABEL518:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL519:
	// Checking char
	flag[41] = 'i';
	goto LABEL520;
	
	LABEL520:
	// Setting char
	flag[110] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL620;
	
	else 
		goto LABEL521;
	
	LABEL521:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL522:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL523:
	// Checking char
	flag[90] = 'h';
	goto LABEL423;
	
	LABEL524:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL525:
	// Checking char
	flag[170] = 'C';
	goto LABEL425;
	
	LABEL526:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL527:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL528:
	// Setting char
	flag[121] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL428;
	
	else 
		goto LABEL527;
	
	LABEL529:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL530:
	// Checking char
	flag[6] = '?';
	goto LABEL430;
	
	LABEL531:
	// Checking char
	flag[181] = 'g';
	goto LABEL431;
	
	LABEL532:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL533:
	// Checking char
	flag[168] = 'p';
	goto LABEL433;
	
	LABEL534:
	// Checking char
	flag[169] = 'g';
	goto LABEL533;
	
	LABEL535:
	// Setting char
	flag[173] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL635;
	
	else 
		goto LABEL534;
	
	LABEL536:
	// Setting char
	flag[193] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL636;
	
	else 
		goto LABEL535;
	
	LABEL537:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL538:
	// Checking char
	flag[97] = 'B';
	goto LABEL537;
	
	LABEL539:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL540:
	// Checking char
	flag[168] = '&';
	goto LABEL640;
	
	LABEL541:
	// Checking char
	flag[44] = '%';
	goto LABEL641;
	
	LABEL542:
	// Setting char
	flag[26] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL642;
	
	else 
		goto LABEL541;
	
	LABEL543:
	// Checking char
	flag[134] = 'e';
	goto LABEL443;
	
	LABEL544:
	// Setting char
	flag[202] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL444;
	
	else 
		goto LABEL543;
	
	LABEL545:
	// Setting char
	flag[173] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL645;
	
	else 
		goto LABEL544;
	
	LABEL546:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL547:
	// Checking char
	flag[158] = '$';
	goto LABEL546;
	
	LABEL548:
	// Checking char
	flag[94] = 'I';
	goto LABEL547;
	
	LABEL549:
	// Checking char
	flag[172] = '6';
	goto LABEL649;
	
	LABEL550:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL551:
	// Setting char
	flag[101] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL552;
	
	else 
		goto LABEL550;
	
	LABEL552:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL553:
	// Checking char
	flag[92] = 'L';
	goto LABEL453;
	
	LABEL554:
	// Checking char
	flag[76] = '`';
	goto LABEL553;
	
	LABEL555:
	// Setting char
	flag[117] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL455;
	
	else 
		goto LABEL556;
	
	LABEL556:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL557:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL558:
	// Setting char
	flag[103] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL458;
	
	else 
		goto LABEL557;
	
	LABEL559:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL560:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL561:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL562:
	// Checking char
	flag[133] = '@';
	goto LABEL662;
	
	LABEL563:
	// Checking char
	flag[6] = 'p';
	goto LABEL562;
	
	LABEL564:
	// Checking char
	flag[10] = '_';
	goto LABEL464;
	
	LABEL565:
	// Checking char
	flag[133] = 'F';
	goto LABEL564;
	
	LABEL566:
	// Setting char
	flag[63] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL466;
	
	else 
		goto LABEL567;
	
	LABEL567:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL568:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL569:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL570:
	// Checking char
	flag[240] = 'R';
	goto LABEL569;
	
	LABEL571:
	// Checking char
	flag[166] = '9';
	goto LABEL471;
	
	LABEL572:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL573:
	// Setting char
	flag[46] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL473;
	
	else 
		goto LABEL673;
	
	LABEL574:
	// Checking char
	flag[168] = '<';
	goto LABEL573;
	
	LABEL575:
	// Setting char
	flag[25] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL475;
	
	else 
		goto LABEL574;
	
	LABEL576:
	// Setting char
	flag[130] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL476;
	
	else 
		goto LABEL575;
	
	LABEL577:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL578:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL579:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL580:
	// Checking char
	flag[244] = 'A';
	goto LABEL480;
	
	LABEL581:
	// Setting char
	flag[154] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL681;
	
	else 
		goto LABEL580;
	
	LABEL582:
	// Setting char
	flag[19] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL482;
	
	else 
		goto LABEL581;
	
	LABEL583:
	// Setting char
	flag[232] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL683;
	
	else 
		goto LABEL582;
	
	LABEL584:
	// Setting char
	flag[118] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL585;
	
	else 
		goto LABEL583;
	
	LABEL585:
	// Setting char
	flag[92] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL485;
	
	else 
		goto LABEL586;
	
	LABEL586:
	// Checking char
	flag[78] = '$';
	goto LABEL486;
	
	LABEL587:
	// Setting char
	flag[81] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL487;
	
	else 
		goto LABEL588;
	
	LABEL588:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL589:
	// Setting char
	flag[148] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL489;
	
	else 
		goto LABEL590;
	
	LABEL590:
	// Checking char
	flag[147] = 'N';
	goto LABEL690;
	
	LABEL591:
	// Setting char
	flag[219] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL491;
	
	else 
		goto LABEL592;
	
	LABEL592:
	// Checking char
	flag[21] = 'V';
	goto LABEL492;
	
	LABEL593:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL594:
	// Checking char
	flag[89] = 'C';
	goto LABEL494;
	
	LABEL595:
	// Checking char
	flag[84] = '_';
	goto LABEL594;
	
	LABEL596:
	// Setting char
	flag[211] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL496;
	
	else 
		goto LABEL597;
	
	LABEL597:
	// Setting char
	flag[71] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL697;
	
	else 
		goto LABEL598;
	
	LABEL598:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL599:
	// Checking char
	flag[138] = '&';
	goto LABEL499;
	
	LABEL600:
	// Setting char
	flag[180] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL500;
	
	else 
		goto LABEL700;
	
	LABEL601:
	// Setting char
	flag[35] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL501;
	
	else if (r == 1)
		goto LABEL701;
	
	else 
		goto LABEL600;
	
	LABEL602:
	// Setting char
	flag[140] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL502;
	
	else if (r == 1)
		goto LABEL603;
	
	else 
		goto LABEL601;
	
	LABEL603:
	// Checking char
	flag[214] = '9';
	goto LABEL503;
	
	LABEL604:
	// Checking char
	flag[77] = 'y';
	goto LABEL504;
	
	LABEL605:
	// Checking char
	flag[45] = 't';
	goto LABEL505;
	
	LABEL606:
	// Setting char
	flag[175] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL506;
	
	else 
		goto LABEL605;
	
	LABEL607:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL608:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL609:
	// Checking char
	flag[153] = 'h';
	goto LABEL509;
	
	LABEL610:
	// Checking char
	flag[139] = '/';
	goto LABEL710;
	
	LABEL611:
	// Checking char
	flag[37] = '8';
	goto LABEL610;
	
	LABEL612:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL613:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL614:
	// Checking char
	flag[94] = '@';
	goto LABEL514;
	
	LABEL615:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL616:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL617:
	// Checking char
	flag[38] = 'c';
	goto LABEL616;
	
	LABEL618:
	// Checking char
	flag[151] = 'A';
	goto LABEL718;
	
	LABEL619:
	// Setting char
	flag[178] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL719;
	
	else 
		goto LABEL618;
	
	LABEL620:
	// Setting char
	flag[183] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL621;
	
	else 
		goto LABEL619;
	
	LABEL621:
	// Setting char
	flag[59] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL721;
	
	else 
		goto LABEL622;
	
	LABEL622:
	// Setting char
	flag[37] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL522;
	
	else if (r == 1)
		goto LABEL722;
	
	else 
		goto LABEL623;
	
	LABEL623:
	// Setting char
	flag[153] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL523;
	
	else 
		goto LABEL624;
	
	LABEL624:
	// Setting char
	flag[146] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL524;
	
	else if (r == 1)
		goto LABEL724;
	
	else 
		goto LABEL625;
	
	LABEL625:
	// Setting char
	flag[68] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL525;
	
	else 
		goto LABEL626;
	
	LABEL626:
	// Setting char
	flag[154] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL526;
	
	else 
		goto LABEL627;
	
	LABEL627:
	// Setting char
	flag[220] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL727;
	
	else 
		goto LABEL628;
	
	LABEL628:
	// Setting char
	flag[3] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL528;
	
	else 
		goto LABEL629;
	
	LABEL629:
	// Setting char
	flag[75] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL529;
	
	else if (r == 1)
		goto LABEL729;
	
	else 
		goto LABEL630;
	
	LABEL630:
	// Setting char
	flag[77] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL530;
	
	else 
		goto LABEL631;
	
	LABEL631:
	// Setting char
	flag[126] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL531;
	
	else 
		goto LABEL632;
	
	LABEL632:
	// Setting char
	flag[180] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL532;
	
	else 
		goto LABEL732;
	
	LABEL633:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL634:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL635:
	// Checking char
	flag[124] = '?';
	goto LABEL634;
	
	LABEL636:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL637:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL638:
	// Checking char
	flag[71] = 'd';
	goto LABEL538;
	
	LABEL639:
	// Checking char
	flag[109] = '[';
	goto LABEL539;
	
	LABEL640:
	// Checking char
	flag[106] = ';';
	goto LABEL639;
	
	LABEL641:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL642:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL643:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL644:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL645:
	// Checking char
	flag[75] = 'e';
	goto LABEL644;
	
	LABEL646:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL647:
	// Checking char
	flag[35] = 'C';
	goto LABEL646;
	
	LABEL648:
	// Setting char
	flag[89] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL548;
	
	else 
		goto LABEL647;
	
	LABEL649:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL650:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL651:
	// Setting char
	flag[39] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL551;
	
	else 
		goto LABEL650;
	
	LABEL652:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL653:
	// Checking char
	flag[21] = '{';
	goto LABEL652;
	
	LABEL654:
	// Checking char
	flag[234] = '0';
	goto LABEL554;
	
	LABEL655:
	// Checking char
	flag[93] = '[';
	goto LABEL555;
	
	LABEL656:
	// Setting char
	flag[240] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL756;
	
	else 
		goto LABEL655;
	
	LABEL657:
	// Checking char
	flag[120] = 'T';
	goto LABEL656;
	
	LABEL658:
	// Setting char
	flag[80] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL558;
	
	else 
		goto LABEL659;
	
	LABEL659:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL660:
	// Checking char
	flag[175] = 'B';
	goto LABEL560;
	
	LABEL661:
	// Setting char
	flag[56] = 'U';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL561;
	
	else if (r == 1)
		goto LABEL761;
	
	else 
		goto LABEL660;
	
	LABEL662:
	// Setting char
	flag[198] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL762;
	
	else 
		goto LABEL661;
	
	LABEL663:
	// Setting char
	flag[104] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL563;
	
	else 
		goto LABEL664;
	
	LABEL664:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL665:
	// Checking char
	flag[42] = '+';
	goto LABEL565;
	
	LABEL666:
	// Setting char
	flag[135] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL566;
	
	else 
		goto LABEL665;
	
	LABEL667:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL668:
	// Checking char
	flag[53] = '4';
	goto LABEL669;
	
	LABEL669:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL670:
	// Checking char
	flag[94] = '=';
	goto LABEL570;
	
	LABEL671:
	// Setting char
	flag[55] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL571;
	
	else 
		goto LABEL670;
	
	LABEL672:
	// Checking char
	flag[81] = 'e';
	goto LABEL572;
	
	LABEL673:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL674:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL675:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL676:
	// Setting char
	flag[0] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL576;
	
	else 
		goto LABEL675;
	
	LABEL677:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL679:
	// Setting char
	flag[236] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL579;
	
	else 
		goto LABEL678;
	
	LABEL680:
	// Checking char
	flag[108] = '|';
	goto LABEL679;
	
	LABEL681:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL682:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL683:
	// Checking char
	flag[122] = 'w';
	goto LABEL682;
	
	LABEL684:
	// Checking char
	flag[76] = 's';
	goto LABEL584;
	
	LABEL685:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL686:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL687:
	// Checking char
	flag[58] = 'd';
	goto LABEL587;
	
	LABEL688:
	// Checking char
	flag[213] = '6';
	goto LABEL689;
	
	LABEL689:
	// Checking char
	flag[137] = 'V';
	goto LABEL589;
	
	LABEL690:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL691:
	// Setting char
	flag[2] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL591;
	
	else 
		goto LABEL692;
	
	LABEL692:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL693:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL694:
	// Checking char
	flag[35] = '/';
	goto LABEL693;
	
	LABEL695:
	// Checking char
	flag[61] = ';';
	goto LABEL595;
	
	LABEL696:
	// Checking char
	flag[169] = 'V';
	goto LABEL596;
	
	LABEL697:
	// Checking char
	flag[185] = 'Y';
	goto LABEL698;
	
	LABEL698:
	// Checking char
	flag[232] = 'k';
	goto LABEL699;
	
	LABEL699:
	// Checking char
	flag[90] = 'q';
	goto LABEL599;
	
	LABEL700:
	// Checking char
	flag[62] = 'c';
	goto LABEL800;
	
	LABEL701:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL702:
	// Setting char
	flag[210] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL602;
	
	else 
		goto LABEL802;
	
	LABEL703:
	// Checking char
	flag[25] = '.';
	goto LABEL702;
	
	LABEL704:
	// Setting char
	flag[220] = ')';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL604;
	
	else if (r == 1)
		goto LABEL804;
	
	else 
		goto LABEL703;
	
	LABEL705:
	// Checking char
	flag[144] = 'M';
	goto LABEL704;
	
	LABEL706:
	// Setting char
	flag[15] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL606;
	
	else 
		goto LABEL705;
	
	LABEL707:
	// Checking char
	flag[244] = '.';
	goto LABEL607;
	
	LABEL708:
	// Checking char
	flag[121] = 'R';
	goto LABEL608;
	
	LABEL709:
	// Checking char
	flag[14] = '|';
	goto LABEL609;
	
	LABEL710:
	// Checking char
	flag[73] = 'b';
	goto LABEL711;
	
	LABEL711:
	// Checking char
	flag[6] = '6';
	goto LABEL712;
	
	LABEL712:
	// Checking char
	flag[185] = '|';
	goto LABEL812;
	
	LABEL713:
	// Checking char
	flag[212] = 'P';
	goto LABEL813;
	
	LABEL714:
	// Setting char
	flag[1] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL614;
	
	else 
		goto LABEL713;
	
	LABEL715:
	// Setting char
	flag[239] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL615;
	
	else 
		goto LABEL714;
	
	LABEL716:
	// Checking char
	flag[224] = ')';
	goto LABEL715;
	
	LABEL717:
	// Setting char
	flag[61] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL817;
	
	else 
		goto LABEL716;
	
	LABEL718:
	// Checking char
	flag[113] = 'm';
	goto LABEL717;
	
	LABEL719:
	// Checking char
	flag[176] = '6';
	goto LABEL819;
	
	LABEL720:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL721:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL722:
	// Checking char
	flag[118] = 'w';
	goto LABEL822;
	
	LABEL723:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL724:
	// Setting char
	flag[141] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL824;
	
	else 
		goto LABEL725;
	
	LABEL725:
	// Checking char
	flag[172] = ';';
	goto LABEL825;
	
	LABEL726:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL727:
	// Setting char
	flag[212] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL728;
	
	else 
		goto LABEL726;
	
	LABEL728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL729:
	// Checking char
	flag[95] = 'S';
	goto LABEL730;
	
	LABEL730:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL731:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL732:
	// Setting char
	flag[52] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL832;
	
	else 
		goto LABEL733;
	
	LABEL733:
	// Checking char
	flag[203] = 'u';
	goto LABEL633;
	
	LABEL734:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL735:
	// Checking char
	flag[63] = '4';
	goto LABEL734;
	
	LABEL736:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL737:
	// Setting char
	flag[245] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL637;
	
	else 
		goto LABEL736;
	
	LABEL738:
	// Setting char
	flag[37] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL638;
	
	else 
		goto LABEL737;
	
	LABEL739:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL740:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL741:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL742:
	// Checking char
	flag[207] = '%';
	goto LABEL741;
	
	LABEL743:
	// Setting char
	flag[180] = 'B';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL643;
	
	else if (r == 1)
		goto LABEL744;
	
	else 
		goto LABEL742;
	
	LABEL744:
	// Checking char
	flag[61] = 'O';
	goto LABEL745;
	
	LABEL745:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL746:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL747:
	// Checking char
	flag[143] = ';';
	goto LABEL746;
	
	LABEL748:
	// Setting char
	flag[108] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL648;
	
	else 
		goto LABEL747;
	
	LABEL749:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL750:
	// Setting char
	flag[111] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL850;
	
	else 
		goto LABEL749;
	
	LABEL751:
	// Setting char
	flag[136] = 'Q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL651;
	
	else if (r == 1)
		goto LABEL851;
	
	else 
		goto LABEL750;
	
	LABEL752:
	// Checking char
	flag[217] = '(';
	goto LABEL751;
	
	LABEL753:
	// Setting char
	flag[200] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL653;
	
	else 
		goto LABEL752;
	
	LABEL754:
	// Checking char
	flag[64] = '@';
	goto LABEL654;
	
	LABEL755:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL756:
	// Checking char
	flag[3] = '#';
	goto LABEL856;
	
	LABEL757:
	// Setting char
	flag[139] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL657;
	
	else 
		goto LABEL857;
	
	LABEL758:
	// Setting char
	flag[117] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL658;
	
	else 
		goto LABEL757;
	
	LABEL759:
	// Checking char
	flag[57] = '}';
	goto LABEL758;
	
	LABEL760:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL761:
	// Checking char
	flag[18] = 'L';
	goto LABEL760;
	
	LABEL762:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL763:
	// Checking char
	flag[202] = 'v';
	goto LABEL663;
	
	LABEL764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL765:
	// Checking char
	flag[240] = 'B';
	goto LABEL865;
	
	LABEL766:
	// Setting char
	flag[34] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL666;
	
	else if (r == 1)
		goto LABEL866;
	
	else 
		goto LABEL765;
	
	LABEL767:
	// Setting char
	flag[204] = 'f';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL667;
	
	else if (r == 1)
		goto LABEL768;
	
	else 
		goto LABEL766;
	
	LABEL768:
	// Setting char
	flag[161] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL668;
	
	else 
		goto LABEL868;
	
	LABEL769:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL770:
	// Checking char
	flag[246] = '*';
	goto LABEL769;
	
	LABEL771:
	// Setting char
	flag[144] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL671;
	
	else if (r == 1)
		goto LABEL871;
	
	else 
		goto LABEL770;
	
	LABEL772:
	// Setting char
	flag[205] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL672;
	
	else if (r == 1)
		goto LABEL872;
	
	else 
		goto LABEL771;
	
	LABEL773:
	// Setting char
	flag[214] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL873;
	
	else 
		goto LABEL772;
	
	LABEL774:
	// Setting char
	flag[220] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL674;
	
	else if (r == 1)
		goto LABEL874;
	
	else 
		goto LABEL773;
	
	LABEL775:
	// Checking char
	flag[95] = '^';
	goto LABEL774;
	
	LABEL776:
	// Setting char
	flag[219] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL676;
	
	else 
		goto LABEL777;
	
	LABEL777:
	// Setting char
	flag[152] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL677;
	
	else 
		goto LABEL877;
	
	LABEL778:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL779:
	// Checking char
	flag[14] = 'I';
	goto LABEL879;
	
	LABEL780:
	// Setting char
	flag[100] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL680;
	
	else 
		goto LABEL779;
	
	LABEL781:
	// Checking char
	flag[0] = '!';
	goto LABEL780;
	
	LABEL782:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL783:
	// Checking char
	flag[188] = '!';
	goto LABEL782;
	
	LABEL784:
	// Setting char
	flag[54] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL684;
	
	else 
		goto LABEL783;
	
	LABEL785:
	// Setting char
	flag[59] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL685;
	
	else 
		goto LABEL786;
	
	LABEL786:
	// Checking char
	flag[99] = 'v';
	goto LABEL686;
	
	LABEL787:
	// Checking char
	flag[19] = 'N';
	goto LABEL687;
	
	LABEL788:
	// Checking char
	flag[149] = 's';
	goto LABEL688;
	
	LABEL789:
	// Setting char
	flag[192] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL790;
	
	else 
		goto LABEL788;
	
	LABEL790:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL791:
	// Checking char
	flag[72] = '|';
	goto LABEL691;
	
	LABEL792:
	// Checking char
	flag[50] = ':';
	goto LABEL793;
	
	LABEL793:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL794:
	// Checking char
	flag[45] = '.';
	goto LABEL694;
	
	LABEL795:
	// Checking char
	flag[240] = 'R';
	goto LABEL695;
	
	LABEL796:
	// Checking char
	flag[34] = 'O';
	goto LABEL696;
	
	LABEL797:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL798:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL799:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL801:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL802:
	// Setting char
	flag[186] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL803;
	
	else 
		goto LABEL801;
	
	LABEL803:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL804:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL806:
	// Setting char
	flag[69] = '/';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL706;
	
	else if (r == 1)
		goto LABEL906;
	
	else 
		goto LABEL805;
	
	LABEL807:
	// Setting char
	flag[66] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL707;
	
	else if (r == 1)
		goto LABEL907;
	
	else 
		goto LABEL806;
	
	LABEL808:
	// Setting char
	flag[205] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL708;
	
	else if (r == 1)
		goto LABEL908;
	
	else 
		goto LABEL807;
	
	LABEL809:
	// Setting char
	flag[238] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL709;
	
	else 
		goto LABEL808;
	
	LABEL810:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL811:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL812:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL813:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL814:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL816:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL817:
	// Setting char
	flag[85] = 'N';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL917;
	
	else if (r == 1)
		goto LABEL818;
	
	else 
		goto LABEL816;
	
	LABEL818:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL819:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL820:
	// Setting char
	flag[25] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL720;
	
	else 
		goto LABEL920;
	
	LABEL821:
	// Checking char
	flag[164] = 'n';
	goto LABEL820;
	
	LABEL822:
	// Setting char
	flag[127] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL922;
	
	else 
		goto LABEL821;
	
	LABEL823:
	// Checking char
	flag[175] = '2';
	goto LABEL723;
	
	LABEL824:
	// Setting char
	flag[122] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL924;
	
	else 
		goto LABEL823;
	
	LABEL825:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL826:
	// Checking char
	flag[198] = 'b';
	goto LABEL926;
	
	LABEL827:
	// Checking char
	flag[148] = 'z';
	goto LABEL826;
	
	LABEL828:
	// Checking char
	flag[153] = '}';
	goto LABEL827;
	
	LABEL829:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL830:
	// Checking char
	flag[53] = '=';
	goto LABEL829;
	
	LABEL831:
	// Setting char
	flag[170] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL731;
	
	else 
		goto LABEL830;
	
	LABEL832:
	// Setting char
	flag[130] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL932;
	
	else 
		goto LABEL831;
	
	LABEL833:
	// Checking char
	flag[30] = 'X';
	goto LABEL834;
	
	LABEL834:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL835:
	// Checking char
	flag[216] = '|';
	goto LABEL735;
	
	LABEL836:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL837:
	// Setting char
	flag[181] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL937;
	
	else 
		goto LABEL836;
	
	LABEL838:
	// Setting char
	flag[196] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL738;
	
	else 
		goto LABEL837;
	
	LABEL839:
	// Setting char
	flag[218] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL739;
	
	else 
		goto LABEL838;
	
	LABEL840:
	// Checking char
	flag[49] = 't';
	goto LABEL740;
	
	LABEL841:
	// Checking char
	flag[165] = 'm';
	goto LABEL840;
	
	LABEL842:
	// Checking char
	flag[123] = '#';
	goto LABEL841;
	
	LABEL843:
	// Setting char
	flag[134] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL743;
	
	else 
		goto LABEL844;
	
	LABEL844:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL845:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL846:
	// Setting char
	flag[136] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL946;
	
	else 
		goto LABEL845;
	
	LABEL847:
	// Checking char
	flag[194] = 'F';
	goto LABEL846;
	
	LABEL848:
	// Setting char
	flag[144] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL748;
	
	else 
		goto LABEL847;
	
	LABEL849:
	// Setting char
	flag[75] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL949;
	
	else 
		goto LABEL848;
	
	LABEL850:
	// Setting char
	flag[28] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL950;
	
	else 
		goto LABEL849;
	
	LABEL851:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL852:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL853:
	// Setting char
	flag[59] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL753;
	
	else 
		goto LABEL953;
	
	LABEL854:
	// Setting char
	flag[173] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL754;
	
	else if (r == 1)
		goto LABEL855;
	
	else 
		goto LABEL853;
	
	LABEL855:
	// Checking char
	flag[138] = '`';
	goto LABEL755;
	
	LABEL856:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL857:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL858:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL859:
	// Checking char
	flag[103] = 'G';
	goto LABEL759;
	
	LABEL860:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL861:
	// Checking char
	flag[247] = '/';
	goto LABEL862;
	
	LABEL862:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL863:
	// Setting char
	flag[90] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL763;
	
	else 
		goto LABEL963;
	
	LABEL864:
	// Setting char
	flag[86] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL764;
	
	else 
		goto LABEL863;
	
	LABEL865:
	// Setting char
	flag[0] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL965;
	
	else 
		goto LABEL864;
	
	LABEL866:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL867:
	// Checking char
	flag[208] = 'S';
	goto LABEL767;
	
	LABEL868:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL869:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL870:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL871:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL872:
	// Checking char
	flag[120] = 'g';
	goto LABEL972;
	
	LABEL873:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL874:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL875:
	// Checking char
	flag[9] = 'A';
	goto LABEL775;
	
	LABEL876:
	// Checking char
	flag[114] = '3';
	goto LABEL776;
	
	LABEL877:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL878:
	// Checking char
	flag[12] = 'Y';
	goto LABEL778;
	
	LABEL879:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL880:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL881:
	// Setting char
	flag[235] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL781;
	
	else 
		goto LABEL880;
	
	LABEL882:
	// Checking char
	flag[109] = 'q';
	goto LABEL881;
	
	LABEL883:
	// Checking char
	flag[232] = '<';
	goto LABEL983;
	
	LABEL884:
	// Setting char
	flag[29] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL784;
	
	else 
		goto LABEL883;
	
	LABEL885:
	// Checking char
	flag[214] = '{';
	goto LABEL785;
	
	LABEL886:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL887:
	// Setting char
	flag[30] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL787;
	
	else 
		goto LABEL886;
	
	LABEL888:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL889:
	// Setting char
	flag[236] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL789;
	
	else if (r == 1)
		goto LABEL890;
	
	else 
		goto LABEL888;
	
	LABEL890:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL891:
	// Checking char
	flag[9] = '&';
	goto LABEL791;
	
	LABEL892:
	// Setting char
	flag[21] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL792;
	
	else 
		goto LABEL891;
	
	LABEL893:
	// Setting char
	flag[104] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL894;
	
	else 
		goto LABEL892;
	
	LABEL894:
	// Checking char
	flag[59] = '"';
	goto LABEL794;
	
	LABEL895:
	// Checking char
	flag[249] = 'b';
	goto LABEL795;
	
	LABEL896:
	// Setting char
	flag[15] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL796;
	
	else 
		goto LABEL897;
	
	LABEL897:
	// Setting char
	flag[187] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL797;
	
	else 
		goto LABEL898;
	
	LABEL898:
	// Setting char
	flag[157] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL798;
	
	else 
		goto LABEL899;
	
	LABEL899:
	// Checking char
	flag[150] = '~';
	goto LABEL799;
	
	LABEL900:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL901:
	// Checking char
	flag[113] = 'J';
	goto LABEL900;
	
	LABEL902:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL903:
	// Checking char
	flag[39] = 'H';
	goto LABEL902;
	
	LABEL904:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL905:
	// Setting char
	flag[5] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1005;
	
	else 
		goto LABEL904;
	
	LABEL906:
	// Checking char
	flag[127] = 'Q';
	goto LABEL905;
	
	LABEL907:
	// Checking char
	flag[183] = '8';
	goto LABEL1007;
	
	LABEL908:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL909:
	// Checking char
	flag[146] = '2';
	goto LABEL809;
	
	LABEL910:
	// Checking char
	flag[41] = '|';
	goto LABEL810;
	
	LABEL911:
	// Setting char
	flag[145] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL811;
	
	else 
		goto LABEL910;
	
	LABEL912:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL913:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL914:
	// Setting char
	flag[176] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL814;
	
	else 
		goto LABEL913;
	
	LABEL915:
	// Setting char
	flag[202] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL815;
	
	else 
		goto LABEL914;
	
	LABEL916:
	// Checking char
	flag[166] = 'W';
	goto LABEL915;
	
	LABEL917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL918:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL920:
	// Checking char
	flag[192] = 'l';
	goto LABEL1020;
	
	LABEL921:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL922:
	// Setting char
	flag[46] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL923;
	
	else 
		goto LABEL921;
	
	LABEL923:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL924:
	// Setting char
	flag[92] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1024;
	
	else 
		goto LABEL925;
	
	LABEL925:
	// Checking char
	flag[203] = '.';
	goto LABEL1025;
	
	LABEL926:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL927:
	// Checking char
	flag[149] = 'H';
	goto LABEL1027;
	
	LABEL928:
	// Setting char
	flag[201] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL828;
	
	else 
		goto LABEL927;
	
	LABEL929:
	// Setting char
	flag[139] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1029;
	
	else 
		goto LABEL928;
	
	LABEL930:
	// Setting char
	flag[33] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1030;
	
	else 
		goto LABEL929;
	
	LABEL931:
	// Setting char
	flag[185] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1031;
	
	else 
		goto LABEL930;
	
	LABEL932:
	// Setting char
	flag[144] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1032;
	
	else if (r == 1)
		goto LABEL933;
	
	else 
		goto LABEL931;
	
	LABEL933:
	// Setting char
	flag[163] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL833;
	
	else 
		goto LABEL934;
	
	LABEL934:
	// Setting char
	flag[111] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1034;
	
	else 
		goto LABEL935;
	
	LABEL935:
	// Setting char
	flag[190] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL835;
	
	else 
		goto LABEL1035;
	
	LABEL936:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL937:
	// Checking char
	flag[146] = 'd';
	goto LABEL936;
	
	LABEL938:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL939:
	// Setting char
	flag[111] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL839;
	
	else if (r == 1)
		goto LABEL940;
	
	else 
		goto LABEL938;
	
	LABEL940:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL941:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL942:
	// Checking char
	flag[125] = 'G';
	goto LABEL842;
	
	LABEL943:
	// Checking char
	flag[209] = '3';
	goto LABEL843;
	
	LABEL944:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL945:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL946:
	// Checking char
	flag[19] = 'c';
	goto LABEL947;
	
	LABEL947:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL948:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL949:
	// Checking char
	flag[46] = 'K';
	goto LABEL948;
	
	LABEL950:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL952:
	// Setting char
	flag[218] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL852;
	
	else 
		goto LABEL951;
	
	LABEL953:
	// Checking char
	flag[57] = '>';
	goto LABEL952;
	
	LABEL954:
	// Checking char
	flag[235] = '"';
	goto LABEL854;
	
	LABEL955:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL956:
	// Checking char
	flag[69] = '`';
	goto LABEL955;
	
	LABEL957:
	// Checking char
	flag[191] = 'l';
	goto LABEL956;
	
	LABEL958:
	// Setting char
	flag[63] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL858;
	
	else 
		goto LABEL957;
	
	LABEL959:
	// Setting char
	flag[167] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL859;
	
	else 
		goto LABEL958;
	
	LABEL960:
	// Checking char
	flag[140] = 'a';
	goto LABEL860;
	
	LABEL961:
	// Checking char
	flag[58] = 'T';
	goto LABEL861;
	
	LABEL962:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL963:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL964:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL965:
	// Checking char
	flag[1] = '8';
	goto LABEL964;
	
	LABEL966:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL967:
	// Setting char
	flag[121] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL867;
	
	else if (r == 1)
		goto LABEL968;
	
	else 
		goto LABEL966;
	
	LABEL968:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL969:
	// Setting char
	flag[195] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL869;
	
	else 
		goto LABEL970;
	
	LABEL970:
	// Setting char
	flag[200] = 'U';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL870;
	
	else if (r == 1)
		goto LABEL1070;
	
	else 
		goto LABEL971;
	
	LABEL971:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL973:
	// Checking char
	flag[190] = '0';
	goto LABEL1073;
	
	LABEL974:
	// Checking char
	flag[202] = '_';
	goto LABEL973;
	
	LABEL975:
	// Setting char
	flag[207] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL875;
	
	else 
		goto LABEL974;
	
	LABEL976:
	// Setting char
	flag[197] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL876;
	
	else 
		goto LABEL977;
	
	LABEL977:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL978:
	// Checking char
	flag[74] = 'y';
	goto LABEL878;
	
	LABEL979:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL980:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL981:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL982:
	// Setting char
	flag[7] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL882;
	
	else 
		goto LABEL981;
	
	LABEL983:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL984:
	// Checking char
	flag[201] = '/';
	goto LABEL884;
	
	LABEL985:
	// Setting char
	flag[223] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL885;
	
	else 
		goto LABEL984;
	
	LABEL986:
	// Setting char
	flag[202] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1086;
	
	else 
		goto LABEL985;
	
	LABEL987:
	// Setting char
	flag[42] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL887;
	
	else 
		goto LABEL986;
	
	LABEL988:
	// Checking char
	flag[104] = '>';
	goto LABEL987;
	
	LABEL989:
	// Checking char
	flag[199] = 'l';
	goto LABEL889;
	
	LABEL990:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL991:
	// Checking char
	flag[176] = 'g';
	goto LABEL990;
	
	LABEL992:
	// Setting char
	flag[52] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1092;
	
	else 
		goto LABEL991;
	
	LABEL993:
	// Setting char
	flag[247] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL893;
	
	else if (r == 1)
		goto LABEL994;
	
	else 
		goto LABEL992;
	
	LABEL994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL995:
	// Setting char
	flag[238] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL895;
	
	else 
		goto LABEL996;
	
	LABEL996:
	// Setting char
	flag[237] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL896;
	
	else 
		goto LABEL997;
	
	LABEL997:
	// Checking char
	flag[137] = 'O';
	goto LABEL1097;
	
	LABEL998:
	// Checking char
	flag[206] = '3';
	goto LABEL999;
	
	LABEL999:
	// Checking char
	flag[119] = 's';
	goto LABEL1099;
	
	LABEL1000:
	// Checking char
	flag[160] = '$';
	goto LABEL1100;
	
	LABEL1001:
	// Setting char
	flag[85] = 'x';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL901;
	
	else if (r == 1)
		goto LABEL1101;
	
	else 
		goto LABEL1000;
	
	LABEL1002:
	// Setting char
	flag[195] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1102;
	
	else 
		goto LABEL1001;
	
	LABEL1003:
	// Setting char
	flag[247] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL903;
	
	else 
		goto LABEL1002;
	
	LABEL1004:
	// Setting char
	flag[56] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1104;
	
	else 
		goto LABEL1003;
	
	LABEL1005:
	// Checking char
	flag[105] = 'W';
	goto LABEL1004;
	
	LABEL1006:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1007:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1008:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1009:
	// Setting char
	flag[76] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL909;
	
	else 
		goto LABEL1010;
	
	LABEL1010:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1011:
	// Setting char
	flag[105] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL911;
	
	else 
		goto LABEL1111;
	
	LABEL1012:
	// Setting char
	flag[135] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL912;
	
	else 
		goto LABEL1011;
	
	LABEL1013:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1014:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1015:
	// Checking char
	flag[208] = 'D';
	goto LABEL1014;
	
	LABEL1016:
	// Checking char
	flag[91] = '"';
	goto LABEL916;
	
	LABEL1017:
	// Checking char
	flag[228] = '"';
	goto LABEL1018;
	
	LABEL1018:
	// Checking char
	flag[206] = 'T';
	goto LABEL918;
	
	LABEL1019:
	// Checking char
	flag[23] = 'y';
	goto LABEL919;
	
	LABEL1020:
	// Setting char
	flag[87] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1021;
	
	else 
		goto LABEL1019;
	
	LABEL1021:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1022:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1023:
	// Checking char
	flag[83] = 'K';
	goto LABEL1022;
	
	LABEL1024:
	// Checking char
	flag[182] = 'S';
	goto LABEL1023;
	
	LABEL1025:
	// Checking char
	flag[58] = '0';
	goto LABEL1125;
	
	LABEL1026:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1027:
	// Setting char
	flag[142] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1028;
	
	else 
		goto LABEL1026;
	
	LABEL1028:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1029:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1030:
	// Checking char
	flag[151] = 'o';
	goto LABEL1130;
	
	LABEL1031:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1032:
	// Setting char
	flag[156] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1132;
	
	else 
		goto LABEL1033;
	
	LABEL1033:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1034:
	// Checking char
	flag[204] = '&';
	goto LABEL1134;
	
	LABEL1035:
	// Setting char
	flag[0] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1135;
	
	else 
		goto LABEL1036;
	
	LABEL1036:
	// Checking char
	flag[247] = 'o';
	goto LABEL1037;
	
	LABEL1037:
	// Checking char
	flag[94] = 'G';
	goto LABEL1038;
	
	LABEL1038:
	// Checking char
	flag[26] = '_';
	goto LABEL1039;
	
	LABEL1039:
	// Setting char
	flag[225] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL939;
	
	else if (r == 1)
		goto LABEL1139;
	
	else 
		goto LABEL1040;
	
	LABEL1040:
	// Checking char
	flag[155] = 'H';
	goto LABEL1041;
	
	LABEL1041:
	// Setting char
	flag[100] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL941;
	
	else 
		goto LABEL1141;
	
	LABEL1042:
	// Checking char
	flag[110] = '(';
	goto LABEL942;
	
	LABEL1043:
	// Setting char
	flag[109] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL943;
	
	else if (r == 1)
		goto LABEL1044;
	
	else 
		goto LABEL1042;
	
	LABEL1044:
	// Setting char
	flag[145] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL944;
	
	else 
		goto LABEL1045;
	
	LABEL1045:
	// Setting char
	flag[48] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL945;
	
	else if (r == 1)
		goto LABEL1145;
	
	else 
		goto LABEL1046;
	
	LABEL1046:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1047:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1048:
	// Setting char
	flag[13] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1049;
	
	else 
		goto LABEL1047;
	
	LABEL1049:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1050:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1051:
	// Checking char
	flag[87] = '_';
	goto LABEL1052;
	
	LABEL1052:
	// Checking char
	flag[182] = 'o';
	goto LABEL1152;
	
	LABEL1053:
	// Checking char
	flag[20] = 'T';
	goto LABEL1054;
	
	LABEL1054:
	// Setting char
	flag[160] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL954;
	
	else if (r == 1)
		goto LABEL1154;
	
	else 
		goto LABEL1055;
	
	LABEL1055:
	// Checking char
	flag[211] = 'o';
	goto LABEL1155;
	
	LABEL1056:
	// Checking char
	flag[212] = 'G';
	goto LABEL1057;
	
	LABEL1057:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1058:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1059:
	// Setting char
	flag[123] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL959;
	
	else 
		goto LABEL1058;
	
	LABEL1060:
	// Setting char
	flag[192] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL960;
	
	else 
		goto LABEL1059;
	
	LABEL1061:
	// Setting char
	flag[194] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL961;
	
	else 
		goto LABEL1060;
	
	LABEL1062:
	// Setting char
	flag[19] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL962;
	
	else 
		goto LABEL1061;
	
	LABEL1063:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1064:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1065:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1066:
	// Checking char
	flag[176] = '>';
	goto LABEL1065;
	
	LABEL1067:
	// Setting char
	flag[220] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL967;
	
	else 
		goto LABEL1066;
	
	LABEL1068:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1069:
	// Checking char
	flag[37] = 'F';
	goto LABEL969;
	
	LABEL1070:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1071:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1072:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1073:
	// Checking char
	flag[87] = 'm';
	goto LABEL1173;
	
	LABEL1074:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1075:
	// Setting char
	flag[137] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL975;
	
	else 
		goto LABEL1074;
	
	LABEL1076:
	// Checking char
	flag[201] = 'Q';
	goto LABEL976;
	
	LABEL1077:
	// Setting char
	flag[33] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1078;
	
	else 
		goto LABEL1076;
	
	LABEL1078:
	// Setting char
	flag[246] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL978;
	
	else 
		goto LABEL1079;
	
	LABEL1079:
	// Checking char
	flag[210] = '*';
	goto LABEL979;
	
	LABEL1080:
	// Checking char
	flag[197] = 'y';
	goto LABEL980;
	
	LABEL1081:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1082:
	// Setting char
	flag[4] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL982;
	
	else 
		goto LABEL1081;
	
	LABEL1083:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1084:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1085:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1086:
	// Checking char
	flag[175] = 'V';
	goto LABEL1085;
	
	LABEL1087:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1088:
	// Setting char
	flag[1] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL988;
	
	else 
		goto LABEL1087;
	
	LABEL1089:
	// Setting char
	flag[231] = '"';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL989;
	
	else if (r == 1)
		goto LABEL1090;
	
	else 
		goto LABEL1088;
	
	LABEL1090:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1091:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1092:
	// Checking char
	flag[76] = 'z';
	goto LABEL1091;
	
	LABEL1093:
	// Checking char
	flag[88] = '%';
	goto LABEL993;
	
	LABEL1094:
	// Setting char
	flag[186] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1095;
	
	else 
		goto LABEL1093;
	
	LABEL1095:
	// Checking char
	flag[169] = 'C';
	goto LABEL995;
	
	LABEL1096:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1097:
	// Checking char
	flag[237] = '[';
	goto LABEL1098;
	
	LABEL1098:
	// Setting char
	flag[141] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL998;
	
	else 
		goto LABEL1198;
	
	LABEL1099:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1100:
	// Checking char
	flag[182] = '`';
	goto LABEL1200;
	
	LABEL1101:
	// Checking char
	flag[163] = 'v';
	goto LABEL1201;
	
	LABEL1102:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1103:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1104:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1106:
	// Checking char
	flag[105] = 'E';
	goto LABEL1006;
	
	LABEL1107:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1108:
	// Checking char
	flag[194] = 'o';
	goto LABEL1008;
	
	LABEL1109:
	// Setting char
	flag[78] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1009;
	
	else 
		goto LABEL1108;
	
	LABEL1110:
	// Checking char
	flag[155] = 'd';
	goto LABEL1109;
	
	LABEL1111:
	// Checking char
	flag[68] = ';';
	goto LABEL1110;
	
	LABEL1112:
	// Checking char
	flag[118] = 'k';
	goto LABEL1012;
	
	LABEL1113:
	// Checking char
	flag[3] = 'w';
	goto LABEL1013;
	
	LABEL1114:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1115:
	// Setting char
	flag[188] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1015;
	
	else 
		goto LABEL1215;
	
	LABEL1116:
	// Setting char
	flag[190] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1016;
	
	else 
		goto LABEL1115;
	
	LABEL1117:
	// Setting char
	flag[190] = '/';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1017;
	
	else if (r == 1)
		goto LABEL1217;
	
	else 
		goto LABEL1116;
	
	LABEL1118:
	// Checking char
	flag[75] = '&';
	goto LABEL1117;
	
	LABEL1119:
	// Checking char
	flag[208] = 'i';
	goto LABEL1118;
	
	LABEL1120:
	// Checking char
	flag[76] = 'D';
	goto LABEL1121;
	
	LABEL1121:
	// Checking char
	flag[32] = '/';
	goto LABEL1122;
	
	LABEL1122:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1123:
	// Checking char
	flag[22] = '^';
	goto LABEL1124;
	
	LABEL1124:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1125:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1126:
	// Checking char
	flag[86] = 'T';
	goto LABEL1127;
	
	LABEL1127:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1128:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1129:
	// Checking char
	flag[131] = '1';
	goto LABEL1128;
	
	LABEL1130:
	// Checking char
	flag[173] = 'L';
	goto LABEL1129;
	
	LABEL1131:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1132:
	// Setting char
	flag[208] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1232;
	
	else 
		goto LABEL1131;
	
	LABEL1133:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1134:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1135:
	// Checking char
	flag[40] = '3';
	goto LABEL1235;
	
	LABEL1136:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1137:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1138:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1139:
	// Checking char
	flag[117] = ')';
	goto LABEL1239;
	
	LABEL1140:
	// Checking char
	flag[167] = '_';
	goto LABEL1240;
	
	LABEL1141:
	// Setting char
	flag[70] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1142;
	
	else 
		goto LABEL1140;
	
	LABEL1142:
	// Checking char
	flag[244] = 'd';
	goto LABEL1242;
	
	LABEL1143:
	// Checking char
	flag[54] = '_';
	goto LABEL1043;
	
	LABEL1144:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1145:
	// Setting char
	flag[158] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1245;
	
	else if (r == 1)
		goto LABEL1146;
	
	else 
		goto LABEL1144;
	
	LABEL1146:
	// Setting char
	flag[201] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1246;
	
	else 
		goto LABEL1147;
	
	LABEL1147:
	// Setting char
	flag[6] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1247;
	
	else 
		goto LABEL1148;
	
	LABEL1148:
	// Setting char
	flag[53] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1048;
	
	else 
		goto LABEL1149;
	
	LABEL1149:
	// Setting char
	flag[217] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1249;
	
	else 
		goto LABEL1150;
	
	LABEL1150:
	// Setting char
	flag[13] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1050;
	
	else if (r == 1)
		goto LABEL1250;
	
	else 
		goto LABEL1151;
	
	LABEL1151:
	// Checking char
	flag[178] = '_';
	goto LABEL1051;
	
	LABEL1152:
	// Setting char
	flag[195] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1252;
	
	else 
		goto LABEL1153;
	
	LABEL1153:
	// Checking char
	flag[67] = 'o';
	goto LABEL1053;
	
	LABEL1154:
	// Checking char
	flag[6] = 'H';
	goto LABEL1254;
	
	LABEL1155:
	// Checking char
	flag[117] = 'q';
	goto LABEL1156;
	
	LABEL1156:
	// Setting char
	flag[124] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1056;
	
	else 
		goto LABEL1157;
	
	LABEL1157:
	// Setting char
	flag[204] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1257;
	
	else 
		goto LABEL1158;
	
	LABEL1158:
	// Checking char
	flag[64] = 'u';
	goto LABEL1258;
	
	LABEL1159:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1160:
	// Checking char
	flag[213] = 'o';
	goto LABEL1159;
	
	LABEL1161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1162:
	// Setting char
	flag[73] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1062;
	
	else 
		goto LABEL1161;
	
	LABEL1163:
	// Setting char
	flag[216] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1063;
	
	else 
		goto LABEL1162;
	
	LABEL1164:
	// Setting char
	flag[133] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1064;
	
	else 
		goto LABEL1163;
	
	LABEL1165:
	// Checking char
	flag[118] = 'u';
	goto LABEL1166;
	
	LABEL1166:
	// Checking char
	flag[214] = 'S';
	goto LABEL1167;
	
	LABEL1167:
	// Setting char
	flag[89] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1067;
	
	else 
		goto LABEL1168;
	
	LABEL1168:
	// Setting char
	flag[218] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1068;
	
	else if (r == 1)
		goto LABEL1268;
	
	else 
		goto LABEL1169;
	
	LABEL1169:
	// Setting char
	flag[219] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1069;
	
	else 
		goto LABEL1170;
	
	LABEL1170:
	// Checking char
	flag[25] = 't';
	goto LABEL1270;
	
	LABEL1171:
	// Setting char
	flag[127] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1071;
	
	else 
		goto LABEL1172;
	
	LABEL1172:
	// Checking char
	flag[124] = ')';
	goto LABEL1072;
	
	LABEL1173:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1174:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1175:
	// Setting char
	flag[3] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1075;
	
	else 
		goto LABEL1275;
	
	LABEL1176:
	// Setting char
	flag[137] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1276;
	
	else 
		goto LABEL1175;
	
	LABEL1177:
	// Setting char
	flag[51] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1077;
	
	else if (r == 1)
		goto LABEL1178;
	
	else 
		goto LABEL1176;
	
	LABEL1178:
	// Checking char
	flag[24] = 'E';
	goto LABEL1179;
	
	LABEL1179:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1180:
	// Setting char
	flag[68] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1080;
	
	else 
		goto LABEL1280;
	
	LABEL1181:
	// Checking char
	flag[215] = '9';
	goto LABEL1180;
	
	LABEL1182:
	// Setting char
	flag[238] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1082;
	
	else 
		goto LABEL1181;
	
	LABEL1183:
	// Setting char
	flag[241] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1083;
	
	else 
		goto LABEL1182;
	
	LABEL1184:
	// Setting char
	flag[19] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1084;
	
	else 
		goto LABEL1183;
	
	LABEL1185:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1186:
	// Checking char
	flag[19] = 'X';
	goto LABEL1185;
	
	LABEL1187:
	// Setting char
	flag[148] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1188;
	
	else 
		goto LABEL1186;
	
	LABEL1188:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1189:
	// Checking char
	flag[45] = ']';
	goto LABEL1089;
	
	LABEL1190:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1191:
	// Checking char
	flag[21] = '}';
	goto LABEL1190;
	
	LABEL1192:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1193:
	// Checking char
	flag[0] = '0';
	goto LABEL1192;
	
	LABEL1194:
	// Setting char
	flag[133] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1094;
	
	else if (r == 1)
		goto LABEL1195;
	
	else 
		goto LABEL1193;
	
	LABEL1195:
	// Checking char
	flag[31] = '|';
	goto LABEL1196;
	
	LABEL1196:
	// Setting char
	flag[18] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1096;
	
	else 
		goto LABEL1197;
	
	LABEL1197:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1199:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1200:
	// Checking char
	flag[203] = 'i';
	goto LABEL1300;
	
	LABEL1201:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1202:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1203:
	// Setting char
	flag[60] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1103;
	
	else 
		goto LABEL1202;
	
	LABEL1204:
	// Checking char
	flag[211] = 'D';
	goto LABEL1203;
	
	LABEL1205:
	// Setting char
	flag[75] = 'R';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1105;
	
	else if (r == 1)
		goto LABEL1305;
	
	else 
		goto LABEL1204;
	
	LABEL1206:
	// Setting char
	flag[135] = 'Q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1106;
	
	else if (r == 1)
		goto LABEL1306;
	
	else 
		goto LABEL1205;
	
	LABEL1207:
	// Setting char
	flag[73] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1107;
	
	else 
		goto LABEL1206;
	
	LABEL1208:
	// Setting char
	flag[123] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1209;
	
	else 
		goto LABEL1207;
	
	LABEL1209:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1210:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1211:
	// Setting char
	flag[118] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1311;
	
	else 
		goto LABEL1210;
	
	LABEL1212:
	// Setting char
	flag[181] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1112;
	
	else 
		goto LABEL1211;
	
	LABEL1213:
	// Setting char
	flag[213] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1113;
	
	else if (r == 1)
		goto LABEL1214;
	
	else 
		goto LABEL1212;
	
	LABEL1214:
	// Checking char
	flag[223] = '@';
	goto LABEL1114;
	
	LABEL1215:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1216:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1217:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1218:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1219:
	// Setting char
	flag[136] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1119;
	
	else 
		goto LABEL1218;
	
	LABEL1220:
	// Setting char
	flag[163] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1120;
	
	else 
		goto LABEL1219;
	
	LABEL1221:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1222:
	// Setting char
	flag[247] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1223;
	
	else 
		goto LABEL1221;
	
	LABEL1223:
	// Checking char
	flag[79] = ')';
	goto LABEL1123;
	
	LABEL1224:
	// Checking char
	flag[147] = ']';
	goto LABEL1225;
	
	LABEL1225:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1226:
	// Checking char
	flag[85] = '7';
	goto LABEL1126;
	
	LABEL1227:
	// Setting char
	flag[29] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1327;
	
	else 
		goto LABEL1226;
	
	LABEL1228:
	// Checking char
	flag[188] = '"';
	goto LABEL1227;
	
	LABEL1229:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1230:
	// Checking char
	flag[149] = 'L';
	goto LABEL1229;
	
	LABEL1231:
	// Checking char
	flag[45] = 'w';
	goto LABEL1230;
	
	LABEL1232:
	// Checking char
	flag[100] = '8';
	goto LABEL1231;
	
	LABEL1233:
	// Checking char
	flag[137] = 'H';
	goto LABEL1133;
	
	LABEL1234:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1235:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1236:
	// Checking char
	flag[89] = 't';
	goto LABEL1136;
	
	LABEL1237:
	// Setting char
	flag[87] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1137;
	
	else 
		goto LABEL1238;
	
	LABEL1238:
	// Checking char
	flag[28] = '+';
	goto LABEL1138;
	
	LABEL1239:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1240:
	// Checking char
	flag[202] = '|';
	goto LABEL1340;
	
	LABEL1241:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1242:
	// Setting char
	flag[159] = 'x';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1342;
	
	else if (r == 1)
		goto LABEL1243;
	
	else 
		goto LABEL1241;
	
	LABEL1243:
	// Setting char
	flag[164] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1143;
	
	else 
		goto LABEL1343;
	
	LABEL1244:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1245:
	// Checking char
	flag[60] = '~';
	goto LABEL1345;
	
	LABEL1246:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1247:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1248:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1249:
	// Checking char
	flag[213] = '~';
	goto LABEL1248;
	
	LABEL1250:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1251:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1252:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1253:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1254:
	// Setting char
	flag[146] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1354;
	
	else if (r == 1)
		goto LABEL1255;
	
	else 
		goto LABEL1253;
	
	LABEL1255:
	// Checking char
	flag[162] = 'X';
	goto LABEL1355;
	
	LABEL1256:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1257:
	// Checking char
	flag[32] = '#';
	goto LABEL1256;
	
	LABEL1258:
	// Checking char
	flag[88] = 'u';
	goto LABEL1259;
	
	LABEL1259:
	// Checking char
	flag[246] = 'l';
	goto LABEL1260;
	
	LABEL1260:
	// Setting char
	flag[166] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1160;
	
	else if (r == 1)
		goto LABEL1360;
	
	else 
		goto LABEL1261;
	
	LABEL1261:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1262:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1263:
	// Setting char
	flag[90] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1264;
	
	else 
		goto LABEL1262;
	
	LABEL1264:
	// Setting char
	flag[42] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1164;
	
	else if (r == 1)
		goto LABEL1364;
	
	else 
		goto LABEL1265;
	
	LABEL1265:
	// Setting char
	flag[8] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1165;
	
	else if (r == 1)
		goto LABEL1365;
	
	else 
		goto LABEL1266;
	
	LABEL1266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1268:
	// Setting char
	flag[26] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1368;
	
	else 
		goto LABEL1267;
	
	LABEL1269:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1270:
	// Setting char
	flag[30] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1370;
	
	else 
		goto LABEL1269;
	
	LABEL1271:
	// Checking char
	flag[229] = 'U';
	goto LABEL1171;
	
	LABEL1272:
	// Checking char
	flag[19] = ':';
	goto LABEL1271;
	
	LABEL1273:
	// Checking char
	flag[51] = 'Q';
	goto LABEL1272;
	
	LABEL1274:
	// Setting char
	flag[249] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1174;
	
	else 
		goto LABEL1273;
	
	LABEL1275:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1276:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1277:
	// Checking char
	flag[187] = '"';
	goto LABEL1177;
	
	LABEL1278:
	// Checking char
	flag[7] = '_';
	goto LABEL1277;
	
	LABEL1279:
	// Checking char
	flag[100] = 'V';
	goto LABEL1278;
	
	LABEL1280:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1281:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1282:
	// Checking char
	flag[89] = 'a';
	goto LABEL1281;
	
	LABEL1283:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1284:
	// Checking char
	flag[34] = '0';
	goto LABEL1184;
	
	LABEL1285:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1286:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1287:
	// Checking char
	flag[143] = 'A';
	goto LABEL1187;
	
	LABEL1288:
	// Checking char
	flag[41] = 'T';
	goto LABEL1287;
	
	LABEL1289:
	// Setting char
	flag[76] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1189;
	
	else 
		goto LABEL1288;
	
	LABEL1290:
	// Setting char
	flag[208] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1291;
	
	else 
		goto LABEL1289;
	
	LABEL1291:
	// Checking char
	flag[6] = '!';
	goto LABEL1191;
	
	LABEL1292:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1293:
	// Checking char
	flag[89] = 'K';
	goto LABEL1292;
	
	LABEL1294:
	// Checking char
	flag[14] = 'o';
	goto LABEL1194;
	
	LABEL1295:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1296:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1297:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1298:
	// Checking char
	flag[151] = 'C';
	goto LABEL1299;
	
	LABEL1299:
	// Setting char
	flag[176] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1199;
	
	else 
		goto LABEL1399;
	
	LABEL1300:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1301:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1302:
	// Setting char
	flag[180] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1402;
	
	else 
		goto LABEL1301;
	
	LABEL1303:
	// Setting char
	flag[163] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1403;
	
	else 
		goto LABEL1302;
	
	LABEL1304:
	// Checking char
	flag[173] = 'H';
	goto LABEL1303;
	
	LABEL1305:
	// Checking char
	flag[124] = '_';
	goto LABEL1304;
	
	LABEL1306:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1307:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1308:
	// Setting char
	flag[129] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1208;
	
	else 
		goto LABEL1307;
	
	LABEL1309:
	// Checking char
	flag[85] = '&';
	goto LABEL1308;
	
	LABEL1310:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1311:
	// Checking char
	flag[236] = ',';
	goto LABEL1310;
	
	LABEL1312:
	// Checking char
	flag[130] = 'p';
	goto LABEL1412;
	
	LABEL1313:
	// Setting char
	flag[211] = '6';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1213;
	
	else if (r == 1)
		goto LABEL1413;
	
	else 
		goto LABEL1312;
	
	LABEL1314:
	// Setting char
	flag[34] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1315;
	
	else 
		goto LABEL1313;
	
	LABEL1315:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1316:
	// Checking char
	flag[74] = '?';
	goto LABEL1216;
	
	LABEL1317:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1318:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1319:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1320:
	// Setting char
	flag[84] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1220;
	
	else 
		goto LABEL1319;
	
	LABEL1321:
	// Setting char
	flag[141] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1421;
	
	else 
		goto LABEL1320;
	
	LABEL1322:
	// Setting char
	flag[223] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1222;
	
	else 
		goto LABEL1321;
	
	LABEL1323:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1324:
	// Setting char
	flag[182] = 'P';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1224;
	
	else if (r == 1)
		goto LABEL1424;
	
	else 
		goto LABEL1323;
	
	LABEL1325:
	// Setting char
	flag[27] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1425;
	
	else 
		goto LABEL1324;
	
	LABEL1326:
	// Checking char
	flag[154] = '/';
	goto LABEL1325;
	
	LABEL1327:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1328:
	// Checking char
	flag[14] = '/';
	goto LABEL1228;
	
	LABEL1329:
	// Checking char
	flag[215] = '1';
	goto LABEL1328;
	
	LABEL1330:
	// Checking char
	flag[171] = 'w';
	goto LABEL1331;
	
	LABEL1331:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1332:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1333:
	// Checking char
	flag[83] = 'f';
	goto LABEL1233;
	
	LABEL1334:
	// Setting char
	flag[82] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1234;
	
	else 
		goto LABEL1333;
	
	LABEL1335:
	// Setting char
	flag[19] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1435;
	
	else 
		goto LABEL1334;
	
	LABEL1336:
	// Setting char
	flag[45] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1236;
	
	else 
		goto LABEL1335;
	
	LABEL1337:
	// Setting char
	flag[177] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1237;
	
	else 
		goto LABEL1336;
	
	LABEL1338:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1339:
	// Checking char
	flag[50] = 'H';
	goto LABEL1338;
	
	LABEL1340:
	// Checking char
	flag[16] = 's';
	goto LABEL1440;
	
	LABEL1341:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1342:
	// Checking char
	flag[247] = 'U';
	goto LABEL1442;
	
	LABEL1343:
	// Checking char
	flag[151] = 'm';
	goto LABEL1443;
	
	LABEL1344:
	// Checking char
	flag[223] = '7';
	goto LABEL1244;
	
	LABEL1345:
	// Setting char
	flag[231] = '2';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1445;
	
	else if (r == 1)
		goto LABEL1346;
	
	else 
		goto LABEL1344;
	
	LABEL1346:
	// Checking char
	flag[13] = '~';
	goto LABEL1347;
	
	LABEL1347:
	// Checking char
	flag[100] = '^';
	goto LABEL1348;
	
	LABEL1348:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1349:
	// Checking char
	flag[111] = '(';
	goto LABEL1449;
	
	LABEL1350:
	// Checking char
	flag[76] = 'H';
	goto LABEL1349;
	
	LABEL1351:
	// Setting char
	flag[171] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1251;
	
	else 
		goto LABEL1350;
	
	LABEL1352:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1353:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1354:
	// Checking char
	flag[209] = '-';
	goto LABEL1353;
	
	LABEL1355:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1356:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1357:
	// Setting char
	flag[224] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1457;
	
	else 
		goto LABEL1356;
	
	LABEL1358:
	// Setting char
	flag[21] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1458;
	
	else 
		goto LABEL1357;
	
	LABEL1359:
	// Checking char
	flag[121] = '{';
	goto LABEL1358;
	
	LABEL1360:
	// Setting char
	flag[62] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1460;
	
	else if (r == 1)
		goto LABEL1361;
	
	else 
		goto LABEL1359;
	
	LABEL1361:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1362:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1363:
	// Setting char
	flag[116] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1263;
	
	else 
		goto LABEL1362;
	
	LABEL1364:
	// Checking char
	flag[76] = 'p';
	goto LABEL1464;
	
	LABEL1365:
	// Checking char
	flag[247] = 'G';
	goto LABEL1366;
	
	LABEL1366:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1367:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1368:
	// Checking char
	flag[99] = 'e';
	goto LABEL1367;
	
	LABEL1369:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1370:
	// Checking char
	flag[127] = 'm';
	goto LABEL1371;
	
	LABEL1371:
	// Checking char
	flag[19] = 'i';
	goto LABEL1372;
	
	LABEL1372:
	// Checking char
	flag[161] = 'r';
	goto LABEL1472;
	
	LABEL1373:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1374:
	// Setting char
	flag[210] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1274;
	
	else 
		goto LABEL1375;
	
	LABEL1375:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1376:
	// Checking char
	flag[203] = 'G';
	goto LABEL1476;
	
	LABEL1377:
	// Setting char
	flag[81] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1378;
	
	else 
		goto LABEL1376;
	
	LABEL1378:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1379:
	// Setting char
	flag[206] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1279;
	
	else 
		goto LABEL1479;
	
	LABEL1380:
	// Checking char
	flag[124] = 'X';
	goto LABEL1379;
	
	LABEL1381:
	// Checking char
	flag[156] = 'k';
	goto LABEL1380;
	
	LABEL1382:
	// Checking char
	flag[108] = 'c';
	goto LABEL1282;
	
	LABEL1383:
	// Setting char
	flag[74] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1283;
	
	else if (r == 1)
		goto LABEL1384;
	
	else 
		goto LABEL1382;
	
	LABEL1384:
	// Checking char
	flag[126] = 'v';
	goto LABEL1284;
	
	LABEL1385:
	// Checking char
	flag[39] = 'T';
	goto LABEL1285;
	
	LABEL1386:
	// Setting char
	flag[6] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1286;
	
	else 
		goto LABEL1385;
	
	LABEL1387:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1388:
	// Checking char
	flag[16] = 'r';
	goto LABEL1389;
	
	LABEL1389:
	// Checking char
	flag[177] = 'R';
	goto LABEL1390;
	
	LABEL1390:
	// Setting char
	flag[221] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1290;
	
	else 
		goto LABEL1490;
	
	LABEL1391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1392:
	// Setting char
	flag[139] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1492;
	
	else 
		goto LABEL1391;
	
	LABEL1393:
	// Setting char
	flag[160] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1293;
	
	else 
		goto LABEL1392;
	
	LABEL1394:
	// Setting char
	flag[162] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1294;
	
	else 
		goto LABEL1494;
	
	LABEL1395:
	// Setting char
	flag[201] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1295;
	
	else 
		goto LABEL1394;
	
	LABEL1396:
	// Setting char
	flag[90] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1296;
	
	else if (r == 1)
		goto LABEL1397;
	
	else 
		goto LABEL1395;
	
	LABEL1397:
	// Setting char
	flag[32] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1297;
	
	else 
		goto LABEL1398;
	
	LABEL1398:
	// Checking char
	flag[67] = '9';
	goto LABEL1298;
	
	LABEL1399:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1400:
	// Checking char
	flag[24] = 'n';
	goto LABEL1500;
	
	LABEL1401:
	// Checking char
	flag[77] = ',';
	goto LABEL1400;
	
	LABEL1402:
	// Checking char
	flag[1] = 'F';
	goto LABEL1401;
	
	LABEL1403:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1404:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1405:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1406:
	// Setting char
	flag[92] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1407;
	
	else 
		goto LABEL1405;
	
	LABEL1407:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1408:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1409:
	// Setting char
	flag[130] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1309;
	
	else if (r == 1)
		goto LABEL1410;
	
	else 
		goto LABEL1408;
	
	LABEL1410:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1411:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1412:
	// Checking char
	flag[112] = '}';
	goto LABEL1411;
	
	LABEL1413:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1414:
	// Setting char
	flag[183] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1314;
	
	else 
		goto LABEL1514;
	
	LABEL1415:
	// Checking char
	flag[188] = 'a';
	goto LABEL1414;
	
	LABEL1416:
	// Setting char
	flag[55] = '{';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1316;
	
	else if (r == 1)
		goto LABEL1516;
	
	else 
		goto LABEL1415;
	
	LABEL1417:
	// Setting char
	flag[20] = '*';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1317;
	
	else if (r == 1)
		goto LABEL1517;
	
	else 
		goto LABEL1416;
	
	LABEL1418:
	// Setting char
	flag[81] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1318;
	
	else if (r == 1)
		goto LABEL1518;
	
	else 
		goto LABEL1417;
	
	LABEL1419:
	// Checking char
	flag[28] = '|';
	goto LABEL1418;
	
	LABEL1420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1421:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1422:
	// Setting char
	flag[71] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1322;
	
	else 
		goto LABEL1522;
	
	LABEL1423:
	// Checking char
	flag[228] = '<';
	goto LABEL1422;
	
	LABEL1424:
	// Setting char
	flag[81] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1524;
	
	else 
		goto LABEL1423;
	
	LABEL1425:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1426:
	// Checking char
	flag[244] = '*';
	goto LABEL1326;
	
	LABEL1427:
	// Setting char
	flag[163] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1527;
	
	else 
		goto LABEL1426;
	
	LABEL1428:
	// Checking char
	flag[128] = 'X';
	goto LABEL1427;
	
	LABEL1429:
	// Setting char
	flag[164] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1329;
	
	else if (r == 1)
		goto LABEL1529;
	
	else 
		goto LABEL1428;
	
	LABEL1430:
	// Setting char
	flag[46] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1330;
	
	else if (r == 1)
		goto LABEL1530;
	
	else 
		goto LABEL1429;
	
	LABEL1431:
	// Checking char
	flag[113] = 'L';
	goto LABEL1430;
	
	LABEL1432:
	// Setting char
	flag[181] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1332;
	
	else if (r == 1)
		goto LABEL1532;
	
	else 
		goto LABEL1431;
	
	LABEL1433:
	// Checking char
	flag[211] = 'O';
	goto LABEL1432;
	
	LABEL1434:
	// Setting char
	flag[221] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1534;
	
	else 
		goto LABEL1433;
	
	LABEL1435:
	// Setting char
	flag[146] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1535;
	
	else 
		goto LABEL1434;
	
	LABEL1436:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1437:
	// Setting char
	flag[51] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1337;
	
	else if (r == 1)
		goto LABEL1537;
	
	else 
		goto LABEL1436;
	
	LABEL1438:
	// Checking char
	flag[48] = 'w';
	goto LABEL1437;
	
	LABEL1439:
	// Setting char
	flag[67] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1339;
	
	else 
		goto LABEL1438;
	
	LABEL1440:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1441:
	// Setting char
	flag[53] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1341;
	
	else 
		goto LABEL1541;
	
	LABEL1442:
	// Checking char
	flag[19] = 'P';
	goto LABEL1441;
	
	LABEL1443:
	// Checking char
	flag[50] = 'd';
	goto LABEL1444;
	
	LABEL1444:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1445:
	// Setting char
	flag[164] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1545;
	
	else 
		goto LABEL1446;
	
	LABEL1446:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1447:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1448:
	// Setting char
	flag[61] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1548;
	
	else 
		goto LABEL1447;
	
	LABEL1449:
	// Checking char
	flag[45] = 'g';
	goto LABEL1448;
	
	LABEL1450:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1451:
	// Setting char
	flag[164] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1351;
	
	else 
		goto LABEL1551;
	
	LABEL1452:
	// Setting char
	flag[20] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1352;
	
	else 
		goto LABEL1451;
	
	LABEL1453:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1454:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1455:
	// Checking char
	flag[13] = 'N';
	goto LABEL1454;
	
	LABEL1456:
	// Checking char
	flag[13] = 'y';
	goto LABEL1455;
	
	LABEL1457:
	// Checking char
	flag[11] = '*';
	goto LABEL1557;
	
	LABEL1458:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1459:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1460:
	// Setting char
	flag[44] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1560;
	
	else if (r == 1)
		goto LABEL1461;
	
	else 
		goto LABEL1459;
	
	LABEL1461:
	// Setting char
	flag[209] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1561;
	
	else 
		goto LABEL1462;
	
	LABEL1462:
	// Checking char
	flag[215] = 'd';
	goto LABEL1463;
	
	LABEL1463:
	// Checking char
	flag[176] = 'c';
	goto LABEL1363;
	
	LABEL1464:
	// Setting char
	flag[5] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1564;
	
	else 
		goto LABEL1465;
	
	LABEL1465:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1466:
	// Checking char
	flag[87] = '^';
	goto LABEL1566;
	
	LABEL1467:
	// Checking char
	flag[161] = 'g';
	goto LABEL1466;
	
	LABEL1468:
	// Checking char
	flag[235] = 'n';
	goto LABEL1467;
	
	LABEL1469:
	// Setting char
	flag[42] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1369;
	
	else 
		goto LABEL1468;
	
	LABEL1470:
	// Setting char
	flag[62] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1570;
	
	else 
		goto LABEL1469;
	
	LABEL1471:
	// Checking char
	flag[90] = 'O';
	goto LABEL1470;
	
	LABEL1472:
	// Setting char
	flag[34] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1572;
	
	else if (r == 1)
		goto LABEL1473;
	
	else 
		goto LABEL1471;
	
	LABEL1473:
	// Setting char
	flag[101] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1373;
	
	else 
		goto LABEL1474;
	
	LABEL1474:
	// Setting char
	flag[143] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1374;
	
	else 
		goto LABEL1475;
	
	LABEL1475:
	// Checking char
	flag[122] = 't';
	goto LABEL1575;
	
	LABEL1476:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1477:
	// Checking char
	flag[2] = '|';
	goto LABEL1377;
	
	LABEL1478:
	// Checking char
	flag[71] = 'A';
	goto LABEL1477;
	
	LABEL1479:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1480:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1481:
	// Setting char
	flag[80] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1381;
	
	else if (r == 1)
		goto LABEL1482;
	
	else 
		goto LABEL1480;
	
	LABEL1482:
	// Checking char
	flag[231] = 's';
	goto LABEL1483;
	
	LABEL1483:
	// Setting char
	flag[49] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1383;
	
	else 
		goto LABEL1484;
	
	LABEL1484:
	// Setting char
	flag[170] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1584;
	
	else 
		goto LABEL1485;
	
	LABEL1485:
	// Checking char
	flag[40] = 'd';
	goto LABEL1486;
	
	LABEL1486:
	// Setting char
	flag[56] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1386;
	
	else 
		goto LABEL1487;
	
	LABEL1487:
	// Setting char
	flag[2] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1387;
	
	else if (r == 1)
		goto LABEL1587;
	
	else 
		goto LABEL1488;
	
	LABEL1488:
	// Setting char
	flag[98] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1388;
	
	else 
		goto LABEL1489;
	
	LABEL1489:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1490:
	// Checking char
	flag[133] = 'i';
	goto LABEL1590;
	
	LABEL1491:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1492:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1493:
	// Checking char
	flag[137] = 'X';
	goto LABEL1393;
	
	LABEL1494:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1495:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1496:
	// Setting char
	flag[213] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1396;
	
	else if (r == 1)
		goto LABEL1497;
	
	else 
		goto LABEL1495;
	
	LABEL1497:
	// Checking char
	flag[154] = '`';
	goto LABEL1498;
	
	LABEL1498:
	// Checking char
	flag[103] = 'P';
	goto LABEL1499;
	
	LABEL1499:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1500:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1501:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1502:
	// Checking char
	flag[175] = '9';
	goto LABEL1501;
	
	LABEL1503:
	// Checking char
	flag[220] = 'J';
	goto LABEL1502;
	
	LABEL1504:
	// Setting char
	flag[68] = 'C';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1404;
	
	else if (r == 1)
		goto LABEL1604;
	
	else 
		goto LABEL1503;
	
	LABEL1505:
	// Checking char
	flag[169] = 'B';
	goto LABEL1504;
	
	LABEL1506:
	// Setting char
	flag[48] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1406;
	
	else if (r == 1)
		goto LABEL1606;
	
	else 
		goto LABEL1505;
	
	LABEL1507:
	// Setting char
	flag[9] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1607;
	
	else 
		goto LABEL1506;
	
	LABEL1508:
	// Setting char
	flag[104] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1608;
	
	else 
		goto LABEL1507;
	
	LABEL1509:
	// Setting char
	flag[179] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1409;
	
	else 
		goto LABEL1508;
	
	LABEL1510:
	// Checking char
	flag[98] = '9';
	goto LABEL1509;
	
	LABEL1511:
	// Checking char
	flag[220] = ']';
	goto LABEL1510;
	
	LABEL1512:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1513:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1514:
	// Setting char
	flag[147] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1515;
	
	else 
		goto LABEL1513;
	
	LABEL1515:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1516:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1517:
	// Checking char
	flag[186] = 'Q';
	goto LABEL1617;
	
	LABEL1518:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1519:
	// Checking char
	flag[212] = '~';
	goto LABEL1419;
	
	LABEL1520:
	// Setting char
	flag[211] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1420;
	
	else if (r == 1)
		goto LABEL1620;
	
	else 
		goto LABEL1519;
	
	LABEL1521:
	// Checking char
	flag[52] = 'f';
	goto LABEL1520;
	
	LABEL1522:
	// Setting char
	flag[45] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1622;
	
	else 
		goto LABEL1521;
	
	LABEL1523:
	// Checking char
	flag[166] = 'K';
	goto LABEL1623;
	
	LABEL1524:
	// Setting char
	flag[86] = 'H';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1624;
	
	else if (r == 1)
		goto LABEL1525;
	
	else 
		goto LABEL1523;
	
	LABEL1525:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1526:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1527:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1528:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1529:
	// Setting char
	flag[249] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1629;
	
	else 
		goto LABEL1528;
	
	LABEL1530:
	// Checking char
	flag[132] = 'I';
	goto LABEL1630;
	
	LABEL1531:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1532:
	// Checking char
	flag[170] = '8';
	goto LABEL1531;
	
	LABEL1533:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1534:
	// Setting char
	flag[23] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1634;
	
	else 
		goto LABEL1533;
	
	LABEL1535:
	// Checking char
	flag[148] = '(';
	goto LABEL1635;
	
	LABEL1536:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1537:
	// Checking char
	flag[116] = '+';
	goto LABEL1536;
	
	LABEL1538:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1539:
	// Setting char
	flag[230] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1439;
	
	else if (r == 1)
		goto LABEL1639;
	
	else 
		goto LABEL1538;
	
	LABEL1540:
	// Checking char
	flag[168] = '6';
	goto LABEL1539;
	
	LABEL1541:
	// Setting char
	flag[115] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1641;
	
	else 
		goto LABEL1540;
	
	LABEL1542:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1543:
	// Setting char
	flag[100] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1643;
	
	else 
		goto LABEL1542;
	
	LABEL1544:
	// Checking char
	flag[195] = ')';
	goto LABEL1543;
	
	LABEL1545:
	// Setting char
	flag[61] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1645;
	
	else 
		goto LABEL1546;
	
	LABEL1546:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1547:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1548:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1549:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1550:
	// Setting char
	flag[162] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1450;
	
	else 
		goto LABEL1549;
	
	LABEL1551:
	// Setting char
	flag[159] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1651;
	
	else 
		goto LABEL1550;
	
	LABEL1552:
	// Setting char
	flag[192] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1452;
	
	else 
		goto LABEL1652;
	
	LABEL1553:
	// Setting char
	flag[37] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1453;
	
	else 
		goto LABEL1552;
	
	LABEL1554:
	// Checking char
	flag[171] = '~';
	goto LABEL1553;
	
	LABEL1555:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1556:
	// Setting char
	flag[31] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1456;
	
	else 
		goto LABEL1656;
	
	LABEL1557:
	// Setting char
	flag[108] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1657;
	
	else if (r == 1)
		goto LABEL1558;
	
	else 
		goto LABEL1556;
	
	LABEL1558:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1559:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1560:
	// Checking char
	flag[15] = '+';
	goto LABEL1559;
	
	LABEL1561:
	// Checking char
	flag[156] = 'F';
	goto LABEL1562;
	
	LABEL1562:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1563:
	// Checking char
	flag[162] = '.';
	goto LABEL1663;
	
	LABEL1564:
	// Setting char
	flag[5] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1664;
	
	else 
		goto LABEL1563;
	
	LABEL1565:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1566:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1567:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1568:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1569:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1570:
	// Checking char
	flag[160] = 'V';
	goto LABEL1569;
	
	LABEL1571:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1572:
	// Setting char
	flag[164] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1672;
	
	else 
		goto LABEL1571;
	
	LABEL1573:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1574:
	// Checking char
	flag[249] = '1';
	goto LABEL1573;
	
	LABEL1575:
	// Setting char
	flag[191] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1675;
	
	else if (r == 1)
		goto LABEL1576;
	
	else 
		goto LABEL1574;
	
	LABEL1576:
	// Checking char
	flag[31] = 'e';
	goto LABEL1577;
	
	LABEL1577:
	// Checking char
	flag[236] = 'e';
	goto LABEL1578;
	
	LABEL1578:
	// Setting char
	flag[179] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1478;
	
	else 
		goto LABEL1678;
	
	LABEL1579:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1580:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1581:
	// Setting char
	flag[106] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1481;
	
	else 
		goto LABEL1580;
	
	LABEL1582:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1583:
	// Checking char
	flag[128] = ',';
	goto LABEL1582;
	
	LABEL1584:
	// Setting char
	flag[194] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1684;
	
	else 
		goto LABEL1583;
	
	LABEL1585:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1586:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1587:
	// Setting char
	flag[131] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1687;
	
	else 
		goto LABEL1588;
	
	LABEL1588:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1589:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1590:
	// Setting char
	flag[228] = 'd';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1690;
	
	else if (r == 1)
		goto LABEL1591;
	
	else 
		goto LABEL1589;
	
	LABEL1591:
	// Setting char
	flag[91] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1491;
	
	else if (r == 1)
		goto LABEL1691;
	
	else 
		goto LABEL1592;
	
	LABEL1592:
	// Setting char
	flag[196] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1692;
	
	else 
		goto LABEL1593;
	
	LABEL1593:
	// Checking char
	flag[206] = 'k';
	goto LABEL1493;
	
	LABEL1594:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1595:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1596:
	// Setting char
	flag[19] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1496;
	
	else 
		goto LABEL1597;
	
	LABEL1597:
	// Checking char
	flag[170] = 'l';
	goto LABEL1697;
	
	LABEL1598:
	// Checking char
	flag[141] = '9';
	goto LABEL1599;
	
	LABEL1599:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1600:
	// Checking char
	flag[49] = 'Z';
	goto LABEL1700;
	
	LABEL1601:
	// Checking char
	flag[227] = 'r';
	goto LABEL1600;
	
	LABEL1602:
	// Checking char
	flag[240] = 'P';
	goto LABEL1601;
	
	LABEL1603:
	// Checking char
	flag[210] = 'a';
	goto LABEL1602;
	
	LABEL1604:
	// Setting char
	flag[106] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1605;
	
	else 
		goto LABEL1603;
	
	LABEL1605:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1606:
	// Checking char
	flag[207] = '!';
	goto LABEL1706;
	
	LABEL1607:
	// Checking char
	flag[229] = '=';
	goto LABEL1707;
	
	LABEL1608:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1609:
	// Checking char
	flag[177] = 'q';
	goto LABEL1709;
	
	LABEL1610:
	// Checking char
	flag[35] = 's';
	goto LABEL1609;
	
	LABEL1611:
	// Setting char
	flag[74] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1511;
	
	else 
		goto LABEL1610;
	
	LABEL1612:
	// Setting char
	flag[6] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1512;
	
	else 
		goto LABEL1712;
	
	LABEL1613:
	// Checking char
	flag[225] = 'J';
	goto LABEL1612;
	
	LABEL1614:
	// Setting char
	flag[212] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1714;
	
	else 
		goto LABEL1613;
	
	LABEL1615:
	// Checking char
	flag[13] = 'Z';
	goto LABEL1614;
	
	LABEL1616:
	// Checking char
	flag[172] = 'S';
	goto LABEL1615;
	
	LABEL1617:
	// Setting char
	flag[1] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1717;
	
	else 
		goto LABEL1616;
	
	LABEL1618:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1619:
	// Setting char
	flag[118] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1719;
	
	else 
		goto LABEL1618;
	
	LABEL1620:
	// Setting char
	flag[210] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1621;
	
	else 
		goto LABEL1619;
	
	LABEL1621:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1622:
	// Checking char
	flag[86] = '-';
	goto LABEL1722;
	
	LABEL1623:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1624:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1625:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1626:
	// Checking char
	flag[125] = 'T';
	goto LABEL1526;
	
	LABEL1627:
	// Checking char
	flag[162] = 'M';
	goto LABEL1727;
	
	LABEL1628:
	// Setting char
	flag[241] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1728;
	
	else 
		goto LABEL1627;
	
	LABEL1629:
	// Checking char
	flag[51] = 'P';
	goto LABEL1628;
	
	LABEL1630:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1631:
	// Checking char
	flag[204] = 'a';
	goto LABEL1731;
	
	LABEL1632:
	// Setting char
	flag[108] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1732;
	
	else 
		goto LABEL1631;
	
	LABEL1633:
	// Checking char
	flag[42] = 'x';
	goto LABEL1632;
	
	LABEL1634:
	// Setting char
	flag[192] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1734;
	
	else 
		goto LABEL1633;
	
	LABEL1635:
	// Checking char
	flag[158] = '|';
	goto LABEL1735;
	
	LABEL1636:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1637:
	// Checking char
	flag[187] = 'X';
	goto LABEL1737;
	
	LABEL1638:
	// Setting char
	flag[46] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1738;
	
	else 
		goto LABEL1637;
	
	LABEL1639:
	// Setting char
	flag[110] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1739;
	
	else 
		goto LABEL1638;
	
	LABEL1640:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1641:
	// Setting char
	flag[64] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1741;
	
	else if (r == 1)
		goto LABEL1642;
	
	else 
		goto LABEL1640;
	
	LABEL1642:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1643:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1644:
	// Checking char
	flag[216] = ']';
	goto LABEL1544;
	
	LABEL1645:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1646:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1647:
	// Setting char
	flag[212] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1547;
	
	else if (r == 1)
		goto LABEL1747;
	
	else 
		goto LABEL1646;
	
	LABEL1648:
	// Checking char
	flag[169] = 'K';
	goto LABEL1647;
	
	LABEL1649:
	// Setting char
	flag[191] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1749;
	
	else 
		goto LABEL1648;
	
	LABEL1650:
	// Checking char
	flag[186] = 'D';
	goto LABEL1649;
	
	LABEL1651:
	// Setting char
	flag[201] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1751;
	
	else 
		goto LABEL1650;
	
	LABEL1652:
	// Checking char
	flag[160] = 'F';
	goto LABEL1752;
	
	LABEL1653:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1654:
	// Setting char
	flag[51] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1554;
	
	else 
		goto LABEL1653;
	
	LABEL1655:
	// Setting char
	flag[196] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1555;
	
	else 
		goto LABEL1654;
	
	LABEL1656:
	// Setting char
	flag[217] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1756;
	
	else 
		goto LABEL1655;
	
	LABEL1657:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1658:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1659:
	// Checking char
	flag[163] = '=';
	goto LABEL1660;
	
	LABEL1660:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1661:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1662:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1663:
	// Checking char
	flag[127] = 'Q';
	goto LABEL1763;
	
	LABEL1664:
	// Checking char
	flag[28] = 'L';
	goto LABEL1764;
	
	LABEL1665:
	// Checking char
	flag[170] = '4';
	goto LABEL1565;
	
	LABEL1666:
	// Checking char
	flag[239] = 'Y';
	goto LABEL1665;
	
	LABEL1667:
	// Setting char
	flag[157] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1567;
	
	else 
		goto LABEL1666;
	
	LABEL1668:
	// Setting char
	flag[221] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1568;
	
	else 
		goto LABEL1667;
	
	LABEL1669:
	// Checking char
	flag[16] = ':';
	goto LABEL1668;
	
	LABEL1670:
	// Checking char
	flag[101] = 'd';
	goto LABEL1669;
	
	LABEL1671:
	// Checking char
	flag[211] = '7';
	goto LABEL1670;
	
	LABEL1672:
	// Setting char
	flag[233] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1772;
	
	else 
		goto LABEL1671;
	
	LABEL1673:
	// Checking char
	flag[100] = 'J';
	goto LABEL1773;
	
	LABEL1674:
	// Setting char
	flag[205] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1774;
	
	else 
		goto LABEL1673;
	
	LABEL1675:
	// Setting char
	flag[155] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1775;
	
	else if (r == 1)
		goto LABEL1676;
	
	else 
		goto LABEL1674;
	
	LABEL1676:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1677:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1678:
	// Setting char
	flag[84] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1778;
	
	else 
		goto LABEL1679;
	
	LABEL1679:
	// Setting char
	flag[238] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1579;
	
	else if (r == 1)
		goto LABEL1779;
	
	else 
		goto LABEL1680;
	
	LABEL1680:
	// Setting char
	flag[188] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1780;
	
	else 
		goto LABEL1681;
	
	LABEL1681:
	// Setting char
	flag[24] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1581;
	
	else 
		goto LABEL1781;
	
	LABEL1682:
	// Checking char
	flag[57] = 'd';
	goto LABEL1782;
	
	LABEL1683:
	// Checking char
	flag[186] = 'R';
	goto LABEL1682;
	
	LABEL1684:
	// Setting char
	flag[242] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1784;
	
	else 
		goto LABEL1683;
	
	LABEL1685:
	// Checking char
	flag[84] = 'O';
	goto LABEL1585;
	
	LABEL1686:
	// Setting char
	flag[244] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1586;
	
	else 
		goto LABEL1685;
	
	LABEL1687:
	// Setting char
	flag[121] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1787;
	
	else if (r == 1)
		goto LABEL1688;
	
	else 
		goto LABEL1686;
	
	LABEL1688:
	// Setting char
	flag[2] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1788;
	
	else 
		goto LABEL1689;
	
	LABEL1689:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1690:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1691:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1692:
	// Setting char
	flag[240] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1792;
	
	else 
		goto LABEL1693;
	
	LABEL1693:
	// Setting char
	flag[105] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1793;
	
	else 
		goto LABEL1694;
	
	LABEL1694:
	// Checking char
	flag[219] = '6';
	goto LABEL1594;
	
	LABEL1695:
	// Checking char
	flag[165] = ':';
	goto LABEL1595;
	
	LABEL1696:
	// Setting char
	flag[248] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1596;
	
	else 
		goto LABEL1695;
	
	LABEL1697:
	// Setting char
	flag[121] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1797;
	
	else 
		goto LABEL1698;
	
	LABEL1698:
	// Setting char
	flag[62] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1598;
	
	else 
		goto LABEL1699;
	
	LABEL1699:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1700:
	// Checking char
	flag[9] = 'w';
	goto LABEL1800;
	
	LABEL1701:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1702:
	// Setting char
	flag[206] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1802;
	
	else 
		goto LABEL1701;
	
	LABEL1703:
	// Checking char
	flag[35] = '/';
	goto LABEL1702;
	
	LABEL1704:
	// Setting char
	flag[234] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1804;
	
	else 
		goto LABEL1703;
	
	LABEL1705:
	// Setting char
	flag[70] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1805;
	
	else 
		goto LABEL1704;
	
	LABEL1706:
	// Checking char
	flag[214] = '}';
	goto LABEL1705;
	
	LABEL1707:
	// Checking char
	flag[8] = '>';
	goto LABEL1807;
	
	LABEL1708:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1709:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1710:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1711:
	// Setting char
	flag[92] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1611;
	
	else if (r == 1)
		goto LABEL1811;
	
	else 
		goto LABEL1710;
	
	LABEL1712:
	// Checking char
	flag[223] = 'K';
	goto LABEL1711;
	
	LABEL1713:
	// Checking char
	flag[189] = '{';
	goto LABEL1813;
	
	LABEL1714:
	// Checking char
	flag[3] = 'B';
	goto LABEL1713;
	
	LABEL1715:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1716:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1717:
	// Setting char
	flag[49] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1817;
	
	else 
		goto LABEL1716;
	
	LABEL1718:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1719:
	// Setting char
	flag[24] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1819;
	
	else 
		goto LABEL1718;
	
	LABEL1720:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1721:
	// Setting char
	flag[140] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1821;
	
	else 
		goto LABEL1720;
	
	LABEL1722:
	// Checking char
	flag[132] = 'q';
	goto LABEL1721;
	
	LABEL1723:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1724:
	// Setting char
	flag[55] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1824;
	
	else 
		goto LABEL1723;
	
	LABEL1725:
	// Setting char
	flag[92] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1625;
	
	else 
		goto LABEL1724;
	
	LABEL1726:
	// Setting char
	flag[114] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1626;
	
	else 
		goto LABEL1725;
	
	LABEL1727:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1728:
	// Checking char
	flag[242] = '(';
	goto LABEL1729;
	
	LABEL1729:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1730:
	// Checking char
	flag[108] = '4';
	goto LABEL1830;
	
	LABEL1731:
	// Checking char
	flag[203] = 'R';
	goto LABEL1730;
	
	LABEL1732:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1733:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1734:
	// Checking char
	flag[142] = 'A';
	goto LABEL1733;
	
	LABEL1735:
	// Checking char
	flag[189] = '|';
	goto LABEL1835;
	
	LABEL1736:
	// Checking char
	flag[231] = '?';
	goto LABEL1636;
	
	LABEL1737:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1738:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1739:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1740:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1741:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1742:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1743:
	// Checking char
	flag[176] = '3';
	goto LABEL1742;
	
	LABEL1744:
	// Setting char
	flag[90] = '4';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1644;
	
	else if (r == 1)
		goto LABEL1745;
	
	else 
		goto LABEL1743;
	
	LABEL1745:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1746:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1747:
	// Checking char
	flag[33] = '&';
	goto LABEL1746;
	
	LABEL1748:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1749:
	// Checking char
	flag[65] = 'q';
	goto LABEL1849;
	
	LABEL1750:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1751:
	// Checking char
	flag[121] = 'W';
	goto LABEL1750;
	
	LABEL1752:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1753:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1754:
	// Checking char
	flag[182] = '^';
	goto LABEL1753;
	
	LABEL1755:
	// Checking char
	flag[202] = 'o';
	goto LABEL1754;
	
	LABEL1756:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1757:
	// Checking char
	flag[217] = '4';
	goto LABEL1758;
	
	LABEL1758:
	// Checking char
	flag[177] = 'B';
	goto LABEL1658;
	
	LABEL1759:
	// Setting char
	flag[116] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1659;
	
	else 
		goto LABEL1859;
	
	LABEL1760:
	// Checking char
	flag[155] = '+';
	goto LABEL1759;
	
	LABEL1761:
	// Setting char
	flag[208] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1661;
	
	else if (r == 1)
		goto LABEL1861;
	
	else 
		goto LABEL1760;
	
	LABEL1762:
	// Setting char
	flag[124] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1662;
	
	else if (r == 1)
		goto LABEL1862;
	
	else 
		goto LABEL1761;
	
	LABEL1763:
	// Setting char
	flag[229] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1863;
	
	else 
		goto LABEL1762;
	
	LABEL1764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1765:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1766:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1767:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1768:
	// Checking char
	flag[179] = 'h';
	goto LABEL1767;
	
	LABEL1769:
	// Setting char
	flag[107] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1869;
	
	else 
		goto LABEL1768;
	
	LABEL1770:
	// Setting char
	flag[109] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1870;
	
	else 
		goto LABEL1769;
	
	LABEL1771:
	// Checking char
	flag[111] = 'G';
	goto LABEL1770;
	
	LABEL1772:
	// Checking char
	flag[140] = '0';
	goto LABEL1771;
	
	LABEL1773:
	// Checking char
	flag[120] = 'Y';
	goto LABEL1873;
	
	LABEL1774:
	// Checking char
	flag[208] = 'G';
	goto LABEL1874;
	
	LABEL1775:
	// Checking char
	flag[49] = 'H';
	goto LABEL1875;
	
	LABEL1776:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1777:
	// Setting char
	flag[90] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1677;
	
	else if (r == 1)
		goto LABEL1877;
	
	else 
		goto LABEL1776;
	
	LABEL1778:
	// Checking char
	flag[138] = '(';
	goto LABEL1777;
	
	LABEL1779:
	// Checking char
	flag[249] = 'Y';
	goto LABEL1879;
	
	LABEL1780:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1781:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1782:
	// Checking char
	flag[156] = 'q';
	goto LABEL1783;
	
	LABEL1783:
	// Checking char
	flag[8] = 'H';
	goto LABEL1883;
	
	LABEL1784:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1785:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1786:
	// Checking char
	flag[96] = '|';
	goto LABEL1785;
	
	LABEL1787:
	// Setting char
	flag[243] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1887;
	
	else 
		goto LABEL1786;
	
	LABEL1788:
	// Checking char
	flag[90] = '*';
	goto LABEL1789;
	
	LABEL1789:
	// Checking char
	flag[231] = 'J';
	goto LABEL1889;
	
	LABEL1790:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1791:
	// Checking char
	flag[25] = 'R';
	goto LABEL1790;
	
	LABEL1792:
	// Checking char
	flag[16] = 'K';
	goto LABEL1791;
	
	LABEL1793:
	// Setting char
	flag[234] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1893;
	
	else 
		goto LABEL1794;
	
	LABEL1794:
	// Checking char
	flag[107] = '_';
	goto LABEL1795;
	
	LABEL1795:
	// Setting char
	flag[27] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1895;
	
	else 
		goto LABEL1796;
	
	LABEL1796:
	// Setting char
	flag[143] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1696;
	
	else 
		goto LABEL1896;
	
	LABEL1797:
	// Checking char
	flag[218] = 'l';
	goto LABEL1798;
	
	LABEL1798:
	// Setting char
	flag[142] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1898;
	
	else 
		goto LABEL1799;
	
	LABEL1799:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1801:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1802:
	// Checking char
	flag[184] = 's';
	goto LABEL1801;
	
	LABEL1803:
	// Checking char
	flag[247] = '`';
	goto LABEL1903;
	
	LABEL1804:
	// Setting char
	flag[136] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1904;
	
	else 
		goto LABEL1803;
	
	LABEL1805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1806:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1807:
	// Checking char
	flag[132] = 'V';
	goto LABEL1806;
	
	LABEL1808:
	// Checking char
	flag[112] = 'c';
	goto LABEL1708;
	
	LABEL1809:
	// Checking char
	flag[71] = ',';
	goto LABEL1808;
	
	LABEL1810:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1811:
	// Checking char
	flag[109] = 'k';
	goto LABEL1911;
	
	LABEL1812:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1813:
	// Checking char
	flag[233] = 'x';
	goto LABEL1812;
	
	LABEL1814:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1815:
	// Setting char
	flag[148] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1715;
	
	else 
		goto LABEL1814;
	
	LABEL1816:
	// Setting char
	flag[30] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1916;
	
	else 
		goto LABEL1815;
	
	LABEL1817:
	// Checking char
	flag[196] = 'r';
	goto LABEL1816;
	
	LABEL1818:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1819:
	// Checking char
	flag[76] = '#';
	goto LABEL1818;
	
	LABEL1820:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1821:
	// Setting char
	flag[9] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1822;
	
	else 
		goto LABEL1820;
	
	LABEL1822:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1823:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1824:
	// Checking char
	flag[61] = 'y';
	goto LABEL1823;
	
	LABEL1825:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1826:
	// Setting char
	flag[76] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1726;
	
	else if (r == 1)
		goto LABEL1827;
	
	else 
		goto LABEL1825;
	
	LABEL1827:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1828:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1829:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1830:
	// Setting char
	flag[47] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1831;
	
	else 
		goto LABEL1829;
	
	LABEL1831:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1832:
	// Checking char
	flag[161] = 'U';
	goto LABEL1932;
	
	LABEL1833:
	// Setting char
	flag[34] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1933;
	
	else 
		goto LABEL1832;
	
	LABEL1834:
	// Setting char
	flag[150] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1934;
	
	else 
		goto LABEL1833;
	
	LABEL1835:
	// Checking char
	flag[113] = '*';
	goto LABEL1834;
	
	LABEL1836:
	// Checking char
	flag[38] = 'S';
	goto LABEL1736;
	
	LABEL1837:
	// Setting char
	flag[10] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1937;
	
	else 
		goto LABEL1836;
	
	LABEL1838:
	// Setting char
	flag[226] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1938;
	
	else 
		goto LABEL1837;
	
	LABEL1839:
	// Checking char
	flag[58] = '4';
	goto LABEL1838;
	
	LABEL1840:
	// Setting char
	flag[196] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1740;
	
	else 
		goto LABEL1839;
	
	LABEL1841:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1842:
	// Setting char
	flag[26] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1843;
	
	else 
		goto LABEL1841;
	
	LABEL1843:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1844:
	// Checking char
	flag[144] = 'W';
	goto LABEL1744;
	
	LABEL1845:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1846:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1847:
	// Checking char
	flag[237] = 'A';
	goto LABEL1846;
	
	LABEL1848:
	// Checking char
	flag[79] = 'm';
	goto LABEL1748;
	
	LABEL1849:
	// Checking char
	flag[171] = 'y';
	goto LABEL1848;
	
	LABEL1850:
	// Checking char
	flag[186] = '~';
	goto LABEL1950;
	
	LABEL1851:
	// Checking char
	flag[221] = '0';
	goto LABEL1850;
	
	LABEL1852:
	// Checking char
	flag[137] = '~';
	goto LABEL1851;
	
	LABEL1853:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1854:
	// Checking char
	flag[216] = '7';
	goto LABEL1853;
	
	LABEL1855:
	// Setting char
	flag[63] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1755;
	
	else 
		goto LABEL1955;
	
	LABEL1856:
	// Setting char
	flag[181] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1956;
	
	else 
		goto LABEL1855;
	
	LABEL1857:
	// Setting char
	flag[137] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1757;
	
	else 
		goto LABEL1856;
	
	LABEL1858:
	// Checking char
	flag[216] = '8';
	goto LABEL1857;
	
	LABEL1859:
	// Setting char
	flag[184] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1959;
	
	else if (r == 1)
		goto LABEL1860;
	
	else 
		goto LABEL1858;
	
	LABEL1860:
	// Checking char
	flag[44] = ':';
	goto LABEL1960;
	
	LABEL1861:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1862:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1863:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1864:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1865:
	// Checking char
	flag[77] = '[';
	goto LABEL1765;
	
	LABEL1866:
	// Checking char
	flag[180] = 'D';
	goto LABEL1766;
	
	LABEL1867:
	// Checking char
	flag[146] = 'P';
	goto LABEL1967;
	
	LABEL1868:
	// Setting char
	flag[139] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1968;
	
	else 
		goto LABEL1867;
	
	LABEL1869:
	// Checking char
	flag[210] = 'Q';
	goto LABEL1868;
	
	LABEL1870:
	// Checking char
	flag[156] = 'b';
	goto LABEL1871;
	
	LABEL1871:
	// Checking char
	flag[35] = 'f';
	goto LABEL1971;
	
	LABEL1872:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1873:
	// Setting char
	flag[55] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1973;
	
	else 
		goto LABEL1872;
	
	LABEL1874:
	// Checking char
	flag[228] = '3';
	goto LABEL1974;
	
	LABEL1875:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1876:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1877:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1878:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1879:
	// Setting char
	flag[118] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1979;
	
	else 
		goto LABEL1880;
	
	LABEL1880:
	// Checking char
	flag[2] = '=';
	goto LABEL1881;
	
	LABEL1881:
	// Setting char
	flag[179] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1981;
	
	else 
		goto LABEL1882;
	
	LABEL1882:
	// Checking char
	flag[69] = 'R';
	goto LABEL1982;
	
	LABEL1883:
	// Setting char
	flag[2] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1983;
	
	else 
		goto LABEL1884;
	
	LABEL1884:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1885:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1886:
	// Checking char
	flag[101] = 'L';
	goto LABEL1885;
	
	LABEL1887:
	// Setting char
	flag[44] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1987;
	
	else 
		goto LABEL1888;
	
	LABEL1888:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1889:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1890:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1891:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1892:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1893:
	// Checking char
	flag[222] = ';';
	goto LABEL1993;
	
	LABEL1894:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1895:
	// Setting char
	flag[174] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1995;
	
	else 
		goto LABEL1894;
	
	LABEL1896:
	// Checking char
	flag[155] = '{';
	goto LABEL1897;
	
	LABEL1897:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1898:
	// Setting char
	flag[8] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1998;
	
	else 
		goto LABEL1899;
	
	LABEL1899:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1900:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1901:
	// Setting char
	flag[145] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1902;
	
	else 
		goto LABEL1900;
	
	LABEL1902:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1903:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1904:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1905:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1906:
	// Checking char
	flag[17] = 'N';
	goto LABEL1905;
	
	LABEL1907:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1908:
	// Checking char
	flag[25] = '_';
	goto LABEL1907;
	
	LABEL1909:
	// Setting char
	flag[247] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1809;
	
	else 
		goto LABEL1908;
	
	LABEL1910:
	// Setting char
	flag[23] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1810;
	
	else 
		goto LABEL1909;
	
	LABEL1911:
	// Setting char
	flag[244] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2011;
	
	else if (r == 1)
		goto LABEL1912;
	
	else 
		goto LABEL1910;
	
	LABEL1912:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1913:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1914:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1915:
	// Setting char
	flag[199] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2015;
	
	else 
		goto LABEL1914;
	
	LABEL1916:
	// Checking char
	flag[115] = 'q';
	goto LABEL1915;
	
	LABEL1917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1918:
	// Checking char
	flag[167] = '.';
	goto LABEL1917;
	
	LABEL1919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1920:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1921:
	// Checking char
	flag[249] = 'P';
	goto LABEL1922;
	
	LABEL1922:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1923:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1924:
	// Checking char
	flag[51] = ')';
	goto LABEL1923;
	
	LABEL1925:
	// Setting char
	flag[64] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2025;
	
	else 
		goto LABEL1924;
	
	LABEL1926:
	// Setting char
	flag[5] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1826;
	
	else if (r == 1)
		goto LABEL2026;
	
	else 
		goto LABEL1925;
	
	LABEL1927:
	// Checking char
	flag[46] = 'O';
	goto LABEL1926;
	
	LABEL1928:
	// Setting char
	flag[104] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1828;
	
	else if (r == 1)
		goto LABEL2028;
	
	else 
		goto LABEL1927;
	
	LABEL1929:
	// Checking char
	flag[161] = 'h';
	goto LABEL1928;
	
	LABEL1930:
	// Setting char
	flag[73] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2030;
	
	else 
		goto LABEL1929;
	
	LABEL1931:
	// Checking char
	flag[143] = '$';
	goto LABEL1930;
	
	LABEL1932:
	// Setting char
	flag[138] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2032;
	
	else 
		goto LABEL1931;
	
	LABEL1933:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1934:
	// Checking char
	flag[99] = 'Y';
	goto LABEL2034;
	
	LABEL1935:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1936:
	// Setting char
	flag[63] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2036;
	
	else 
		goto LABEL1935;
	
	LABEL1937:
	// Setting char
	flag[49] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2037;
	
	else 
		goto LABEL1936;
	
	LABEL1938:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1939:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1940:
	// Setting char
	flag[52] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1840;
	
	else 
		goto LABEL1939;
	
	LABEL1941:
	// Checking char
	flag[89] = ':';
	goto LABEL1940;
	
	LABEL1942:
	// Setting char
	flag[133] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1842;
	
	else 
		goto LABEL1941;
	
	LABEL1943:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1944:
	// Setting char
	flag[164] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1844;
	
	else if (r == 1)
		goto LABEL1945;
	
	else 
		goto LABEL1943;
	
	LABEL1945:
	// Setting char
	flag[31] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1845;
	
	else 
		goto LABEL1946;
	
	LABEL1946:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1947:
	// Checking char
	flag[222] = 'v';
	goto LABEL1847;
	
	LABEL1948:
	// Checking char
	flag[78] = '2';
	goto LABEL1947;
	
	LABEL1949:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1950:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1952:
	// Setting char
	flag[116] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1852;
	
	else 
		goto LABEL1951;
	
	LABEL1953:
	// Checking char
	flag[123] = 'e';
	goto LABEL1952;
	
	LABEL1954:
	// Setting char
	flag[246] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1854;
	
	else 
		goto LABEL1953;
	
	LABEL1955:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1956:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1957:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1958:
	// Setting char
	flag[141] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2058;
	
	else 
		goto LABEL1957;
	
	LABEL1959:
	// Checking char
	flag[50] = '2';
	goto LABEL1958;
	
	LABEL1960:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1961:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1962:
	// Checking char
	flag[94] = 'p';
	goto LABEL2062;
	
	LABEL1963:
	// Checking char
	flag[207] = ',';
	goto LABEL1962;
	
	LABEL1964:
	// Setting char
	flag[156] = 'y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1864;
	
	else if (r == 1)
		goto LABEL2064;
	
	else 
		goto LABEL1963;
	
	LABEL1965:
	// Setting char
	flag[14] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1865;
	
	else 
		goto LABEL1964;
	
	LABEL1966:
	// Setting char
	flag[71] = 'm';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1866;
	
	else if (r == 1)
		goto LABEL2066;
	
	else 
		goto LABEL1965;
	
	LABEL1967:
	// Checking char
	flag[81] = '~';
	goto LABEL1966;
	
	LABEL1968:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1969:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1970:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1971:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1973:
	// Checking char
	flag[198] = 'I';
	goto LABEL2073;
	
	LABEL1974:
	// Setting char
	flag[189] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2074;
	
	else 
		goto LABEL1975;
	
	LABEL1975:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1976:
	// Setting char
	flag[122] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1876;
	
	else 
		goto LABEL2076;
	
	LABEL1977:
	// Checking char
	flag[55] = 'f';
	goto LABEL1976;
	
	LABEL1978:
	// Setting char
	flag[95] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1878;
	
	else if (r == 1)
		goto LABEL2078;
	
	else 
		goto LABEL1977;
	
	LABEL1979:
	// Setting char
	flag[224] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2079;
	
	else if (r == 1)
		goto LABEL1980;
	
	else 
		goto LABEL1978;
	
	LABEL1980:
	// Checking char
	flag[245] = 'q';
	goto LABEL2080;
	
	LABEL1981:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1982:
	// Checking char
	flag[178] = 't';
	goto LABEL2082;
	
	LABEL1983:
	// Checking char
	flag[118] = 'S';
	goto LABEL2083;
	
	LABEL1984:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1985:
	// Setting char
	flag[196] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2085;
	
	else 
		goto LABEL1984;
	
	LABEL1986:
	// Setting char
	flag[122] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1886;
	
	else 
		goto LABEL1985;
	
	LABEL1987:
	// Setting char
	flag[230] = 'y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2087;
	
	else if (r == 1)
		goto LABEL1988;
	
	else 
		goto LABEL1986;
	
	LABEL1988:
	// Checking char
	flag[139] = 'r';
	goto LABEL2088;
	
	LABEL1989:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1990:
	// Setting char
	flag[88] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1890;
	
	else 
		goto LABEL1989;
	
	LABEL1991:
	// Setting char
	flag[9] = 'k';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1891;
	
	else if (r == 1)
		goto LABEL1992;
	
	else 
		goto LABEL1990;
	
	LABEL1992:
	// Checking char
	flag[124] = 'F';
	goto LABEL1892;
	
	LABEL1993:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1995:
	// Setting char
	flag[11] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2095;
	
	else 
		goto LABEL1996;
	
	LABEL1996:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1997:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL1998:
	// Setting char
	flag[47] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2098;
	
	else 
		goto LABEL1999;
	
	LABEL1999:
	// Checking char
	flag[106] = 't';
	goto LABEL2099;
	
	LABEL2000:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2001:
	// Setting char
	flag[82] = 'D';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1901;
	
	else if (r == 1)
		goto LABEL2101;
	
	else 
		goto LABEL2000;
	
	LABEL2002:
	// Setting char
	flag[50] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2102;
	
	else 
		goto LABEL2001;
	
	LABEL2003:
	// Setting char
	flag[143] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2103;
	
	else 
		goto LABEL2002;
	
	LABEL2004:
	// Setting char
	flag[120] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2104;
	
	else 
		goto LABEL2003;
	
	LABEL2005:
	// Checking char
	flag[180] = 'Z';
	goto LABEL2004;
	
	LABEL2006:
	// Setting char
	flag[137] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1906;
	
	else 
		goto LABEL2005;
	
	LABEL2007:
	// Checking char
	flag[1] = 'O';
	goto LABEL2006;
	
	LABEL2008:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2009:
	// Checking char
	flag[55] = 'B';
	goto LABEL2008;
	
	LABEL2010:
	// Checking char
	flag[17] = '"';
	goto LABEL2009;
	
	LABEL2011:
	// Setting char
	flag[103] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2111;
	
	else 
		goto LABEL2012;
	
	LABEL2012:
	// Checking char
	flag[95] = '{';
	goto LABEL2112;
	
	LABEL2013:
	// Checking char
	flag[198] = '6';
	goto LABEL1913;
	
	LABEL2014:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2015:
	// Setting char
	flag[207] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2115;
	
	else 
		goto LABEL2014;
	
	LABEL2016:
	// Checking char
	flag[211] = 'a';
	goto LABEL2116;
	
	LABEL2017:
	// Checking char
	flag[36] = 'g';
	goto LABEL2016;
	
	LABEL2018:
	// Checking char
	flag[227] = '|';
	goto LABEL1918;
	
	LABEL2019:
	// Setting char
	flag[19] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1919;
	
	else if (r == 1)
		goto LABEL2119;
	
	else 
		goto LABEL2018;
	
	LABEL2020:
	// Setting char
	flag[138] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1920;
	
	else if (r == 1)
		goto LABEL2120;
	
	else 
		goto LABEL2019;
	
	LABEL2021:
	// Setting char
	flag[165] = 'C';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1921;
	
	else if (r == 1)
		goto LABEL2121;
	
	else 
		goto LABEL2020;
	
	LABEL2022:
	// Checking char
	flag[232] = '{';
	goto LABEL2021;
	
	LABEL2023:
	// Checking char
	flag[239] = 'N';
	goto LABEL2022;
	
	LABEL2024:
	// Checking char
	flag[10] = 'M';
	goto LABEL2023;
	
	LABEL2025:
	// Setting char
	flag[44] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2125;
	
	else 
		goto LABEL2024;
	
	LABEL2026:
	// Checking char
	flag[25] = '&';
	goto LABEL2126;
	
	LABEL2027:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2028:
	// Setting char
	flag[67] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2128;
	
	else 
		goto LABEL2027;
	
	LABEL2029:
	// Checking char
	flag[239] = 'W';
	goto LABEL2129;
	
	LABEL2030:
	// Checking char
	flag[41] = 'V';
	goto LABEL2029;
	
	LABEL2031:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2032:
	// Checking char
	flag[35] = ',';
	goto LABEL2033;
	
	LABEL2033:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2034:
	// Checking char
	flag[52] = 'x';
	goto LABEL2035;
	
	LABEL2035:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2036:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2037:
	// Checking char
	flag[232] = 'Q';
	goto LABEL2137;
	
	LABEL2038:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2039:
	// Checking char
	flag[68] = 's';
	goto LABEL2038;
	
	LABEL2040:
	// Checking char
	flag[19] = 'g';
	goto LABEL2039;
	
	LABEL2041:
	// Checking char
	flag[150] = '2';
	goto LABEL2040;
	
	LABEL2042:
	// Setting char
	flag[141] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1942;
	
	else 
		goto LABEL2041;
	
	LABEL2043:
	// Setting char
	flag[73] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2143;
	
	else 
		goto LABEL2042;
	
	LABEL2044:
	// Setting char
	flag[58] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1944;
	
	else if (r == 1)
		goto LABEL2045;
	
	else 
		goto LABEL2043;
	
	LABEL2045:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2046:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2047:
	// Checking char
	flag[190] = ']';
	goto LABEL2046;
	
	LABEL2048:
	// Setting char
	flag[72] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1948;
	
	else 
		goto LABEL2047;
	
	LABEL2049:
	// Setting char
	flag[105] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1949;
	
	else 
		goto LABEL2048;
	
	LABEL2050:
	// Setting char
	flag[200] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2150;
	
	else 
		goto LABEL2049;
	
	LABEL2051:
	// Checking char
	flag[33] = 'l';
	goto LABEL2050;
	
	LABEL2052:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2053:
	// Checking char
	flag[227] = '[';
	goto LABEL2052;
	
	LABEL2054:
	// Checking char
	flag[61] = 'M';
	goto LABEL1954;
	
	LABEL2055:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2056:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2057:
	// Checking char
	flag[65] = 'V';
	goto LABEL2056;
	
	LABEL2058:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2059:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2060:
	// Checking char
	flag[57] = 't';
	goto LABEL2160;
	
	LABEL2061:
	// Setting char
	flag[247] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1961;
	
	else 
		goto LABEL2060;
	
	LABEL2062:
	// Setting char
	flag[126] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2162;
	
	else 
		goto LABEL2061;
	
	LABEL2063:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2064:
	// Checking char
	flag[102] = 'x';
	goto LABEL2063;
	
	LABEL2065:
	// Checking char
	flag[96] = 'B';
	goto LABEL2165;
	
	LABEL2066:
	// Setting char
	flag[132] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2166;
	
	else if (r == 1)
		goto LABEL2067;
	
	else 
		goto LABEL2065;
	
	LABEL2067:
	// Checking char
	flag[241] = 'Q';
	goto LABEL2167;
	
	LABEL2068:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2069:
	// Setting char
	flag[163] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1969;
	
	else if (r == 1)
		goto LABEL2169;
	
	else 
		goto LABEL2068;
	
	LABEL2070:
	// Setting char
	flag[49] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1970;
	
	else 
		goto LABEL2069;
	
	LABEL2071:
	// Checking char
	flag[97] = '<';
	goto LABEL2070;
	
	LABEL2072:
	// Setting char
	flag[15] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL1972;
	
	else if (r == 1)
		goto LABEL2172;
	
	else 
		goto LABEL2071;
	
	LABEL2073:
	// Checking char
	flag[39] = 'w';
	goto LABEL2072;
	
	LABEL2074:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2075:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2076:
	// Checking char
	flag[97] = 's';
	goto LABEL2075;
	
	LABEL2077:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2078:
	// Checking char
	flag[230] = '6';
	goto LABEL2178;
	
	LABEL2079:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2080:
	// Setting char
	flag[203] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2180;
	
	else 
		goto LABEL2081;
	
	LABEL2081:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2082:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2083:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2084:
	// Checking char
	flag[194] = 'N';
	goto LABEL2184;
	
	LABEL2085:
	// Setting char
	flag[200] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2185;
	
	else 
		goto LABEL2084;
	
	LABEL2086:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2087:
	// Checking char
	flag[90] = 'P';
	goto LABEL2187;
	
	LABEL2088:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2089:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2090:
	// Checking char
	flag[116] = '6';
	goto LABEL2190;
	
	LABEL2091:
	// Setting char
	flag[153] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1991;
	
	else 
		goto LABEL2090;
	
	LABEL2092:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2093:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2094:
	// Setting char
	flag[93] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1994;
	
	else 
		goto LABEL2194;
	
	LABEL2095:
	// Setting char
	flag[78] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2195;
	
	else if (r == 1)
		goto LABEL2096;
	
	else 
		goto LABEL2094;
	
	LABEL2096:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2097:
	// Setting char
	flag[15] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL1997;
	
	else 
		goto LABEL2197;
	
	LABEL2098:
	// Setting char
	flag[97] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2198;
	
	else 
		goto LABEL2097;
	
	LABEL2099:
	// Checking char
	flag[1] = '?';
	goto LABEL2199;
	
	LABEL2100:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2101:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2102:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2103:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2104:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2106:
	// Setting char
	flag[67] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2107;
	
	else 
		goto LABEL2105;
	
	LABEL2107:
	// Setting char
	flag[45] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2007;
	
	else if (r == 1)
		goto LABEL2207;
	
	else 
		goto LABEL2108;
	
	LABEL2108:
	// Checking char
	flag[165] = 'M';
	goto LABEL2109;
	
	LABEL2109:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2110:
	// Checking char
	flag[189] = 'R';
	goto LABEL2010;
	
	LABEL2111:
	// Checking char
	flag[12] = 'I';
	goto LABEL2110;
	
	LABEL2112:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2113:
	// Checking char
	flag[174] = 'e';
	goto LABEL2013;
	
	LABEL2114:
	// Checking char
	flag[117] = '1';
	goto LABEL2214;
	
	LABEL2115:
	// Checking char
	flag[160] = '4';
	goto LABEL2114;
	
	LABEL2116:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2117:
	// Checking char
	flag[180] = '8';
	goto LABEL2017;
	
	LABEL2118:
	// Checking char
	flag[101] = 'v';
	goto LABEL2117;
	
	LABEL2119:
	// Checking char
	flag[59] = 'L';
	goto LABEL2118;
	
	LABEL2120:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2121:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2122:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2123:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2124:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2125:
	// Checking char
	flag[159] = 'Z';
	goto LABEL2124;
	
	LABEL2126:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2127:
	// Checking char
	flag[187] = 'w';
	goto LABEL2227;
	
	LABEL2128:
	// Setting char
	flag[101] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2228;
	
	else 
		goto LABEL2127;
	
	LABEL2129:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2130:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2131:
	// Setting char
	flag[234] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2031;
	
	else 
		goto LABEL2130;
	
	LABEL2132:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2133:
	// Checking char
	flag[119] = 'Y';
	goto LABEL2134;
	
	LABEL2134:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2135:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2136:
	// Checking char
	flag[35] = '2';
	goto LABEL2135;
	
	LABEL2137:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2138:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2139:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2140:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2141:
	// Setting char
	flag[5] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2142;
	
	else 
		goto LABEL2140;
	
	LABEL2142:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2143:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2144:
	// Checking char
	flag[101] = ';';
	goto LABEL2044;
	
	LABEL2145:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2146:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2147:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2148:
	// Checking char
	flag[222] = 'o';
	goto LABEL2149;
	
	LABEL2149:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2150:
	// Checking char
	flag[32] = '?';
	goto LABEL2250;
	
	LABEL2151:
	// Setting char
	flag[81] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2051;
	
	else 
		goto LABEL2251;
	
	LABEL2152:
	// Setting char
	flag[89] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2252;
	
	else 
		goto LABEL2151;
	
	LABEL2153:
	// Setting char
	flag[37] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2053;
	
	else 
		goto LABEL2152;
	
	LABEL2154:
	// Setting char
	flag[171] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2054;
	
	else 
		goto LABEL2153;
	
	LABEL2155:
	// Checking char
	flag[22] = 'e';
	goto LABEL2055;
	
	LABEL2156:
	// Setting char
	flag[38] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2256;
	
	else 
		goto LABEL2155;
	
	LABEL2157:
	// Setting char
	flag[132] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2057;
	
	else 
		goto LABEL2156;
	
	LABEL2158:
	// Setting char
	flag[15] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2258;
	
	else 
		goto LABEL2157;
	
	LABEL2159:
	// Setting char
	flag[3] = 'U';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2059;
	
	else if (r == 1)
		goto LABEL2259;
	
	else 
		goto LABEL2158;
	
	LABEL2160:
	// Setting char
	flag[34] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2260;
	
	else 
		goto LABEL2159;
	
	LABEL2161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2162:
	// Setting char
	flag[91] = 'q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2262;
	
	else if (r == 1)
		goto LABEL2163;
	
	else 
		goto LABEL2161;
	
	LABEL2163:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2164:
	// Checking char
	flag[226] = '6';
	goto LABEL2264;
	
	LABEL2165:
	// Checking char
	flag[86] = '%';
	goto LABEL2164;
	
	LABEL2166:
	// Checking char
	flag[91] = 'v';
	goto LABEL2266;
	
	LABEL2167:
	// Setting char
	flag[145] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2267;
	
	else 
		goto LABEL2168;
	
	LABEL2168:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2169:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2170:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2171:
	// Checking char
	flag[100] = 'O';
	goto LABEL2170;
	
	LABEL2172:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2173:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2174:
	// Checking char
	flag[134] = ';';
	goto LABEL2274;
	
	LABEL2175:
	// Setting char
	flag[87] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2275;
	
	else 
		goto LABEL2174;
	
	LABEL2176:
	// Checking char
	flag[123] = '0';
	goto LABEL2175;
	
	LABEL2177:
	// Setting char
	flag[209] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2077;
	
	else if (r == 1)
		goto LABEL2277;
	
	else 
		goto LABEL2176;
	
	LABEL2178:
	// Setting char
	flag[90] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2179;
	
	else 
		goto LABEL2177;
	
	LABEL2179:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2180:
	// Setting char
	flag[125] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2280;
	
	else 
		goto LABEL2181;
	
	LABEL2181:
	// Setting char
	flag[72] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2281;
	
	else 
		goto LABEL2182;
	
	LABEL2182:
	// Setting char
	flag[42] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2282;
	
	else 
		goto LABEL2183;
	
	LABEL2183:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2185:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2186:
	// Setting char
	flag[129] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2086;
	
	else 
		goto LABEL2286;
	
	LABEL2187:
	// Checking char
	flag[25] = 'G';
	goto LABEL2186;
	
	LABEL2188:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2189:
	// Checking char
	flag[242] = '6';
	goto LABEL2089;
	
	LABEL2190:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2191:
	// Checking char
	flag[106] = '~';
	goto LABEL2091;
	
	LABEL2192:
	// Checking char
	flag[161] = '4';
	goto LABEL2092;
	
	LABEL2193:
	// Checking char
	flag[199] = '}';
	goto LABEL2093;
	
	LABEL2194:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2195:
	// Checking char
	flag[248] = '}';
	goto LABEL2295;
	
	LABEL2196:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2197:
	// Checking char
	flag[146] = 'm';
	goto LABEL2297;
	
	LABEL2198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2199:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2200:
	// Checking char
	flag[163] = 'g';
	goto LABEL2100;
	
	LABEL2201:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2202:
	// Setting char
	flag[40] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2203;
	
	else 
		goto LABEL2201;
	
	LABEL2203:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2204:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2205:
	// Checking char
	flag[144] = '9';
	goto LABEL2204;
	
	LABEL2206:
	// Checking char
	flag[172] = 'V';
	goto LABEL2106;
	
	LABEL2207:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2208:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2209:
	// Checking char
	flag[154] = 'J';
	goto LABEL2208;
	
	LABEL2210:
	// Checking char
	flag[1] = '%';
	goto LABEL2211;
	
	LABEL2211:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2212:
	// Checking char
	flag[33] = 'z';
	goto LABEL2312;
	
	LABEL2213:
	// Setting char
	flag[25] = '&';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2113;
	
	else if (r == 1)
		goto LABEL2313;
	
	else 
		goto LABEL2212;
	
	LABEL2214:
	// Checking char
	flag[237] = 'i';
	goto LABEL2213;
	
	LABEL2215:
	// Checking char
	flag[125] = '.';
	goto LABEL2315;
	
	LABEL2216:
	// Checking char
	flag[208] = '{';
	goto LABEL2215;
	
	LABEL2217:
	// Checking char
	flag[31] = 'A';
	goto LABEL2216;
	
	LABEL2218:
	// Setting char
	flag[62] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2318;
	
	else 
		goto LABEL2217;
	
	LABEL2219:
	// Checking char
	flag[213] = '"';
	goto LABEL2218;
	
	LABEL2220:
	// Checking char
	flag[151] = '#';
	goto LABEL2219;
	
	LABEL2221:
	// Checking char
	flag[90] = '"';
	goto LABEL2220;
	
	LABEL2222:
	// Checking char
	flag[42] = '~';
	goto LABEL2122;
	
	LABEL2223:
	// Setting char
	flag[120] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2123;
	
	else 
		goto LABEL2224;
	
	LABEL2224:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2225:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2226:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2227:
	// Checking char
	flag[160] = 'Y';
	goto LABEL2226;
	
	LABEL2228:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2229:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2230:
	// Checking char
	flag[38] = 'w';
	goto LABEL2229;
	
	LABEL2231:
	// Setting char
	flag[28] = 'j';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2131;
	
	else if (r == 1)
		goto LABEL2331;
	
	else 
		goto LABEL2230;
	
	LABEL2232:
	// Setting char
	flag[7] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2132;
	
	else 
		goto LABEL2231;
	
	LABEL2233:
	// Setting char
	flag[21] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2133;
	
	else 
		goto LABEL2232;
	
	LABEL2234:
	// Checking char
	flag[184] = 'x';
	goto LABEL2233;
	
	LABEL2235:
	// Checking char
	flag[141] = '*';
	goto LABEL2234;
	
	LABEL2236:
	// Setting char
	flag[151] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2136;
	
	else 
		goto LABEL2235;
	
	LABEL2237:
	// Checking char
	flag[53] = ';';
	goto LABEL2238;
	
	LABEL2238:
	// Checking char
	flag[246] = ')';
	goto LABEL2138;
	
	LABEL2239:
	// Checking char
	flag[151] = 'i';
	goto LABEL2139;
	
	LABEL2240:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2241:
	// Setting char
	flag[29] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2141;
	
	else 
		goto LABEL2240;
	
	LABEL2242:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2243:
	// Checking char
	flag[28] = 'm';
	goto LABEL2242;
	
	LABEL2244:
	// Setting char
	flag[62] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2144;
	
	else if (r == 1)
		goto LABEL2344;
	
	else 
		goto LABEL2243;
	
	LABEL2245:
	// Setting char
	flag[77] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2145;
	
	else 
		goto LABEL2244;
	
	LABEL2246:
	// Setting char
	flag[159] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2146;
	
	else 
		goto LABEL2245;
	
	LABEL2247:
	// Setting char
	flag[126] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2147;
	
	else 
		goto LABEL2246;
	
	LABEL2248:
	// Setting char
	flag[173] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2148;
	
	else 
		goto LABEL2249;
	
	LABEL2249:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2250:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2251:
	// Checking char
	flag[74] = 'M';
	goto LABEL2351;
	
	LABEL2252:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2253:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2254:
	// Setting char
	flag[120] = 'm';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2154;
	
	else if (r == 1)
		goto LABEL2354;
	
	else 
		goto LABEL2253;
	
	LABEL2255:
	// Checking char
	flag[222] = 'E';
	goto LABEL2254;
	
	LABEL2256:
	// Setting char
	flag[143] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2356;
	
	else 
		goto LABEL2255;
	
	LABEL2257:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2258:
	// Setting char
	flag[11] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2358;
	
	else 
		goto LABEL2257;
	
	LABEL2259:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2260:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2261:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2262:
	// Checking char
	flag[128] = 'w';
	goto LABEL2263;
	
	LABEL2263:
	// Checking char
	flag[79] = ':';
	goto LABEL2363;
	
	LABEL2264:
	// Checking char
	flag[56] = 'd';
	goto LABEL2265;
	
	LABEL2265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2266:
	// Checking char
	flag[177] = 'm';
	goto LABEL2366;
	
	LABEL2267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2268:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2269:
	// Checking char
	flag[22] = 'y';
	goto LABEL2268;
	
	LABEL2270:
	// Checking char
	flag[115] = '~';
	goto LABEL2269;
	
	LABEL2271:
	// Setting char
	flag[221] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2171;
	
	else 
		goto LABEL2270;
	
	LABEL2272:
	// Setting char
	flag[126] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2372;
	
	else 
		goto LABEL2271;
	
	LABEL2273:
	// Setting char
	flag[173] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2173;
	
	else 
		goto LABEL2272;
	
	LABEL2274:
	// Setting char
	flag[104] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2374;
	
	else 
		goto LABEL2273;
	
	LABEL2275:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2276:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2277:
	// Setting char
	flag[59] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2377;
	
	else 
		goto LABEL2276;
	
	LABEL2278:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2279:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2280:
	// Checking char
	flag[121] = '@';
	goto LABEL2380;
	
	LABEL2281:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2282:
	// Setting char
	flag[192] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2382;
	
	else 
		goto LABEL2283;
	
	LABEL2283:
	// Checking char
	flag[239] = 'c';
	goto LABEL2284;
	
	LABEL2284:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2285:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2286:
	// Checking char
	flag[86] = '?';
	goto LABEL2285;
	
	LABEL2287:
	// Checking char
	flag[184] = '|';
	goto LABEL2387;
	
	LABEL2288:
	// Setting char
	flag[195] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2188;
	
	else 
		goto LABEL2287;
	
	LABEL2289:
	// Setting char
	flag[0] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2189;
	
	else if (r == 1)
		goto LABEL2389;
	
	else 
		goto LABEL2288;
	
	LABEL2290:
	// Checking char
	flag[24] = 'Z';
	goto LABEL2289;
	
	LABEL2291:
	// Setting char
	flag[183] = 'd';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2191;
	
	else if (r == 1)
		goto LABEL2391;
	
	else 
		goto LABEL2290;
	
	LABEL2292:
	// Setting char
	flag[132] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2192;
	
	else 
		goto LABEL2291;
	
	LABEL2293:
	// Setting char
	flag[61] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2193;
	
	else 
		goto LABEL2393;
	
	LABEL2294:
	// Checking char
	flag[139] = '9';
	goto LABEL2293;
	
	LABEL2295:
	// Setting char
	flag[50] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2395;
	
	else 
		goto LABEL2294;
	
	LABEL2296:
	// Setting char
	flag[158] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2196;
	
	else 
		goto LABEL2396;
	
	LABEL2297:
	// Setting char
	flag[237] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2298;
	
	else 
		goto LABEL2296;
	
	LABEL2298:
	// Setting char
	flag[44] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2398;
	
	else 
		goto LABEL2299;
	
	LABEL2299:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2300:
	// Checking char
	flag[53] = '4';
	goto LABEL2200;
	
	LABEL2301:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2302:
	// Setting char
	flag[21] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2202;
	
	else 
		goto LABEL2301;
	
	LABEL2303:
	// Checking char
	flag[103] = '=';
	goto LABEL2302;
	
	LABEL2304:
	// Checking char
	flag[227] = 'I';
	goto LABEL2303;
	
	LABEL2305:
	// Setting char
	flag[225] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2205;
	
	else if (r == 1)
		goto LABEL2405;
	
	else 
		goto LABEL2304;
	
	LABEL2306:
	// Setting char
	flag[50] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2206;
	
	else 
		goto LABEL2305;
	
	LABEL2307:
	// Checking char
	flag[85] = 's';
	goto LABEL2306;
	
	LABEL2308:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2309:
	// Checking char
	flag[193] = '"';
	goto LABEL2209;
	
	LABEL2310:
	// Checking char
	flag[27] = 'Q';
	goto LABEL2210;
	
	LABEL2311:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2312:
	// Checking char
	flag[96] = 'K';
	goto LABEL2311;
	
	LABEL2313:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2314:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2315:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2316:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2317:
	// Checking char
	flag[100] = ')';
	goto LABEL2316;
	
	LABEL2318:
	// Checking char
	flag[98] = 'O';
	goto LABEL2317;
	
	LABEL2319:
	// Checking char
	flag[17] = '=';
	goto LABEL2419;
	
	LABEL2320:
	// Setting char
	flag[233] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2420;
	
	else 
		goto LABEL2319;
	
	LABEL2321:
	// Setting char
	flag[144] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2221;
	
	else 
		goto LABEL2320;
	
	LABEL2322:
	// Setting char
	flag[156] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2222;
	
	else 
		goto LABEL2321;
	
	LABEL2323:
	// Setting char
	flag[46] = 'd';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2223;
	
	else if (r == 1)
		goto LABEL2423;
	
	else 
		goto LABEL2322;
	
	LABEL2324:
	// Checking char
	flag[12] = 't';
	goto LABEL2323;
	
	LABEL2325:
	// Checking char
	flag[127] = '-';
	goto LABEL2225;
	
	LABEL2326:
	// Checking char
	flag[87] = 'F';
	goto LABEL2325;
	
	LABEL2327:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2328:
	// Checking char
	flag[108] = 'k';
	goto LABEL2327;
	
	LABEL2329:
	// Checking char
	flag[219] = '}';
	goto LABEL2328;
	
	LABEL2330:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2331:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2332:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2333:
	// Checking char
	flag[90] = 'e';
	goto LABEL2332;
	
	LABEL2334:
	// Setting char
	flag[184] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2434;
	
	else 
		goto LABEL2333;
	
	LABEL2335:
	// Setting char
	flag[134] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2435;
	
	else 
		goto LABEL2334;
	
	LABEL2336:
	// Setting char
	flag[223] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2236;
	
	else if (r == 1)
		goto LABEL2436;
	
	else 
		goto LABEL2335;
	
	LABEL2337:
	// Setting char
	flag[100] = 'W';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2237;
	
	else if (r == 1)
		goto LABEL2437;
	
	else 
		goto LABEL2336;
	
	LABEL2338:
	// Checking char
	flag[148] = '&';
	goto LABEL2337;
	
	LABEL2339:
	// Setting char
	flag[95] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2239;
	
	else 
		goto LABEL2338;
	
	LABEL2340:
	// Checking char
	flag[126] = 'V';
	goto LABEL2339;
	
	LABEL2341:
	// Setting char
	flag[30] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2241;
	
	else if (r == 1)
		goto LABEL2441;
	
	else 
		goto LABEL2340;
	
	LABEL2342:
	// Checking char
	flag[15] = 'e';
	goto LABEL2341;
	
	LABEL2343:
	// Checking char
	flag[214] = '(';
	goto LABEL2342;
	
	LABEL2344:
	// Checking char
	flag[189] = '+';
	goto LABEL2444;
	
	LABEL2345:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2346:
	// Setting char
	flag[25] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2446;
	
	else 
		goto LABEL2345;
	
	LABEL2347:
	// Setting char
	flag[70] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2247;
	
	else 
		goto LABEL2346;
	
	LABEL2348:
	// Setting char
	flag[8] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2248;
	
	else 
		goto LABEL2347;
	
	LABEL2349:
	// Checking char
	flag[186] = 'D';
	goto LABEL2348;
	
	LABEL2350:
	// Setting char
	flag[104] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2450;
	
	else 
		goto LABEL2349;
	
	LABEL2351:
	// Setting char
	flag[155] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2352;
	
	else 
		goto LABEL2350;
	
	LABEL2352:
	// Checking char
	flag[168] = 'x';
	goto LABEL2353;
	
	LABEL2353:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2354:
	// Checking char
	flag[42] = 'U';
	goto LABEL2454;
	
	LABEL2355:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2356:
	// Setting char
	flag[4] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2456;
	
	else 
		goto LABEL2357;
	
	LABEL2357:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2358:
	// Setting char
	flag[59] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2458;
	
	else 
		goto LABEL2359;
	
	LABEL2359:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2360:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2361:
	// Setting char
	flag[201] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2261;
	
	else 
		goto LABEL2360;
	
	LABEL2362:
	// Setting char
	flag[120] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2462;
	
	else 
		goto LABEL2361;
	
	LABEL2363:
	// Checking char
	flag[122] = '8';
	goto LABEL2362;
	
	LABEL2364:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2365:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2366:
	// Setting char
	flag[8] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2466;
	
	else 
		goto LABEL2365;
	
	LABEL2367:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2368:
	// Checking char
	flag[232] = ')';
	goto LABEL2367;
	
	LABEL2369:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2370:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2371:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2372:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2373:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2374:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2375:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2376:
	// Checking char
	flag[16] = '7';
	goto LABEL2476;
	
	LABEL2377:
	// Setting char
	flag[8] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2378;
	
	else 
		goto LABEL2376;
	
	LABEL2378:
	// Setting char
	flag[22] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2278;
	
	else 
		goto LABEL2478;
	
	LABEL2379:
	// Checking char
	flag[220] = '9';
	goto LABEL2279;
	
	LABEL2380:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2381:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2382:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2383:
	// Checking char
	flag[153] = '6';
	goto LABEL2483;
	
	LABEL2384:
	// Checking char
	flag[55] = 'B';
	goto LABEL2383;
	
	LABEL2385:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2386:
	// Setting char
	flag[209] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2486;
	
	else 
		goto LABEL2385;
	
	LABEL2387:
	// Checking char
	flag[129] = 'D';
	goto LABEL2386;
	
	LABEL2388:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2389:
	// Checking char
	flag[62] = 'p';
	goto LABEL2388;
	
	LABEL2390:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2391:
	// Checking char
	flag[150] = '6';
	goto LABEL2390;
	
	LABEL2392:
	// Checking char
	flag[8] = '<';
	goto LABEL2292;
	
	LABEL2393:
	// Checking char
	flag[160] = '(';
	goto LABEL2392;
	
	LABEL2394:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2395:
	// Checking char
	flag[85] = 'n';
	goto LABEL2495;
	
	LABEL2396:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2397:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2398:
	// Setting char
	flag[192] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2498;
	
	else 
		goto LABEL2399;
	
	LABEL2399:
	// Checking char
	flag[140] = 'P';
	goto LABEL2499;
	
	LABEL2400:
	// Checking char
	flag[111] = '#';
	goto LABEL2300;
	
	LABEL2401:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2402:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2403:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2404:
	// Checking char
	flag[133] = 'g';
	goto LABEL2403;
	
	LABEL2405:
	// Checking char
	flag[248] = 'f';
	goto LABEL2404;
	
	LABEL2406:
	// Checking char
	flag[193] = '<';
	goto LABEL2506;
	
	LABEL2407:
	// Setting char
	flag[58] = '>';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2307;
	
	else if (r == 1)
		goto LABEL2507;
	
	else 
		goto LABEL2406;
	
	LABEL2408:
	// Setting char
	flag[94] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2308;
	
	else 
		goto LABEL2407;
	
	LABEL2409:
	// Setting char
	flag[215] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2309;
	
	else 
		goto LABEL2408;
	
	LABEL2410:
	// Checking char
	flag[160] = 'I';
	goto LABEL2310;
	
	LABEL2411:
	// Checking char
	flag[69] = '9';
	goto LABEL2410;
	
	LABEL2412:
	// Setting char
	flag[48] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2413;
	
	else 
		goto LABEL2411;
	
	LABEL2413:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2414:
	// Checking char
	flag[198] = '*';
	goto LABEL2314;
	
	LABEL2415:
	// Checking char
	flag[101] = 'o';
	goto LABEL2414;
	
	LABEL2416:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2417:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2418:
	// Setting char
	flag[57] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2518;
	
	else 
		goto LABEL2417;
	
	LABEL2419:
	// Checking char
	flag[128] = 'G';
	goto LABEL2418;
	
	LABEL2420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2421:
	// Checking char
	flag[126] = 'G';
	goto LABEL2521;
	
	LABEL2422:
	// Checking char
	flag[145] = 'M';
	goto LABEL2421;
	
	LABEL2423:
	// Checking char
	flag[223] = 'b';
	goto LABEL2422;
	
	LABEL2424:
	// Setting char
	flag[108] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2324;
	
	else 
		goto LABEL2524;
	
	LABEL2425:
	// Setting char
	flag[5] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2525;
	
	else 
		goto LABEL2424;
	
	LABEL2426:
	// Setting char
	flag[118] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2326;
	
	else if (r == 1)
		goto LABEL2526;
	
	else 
		goto LABEL2425;
	
	LABEL2427:
	// Checking char
	flag[89] = 'w';
	goto LABEL2426;
	
	LABEL2428:
	// Checking char
	flag[197] = 'b';
	goto LABEL2427;
	
	LABEL2429:
	// Setting char
	flag[46] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2329;
	
	else 
		goto LABEL2428;
	
	LABEL2430:
	// Setting char
	flag[248] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2330;
	
	else 
		goto LABEL2429;
	
	LABEL2431:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2432:
	// Setting char
	flag[169] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2532;
	
	else 
		goto LABEL2431;
	
	LABEL2433:
	// Setting char
	flag[188] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2533;
	
	else 
		goto LABEL2432;
	
	LABEL2434:
	// Checking char
	flag[150] = 'F';
	goto LABEL2433;
	
	LABEL2435:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2436:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2437:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2438:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2439:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2440:
	// Checking char
	flag[110] = '}';
	goto LABEL2439;
	
	LABEL2441:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2442:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2443:
	// Setting char
	flag[42] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2343;
	
	else 
		goto LABEL2442;
	
	LABEL2444:
	// Checking char
	flag[182] = '&';
	goto LABEL2443;
	
	LABEL2445:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2446:
	// Setting char
	flag[37] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2546;
	
	else if (r == 1)
		goto LABEL2447;
	
	else 
		goto LABEL2445;
	
	LABEL2447:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2448:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2449:
	// Setting char
	flag[200] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2549;
	
	else 
		goto LABEL2448;
	
	LABEL2450:
	// Setting char
	flag[224] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2451;
	
	else 
		goto LABEL2449;
	
	LABEL2451:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2452:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2453:
	// Checking char
	flag[191] = 'T';
	goto LABEL2452;
	
	LABEL2454:
	// Checking char
	flag[209] = 'b';
	goto LABEL2554;
	
	LABEL2455:
	// Checking char
	flag[215] = 'r';
	goto LABEL2355;
	
	LABEL2456:
	// Checking char
	flag[245] = '$';
	goto LABEL2455;
	
	LABEL2457:
	// Checking char
	flag[158] = 'K';
	goto LABEL2557;
	
	LABEL2458:
	// Setting char
	flag[100] = 'f';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2558;
	
	else if (r == 1)
		goto LABEL2459;
	
	else 
		goto LABEL2457;
	
	LABEL2459:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2460:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2461:
	// Setting char
	flag[31] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2561;
	
	else 
		goto LABEL2460;
	
	LABEL2462:
	// Setting char
	flag[120] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2463;
	
	else 
		goto LABEL2461;
	
	LABEL2463:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2464:
	// Checking char
	flag[5] = 'A';
	goto LABEL2364;
	
	LABEL2465:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2466:
	// Checking char
	flag[153] = 'f';
	goto LABEL2465;
	
	LABEL2467:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2468:
	// Setting char
	flag[168] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2368;
	
	else 
		goto LABEL2467;
	
	LABEL2469:
	// Setting char
	flag[52] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2369;
	
	else if (r == 1)
		goto LABEL2470;
	
	else 
		goto LABEL2468;
	
	LABEL2470:
	// Checking char
	flag[130] = 's';
	goto LABEL2370;
	
	LABEL2471:
	// Checking char
	flag[51] = '/';
	goto LABEL2371;
	
	LABEL2472:
	// Setting char
	flag[149] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2572;
	
	else 
		goto LABEL2471;
	
	LABEL2473:
	// Setting char
	flag[115] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2373;
	
	else if (r == 1)
		goto LABEL2573;
	
	else 
		goto LABEL2472;
	
	LABEL2474:
	// Setting char
	flag[200] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2574;
	
	else 
		goto LABEL2473;
	
	LABEL2475:
	// Setting char
	flag[123] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2375;
	
	else if (r == 1)
		goto LABEL2575;
	
	else 
		goto LABEL2474;
	
	LABEL2476:
	// Setting char
	flag[115] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2477;
	
	else 
		goto LABEL2475;
	
	LABEL2477:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2478:
	// Setting char
	flag[21] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2578;
	
	else 
		goto LABEL2479;
	
	LABEL2479:
	// Setting char
	flag[145] = '/';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2379;
	
	else if (r == 1)
		goto LABEL2579;
	
	else 
		goto LABEL2480;
	
	LABEL2480:
	// Checking char
	flag[23] = 'x';
	goto LABEL2481;
	
	LABEL2481:
	// Setting char
	flag[95] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2381;
	
	else if (r == 1)
		goto LABEL2581;
	
	else 
		goto LABEL2482;
	
	LABEL2482:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2483:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2484:
	// Checking char
	flag[114] = '0';
	goto LABEL2384;
	
	LABEL2485:
	// Checking char
	flag[22] = 'p';
	goto LABEL2484;
	
	LABEL2486:
	// Checking char
	flag[246] = 'w';
	goto LABEL2485;
	
	LABEL2487:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2488:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2489:
	// Checking char
	flag[116] = 'y';
	goto LABEL2490;
	
	LABEL2490:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2491:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2492:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2493:
	// Checking char
	flag[240] = ',';
	goto LABEL2492;
	
	LABEL2494:
	// Setting char
	flag[10] = 'C';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2394;
	
	else if (r == 1)
		goto LABEL2594;
	
	else 
		goto LABEL2493;
	
	LABEL2495:
	// Setting char
	flag[150] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2595;
	
	else if (r == 1)
		goto LABEL2496;
	
	else 
		goto LABEL2494;
	
	LABEL2496:
	// Checking char
	flag[218] = 'A';
	goto LABEL2497;
	
	LABEL2497:
	// Setting char
	flag[4] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2397;
	
	else 
		goto LABEL2597;
	
	LABEL2498:
	// Checking char
	flag[28] = '+';
	goto LABEL2598;
	
	LABEL2499:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2500:
	// Setting char
	flag[162] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2400;
	
	else 
		goto LABEL2600;
	
	LABEL2501:
	// Setting char
	flag[143] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2401;
	
	else if (r == 1)
		goto LABEL2601;
	
	else 
		goto LABEL2500;
	
	LABEL2502:
	// Setting char
	flag[240] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2402;
	
	else if (r == 1)
		goto LABEL2602;
	
	else 
		goto LABEL2501;
	
	LABEL2503:
	// Checking char
	flag[55] = 'x';
	goto LABEL2502;
	
	LABEL2504:
	// Checking char
	flag[174] = '?';
	goto LABEL2503;
	
	LABEL2505:
	// Checking char
	flag[175] = 'k';
	goto LABEL2504;
	
	LABEL2506:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2507:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2508:
	// Checking char
	flag[0] = '%';
	goto LABEL2608;
	
	LABEL2509:
	// Setting char
	flag[189] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2409;
	
	else 
		goto LABEL2508;
	
	LABEL2510:
	// Setting char
	flag[24] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2610;
	
	else 
		goto LABEL2509;
	
	LABEL2511:
	// Checking char
	flag[56] = 'K';
	goto LABEL2510;
	
	LABEL2512:
	// Setting char
	flag[183] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2412;
	
	else 
		goto LABEL2511;
	
	LABEL2513:
	// Checking char
	flag[45] = '@';
	goto LABEL2512;
	
	LABEL2514:
	// Setting char
	flag[170] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2614;
	
	else 
		goto LABEL2513;
	
	LABEL2515:
	// Setting char
	flag[114] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2415;
	
	else 
		goto LABEL2514;
	
	LABEL2516:
	// Setting char
	flag[92] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2416;
	
	else 
		goto LABEL2515;
	
	LABEL2517:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2518:
	// Setting char
	flag[162] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2618;
	
	else if (r == 1)
		goto LABEL2519;
	
	else 
		goto LABEL2517;
	
	LABEL2519:
	// Checking char
	flag[125] = 'P';
	goto LABEL2520;
	
	LABEL2520:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2521:
	// Checking char
	flag[4] = ';';
	goto LABEL2621;
	
	LABEL2522:
	// Checking char
	flag[117] = 'k';
	goto LABEL2622;
	
	LABEL2523:
	// Setting char
	flag[63] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2623;
	
	else 
		goto LABEL2522;
	
	LABEL2524:
	// Checking char
	flag[196] = 'F';
	goto LABEL2523;
	
	LABEL2525:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2526:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2527:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2528:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2529:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2530:
	// Checking char
	flag[157] = 'N';
	goto LABEL2430;
	
	LABEL2531:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2532:
	// Checking char
	flag[172] = 'i';
	goto LABEL2632;
	
	LABEL2533:
	// Setting char
	flag[85] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2633;
	
	else 
		goto LABEL2534;
	
	LABEL2534:
	// Checking char
	flag[159] = '<';
	goto LABEL2634;
	
	LABEL2535:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2536:
	// Checking char
	flag[160] = 'B';
	goto LABEL2535;
	
	LABEL2537:
	// Setting char
	flag[214] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2637;
	
	else 
		goto LABEL2536;
	
	LABEL2538:
	// Setting char
	flag[153] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2438;
	
	else 
		goto LABEL2537;
	
	LABEL2539:
	// Setting char
	flag[171] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2639;
	
	else 
		goto LABEL2538;
	
	LABEL2540:
	// Setting char
	flag[211] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2440;
	
	else if (r == 1)
		goto LABEL2640;
	
	else 
		goto LABEL2539;
	
	LABEL2541:
	// Checking char
	flag[120] = 'v';
	goto LABEL2540;
	
	LABEL2542:
	// Setting char
	flag[76] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2642;
	
	else 
		goto LABEL2541;
	
	LABEL2543:
	// Setting char
	flag[104] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2643;
	
	else 
		goto LABEL2542;
	
	LABEL2544:
	// Checking char
	flag[58] = '7';
	goto LABEL2543;
	
	LABEL2545:
	// Setting char
	flag[237] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2645;
	
	else 
		goto LABEL2544;
	
	LABEL2546:
	// Setting char
	flag[193] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2646;
	
	else if (r == 1)
		goto LABEL2547;
	
	else 
		goto LABEL2545;
	
	LABEL2547:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2548:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2549:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2550:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2551:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2552:
	// Setting char
	flag[3] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2652;
	
	else 
		goto LABEL2551;
	
	LABEL2553:
	// Setting char
	flag[234] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2453;
	
	else 
		goto LABEL2552;
	
	LABEL2554:
	// Checking char
	flag[93] = 'J';
	goto LABEL2553;
	
	LABEL2555:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2556:
	// Checking char
	flag[109] = '"';
	goto LABEL2555;
	
	LABEL2557:
	// Setting char
	flag[125] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2657;
	
	else 
		goto LABEL2556;
	
	LABEL2558:
	// Checking char
	flag[180] = 'g';
	goto LABEL2658;
	
	LABEL2559:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2560:
	// Checking char
	flag[216] = '=';
	goto LABEL2660;
	
	LABEL2561:
	// Setting char
	flag[76] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2661;
	
	else 
		goto LABEL2560;
	
	LABEL2562:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2563:
	// Setting char
	flag[208] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2663;
	
	else 
		goto LABEL2562;
	
	LABEL2564:
	// Setting char
	flag[81] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2464;
	
	else if (r == 1)
		goto LABEL2565;
	
	else 
		goto LABEL2563;
	
	LABEL2565:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2566:
	// Checking char
	flag[69] = 'A';
	goto LABEL2666;
	
	LABEL2567:
	// Setting char
	flag[110] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2667;
	
	else 
		goto LABEL2566;
	
	LABEL2568:
	// Checking char
	flag[221] = 't';
	goto LABEL2567;
	
	LABEL2569:
	// Setting char
	flag[128] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2469;
	
	else 
		goto LABEL2568;
	
	LABEL2570:
	// Checking char
	flag[15] = '0';
	goto LABEL2670;
	
	LABEL2571:
	// Checking char
	flag[123] = '^';
	goto LABEL2570;
	
	LABEL2572:
	// Checking char
	flag[102] = 'e';
	goto LABEL2571;
	
	LABEL2573:
	// Checking char
	flag[74] = '*';
	goto LABEL2673;
	
	LABEL2574:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2575:
	// Setting char
	flag[146] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2675;
	
	else 
		goto LABEL2576;
	
	LABEL2576:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2577:
	// Checking char
	flag[160] = 'X';
	goto LABEL2677;
	
	LABEL2578:
	// Checking char
	flag[43] = '"';
	goto LABEL2577;
	
	LABEL2579:
	// Setting char
	flag[12] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2679;
	
	else 
		goto LABEL2580;
	
	LABEL2580:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2581:
	// Checking char
	flag[82] = 'b';
	goto LABEL2582;
	
	LABEL2582:
	// Setting char
	flag[33] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2682;
	
	else 
		goto LABEL2583;
	
	LABEL2583:
	// Checking char
	flag[34] = 'P';
	goto LABEL2584;
	
	LABEL2584:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2585:
	// Checking char
	flag[29] = '(';
	goto LABEL2685;
	
	LABEL2586:
	// Checking char
	flag[12] = '&';
	goto LABEL2585;
	
	LABEL2587:
	// Setting char
	flag[83] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2487;
	
	else 
		goto LABEL2687;
	
	LABEL2588:
	// Setting char
	flag[221] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2488;
	
	else 
		goto LABEL2587;
	
	LABEL2589:
	// Setting char
	flag[160] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2489;
	
	else 
		goto LABEL2588;
	
	LABEL2590:
	// Setting char
	flag[158] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2690;
	
	else 
		goto LABEL2589;
	
	LABEL2591:
	// Setting char
	flag[136] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2491;
	
	else if (r == 1)
		goto LABEL2691;
	
	else 
		goto LABEL2590;
	
	LABEL2592:
	// Checking char
	flag[115] = 't';
	goto LABEL2591;
	
	LABEL2593:
	// Setting char
	flag[103] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2693;
	
	else 
		goto LABEL2592;
	
	LABEL2594:
	// Setting char
	flag[115] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2694;
	
	else 
		goto LABEL2593;
	
	LABEL2595:
	// Checking char
	flag[215] = '<';
	goto LABEL2695;
	
	LABEL2596:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2597:
	// Setting char
	flag[49] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2697;
	
	else 
		goto LABEL2596;
	
	LABEL2598:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2599:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2600:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2601:
	// Checking char
	flag[138] = ':';
	goto LABEL2701;
	
	LABEL2602:
	// Checking char
	flag[43] = 'p';
	goto LABEL2702;
	
	LABEL2603:
	// Checking char
	flag[207] = '7';
	goto LABEL2703;
	
	LABEL2604:
	// Checking char
	flag[75] = 'p';
	goto LABEL2603;
	
	LABEL2605:
	// Setting char
	flag[167] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2505;
	
	else 
		goto LABEL2604;
	
	LABEL2606:
	// Checking char
	flag[191] = '$';
	goto LABEL2605;
	
	LABEL2607:
	// Checking char
	flag[113] = '"';
	goto LABEL2606;
	
	LABEL2608:
	// Checking char
	flag[245] = 'R';
	goto LABEL2607;
	
	LABEL2609:
	// Checking char
	flag[199] = '2';
	goto LABEL2709;
	
	LABEL2610:
	// Checking char
	flag[111] = 'P';
	goto LABEL2609;
	
	LABEL2611:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2612:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2613:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2614:
	// Setting char
	flag[111] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2714;
	
	else 
		goto LABEL2615;
	
	LABEL2615:
	// Checking char
	flag[131] = 's';
	goto LABEL2715;
	
	LABEL2616:
	// Setting char
	flag[169] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2516;
	
	else 
		goto LABEL2716;
	
	LABEL2617:
	// Checking char
	flag[35] = '=';
	goto LABEL2616;
	
	LABEL2618:
	// Setting char
	flag[163] = 'v';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2718;
	
	else if (r == 1)
		goto LABEL2619;
	
	else 
		goto LABEL2617;
	
	LABEL2619:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2620:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2621:
	// Setting char
	flag[92] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2721;
	
	else 
		goto LABEL2620;
	
	LABEL2622:
	// Checking char
	flag[28] = '+';
	goto LABEL2722;
	
	LABEL2623:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2624:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2625:
	// Checking char
	flag[20] = ')';
	goto LABEL2624;
	
	LABEL2626:
	// Checking char
	flag[70] = 'A';
	goto LABEL2625;
	
	LABEL2627:
	// Checking char
	flag[167] = '-';
	goto LABEL2527;
	
	LABEL2628:
	// Checking char
	flag[200] = 'a';
	goto LABEL2528;
	
	LABEL2629:
	// Setting char
	flag[150] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2529;
	
	else 
		goto LABEL2628;
	
	LABEL2630:
	// Setting char
	flag[75] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2530;
	
	else 
		goto LABEL2629;
	
	LABEL2631:
	// Setting char
	flag[220] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2531;
	
	else 
		goto LABEL2630;
	
	LABEL2632:
	// Checking char
	flag[227] = '9';
	goto LABEL2631;
	
	LABEL2633:
	// Checking char
	flag[239] = '#';
	goto LABEL2733;
	
	LABEL2634:
	// Checking char
	flag[29] = 'u';
	goto LABEL2734;
	
	LABEL2635:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2636:
	// Setting char
	flag[100] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2736;
	
	else 
		goto LABEL2635;
	
	LABEL2637:
	// Setting char
	flag[204] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2638;
	
	else 
		goto LABEL2636;
	
	LABEL2638:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2639:
	// Checking char
	flag[105] = 'z';
	goto LABEL2739;
	
	LABEL2640:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2641:
	// Checking char
	flag[70] = '/';
	goto LABEL2741;
	
	LABEL2642:
	// Checking char
	flag[136] = '&';
	goto LABEL2641;
	
	LABEL2643:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2644:
	// Checking char
	flag[228] = 'C';
	goto LABEL2744;
	
	LABEL2645:
	// Checking char
	flag[141] = '{';
	goto LABEL2644;
	
	LABEL2646:
	// Setting char
	flag[156] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2746;
	
	else 
		goto LABEL2647;
	
	LABEL2647:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2648:
	// Setting char
	flag[12] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2548;
	
	else 
		goto LABEL2748;
	
	LABEL2649:
	// Checking char
	flag[61] = '&';
	goto LABEL2648;
	
	LABEL2650:
	// Setting char
	flag[36] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2550;
	
	else 
		goto LABEL2649;
	
	LABEL2651:
	// Setting char
	flag[88] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2751;
	
	else 
		goto LABEL2650;
	
	LABEL2652:
	// Setting char
	flag[58] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2653;
	
	else 
		goto LABEL2651;
	
	LABEL2653:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2654:
	// Checking char
	flag[70] = '/';
	goto LABEL2754;
	
	LABEL2655:
	// Checking char
	flag[249] = 'A';
	goto LABEL2654;
	
	LABEL2656:
	// Setting char
	flag[125] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2756;
	
	else 
		goto LABEL2655;
	
	LABEL2657:
	// Setting char
	flag[167] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2757;
	
	else 
		goto LABEL2656;
	
	LABEL2658:
	// Checking char
	flag[40] = 'B';
	goto LABEL2659;
	
	LABEL2659:
	// Setting char
	flag[189] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2559;
	
	else 
		goto LABEL2759;
	
	LABEL2660:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2661:
	// Checking char
	flag[191] = 'U';
	goto LABEL2761;
	
	LABEL2662:
	// Checking char
	flag[36] = ',';
	goto LABEL2762;
	
	LABEL2663:
	// Checking char
	flag[192] = '*';
	goto LABEL2662;
	
	LABEL2664:
	// Checking char
	flag[191] = 'Z';
	goto LABEL2564;
	
	LABEL2665:
	// Checking char
	flag[97] = '/';
	goto LABEL2664;
	
	LABEL2666:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2667:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2668:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2669:
	// Setting char
	flag[237] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2569;
	
	else if (r == 1)
		goto LABEL2769;
	
	else 
		goto LABEL2668;
	
	LABEL2670:
	// Setting char
	flag[117] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2770;
	
	else if (r == 1)
		goto LABEL2671;
	
	else 
		goto LABEL2669;
	
	LABEL2671:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2672:
	// Checking char
	flag[235] = '<';
	goto LABEL2772;
	
	LABEL2673:
	// Checking char
	flag[150] = ']';
	goto LABEL2672;
	
	LABEL2674:
	// Checking char
	flag[228] = 't';
	goto LABEL2774;
	
	LABEL2675:
	// Setting char
	flag[43] = 'j';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2775;
	
	else if (r == 1)
		goto LABEL2676;
	
	else 
		goto LABEL2674;
	
	LABEL2676:
	// Checking char
	flag[123] = 'J';
	goto LABEL2776;
	
	LABEL2677:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2679:
	// Setting char
	flag[156] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2680;
	
	else 
		goto LABEL2678;
	
	LABEL2680:
	// Setting char
	flag[193] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2780;
	
	else 
		goto LABEL2681;
	
	LABEL2681:
	// Checking char
	flag[29] = 'O';
	goto LABEL2781;
	
	LABEL2682:
	// Setting char
	flag[12] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2782;
	
	else 
		goto LABEL2683;
	
	LABEL2683:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2684:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2685:
	// Checking char
	flag[150] = '1';
	goto LABEL2684;
	
	LABEL2686:
	// Checking char
	flag[200] = 'l';
	goto LABEL2586;
	
	LABEL2687:
	// Checking char
	flag[174] = '%';
	goto LABEL2686;
	
	LABEL2688:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2689:
	// Setting char
	flag[177] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2789;
	
	else 
		goto LABEL2688;
	
	LABEL2690:
	// Setting char
	flag[89] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2790;
	
	else 
		goto LABEL2689;
	
	LABEL2691:
	// Checking char
	flag[58] = '/';
	goto LABEL2692;
	
	LABEL2692:
	// Checking char
	flag[226] = 'I';
	goto LABEL2792;
	
	LABEL2693:
	// Checking char
	flag[41] = 'W';
	goto LABEL2793;
	
	LABEL2694:
	// Checking char
	flag[61] = '_';
	goto LABEL2794;
	
	LABEL2695:
	// Checking char
	flag[92] = 'o';
	goto LABEL2696;
	
	LABEL2696:
	// Checking char
	flag[215] = '#';
	goto LABEL2796;
	
	LABEL2697:
	// Setting char
	flag[226] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2797;
	
	else 
		goto LABEL2698;
	
	LABEL2698:
	// Checking char
	flag[129] = 'j';
	goto LABEL2699;
	
	LABEL2699:
	// Setting char
	flag[172] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2599;
	
	else 
		goto LABEL2799;
	
	LABEL2700:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2701:
	// Checking char
	flag[205] = 'E';
	goto LABEL2700;
	
	LABEL2702:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2703:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2704:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2705:
	// Checking char
	flag[184] = 'K';
	goto LABEL2704;
	
	LABEL2706:
	// Checking char
	flag[135] = 'A';
	goto LABEL2705;
	
	LABEL2707:
	// Checking char
	flag[74] = '?';
	goto LABEL2706;
	
	LABEL2708:
	// Setting char
	flag[96] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2808;
	
	else 
		goto LABEL2707;
	
	LABEL2709:
	// Setting char
	flag[22] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2809;
	
	else if (r == 1)
		goto LABEL2710;
	
	else 
		goto LABEL2708;
	
	LABEL2710:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2711:
	// Setting char
	flag[0] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2611;
	
	else 
		goto LABEL2811;
	
	LABEL2712:
	// Setting char
	flag[118] = '@';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2612;
	
	else if (r == 1)
		goto LABEL2812;
	
	else 
		goto LABEL2711;
	
	LABEL2713:
	// Setting char
	flag[72] = ')';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2613;
	
	else if (r == 1)
		goto LABEL2813;
	
	else 
		goto LABEL2712;
	
	LABEL2714:
	// Setting char
	flag[110] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2814;
	
	else 
		goto LABEL2713;
	
	LABEL2715:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2716:
	// Checking char
	flag[236] = 'h';
	goto LABEL2816;
	
	LABEL2717:
	// Checking char
	flag[74] = 'C';
	goto LABEL2817;
	
	LABEL2718:
	// Setting char
	flag[81] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2818;
	
	else if (r == 1)
		goto LABEL2719;
	
	else 
		goto LABEL2717;
	
	LABEL2719:
	// Checking char
	flag[53] = 'b';
	goto LABEL2720;
	
	LABEL2720:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2721:
	// Checking char
	flag[38] = 'l';
	goto LABEL2821;
	
	LABEL2722:
	// Setting char
	flag[1] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2822;
	
	else 
		goto LABEL2723;
	
	LABEL2723:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2724:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2725:
	// Checking char
	flag[92] = 'v';
	goto LABEL2724;
	
	LABEL2726:
	// Setting char
	flag[247] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2626;
	
	else if (r == 1)
		goto LABEL2826;
	
	else 
		goto LABEL2725;
	
	LABEL2727:
	// Setting char
	flag[248] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2627;
	
	else 
		goto LABEL2726;
	
	LABEL2728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2729:
	// Setting char
	flag[152] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2829;
	
	else 
		goto LABEL2728;
	
	LABEL2730:
	// Setting char
	flag[208] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2830;
	
	else 
		goto LABEL2729;
	
	LABEL2731:
	// Checking char
	flag[27] = 'T';
	goto LABEL2730;
	
	LABEL2732:
	// Setting char
	flag[72] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2832;
	
	else 
		goto LABEL2731;
	
	LABEL2733:
	// Checking char
	flag[238] = 'I';
	goto LABEL2732;
	
	LABEL2734:
	// Checking char
	flag[135] = '%';
	goto LABEL2834;
	
	LABEL2735:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2736:
	// Setting char
	flag[136] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2836;
	
	else 
		goto LABEL2735;
	
	LABEL2737:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2738:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2739:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2740:
	// Checking char
	flag[23] = '5';
	goto LABEL2840;
	
	LABEL2741:
	// Checking char
	flag[168] = ')';
	goto LABEL2740;
	
	LABEL2742:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2743:
	// Setting char
	flag[169] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2843;
	
	else 
		goto LABEL2742;
	
	LABEL2744:
	// Setting char
	flag[161] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2844;
	
	else 
		goto LABEL2743;
	
	LABEL2745:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2746:
	// Checking char
	flag[117] = 'Z';
	goto LABEL2745;
	
	LABEL2747:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2748:
	// Setting char
	flag[9] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2848;
	
	else 
		goto LABEL2747;
	
	LABEL2749:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2750:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2751:
	// Setting char
	flag[172] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2851;
	
	else 
		goto LABEL2750;
	
	LABEL2752:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2753:
	// Checking char
	flag[206] = '#';
	goto LABEL2752;
	
	LABEL2754:
	// Setting char
	flag[31] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2854;
	
	else 
		goto LABEL2753;
	
	LABEL2755:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2756:
	// Checking char
	flag[147] = '(';
	goto LABEL2755;
	
	LABEL2757:
	// Checking char
	flag[27] = 'M';
	goto LABEL2857;
	
	LABEL2758:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2759:
	// Checking char
	flag[10] = ']';
	goto LABEL2760;
	
	LABEL2760:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2761:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2762:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2763:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2764:
	// Checking char
	flag[71] = 'b';
	goto LABEL2763;
	
	LABEL2765:
	// Setting char
	flag[196] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2665;
	
	else 
		goto LABEL2764;
	
	LABEL2766:
	// Setting char
	flag[135] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2767;
	
	else 
		goto LABEL2765;
	
	LABEL2767:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2768:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2769:
	// Checking char
	flag[187] = '-';
	goto LABEL2869;
	
	LABEL2770:
	// Checking char
	flag[227] = '4';
	goto LABEL2771;
	
	LABEL2771:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2772:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2773:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2774:
	// Checking char
	flag[201] = 'W';
	goto LABEL2874;
	
	LABEL2775:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2776:
	// Setting char
	flag[85] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2876;
	
	else 
		goto LABEL2777;
	
	LABEL2777:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2778:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2779:
	// Setting char
	flag[54] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2879;
	
	else 
		goto LABEL2778;
	
	LABEL2780:
	// Checking char
	flag[67] = 'O';
	goto LABEL2779;
	
	LABEL2781:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2782:
	// Checking char
	flag[15] = 'n';
	goto LABEL2882;
	
	LABEL2783:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2784:
	// Checking char
	flag[228] = ']';
	goto LABEL2783;
	
	LABEL2785:
	// Checking char
	flag[102] = '/';
	goto LABEL2784;
	
	LABEL2786:
	// Setting char
	flag[235] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2886;
	
	else 
		goto LABEL2785;
	
	LABEL2787:
	// Setting char
	flag[65] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2887;
	
	else 
		goto LABEL2786;
	
	LABEL2788:
	// Checking char
	flag[62] = '~';
	goto LABEL2787;
	
	LABEL2789:
	// Checking char
	flag[232] = 'Q';
	goto LABEL2788;
	
	LABEL2790:
	// Setting char
	flag[162] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2890;
	
	else 
		goto LABEL2791;
	
	LABEL2791:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2792:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2793:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2794:
	// Checking char
	flag[152] = 's';
	goto LABEL2894;
	
	LABEL2795:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2796:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2797:
	// Checking char
	flag[71] = '}';
	goto LABEL2798;
	
	LABEL2798:
	// Checking char
	flag[231] = 's';
	goto LABEL2898;
	
	LABEL2799:
	// Checking char
	flag[78] = '{';
	goto LABEL2899;
	
	LABEL2800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2801:
	// Checking char
	flag[146] = 'y';
	goto LABEL2800;
	
	LABEL2802:
	// Checking char
	flag[58] = ';';
	goto LABEL2801;
	
	LABEL2803:
	// Checking char
	flag[216] = '<';
	goto LABEL2802;
	
	LABEL2804:
	// Checking char
	flag[83] = 'S';
	goto LABEL2803;
	
	LABEL2805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2806:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2807:
	// Setting char
	flag[110] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2907;
	
	else 
		goto LABEL2806;
	
	LABEL2808:
	// Setting char
	flag[179] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2908;
	
	else 
		goto LABEL2807;
	
	LABEL2809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2810:
	// Checking char
	flag[137] = 'g';
	goto LABEL2910;
	
	LABEL2811:
	// Setting char
	flag[178] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2911;
	
	else 
		goto LABEL2810;
	
	LABEL2812:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2813:
	// Checking char
	flag[89] = 'L';
	goto LABEL2913;
	
	LABEL2814:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2816:
	// Setting char
	flag[200] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2916;
	
	else 
		goto LABEL2815;
	
	LABEL2817:
	// Checking char
	flag[168] = '~';
	goto LABEL2917;
	
	LABEL2818:
	// Checking char
	flag[13] = 't';
	goto LABEL2819;
	
	LABEL2819:
	// Checking char
	flag[137] = 't';
	goto LABEL2919;
	
	LABEL2820:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2821:
	// Checking char
	flag[210] = '2';
	goto LABEL2820;
	
	LABEL2822:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2823:
	// Checking char
	flag[213] = 'Z';
	goto LABEL2923;
	
	LABEL2824:
	// Checking char
	flag[121] = '=';
	goto LABEL2823;
	
	LABEL2825:
	// Checking char
	flag[240] = 'w';
	goto LABEL2824;
	
	LABEL2826:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2827:
	// Checking char
	flag[233] = 'q';
	goto LABEL2727;
	
	LABEL2828:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2829:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2830:
	// Setting char
	flag[40] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2930;
	
	else 
		goto LABEL2831;
	
	LABEL2831:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2832:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2833:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2834:
	// Setting char
	flag[31] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2934;
	
	else 
		goto LABEL2833;
	
	LABEL2835:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2836:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2837:
	// Checking char
	flag[215] = 'a';
	goto LABEL2737;
	
	LABEL2838:
	// Setting char
	flag[136] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2738;
	
	else 
		goto LABEL2938;
	
	LABEL2839:
	// Checking char
	flag[196] = 'J';
	goto LABEL2838;
	
	LABEL2840:
	// Setting char
	flag[239] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2841;
	
	else 
		goto LABEL2839;
	
	LABEL2841:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2842:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2843:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2844:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2845:
	// Checking char
	flag[72] = '_';
	goto LABEL2945;
	
	LABEL2846:
	// Checking char
	flag[180] = '(';
	goto LABEL2845;
	
	LABEL2847:
	// Setting char
	flag[15] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2947;
	
	else 
		goto LABEL2846;
	
	LABEL2848:
	// Setting char
	flag[57] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2849;
	
	else 
		goto LABEL2847;
	
	LABEL2849:
	// Setting char
	flag[5] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2749;
	
	else 
		goto LABEL2850;
	
	LABEL2850:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2851:
	// Setting char
	flag[122] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2951;
	
	else 
		goto LABEL2852;
	
	LABEL2852:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2853:
	// Checking char
	flag[65] = '?';
	goto LABEL2953;
	
	LABEL2854:
	// Setting char
	flag[110] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2855;
	
	else 
		goto LABEL2853;
	
	LABEL2855:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2856:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2857:
	// Setting char
	flag[142] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2957;
	
	else 
		goto LABEL2858;
	
	LABEL2858:
	// Checking char
	flag[62] = '~';
	goto LABEL2758;
	
	LABEL2859:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2860:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2861:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2862:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2863:
	// Checking char
	flag[220] = 'q';
	goto LABEL2862;
	
	LABEL2864:
	// Setting char
	flag[190] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2865;
	
	else 
		goto LABEL2863;
	
	LABEL2865:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2866:
	// Checking char
	flag[63] = 'n';
	goto LABEL2766;
	
	LABEL2867:
	// Checking char
	flag[127] = 'l';
	goto LABEL2866;
	
	LABEL2868:
	// Setting char
	flag[169] = 'D';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2768;
	
	else if (r == 1)
		goto LABEL2968;
	
	else 
		goto LABEL2867;
	
	LABEL2869:
	// Setting char
	flag[154] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2870;
	
	else 
		goto LABEL2868;
	
	LABEL2870:
	// Setting char
	flag[0] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2970;
	
	else 
		goto LABEL2871;
	
	LABEL2871:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2872:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2873:
	// Setting char
	flag[241] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2773;
	
	else 
		goto LABEL2872;
	
	LABEL2874:
	// Setting char
	flag[74] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2974;
	
	else if (r == 1)
		goto LABEL2875;
	
	else 
		goto LABEL2873;
	
	LABEL2875:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2876:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2877:
	// Checking char
	flag[75] = 'v';
	goto LABEL2977;
	
	LABEL2878:
	// Checking char
	flag[67] = '[';
	goto LABEL2877;
	
	LABEL2879:
	// Checking char
	flag[51] = 'O';
	goto LABEL2979;
	
	LABEL2880:
	// Checking char
	flag[218] = 'O';
	goto LABEL2980;
	
	LABEL2881:
	// Checking char
	flag[129] = 'v';
	goto LABEL2880;
	
	LABEL2882:
	// Setting char
	flag[111] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2982;
	
	else 
		goto LABEL2881;
	
	LABEL2883:
	// Checking char
	flag[102] = 't';
	goto LABEL2983;
	
	LABEL2884:
	// Checking char
	flag[136] = 'L';
	goto LABEL2883;
	
	LABEL2885:
	// Checking char
	flag[40] = 'k';
	goto LABEL2884;
	
	LABEL2886:
	// Checking char
	flag[41] = '|';
	goto LABEL2885;
	
	LABEL2887:
	// Setting char
	flag[152] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2987;
	
	else 
		goto LABEL2888;
	
	LABEL2888:
	// Checking char
	flag[185] = '$';
	goto LABEL2988;
	
	LABEL2889:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2890:
	// Checking char
	flag[99] = 'q';
	goto LABEL2990;
	
	LABEL2891:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2892:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2893:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2894:
	// Setting char
	flag[199] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2994;
	
	else 
		goto LABEL2895;
	
	LABEL2895:
	// Setting char
	flag[149] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2795;
	
	else 
		goto LABEL2896;
	
	LABEL2896:
	// Checking char
	flag[69] = '_';
	goto LABEL2897;
	
	LABEL2897:
	// Checking char
	flag[43] = 'M';
	goto LABEL2997;
	
	LABEL2898:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2899:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2900:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2901:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2902:
	// Checking char
	flag[47] = 'K';
	goto LABEL2901;
	
	LABEL2903:
	// Checking char
	flag[241] = '*';
	goto LABEL2902;
	
	LABEL2904:
	// Checking char
	flag[95] = 'M';
	goto LABEL2804;
	
	LABEL2905:
	// Setting char
	flag[11] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2805;
	
	else 
		goto LABEL2904;
	
	LABEL2906:
	// Checking char
	flag[121] = '{';
	goto LABEL3006;
	
	LABEL2907:
	// Checking char
	flag[180] = 'Y';
	goto LABEL2906;
	
	LABEL2908:
	// Setting char
	flag[137] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3008;
	
	else 
		goto LABEL2909;
	
	LABEL2909:
	// Checking char
	flag[33] = 'Q';
	goto LABEL3009;
	
	LABEL2910:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2911:
	// Checking char
	flag[44] = '/';
	goto LABEL3011;
	
	LABEL2912:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2913:
	// Setting char
	flag[203] = 'q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3013;
	
	else if (r == 1)
		goto LABEL2914;
	
	else 
		goto LABEL2912;
	
	LABEL2914:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2915:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2916:
	// Checking char
	flag[129] = ':';
	goto LABEL3016;
	
	LABEL2917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2918:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2920:
	// Checking char
	flag[154] = '5';
	goto LABEL3020;
	
	LABEL2921:
	// Setting char
	flag[140] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3021;
	
	else 
		goto LABEL2920;
	
	LABEL2922:
	// Setting char
	flag[177] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3022;
	
	else 
		goto LABEL2921;
	
	LABEL2923:
	// Checking char
	flag[57] = 'b';
	goto LABEL2922;
	
	LABEL2924:
	// Checking char
	flag[61] = 'l';
	goto LABEL3024;
	
	LABEL2925:
	// Setting char
	flag[54] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2825;
	
	else if (r == 1)
		goto LABEL3025;
	
	else 
		goto LABEL2924;
	
	LABEL2926:
	// Checking char
	flag[151] = 'A';
	goto LABEL2925;
	
	LABEL2927:
	// Setting char
	flag[232] = '{';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2827;
	
	else if (r == 1)
		goto LABEL3027;
	
	else 
		goto LABEL2926;
	
	LABEL2928:
	// Setting char
	flag[118] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2828;
	
	else if (r == 1)
		goto LABEL3028;
	
	else 
		goto LABEL2927;
	
	LABEL2929:
	// Checking char
	flag[84] = 'i';
	goto LABEL2928;
	
	LABEL2930:
	// Checking char
	flag[2] = 'G';
	goto LABEL2929;
	
	LABEL2931:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2932:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2933:
	// Setting char
	flag[226] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3033;
	
	else 
		goto LABEL2932;
	
	LABEL2934:
	// Checking char
	flag[165] = '@';
	goto LABEL2933;
	
	LABEL2935:
	// Setting char
	flag[241] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2835;
	
	else 
		goto LABEL3035;
	
	LABEL2936:
	// Setting char
	flag[144] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3036;
	
	else 
		goto LABEL2935;
	
	LABEL2937:
	// Setting char
	flag[205] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2837;
	
	else 
		goto LABEL2936;
	
	LABEL2938:
	// Setting char
	flag[1] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3038;
	
	else 
		goto LABEL2937;
	
	LABEL2939:
	// Checking char
	flag[99] = '(';
	goto LABEL3039;
	
	LABEL2940:
	// Setting char
	flag[94] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3040;
	
	else 
		goto LABEL2939;
	
	LABEL2941:
	// Checking char
	flag[119] = 'u';
	goto LABEL2940;
	
	LABEL2942:
	// Setting char
	flag[114] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2842;
	
	else 
		goto LABEL2941;
	
	LABEL2943:
	// Setting char
	flag[88] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3043;
	
	else 
		goto LABEL2942;
	
	LABEL2944:
	// Checking char
	flag[164] = 'p';
	goto LABEL2943;
	
	LABEL2945:
	// Setting char
	flag[76] = '4';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3045;
	
	else if (r == 1)
		goto LABEL2946;
	
	else 
		goto LABEL2944;
	
	LABEL2946:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2947:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2948:
	// Checking char
	flag[196] = '~';
	goto LABEL2949;
	
	LABEL2949:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2950:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2952:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2953:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2954:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2955:
	// Checking char
	flag[69] = 't';
	goto LABEL2954;
	
	LABEL2956:
	// Setting char
	flag[241] = '{';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2856;
	
	else if (r == 1)
		goto LABEL3056;
	
	else 
		goto LABEL2955;
	
	LABEL2957:
	// Checking char
	flag[105] = 'E';
	goto LABEL2956;
	
	LABEL2958:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2959:
	// Setting char
	flag[6] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2859;
	
	else 
		goto LABEL2958;
	
	LABEL2960:
	// Checking char
	flag[102] = '`';
	goto LABEL2860;
	
	LABEL2961:
	// Checking char
	flag[128] = 'S';
	goto LABEL2861;
	
	LABEL2962:
	// Setting char
	flag[35] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2963;
	
	else 
		goto LABEL2961;
	
	LABEL2963:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2964:
	// Setting char
	flag[141] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2864;
	
	else 
		goto LABEL2965;
	
	LABEL2965:
	// Checking char
	flag[86] = 'R';
	goto LABEL2966;
	
	LABEL2966:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2967:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2968:
	// Setting char
	flag[8] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3068;
	
	else 
		goto LABEL2969;
	
	LABEL2969:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2970:
	// Setting char
	flag[199] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3070;
	
	else 
		goto LABEL2971;
	
	LABEL2971:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2973:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2974:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2975:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2976:
	// Checking char
	flag[13] = ';';
	goto LABEL2975;
	
	LABEL2977:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2978:
	// Setting char
	flag[161] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2878;
	
	else 
		goto LABEL3078;
	
	LABEL2979:
	// Setting char
	flag[24] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3079;
	
	else 
		goto LABEL2978;
	
	LABEL2980:
	// Checking char
	flag[144] = 'x';
	goto LABEL3080;
	
	LABEL2981:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2982:
	// Checking char
	flag[83] = 'O';
	goto LABEL3082;
	
	LABEL2983:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2984:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2985:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2986:
	// Checking char
	flag[106] = 'a';
	goto LABEL3086;
	
	LABEL2987:
	// Setting char
	flag[63] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3087;
	
	else 
		goto LABEL2986;
	
	LABEL2988:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2989:
	// Setting char
	flag[50] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2889;
	
	else 
		goto LABEL3089;
	
	LABEL2990:
	// Setting char
	flag[139] = 'Y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3090;
	
	else if (r == 1)
		goto LABEL2991;
	
	else 
		goto LABEL2989;
	
	LABEL2991:
	// Setting char
	flag[7] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2891;
	
	else 
		goto LABEL3091;
	
	LABEL2992:
	// Checking char
	flag[152] = '~';
	goto LABEL2892;
	
	LABEL2993:
	// Setting char
	flag[197] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2893;
	
	else if (r == 1)
		goto LABEL3093;
	
	else 
		goto LABEL2992;
	
	LABEL2994:
	// Setting char
	flag[139] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3094;
	
	else if (r == 1)
		goto LABEL2995;
	
	else 
		goto LABEL2993;
	
	LABEL2995:
	// Checking char
	flag[158] = 'o';
	goto LABEL2996;
	
	LABEL2996:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL2997:
	// Setting char
	flag[186] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3097;
	
	else 
		goto LABEL2998;
	
	LABEL2998:
	// Checking char
	flag[202] = '$';
	goto LABEL2999;
	
	LABEL2999:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3000:
	// Checking char
	flag[207] = '$';
	goto LABEL2900;
	
	LABEL3001:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3002:
	// Checking char
	flag[154] = 'a';
	goto LABEL3001;
	
	LABEL3003:
	// Setting char
	flag[222] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2903;
	
	else 
		goto LABEL3103;
	
	LABEL3004:
	// Setting char
	flag[67] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3104;
	
	else 
		goto LABEL3003;
	
	LABEL3005:
	// Setting char
	flag[129] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2905;
	
	else 
		goto LABEL3004;
	
	LABEL3006:
	// Setting char
	flag[20] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3106;
	
	else 
		goto LABEL3005;
	
	LABEL3007:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3008:
	// Setting char
	flag[217] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3108;
	
	else 
		goto LABEL3007;
	
	LABEL3009:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3010:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3011:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3012:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3013:
	// Setting char
	flag[112] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3113;
	
	else if (r == 1)
		goto LABEL3014;
	
	else 
		goto LABEL3012;
	
	LABEL3014:
	// Checking char
	flag[203] = '[';
	goto LABEL3114;
	
	LABEL3015:
	// Checking char
	flag[33] = ':';
	goto LABEL2915;
	
	LABEL3016:
	// Checking char
	flag[127] = '5';
	goto LABEL3015;
	
	LABEL3017:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3018:
	// Checking char
	flag[198] = 'A';
	goto LABEL2918;
	
	LABEL3019:
	// Checking char
	flag[80] = 'Q';
	goto LABEL3018;
	
	LABEL3020:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3021:
	// Checking char
	flag[35] = '|';
	goto LABEL3121;
	
	LABEL3022:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3023:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3024:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3025:
	// Checking char
	flag[55] = 'z';
	goto LABEL3125;
	
	LABEL3026:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3027:
	// Checking char
	flag[168] = 'y';
	goto LABEL3026;
	
	LABEL3028:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3029:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3030:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3031:
	// Setting char
	flag[25] = 'k';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2931;
	
	else if (r == 1)
		goto LABEL3131;
	
	else 
		goto LABEL3030;
	
	LABEL3032:
	// Checking char
	flag[87] = 'N';
	goto LABEL3031;
	
	LABEL3033:
	// Setting char
	flag[24] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3133;
	
	else 
		goto LABEL3032;
	
	LABEL3034:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3035:
	// Checking char
	flag[80] = '(';
	goto LABEL3034;
	
	LABEL3036:
	// Checking char
	flag[48] = ']';
	goto LABEL3037;
	
	LABEL3037:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3038:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3039:
	// Checking char
	flag[93] = 'I';
	goto LABEL3139;
	
	LABEL3040:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3041:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3042:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3043:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3044:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3045:
	// Setting char
	flag[47] = '1';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3145;
	
	else if (r == 1)
		goto LABEL3046;
	
	else 
		goto LABEL3044;
	
	LABEL3046:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3047:
	// Checking char
	flag[28] = 'i';
	goto LABEL3147;
	
	LABEL3048:
	// Setting char
	flag[129] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2948;
	
	else if (r == 1)
		goto LABEL3148;
	
	else 
		goto LABEL3047;
	
	LABEL3049:
	// Checking char
	flag[106] = '(';
	goto LABEL3048;
	
	LABEL3050:
	// Setting char
	flag[74] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2950;
	
	else if (r == 1)
		goto LABEL3150;
	
	else 
		goto LABEL3049;
	
	LABEL3051:
	// Checking char
	flag[115] = '7';
	goto LABEL3050;
	
	LABEL3052:
	// Setting char
	flag[13] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2952;
	
	else 
		goto LABEL3051;
	
	LABEL3053:
	// Setting char
	flag[155] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3153;
	
	else 
		goto LABEL3052;
	
	LABEL3054:
	// Checking char
	flag[178] = '%';
	goto LABEL3053;
	
	LABEL3055:
	// Checking char
	flag[124] = '0';
	goto LABEL3054;
	
	LABEL3056:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3057:
	// Checking char
	flag[213] = '&';
	goto LABEL3058;
	
	LABEL3058:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3059:
	// Setting char
	flag[205] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2959;
	
	else 
		goto LABEL3159;
	
	LABEL3060:
	// Setting char
	flag[159] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2960;
	
	else 
		goto LABEL3059;
	
	LABEL3061:
	// Checking char
	flag[41] = 'd';
	goto LABEL3060;
	
	LABEL3062:
	// Setting char
	flag[130] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2962;
	
	else 
		goto LABEL3061;
	
	LABEL3063:
	// Checking char
	flag[48] = '$';
	goto LABEL3062;
	
	LABEL3064:
	// Setting char
	flag[121] = 'q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2964;
	
	else if (r == 1)
		goto LABEL3164;
	
	else 
		goto LABEL3063;
	
	LABEL3065:
	// Setting char
	flag[97] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3165;
	
	else 
		goto LABEL3064;
	
	LABEL3066:
	// Setting char
	flag[112] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3166;
	
	else 
		goto LABEL3065;
	
	LABEL3067:
	// Setting char
	flag[61] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2967;
	
	else 
		goto LABEL3066;
	
	LABEL3068:
	// Setting char
	flag[175] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3168;
	
	else 
		goto LABEL3067;
	
	LABEL3069:
	// Checking char
	flag[149] = 'j';
	goto LABEL3169;
	
	LABEL3070:
	// Setting char
	flag[28] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3071;
	
	else 
		goto LABEL3069;
	
	LABEL3071:
	// Checking char
	flag[17] = 'F';
	goto LABEL3072;
	
	LABEL3072:
	// Setting char
	flag[73] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2972;
	
	else if (r == 1)
		goto LABEL3172;
	
	else 
		goto LABEL3073;
	
	LABEL3073:
	// Setting char
	flag[208] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL2973;
	
	else 
		goto LABEL3173;
	
	LABEL3074:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3075:
	// Checking char
	flag[4] = 'W';
	goto LABEL3074;
	
	LABEL3076:
	// Setting char
	flag[110] = 'A';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2976;
	
	else if (r == 1)
		goto LABEL3176;
	
	else 
		goto LABEL3075;
	
	LABEL3077:
	// Checking char
	flag[226] = 'M';
	goto LABEL3076;
	
	LABEL3078:
	// Setting char
	flag[20] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3178;
	
	else 
		goto LABEL3077;
	
	LABEL3079:
	// Checking char
	flag[170] = 'M';
	goto LABEL3179;
	
	LABEL3080:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3081:
	// Checking char
	flag[185] = 'U';
	goto LABEL2981;
	
	LABEL3082:
	// Checking char
	flag[241] = '}';
	goto LABEL3081;
	
	LABEL3083:
	// Checking char
	flag[244] = 'n';
	goto LABEL3183;
	
	LABEL3084:
	// Setting char
	flag[25] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2984;
	
	else if (r == 1)
		goto LABEL3184;
	
	else 
		goto LABEL3083;
	
	LABEL3085:
	// Setting char
	flag[130] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL2985;
	
	else if (r == 1)
		goto LABEL3185;
	
	else 
		goto LABEL3084;
	
	LABEL3086:
	// Setting char
	flag[53] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3186;
	
	else 
		goto LABEL3085;
	
	LABEL3087:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3088:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3089:
	// Setting char
	flag[179] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3189;
	
	else 
		goto LABEL3088;
	
	LABEL3090:
	// Checking char
	flag[221] = '&';
	goto LABEL3190;
	
	LABEL3091:
	// Checking char
	flag[139] = 'G';
	goto LABEL3191;
	
	LABEL3092:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3093:
	// Checking char
	flag[106] = '^';
	goto LABEL3092;
	
	LABEL3094:
	// Checking char
	flag[230] = 'e';
	goto LABEL3194;
	
	LABEL3095:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3096:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3097:
	// Setting char
	flag[237] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3197;
	
	else if (r == 1)
		goto LABEL3098;
	
	else 
		goto LABEL3096;
	
	LABEL3098:
	// Checking char
	flag[64] = 'N';
	goto LABEL3099;
	
	LABEL3099:
	// Checking char
	flag[89] = '<';
	goto LABEL3199;
	
	LABEL3100:
	// Setting char
	flag[169] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3000;
	
	else 
		goto LABEL3200;
	
	LABEL3101:
	// Setting char
	flag[82] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3201;
	
	else 
		goto LABEL3100;
	
	LABEL3102:
	// Setting char
	flag[6] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3002;
	
	else 
		goto LABEL3101;
	
	LABEL3103:
	// Checking char
	flag[71] = 'E';
	goto LABEL3102;
	
	LABEL3104:
	// Checking char
	flag[238] = 'A';
	goto LABEL3204;
	
	LABEL3105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3106:
	// Checking char
	flag[91] = 'k';
	goto LABEL3105;
	
	LABEL3107:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3108:
	// Setting char
	flag[145] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3208;
	
	else if (r == 1)
		goto LABEL3109;
	
	else 
		goto LABEL3107;
	
	LABEL3109:
	// Checking char
	flag[210] = 'D';
	goto LABEL3209;
	
	LABEL3110:
	// Setting char
	flag[154] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3010;
	
	else 
		goto LABEL3210;
	
	LABEL3111:
	// Setting char
	flag[171] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3211;
	
	else 
		goto LABEL3110;
	
	LABEL3112:
	// Checking char
	flag[196] = 'g';
	goto LABEL3111;
	
	LABEL3113:
	// Checking char
	flag[164] = '+';
	goto LABEL3112;
	
	LABEL3114:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3115:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3116:
	// Checking char
	flag[120] = '#';
	goto LABEL3115;
	
	LABEL3117:
	// Setting char
	flag[97] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3017;
	
	else 
		goto LABEL3217;
	
	LABEL3118:
	// Setting char
	flag[102] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3218;
	
	else 
		goto LABEL3117;
	
	LABEL3119:
	// Setting char
	flag[27] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3019;
	
	else if (r == 1)
		goto LABEL3219;
	
	else 
		goto LABEL3118;
	
	LABEL3120:
	// Checking char
	flag[246] = 'w';
	goto LABEL3119;
	
	LABEL3121:
	// Checking char
	flag[211] = '2';
	goto LABEL3120;
	
	LABEL3122:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3123:
	// Setting char
	flag[225] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3023;
	
	else 
		goto LABEL3122;
	
	LABEL3124:
	// Checking char
	flag[63] = '&';
	goto LABEL3123;
	
	LABEL3125:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3126:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3127:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3128:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3129:
	// Checking char
	flag[104] = 'R';
	goto LABEL3029;
	
	LABEL3130:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3131:
	// Setting char
	flag[176] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3231;
	
	else 
		goto LABEL3130;
	
	LABEL3132:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3133:
	// Setting char
	flag[188] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3233;
	
	else 
		goto LABEL3134;
	
	LABEL3134:
	// Checking char
	flag[4] = 'j';
	goto LABEL3234;
	
	LABEL3135:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3136:
	// Checking char
	flag[67] = 'F';
	goto LABEL3135;
	
	LABEL3137:
	// Checking char
	flag[237] = 'o';
	goto LABEL3136;
	
	LABEL3138:
	// Checking char
	flag[22] = 'I';
	goto LABEL3137;
	
	LABEL3139:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3140:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3141:
	// Setting char
	flag[25] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3041;
	
	else 
		goto LABEL3140;
	
	LABEL3142:
	// Setting char
	flag[184] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3042;
	
	else 
		goto LABEL3141;
	
	LABEL3143:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3144:
	// Setting char
	flag[119] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3244;
	
	else 
		goto LABEL3143;
	
	LABEL3145:
	// Setting char
	flag[155] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3146;
	
	else 
		goto LABEL3144;
	
	LABEL3146:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3147:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3148:
	// Checking char
	flag[19] = 'F';
	goto LABEL3149;
	
	LABEL3149:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3150:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3151:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3152:
	// Checking char
	flag[28] = ';';
	goto LABEL3151;
	
	LABEL3153:
	// Checking char
	flag[24] = ':';
	goto LABEL3152;
	
	LABEL3154:
	// Checking char
	flag[165] = 'y';
	goto LABEL3254;
	
	LABEL3155:
	// Setting char
	flag[34] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3055;
	
	else 
		goto LABEL3154;
	
	LABEL3156:
	// Checking char
	flag[4] = 'Z';
	goto LABEL3155;
	
	LABEL3157:
	// Setting char
	flag[244] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3057;
	
	else 
		goto LABEL3156;
	
	LABEL3158:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3159:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3160:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3161:
	// Checking char
	flag[95] = 'Y';
	goto LABEL3160;
	
	LABEL3162:
	// Setting char
	flag[211] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3262;
	
	else 
		goto LABEL3161;
	
	LABEL3163:
	// Checking char
	flag[91] = 'a';
	goto LABEL3162;
	
	LABEL3164:
	// Checking char
	flag[207] = 'R';
	goto LABEL3264;
	
	LABEL3165:
	// Checking char
	flag[145] = 'E';
	goto LABEL3265;
	
	LABEL3166:
	// Setting char
	flag[206] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3266;
	
	else 
		goto LABEL3167;
	
	LABEL3167:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3168:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3169:
	// Setting char
	flag[5] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3269;
	
	else 
		goto LABEL3170;
	
	LABEL3170:
	// Checking char
	flag[100] = '5';
	goto LABEL3270;
	
	LABEL3171:
	// Checking char
	flag[136] = 'q';
	goto LABEL3271;
	
	LABEL3172:
	// Checking char
	flag[185] = 'f';
	goto LABEL3171;
	
	LABEL3173:
	// Checking char
	flag[104] = 'C';
	goto LABEL3174;
	
	LABEL3174:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3175:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3176:
	// Setting char
	flag[15] = '*';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3276;
	
	else if (r == 1)
		goto LABEL3177;
	
	else 
		goto LABEL3175;
	
	LABEL3177:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3178:
	// Checking char
	flag[140] = 'o';
	goto LABEL3278;
	
	LABEL3179:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3180:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3181:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3182:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3183:
	// Checking char
	flag[201] = '1';
	goto LABEL3182;
	
	LABEL3184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3185:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3186:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3187:
	// Checking char
	flag[26] = 'k';
	goto LABEL3287;
	
	LABEL3188:
	// Setting char
	flag[203] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3288;
	
	else 
		goto LABEL3187;
	
	LABEL3189:
	// Checking char
	flag[208] = 'N';
	goto LABEL3188;
	
	LABEL3190:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3191:
	// Checking char
	flag[155] = '&';
	goto LABEL3291;
	
	LABEL3192:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3193:
	// Setting char
	flag[209] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3293;
	
	else 
		goto LABEL3192;
	
	LABEL3194:
	// Setting char
	flag[51] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3294;
	
	else if (r == 1)
		goto LABEL3195;
	
	else 
		goto LABEL3193;
	
	LABEL3195:
	// Setting char
	flag[141] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3095;
	
	else 
		goto LABEL3295;
	
	LABEL3196:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3197:
	// Setting char
	flag[194] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3297;
	
	else 
		goto LABEL3198;
	
	LABEL3198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3199:
	// Checking char
	flag[140] = '0';
	goto LABEL3299;
	
	LABEL3200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3201:
	// Checking char
	flag[47] = 'r';
	goto LABEL3202;
	
	LABEL3202:
	// Checking char
	flag[76] = ')';
	goto LABEL3203;
	
	LABEL3203:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3204:
	// Checking char
	flag[102] = '=';
	goto LABEL3304;
	
	LABEL3205:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3206:
	// Checking char
	flag[60] = '{';
	goto LABEL3205;
	
	LABEL3207:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3208:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3209:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3210:
	// Checking char
	flag[204] = 'Z';
	goto LABEL3310;
	
	LABEL3211:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3212:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3213:
	// Checking char
	flag[137] = '{';
	goto LABEL3214;
	
	LABEL3214:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3215:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3216:
	// Checking char
	flag[161] = '|';
	goto LABEL3116;
	
	LABEL3217:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3218:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3219:
	// Checking char
	flag[160] = '!';
	goto LABEL3220;
	
	LABEL3220:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3221:
	// Checking char
	flag[190] = '/';
	goto LABEL3222;
	
	LABEL3222:
	// Checking char
	flag[232] = 'b';
	goto LABEL3223;
	
	LABEL3223:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3224:
	// Checking char
	flag[212] = ';';
	goto LABEL3124;
	
	LABEL3225:
	// Setting char
	flag[188] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3226;
	
	else 
		goto LABEL3224;
	
	LABEL3226:
	// Checking char
	flag[148] = '=';
	goto LABEL3126;
	
	LABEL3227:
	// Setting char
	flag[206] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3127;
	
	else 
		goto LABEL3228;
	
	LABEL3228:
	// Checking char
	flag[157] = 'n';
	goto LABEL3128;
	
	LABEL3229:
	// Checking char
	flag[214] = '9';
	goto LABEL3129;
	
	LABEL3230:
	// Checking char
	flag[120] = 'm';
	goto LABEL3229;
	
	LABEL3231:
	// Setting char
	flag[148] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3331;
	
	else 
		goto LABEL3230;
	
	LABEL3232:
	// Checking char
	flag[84] = '_';
	goto LABEL3132;
	
	LABEL3233:
	// Checking char
	flag[241] = '&';
	goto LABEL3232;
	
	LABEL3234:
	// Checking char
	flag[194] = '2';
	goto LABEL3334;
	
	LABEL3235:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3236:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3237:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3238:
	// Checking char
	flag[11] = ',';
	goto LABEL3138;
	
	LABEL3239:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3240:
	// Checking char
	flag[18] = '#';
	goto LABEL3241;
	
	LABEL3241:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3242:
	// Setting char
	flag[119] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3142;
	
	else 
		goto LABEL3342;
	
	LABEL3243:
	// Setting char
	flag[107] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3343;
	
	else 
		goto LABEL3242;
	
	LABEL3244:
	// Setting char
	flag[136] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3344;
	
	else 
		goto LABEL3243;
	
	LABEL3245:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3246:
	// Setting char
	flag[12] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3346;
	
	else 
		goto LABEL3245;
	
	LABEL3247:
	// Checking char
	flag[52] = '*';
	goto LABEL3246;
	
	LABEL3248:
	// Setting char
	flag[186] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3348;
	
	else 
		goto LABEL3247;
	
	LABEL3249:
	// Setting char
	flag[42] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3349;
	
	else 
		goto LABEL3248;
	
	LABEL3250:
	// Checking char
	flag[193] = 'b';
	goto LABEL3249;
	
	LABEL3251:
	// Setting char
	flag[16] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3351;
	
	else 
		goto LABEL3250;
	
	LABEL3252:
	// Checking char
	flag[10] = '}';
	goto LABEL3251;
	
	LABEL3253:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3254:
	// Checking char
	flag[87] = 'C';
	goto LABEL3354;
	
	LABEL3255:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3256:
	// Checking char
	flag[189] = 'J';
	goto LABEL3255;
	
	LABEL3257:
	// Setting char
	flag[96] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3157;
	
	else if (r == 1)
		goto LABEL3357;
	
	else 
		goto LABEL3256;
	
	LABEL3258:
	// Setting char
	flag[169] = 'H';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3158;
	
	else if (r == 1)
		goto LABEL3358;
	
	else 
		goto LABEL3257;
	
	LABEL3259:
	// Checking char
	flag[25] = 'T';
	goto LABEL3258;
	
	LABEL3260:
	// Setting char
	flag[45] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3360;
	
	else 
		goto LABEL3259;
	
	LABEL3261:
	// Checking char
	flag[176] = '5';
	goto LABEL3260;
	
	LABEL3262:
	// Setting char
	flag[64] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3362;
	
	else 
		goto LABEL3261;
	
	LABEL3263:
	// Checking char
	flag[10] = 'A';
	goto LABEL3163;
	
	LABEL3264:
	// Setting char
	flag[204] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3364;
	
	else 
		goto LABEL3263;
	
	LABEL3265:
	// Checking char
	flag[197] = '+';
	goto LABEL3365;
	
	LABEL3266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3268:
	// Checking char
	flag[68] = 'c';
	goto LABEL3267;
	
	LABEL3269:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3270:
	// Checking char
	flag[190] = 'j';
	goto LABEL3370;
	
	LABEL3271:
	// Checking char
	flag[149] = 'x';
	goto LABEL3272;
	
	LABEL3272:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3274:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3275:
	// Checking char
	flag[26] = '{';
	goto LABEL3274;
	
	LABEL3276:
	// Setting char
	flag[236] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3376;
	
	else 
		goto LABEL3275;
	
	LABEL3277:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3278:
	// Checking char
	flag[38] = '/';
	goto LABEL3277;
	
	LABEL3279:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3280:
	// Setting char
	flag[48] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3180;
	
	else 
		goto LABEL3279;
	
	LABEL3281:
	// Setting char
	flag[180] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3181;
	
	else if (r == 1)
		goto LABEL3381;
	
	else 
		goto LABEL3280;
	
	LABEL3282:
	// Checking char
	flag[26] = 'A';
	goto LABEL3281;
	
	LABEL3283:
	// Setting char
	flag[242] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3383;
	
	else 
		goto LABEL3282;
	
	LABEL3284:
	// Checking char
	flag[179] = '_';
	goto LABEL3283;
	
	LABEL3285:
	// Setting char
	flag[219] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3385;
	
	else 
		goto LABEL3284;
	
	LABEL3286:
	// Setting char
	flag[79] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3386;
	
	else 
		goto LABEL3285;
	
	LABEL3287:
	// Checking char
	flag[80] = '7';
	goto LABEL3286;
	
	LABEL3288:
	// Checking char
	flag[146] = 'A';
	goto LABEL3388;
	
	LABEL3289:
	// Checking char
	flag[105] = 'u';
	goto LABEL3290;
	
	LABEL3290:
	// Checking char
	flag[217] = '}';
	goto LABEL3390;
	
	LABEL3291:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3292:
	// Checking char
	flag[37] = 'I';
	goto LABEL3392;
	
	LABEL3293:
	// Setting char
	flag[174] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3393;
	
	else 
		goto LABEL3292;
	
	LABEL3294:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3295:
	// Checking char
	flag[207] = 'u';
	goto LABEL3395;
	
	LABEL3296:
	// Checking char
	flag[31] = '-';
	goto LABEL3196;
	
	LABEL3297:
	// Setting char
	flag[32] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3397;
	
	else 
		goto LABEL3296;
	
	LABEL3298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3299:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3300:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3301:
	// Setting char
	flag[77] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3401;
	
	else 
		goto LABEL3300;
	
	LABEL3302:
	// Checking char
	flag[101] = '!';
	goto LABEL3301;
	
	LABEL3303:
	// Setting char
	flag[174] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3403;
	
	else 
		goto LABEL3302;
	
	LABEL3304:
	// Checking char
	flag[137] = 'H';
	goto LABEL3303;
	
	LABEL3305:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3306:
	// Setting char
	flag[150] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3206;
	
	else if (r == 1)
		goto LABEL3406;
	
	else 
		goto LABEL3305;
	
	LABEL3307:
	// Setting char
	flag[19] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3207;
	
	else if (r == 1)
		goto LABEL3407;
	
	else 
		goto LABEL3306;
	
	LABEL3308:
	// Setting char
	flag[151] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3408;
	
	else 
		goto LABEL3307;
	
	LABEL3309:
	// Setting char
	flag[3] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3409;
	
	else 
		goto LABEL3308;
	
	LABEL3310:
	// Setting char
	flag[218] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3410;
	
	else if (r == 1)
		goto LABEL3311;
	
	else 
		goto LABEL3309;
	
	LABEL3311:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3312:
	// Setting char
	flag[65] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3212;
	
	else 
		goto LABEL3412;
	
	LABEL3313:
	// Setting char
	flag[89] = 'm';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3213;
	
	else if (r == 1)
		goto LABEL3413;
	
	else 
		goto LABEL3312;
	
	LABEL3314:
	// Setting char
	flag[63] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3414;
	
	else 
		goto LABEL3313;
	
	LABEL3315:
	// Setting char
	flag[56] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3215;
	
	else 
		goto LABEL3314;
	
	LABEL3316:
	// Setting char
	flag[195] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3216;
	
	else 
		goto LABEL3315;
	
	LABEL3317:
	// Setting char
	flag[144] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3417;
	
	else 
		goto LABEL3316;
	
	LABEL3318:
	// Setting char
	flag[211] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3418;
	
	else 
		goto LABEL3317;
	
	LABEL3319:
	// Checking char
	flag[79] = ',';
	goto LABEL3318;
	
	LABEL3320:
	// Checking char
	flag[35] = 'J';
	goto LABEL3321;
	
	LABEL3321:
	// Checking char
	flag[50] = 'x';
	goto LABEL3221;
	
	LABEL3322:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3323:
	// Checking char
	flag[49] = '*';
	goto LABEL3322;
	
	LABEL3324:
	// Setting char
	flag[74] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3424;
	
	else 
		goto LABEL3323;
	
	LABEL3325:
	// Setting char
	flag[200] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3225;
	
	else 
		goto LABEL3324;
	
	LABEL3326:
	// Setting char
	flag[161] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3426;
	
	else 
		goto LABEL3325;
	
	LABEL3327:
	// Setting char
	flag[10] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3227;
	
	else if (r == 1)
		goto LABEL3427;
	
	else 
		goto LABEL3326;
	
	LABEL3328:
	// Setting char
	flag[217] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3428;
	
	else 
		goto LABEL3327;
	
	LABEL3329:
	// Setting char
	flag[223] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3429;
	
	else 
		goto LABEL3328;
	
	LABEL3330:
	// Setting char
	flag[24] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3430;
	
	else 
		goto LABEL3329;
	
	LABEL3331:
	// Checking char
	flag[47] = 'W';
	goto LABEL3330;
	
	LABEL3332:
	// Checking char
	flag[221] = '5';
	goto LABEL3432;
	
	LABEL3333:
	// Checking char
	flag[33] = 'c';
	goto LABEL3332;
	
	LABEL3334:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3335:
	// Checking char
	flag[209] = 'R';
	goto LABEL3235;
	
	LABEL3336:
	// Setting char
	flag[86] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3236;
	
	else 
		goto LABEL3335;
	
	LABEL3337:
	// Setting char
	flag[83] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3237;
	
	else 
		goto LABEL3336;
	
	LABEL3338:
	// Setting char
	flag[78] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3238;
	
	else 
		goto LABEL3337;
	
	LABEL3339:
	// Setting char
	flag[67] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3239;
	
	else 
		goto LABEL3439;
	
	LABEL3340:
	// Setting char
	flag[82] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3240;
	
	else 
		goto LABEL3339;
	
	LABEL3341:
	// Setting char
	flag[231] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3441;
	
	else 
		goto LABEL3340;
	
	LABEL3342:
	// Checking char
	flag[122] = 'R';
	goto LABEL3341;
	
	LABEL3343:
	// Checking char
	flag[239] = 'q';
	goto LABEL3443;
	
	LABEL3344:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3345:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3346:
	// Checking char
	flag[0] = '<';
	goto LABEL3345;
	
	LABEL3347:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3348:
	// Setting char
	flag[46] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3448;
	
	else 
		goto LABEL3347;
	
	LABEL3349:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3350:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3351:
	// Checking char
	flag[222] = 'q';
	goto LABEL3451;
	
	LABEL3352:
	// Checking char
	flag[206] = 'Q';
	goto LABEL3252;
	
	LABEL3353:
	// Setting char
	flag[137] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3253;
	
	else 
		goto LABEL3352;
	
	LABEL3354:
	// Checking char
	flag[238] = '&';
	goto LABEL3353;
	
	LABEL3355:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3356:
	// Setting char
	flag[61] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3456;
	
	else 
		goto LABEL3355;
	
	LABEL3357:
	// Setting char
	flag[242] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3457;
	
	else 
		goto LABEL3356;
	
	LABEL3358:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3359:
	// Checking char
	flag[203] = 'u';
	goto LABEL3459;
	
	LABEL3360:
	// Setting char
	flag[112] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3460;
	
	else 
		goto LABEL3359;
	
	LABEL3361:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3362:
	// Setting char
	flag[37] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3462;
	
	else 
		goto LABEL3361;
	
	LABEL3363:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3364:
	// Checking char
	flag[183] = '>';
	goto LABEL3363;
	
	LABEL3365:
	// Setting char
	flag[104] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3465;
	
	else 
		goto LABEL3366;
	
	LABEL3366:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3367:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3368:
	// Setting char
	flag[92] = '.';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3268;
	
	else if (r == 1)
		goto LABEL3468;
	
	else 
		goto LABEL3367;
	
	LABEL3369:
	// Setting char
	flag[60] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3469;
	
	else 
		goto LABEL3368;
	
	LABEL3370:
	// Setting char
	flag[96] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3470;
	
	else if (r == 1)
		goto LABEL3371;
	
	else 
		goto LABEL3369;
	
	LABEL3371:
	// Setting char
	flag[201] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3471;
	
	else 
		goto LABEL3372;
	
	LABEL3372:
	// Checking char
	flag[155] = '>';
	goto LABEL3373;
	
	LABEL3373:
	// Setting char
	flag[132] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3273;
	
	else if (r == 1)
		goto LABEL3473;
	
	else 
		goto LABEL3374;
	
	LABEL3374:
	// Checking char
	flag[226] = '>';
	goto LABEL3375;
	
	LABEL3375:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3376:
	// Checking char
	flag[199] = 'L';
	goto LABEL3476;
	
	LABEL3377:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3378:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3379:
	// Setting char
	flag[192] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3479;
	
	else 
		goto LABEL3378;
	
	LABEL3380:
	// Checking char
	flag[188] = '%';
	goto LABEL3379;
	
	LABEL3381:
	// Setting char
	flag[160] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3481;
	
	else if (r == 1)
		goto LABEL3382;
	
	else 
		goto LABEL3380;
	
	LABEL3382:
	// Checking char
	flag[70] = 'H';
	goto LABEL3482;
	
	LABEL3383:
	// Setting char
	flag[156] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3483;
	
	else 
		goto LABEL3384;
	
	LABEL3384:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3385:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3386:
	// Setting char
	flag[238] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3486;
	
	else 
		goto LABEL3387;
	
	LABEL3387:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3388:
	// Setting char
	flag[147] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3488;
	
	else 
		goto LABEL3389;
	
	LABEL3389:
	// Checking char
	flag[136] = 'r';
	goto LABEL3289;
	
	LABEL3390:
	// Checking char
	flag[221] = '<';
	goto LABEL3391;
	
	LABEL3391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3392:
	// Checking char
	flag[243] = 'F';
	goto LABEL3492;
	
	LABEL3393:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3394:
	// Checking char
	flag[36] = '#';
	goto LABEL3494;
	
	LABEL3395:
	// Checking char
	flag[70] = '.';
	goto LABEL3394;
	
	LABEL3396:
	// Checking char
	flag[46] = 'r';
	goto LABEL3496;
	
	LABEL3397:
	// Setting char
	flag[148] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3497;
	
	else if (r == 1)
		goto LABEL3398;
	
	else 
		goto LABEL3396;
	
	LABEL3398:
	// Setting char
	flag[233] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3298;
	
	else 
		goto LABEL3498;
	
	LABEL3399:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3400:
	// Checking char
	flag[209] = 'v';
	goto LABEL3500;
	
	LABEL3401:
	// Checking char
	flag[154] = 't';
	goto LABEL3400;
	
	LABEL3402:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3403:
	// Checking char
	flag[57] = 'l';
	goto LABEL3402;
	
	LABEL3404:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3405:
	// Checking char
	flag[122] = '*';
	goto LABEL3505;
	
	LABEL3406:
	// Checking char
	flag[65] = 'o';
	goto LABEL3405;
	
	LABEL3407:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3408:
	// Checking char
	flag[68] = 'e';
	goto LABEL3508;
	
	LABEL3409:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3410:
	// Checking char
	flag[133] = '0';
	goto LABEL3510;
	
	LABEL3411:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3412:
	// Setting char
	flag[221] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3512;
	
	else 
		goto LABEL3411;
	
	LABEL3413:
	// Checking char
	flag[238] = '}';
	goto LABEL3513;
	
	LABEL3414:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3415:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3416:
	// Checking char
	flag[60] = '"';
	goto LABEL3415;
	
	LABEL3417:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3418:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3419:
	// Setting char
	flag[172] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3319;
	
	else 
		goto LABEL3519;
	
	LABEL3420:
	// Setting char
	flag[15] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3320;
	
	else if (r == 1)
		goto LABEL3520;
	
	else 
		goto LABEL3419;
	
	LABEL3421:
	// Setting char
	flag[113] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3521;
	
	else 
		goto LABEL3420;
	
	LABEL3422:
	// Setting char
	flag[18] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3522;
	
	else 
		goto LABEL3421;
	
	LABEL3423:
	// Setting char
	flag[70] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3523;
	
	else 
		goto LABEL3422;
	
	LABEL3424:
	// Setting char
	flag[60] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3425;
	
	else 
		goto LABEL3423;
	
	LABEL3425:
	// Checking char
	flag[71] = '|';
	goto LABEL3525;
	
	LABEL3426:
	// Checking char
	flag[27] = 't';
	goto LABEL3526;
	
	LABEL3427:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3428:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3429:
	// Checking char
	flag[70] = 'r';
	goto LABEL3529;
	
	LABEL3430:
	// Setting char
	flag[228] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3530;
	
	else 
		goto LABEL3431;
	
	LABEL3431:
	// Checking char
	flag[249] = '}';
	goto LABEL3531;
	
	LABEL3432:
	// Checking char
	flag[245] = ')';
	goto LABEL3532;
	
	LABEL3433:
	// Checking char
	flag[44] = '>';
	goto LABEL3333;
	
	LABEL3434:
	// Checking char
	flag[127] = '1';
	goto LABEL3433;
	
	LABEL3435:
	// Setting char
	flag[186] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3535;
	
	else 
		goto LABEL3434;
	
	LABEL3436:
	// Checking char
	flag[197] = 't';
	goto LABEL3435;
	
	LABEL3437:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3438:
	// Setting char
	flag[12] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3338;
	
	else 
		goto LABEL3437;
	
	LABEL3439:
	// Setting char
	flag[40] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3539;
	
	else 
		goto LABEL3438;
	
	LABEL3440:
	// Checking char
	flag[39] = ',';
	goto LABEL3540;
	
	LABEL3441:
	// Checking char
	flag[24] = 'c';
	goto LABEL3440;
	
	LABEL3442:
	// Checking char
	flag[150] = '.';
	goto LABEL3542;
	
	LABEL3443:
	// Setting char
	flag[70] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3444;
	
	else 
		goto LABEL3442;
	
	LABEL3444:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3445:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3446:
	// Setting char
	flag[53] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3447;
	
	else 
		goto LABEL3445;
	
	LABEL3447:
	// Checking char
	flag[206] = 'T';
	goto LABEL3547;
	
	LABEL3448:
	// Checking char
	flag[229] = '`';
	goto LABEL3548;
	
	LABEL3449:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3450:
	// Setting char
	flag[59] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3350;
	
	else 
		goto LABEL3449;
	
	LABEL3451:
	// Checking char
	flag[129] = 'x';
	goto LABEL3450;
	
	LABEL3452:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3453:
	// Checking char
	flag[171] = '}';
	goto LABEL3452;
	
	LABEL3454:
	// Checking char
	flag[126] = 'K';
	goto LABEL3453;
	
	LABEL3455:
	// Checking char
	flag[245] = 'Y';
	goto LABEL3454;
	
	LABEL3456:
	// Checking char
	flag[188] = '(';
	goto LABEL3455;
	
	LABEL3457:
	// Checking char
	flag[15] = '>';
	goto LABEL3557;
	
	LABEL3458:
	// Checking char
	flag[235] = '_';
	goto LABEL3558;
	
	LABEL3459:
	// Setting char
	flag[232] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3559;
	
	else 
		goto LABEL3458;
	
	LABEL3460:
	// Setting char
	flag[57] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3560;
	
	else 
		goto LABEL3461;
	
	LABEL3461:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3462:
	// Checking char
	flag[249] = 'd';
	goto LABEL3562;
	
	LABEL3463:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3464:
	// Setting char
	flag[5] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3564;
	
	else 
		goto LABEL3463;
	
	LABEL3465:
	// Setting char
	flag[28] = 'Q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3565;
	
	else if (r == 1)
		goto LABEL3466;
	
	else 
		goto LABEL3464;
	
	LABEL3466:
	// Checking char
	flag[227] = '5';
	goto LABEL3467;
	
	LABEL3467:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3468:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3469:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3470:
	// Checking char
	flag[2] = 'F';
	goto LABEL3570;
	
	LABEL3471:
	// Checking char
	flag[69] = 'G';
	goto LABEL3472;
	
	LABEL3472:
	// Checking char
	flag[195] = '2';
	goto LABEL3572;
	
	LABEL3473:
	// Setting char
	flag[97] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3573;
	
	else 
		goto LABEL3474;
	
	LABEL3474:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3475:
	// Checking char
	flag[157] = 'E';
	goto LABEL3575;
	
	LABEL3476:
	// Setting char
	flag[5] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3477;
	
	else 
		goto LABEL3475;
	
	LABEL3477:
	// Checking char
	flag[172] = 'g';
	goto LABEL3377;
	
	LABEL3478:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3479:
	// Checking char
	flag[81] = 'Z';
	goto LABEL3480;
	
	LABEL3480:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3481:
	// Checking char
	flag[144] = '3';
	goto LABEL3581;
	
	LABEL3482:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3483:
	// Setting char
	flag[170] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3583;
	
	else 
		goto LABEL3484;
	
	LABEL3484:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3485:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3486:
	// Setting char
	flag[107] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3586;
	
	else 
		goto LABEL3485;
	
	LABEL3487:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3488:
	// Setting char
	flag[65] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3588;
	
	else if (r == 1)
		goto LABEL3489;
	
	else 
		goto LABEL3487;
	
	LABEL3489:
	// Checking char
	flag[105] = '^';
	goto LABEL3490;
	
	LABEL3490:
	// Checking char
	flag[170] = '*';
	goto LABEL3491;
	
	LABEL3491:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3492:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3493:
	// Checking char
	flag[40] = 'B';
	goto LABEL3593;
	
	LABEL3494:
	// Checking char
	flag[200] = 'd';
	goto LABEL3493;
	
	LABEL3495:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3496:
	// Checking char
	flag[49] = 'L';
	goto LABEL3596;
	
	LABEL3497:
	// Checking char
	flag[151] = 'o';
	goto LABEL3597;
	
	LABEL3498:
	// Setting char
	flag[179] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3598;
	
	else 
		goto LABEL3499;
	
	LABEL3499:
	// Setting char
	flag[104] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3399;
	
	else 
		goto LABEL3599;
	
	LABEL3500:
	// Checking char
	flag[180] = 'E';
	goto LABEL3600;
	
	LABEL3501:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3502:
	// Checking char
	flag[46] = 'R';
	goto LABEL3501;
	
	LABEL3503:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3504:
	// Setting char
	flag[25] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3404;
	
	else 
		goto LABEL3503;
	
	LABEL3505:
	// Checking char
	flag[44] = 'G';
	goto LABEL3504;
	
	LABEL3506:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3507:
	// Checking char
	flag[112] = 'k';
	goto LABEL3607;
	
	LABEL3508:
	// Setting char
	flag[173] = '}';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3608;
	
	else if (r == 1)
		goto LABEL3509;
	
	else 
		goto LABEL3507;
	
	LABEL3509:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3510:
	// Setting char
	flag[219] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3610;
	
	else 
		goto LABEL3511;
	
	LABEL3511:
	// Checking char
	flag[100] = '5';
	goto LABEL3611;
	
	LABEL3512:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3513:
	// Checking char
	flag[242] = '^';
	goto LABEL3613;
	
	LABEL3514:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3515:
	// Setting char
	flag[9] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3615;
	
	else 
		goto LABEL3514;
	
	LABEL3516:
	// Setting char
	flag[74] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3416;
	
	else 
		goto LABEL3515;
	
	LABEL3517:
	// Setting char
	flag[231] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3617;
	
	else 
		goto LABEL3516;
	
	LABEL3518:
	// Checking char
	flag[84] = 'k';
	goto LABEL3517;
	
	LABEL3519:
	// Setting char
	flag[87] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3619;
	
	else 
		goto LABEL3518;
	
	LABEL3520:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3521:
	// Checking char
	flag[88] = '1';
	goto LABEL3621;
	
	LABEL3522:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3523:
	// Setting char
	flag[61] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3623;
	
	else 
		goto LABEL3524;
	
	LABEL3524:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3525:
	// Checking char
	flag[152] = 'x';
	goto LABEL3625;
	
	LABEL3526:
	// Checking char
	flag[84] = 'x';
	goto LABEL3527;
	
	LABEL3527:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3528:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3529:
	// Setting char
	flag[101] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3629;
	
	else 
		goto LABEL3528;
	
	LABEL3530:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3531:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3532:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3533:
	// Checking char
	flag[109] = 'M';
	goto LABEL3633;
	
	LABEL3534:
	// Checking char
	flag[184] = '/';
	goto LABEL3533;
	
	LABEL3535:
	// Checking char
	flag[210] = '.';
	goto LABEL3534;
	
	LABEL3536:
	// Setting char
	flag[128] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3436;
	
	else 
		goto LABEL3636;
	
	LABEL3537:
	// Checking char
	flag[220] = 'k';
	goto LABEL3536;
	
	LABEL3538:
	// Checking char
	flag[62] = '1';
	goto LABEL3537;
	
	LABEL3539:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3540:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3541:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3542:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3543:
	// Checking char
	flag[224] = 's';
	goto LABEL3643;
	
	LABEL3544:
	// Checking char
	flag[186] = 'z';
	goto LABEL3543;
	
	LABEL3545:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3546:
	// Checking char
	flag[182] = 'Z';
	goto LABEL3446;
	
	LABEL3547:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3548:
	// Checking char
	flag[196] = '-';
	goto LABEL3549;
	
	LABEL3549:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3550:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3551:
	// Checking char
	flag[97] = 'Q';
	goto LABEL3550;
	
	LABEL3552:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3553:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3554:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3555:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3556:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3557:
	// Setting char
	flag[175] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3657;
	
	else 
		goto LABEL3556;
	
	LABEL3558:
	// Checking char
	flag[203] = '"';
	goto LABEL3658;
	
	LABEL3559:
	// Checking char
	flag[184] = '%';
	goto LABEL3659;
	
	LABEL3560:
	// Checking char
	flag[147] = 'e';
	goto LABEL3660;
	
	LABEL3561:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3562:
	// Setting char
	flag[34] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3662;
	
	else 
		goto LABEL3561;
	
	LABEL3563:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3564:
	// Setting char
	flag[203] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3664;
	
	else 
		goto LABEL3563;
	
	LABEL3565:
	// Checking char
	flag[46] = '/';
	goto LABEL3566;
	
	LABEL3566:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3567:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3568:
	// Setting char
	flag[3] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3668;
	
	else 
		goto LABEL3567;
	
	LABEL3569:
	// Checking char
	flag[89] = '.';
	goto LABEL3568;
	
	LABEL3570:
	// Setting char
	flag[26] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3670;
	
	else 
		goto LABEL3569;
	
	LABEL3571:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3572:
	// Checking char
	flag[125] = '&';
	goto LABEL3571;
	
	LABEL3573:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3574:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3575:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3576:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3577:
	// Checking char
	flag[162] = 'x';
	goto LABEL3677;
	
	LABEL3578:
	// Setting char
	flag[29] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3478;
	
	else if (r == 1)
		goto LABEL3678;
	
	else 
		goto LABEL3577;
	
	LABEL3579:
	// Checking char
	flag[166] = '"';
	goto LABEL3578;
	
	LABEL3580:
	// Checking char
	flag[63] = '7';
	goto LABEL3579;
	
	LABEL3581:
	// Setting char
	flag[183] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3582;
	
	else 
		goto LABEL3580;
	
	LABEL3582:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3583:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3584:
	// Checking char
	flag[48] = ':';
	goto LABEL3684;
	
	LABEL3585:
	// Checking char
	flag[31] = ']';
	goto LABEL3584;
	
	LABEL3586:
	// Checking char
	flag[19] = 'M';
	goto LABEL3585;
	
	LABEL3587:
	// Checking char
	flag[83] = 'u';
	goto LABEL3687;
	
	LABEL3588:
	// Setting char
	flag[222] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3688;
	
	else if (r == 1)
		goto LABEL3589;
	
	else 
		goto LABEL3587;
	
	LABEL3589:
	// Checking char
	flag[23] = '~';
	goto LABEL3590;
	
	LABEL3590:
	// Checking char
	flag[82] = '*';
	goto LABEL3690;
	
	LABEL3591:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3592:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3593:
	// Setting char
	flag[171] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3693;
	
	else 
		goto LABEL3594;
	
	LABEL3594:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3595:
	// Checking char
	flag[94] = '%';
	goto LABEL3495;
	
	LABEL3596:
	// Setting char
	flag[232] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3696;
	
	else 
		goto LABEL3595;
	
	LABEL3597:
	// Checking char
	flag[192] = 'R';
	goto LABEL3697;
	
	LABEL3598:
	// Checking char
	flag[33] = 'n';
	goto LABEL3698;
	
	LABEL3599:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3600:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3601:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3602:
	// Checking char
	flag[16] = 'u';
	goto LABEL3502;
	
	LABEL3603:
	// Checking char
	flag[69] = 'q';
	goto LABEL3602;
	
	LABEL3604:
	// Checking char
	flag[87] = 'W';
	goto LABEL3603;
	
	LABEL3605:
	// Checking char
	flag[198] = 'F';
	goto LABEL3705;
	
	LABEL3606:
	// Setting char
	flag[63] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3506;
	
	else if (r == 1)
		goto LABEL3706;
	
	else 
		goto LABEL3605;
	
	LABEL3607:
	// Checking char
	flag[129] = '_';
	goto LABEL3606;
	
	LABEL3608:
	// Checking char
	flag[132] = 'c';
	goto LABEL3708;
	
	LABEL3609:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3610:
	// Setting char
	flag[63] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3710;
	
	else 
		goto LABEL3609;
	
	LABEL3611:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3612:
	// Checking char
	flag[141] = 'k';
	goto LABEL3712;
	
	LABEL3613:
	// Setting char
	flag[122] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3713;
	
	else 
		goto LABEL3612;
	
	LABEL3614:
	// Checking char
	flag[74] = 'y';
	goto LABEL3714;
	
	LABEL3615:
	// Checking char
	flag[161] = 'O';
	goto LABEL3614;
	
	LABEL3616:
	// Checking char
	flag[241] = '&';
	goto LABEL3716;
	
	LABEL3617:
	// Setting char
	flag[141] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3618;
	
	else 
		goto LABEL3616;
	
	LABEL3618:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3619:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3620:
	// Checking char
	flag[74] = 'w';
	goto LABEL3720;
	
	LABEL3621:
	// Setting char
	flag[136] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3721;
	
	else 
		goto LABEL3620;
	
	LABEL3622:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3623:
	// Setting char
	flag[102] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3723;
	
	else 
		goto LABEL3622;
	
	LABEL3624:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3625:
	// Checking char
	flag[112] = 'D';
	goto LABEL3725;
	
	LABEL3626:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3627:
	// Checking char
	flag[243] = '.';
	goto LABEL3628;
	
	LABEL3628:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3629:
	// Setting char
	flag[105] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3729;
	
	else 
		goto LABEL3630;
	
	LABEL3630:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3631:
	// Checking char
	flag[141] = '"';
	goto LABEL3632;
	
	LABEL3632:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3633:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3634:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3635:
	// Checking char
	flag[235] = 'D';
	goto LABEL3634;
	
	LABEL3636:
	// Setting char
	flag[111] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3637;
	
	else 
		goto LABEL3635;
	
	LABEL3637:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3638:
	// Setting char
	flag[29] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3538;
	
	else 
		goto LABEL3738;
	
	LABEL3639:
	// Checking char
	flag[88] = 'Z';
	goto LABEL3638;
	
	LABEL3640:
	// Checking char
	flag[66] = '5';
	goto LABEL3639;
	
	LABEL3641:
	// Checking char
	flag[57] = 'v';
	goto LABEL3541;
	
	LABEL3642:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3643:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3644:
	// Setting char
	flag[119] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3544;
	
	else 
		goto LABEL3645;
	
	LABEL3645:
	// Checking char
	flag[188] = 'F';
	goto LABEL3545;
	
	LABEL3646:
	// Checking char
	flag[53] = 'm';
	goto LABEL3546;
	
	LABEL3647:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3648:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3649:
	// Setting char
	flag[128] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3650;
	
	else 
		goto LABEL3648;
	
	LABEL3650:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3651:
	// Checking char
	flag[192] = '6';
	goto LABEL3551;
	
	LABEL3652:
	// Setting char
	flag[107] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3552;
	
	else 
		goto LABEL3651;
	
	LABEL3653:
	// Setting char
	flag[7] = '*';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3553;
	
	else if (r == 1)
		goto LABEL3753;
	
	else 
		goto LABEL3652;
	
	LABEL3654:
	// Setting char
	flag[25] = 'q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3554;
	
	else if (r == 1)
		goto LABEL3754;
	
	else 
		goto LABEL3653;
	
	LABEL3655:
	// Setting char
	flag[111] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3555;
	
	else 
		goto LABEL3654;
	
	LABEL3656:
	// Setting char
	flag[196] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3756;
	
	else 
		goto LABEL3655;
	
	LABEL3657:
	// Setting char
	flag[226] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3757;
	
	else 
		goto LABEL3656;
	
	LABEL3658:
	// Checking char
	flag[151] = 'o';
	goto LABEL3758;
	
	LABEL3659:
	// Checking char
	flag[125] = 'f';
	goto LABEL3759;
	
	LABEL3660:
	// Setting char
	flag[216] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3760;
	
	else 
		goto LABEL3661;
	
	LABEL3661:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3662:
	// Checking char
	flag[235] = 'A';
	goto LABEL3762;
	
	LABEL3663:
	// Checking char
	flag[66] = ',';
	goto LABEL3763;
	
	LABEL3664:
	// Setting char
	flag[8] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3764;
	
	else 
		goto LABEL3663;
	
	LABEL3665:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3666:
	// Checking char
	flag[171] = ')';
	goto LABEL3665;
	
	LABEL3667:
	// Checking char
	flag[132] = 'u';
	goto LABEL3666;
	
	LABEL3668:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3669:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3670:
	// Setting char
	flag[106] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3770;
	
	else 
		goto LABEL3671;
	
	LABEL3671:
	// Checking char
	flag[52] = 'I';
	goto LABEL3672;
	
	LABEL3672:
	// Checking char
	flag[248] = 'j';
	goto LABEL3772;
	
	LABEL3673:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3674:
	// Setting char
	flag[113] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3574;
	
	else if (r == 1)
		goto LABEL3774;
	
	else 
		goto LABEL3673;
	
	LABEL3675:
	// Setting char
	flag[146] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3775;
	
	else 
		goto LABEL3674;
	
	LABEL3676:
	// Setting char
	flag[83] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3576;
	
	else if (r == 1)
		goto LABEL3776;
	
	else 
		goto LABEL3675;
	
	LABEL3677:
	// Setting char
	flag[133] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3777;
	
	else 
		goto LABEL3676;
	
	LABEL3678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3679:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3680:
	// Checking char
	flag[25] = 'A';
	goto LABEL3679;
	
	LABEL3681:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3682:
	// Checking char
	flag[161] = '1';
	goto LABEL3681;
	
	LABEL3683:
	// Checking char
	flag[10] = '6';
	goto LABEL3682;
	
	LABEL3684:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3685:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3686:
	// Setting char
	flag[216] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3786;
	
	else 
		goto LABEL3685;
	
	LABEL3687:
	// Setting char
	flag[216] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3787;
	
	else 
		goto LABEL3686;
	
	LABEL3688:
	// Checking char
	flag[196] = '%';
	goto LABEL3788;
	
	LABEL3689:
	// Checking char
	flag[9] = 'X';
	goto LABEL3789;
	
	LABEL3690:
	// Setting char
	flag[69] = 'x';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3790;
	
	else if (r == 1)
		goto LABEL3691;
	
	else 
		goto LABEL3689;
	
	LABEL3691:
	// Setting char
	flag[94] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3591;
	
	else 
		goto LABEL3692;
	
	LABEL3692:
	// Setting char
	flag[201] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3592;
	
	else 
		goto LABEL3792;
	
	LABEL3693:
	// Checking char
	flag[244] = 'S';
	goto LABEL3694;
	
	LABEL3694:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3695:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3696:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3697:
	// Checking char
	flag[202] = 'p';
	goto LABEL3797;
	
	LABEL3698:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3699:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3700:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3701:
	// Setting char
	flag[78] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3601;
	
	else 
		goto LABEL3700;
	
	LABEL3702:
	// Setting char
	flag[9] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3802;
	
	else 
		goto LABEL3701;
	
	LABEL3703:
	// Checking char
	flag[34] = 'J';
	goto LABEL3702;
	
	LABEL3704:
	// Setting char
	flag[223] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3604;
	
	else 
		goto LABEL3703;
	
	LABEL3705:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3706:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3707:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3708:
	// Setting char
	flag[22] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3808;
	
	else 
		goto LABEL3707;
	
	LABEL3709:
	// Checking char
	flag[160] = 'J';
	goto LABEL3809;
	
	LABEL3710:
	// Setting char
	flag[67] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3711;
	
	else 
		goto LABEL3709;
	
	LABEL3711:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3712:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3713:
	// Checking char
	flag[42] = 'W';
	goto LABEL3813;
	
	LABEL3714:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3715:
	// Checking char
	flag[247] = 'y';
	goto LABEL3815;
	
	LABEL3716:
	// Setting char
	flag[193] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3816;
	
	else if (r == 1)
		goto LABEL3717;
	
	else 
		goto LABEL3715;
	
	LABEL3717:
	// Checking char
	flag[242] = '6';
	goto LABEL3817;
	
	LABEL3718:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3719:
	// Checking char
	flag[222] = '.';
	goto LABEL3819;
	
	LABEL3720:
	// Checking char
	flag[29] = 'K';
	goto LABEL3719;
	
	LABEL3721:
	// Checking char
	flag[97] = 'd';
	goto LABEL3821;
	
	LABEL3722:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3723:
	// Checking char
	flag[109] = 's';
	goto LABEL3722;
	
	LABEL3724:
	// Checking char
	flag[159] = 'k';
	goto LABEL3624;
	
	LABEL3725:
	// Checking char
	flag[203] = '0';
	goto LABEL3724;
	
	LABEL3726:
	// Checking char
	flag[138] = '@';
	goto LABEL3626;
	
	LABEL3727:
	// Checking char
	flag[133] = '?';
	goto LABEL3627;
	
	LABEL3728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3729:
	// Setting char
	flag[164] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3829;
	
	else 
		goto LABEL3730;
	
	LABEL3730:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3731:
	// Setting char
	flag[81] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3631;
	
	else 
		goto LABEL3732;
	
	LABEL3732:
	// Checking char
	flag[226] = 'y';
	goto LABEL3733;
	
	LABEL3733:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3734:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3735:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3736:
	// Checking char
	flag[24] = '"';
	goto LABEL3836;
	
	LABEL3737:
	// Checking char
	flag[215] = 'O';
	goto LABEL3736;
	
	LABEL3738:
	// Setting char
	flag[43] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3739;
	
	else 
		goto LABEL3737;
	
	LABEL3739:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3740:
	// Setting char
	flag[208] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3640;
	
	else 
		goto LABEL3840;
	
	LABEL3741:
	// Setting char
	flag[25] = '/';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3641;
	
	else if (r == 1)
		goto LABEL3841;
	
	else 
		goto LABEL3740;
	
	LABEL3742:
	// Setting char
	flag[0] = ';';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3642;
	
	else if (r == 1)
		goto LABEL3842;
	
	else 
		goto LABEL3741;
	
	LABEL3743:
	// Checking char
	flag[51] = 'e';
	goto LABEL3742;
	
	LABEL3744:
	// Setting char
	flag[57] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3644;
	
	else 
		goto LABEL3743;
	
	LABEL3745:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3746:
	// Setting char
	flag[107] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3646;
	
	else 
		goto LABEL3745;
	
	LABEL3747:
	// Setting char
	flag[58] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3647;
	
	else 
		goto LABEL3748;
	
	LABEL3748:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3749:
	// Setting char
	flag[217] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3649;
	
	else 
		goto LABEL3750;
	
	LABEL3750:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3751:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3752:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3753:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3754:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3755:
	// Checking char
	flag[34] = 'y';
	goto LABEL3855;
	
	LABEL3756:
	// Checking char
	flag[26] = '@';
	goto LABEL3755;
	
	LABEL3757:
	// Checking char
	flag[51] = 'L';
	goto LABEL3857;
	
	LABEL3758:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3759:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3760:
	// Checking char
	flag[196] = '3';
	goto LABEL3761;
	
	LABEL3761:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3762:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3763:
	// Checking char
	flag[142] = ',';
	goto LABEL3863;
	
	LABEL3764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3765:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3766:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3767:
	// Setting char
	flag[188] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3667;
	
	else if (r == 1)
		goto LABEL3867;
	
	else 
		goto LABEL3766;
	
	LABEL3768:
	// Checking char
	flag[242] = 'h';
	goto LABEL3767;
	
	LABEL3769:
	// Setting char
	flag[50] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3669;
	
	else if (r == 1)
		goto LABEL3869;
	
	else 
		goto LABEL3768;
	
	LABEL3770:
	// Setting char
	flag[219] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3870;
	
	else if (r == 1)
		goto LABEL3771;
	
	else 
		goto LABEL3769;
	
	LABEL3771:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3772:
	// Checking char
	flag[11] = ':';
	goto LABEL3872;
	
	LABEL3773:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3774:
	// Checking char
	flag[129] = 'm';
	goto LABEL3773;
	
	LABEL3775:
	// Checking char
	flag[63] = '5';
	goto LABEL3875;
	
	LABEL3776:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3777:
	// Checking char
	flag[104] = ':';
	goto LABEL3877;
	
	LABEL3778:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3779:
	// Checking char
	flag[155] = 'm';
	goto LABEL3778;
	
	LABEL3780:
	// Setting char
	flag[239] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3680;
	
	else if (r == 1)
		goto LABEL3880;
	
	else 
		goto LABEL3779;
	
	LABEL3781:
	// Checking char
	flag[201] = 'Y';
	goto LABEL3780;
	
	LABEL3782:
	// Checking char
	flag[172] = 'R';
	goto LABEL3781;
	
	LABEL3783:
	// Setting char
	flag[83] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3683;
	
	else if (r == 1)
		goto LABEL3784;
	
	else 
		goto LABEL3782;
	
	LABEL3784:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3785:
	// Checking char
	flag[11] = ';';
	goto LABEL3885;
	
	LABEL3786:
	// Setting char
	flag[75] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3886;
	
	else 
		goto LABEL3785;
	
	LABEL3787:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3788:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3789:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3790:
	// Checking char
	flag[208] = '?';
	goto LABEL3890;
	
	LABEL3791:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3792:
	// Checking char
	flag[117] = ',';
	goto LABEL3793;
	
	LABEL3793:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3794:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3795:
	// Setting char
	flag[132] = '&';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3695;
	
	else if (r == 1)
		goto LABEL3895;
	
	else 
		goto LABEL3794;
	
	LABEL3796:
	// Checking char
	flag[233] = '8';
	goto LABEL3795;
	
	LABEL3797:
	// Setting char
	flag[198] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3897;
	
	else if (r == 1)
		goto LABEL3798;
	
	else 
		goto LABEL3796;
	
	LABEL3798:
	// Setting char
	flag[153] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3898;
	
	else 
		goto LABEL3799;
	
	LABEL3799:
	// Setting char
	flag[78] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3699;
	
	else 
		goto LABEL3899;
	
	LABEL3800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3801:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3802:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3803:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3804:
	// Setting char
	flag[228] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3704;
	
	else 
		goto LABEL3805;
	
	LABEL3805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3806:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3807:
	// Setting char
	flag[218] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3907;
	
	else 
		goto LABEL3806;
	
	LABEL3808:
	// Checking char
	flag[149] = 'I';
	goto LABEL3807;
	
	LABEL3809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3810:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3811:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3812:
	// Checking char
	flag[10] = 'g';
	goto LABEL3811;
	
	LABEL3813:
	// Setting char
	flag[29] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3913;
	
	else if (r == 1)
		goto LABEL3814;
	
	else 
		goto LABEL3812;
	
	LABEL3814:
	// Checking char
	flag[92] = 'P';
	goto LABEL3914;
	
	LABEL3815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3816:
	// Checking char
	flag[213] = '+';
	goto LABEL3916;
	
	LABEL3817:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3818:
	// Checking char
	flag[55] = 'g';
	goto LABEL3718;
	
	LABEL3819:
	// Setting char
	flag[112] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3820;
	
	else 
		goto LABEL3818;
	
	LABEL3820:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3821:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3822:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3823:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3824:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3825:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3826:
	// Setting char
	flag[214] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3726;
	
	else if (r == 1)
		goto LABEL3926;
	
	else 
		goto LABEL3825;
	
	LABEL3827:
	// Setting char
	flag[48] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3727;
	
	else 
		goto LABEL3826;
	
	LABEL3828:
	// Setting char
	flag[30] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3728;
	
	else if (r == 1)
		goto LABEL3928;
	
	else 
		goto LABEL3827;
	
	LABEL3829:
	// Setting char
	flag[140] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3929;
	
	else 
		goto LABEL3828;
	
	LABEL3830:
	// Checking char
	flag[1] = '&';
	goto LABEL3930;
	
	LABEL3831:
	// Setting char
	flag[243] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3731;
	
	else 
		goto LABEL3830;
	
	LABEL3832:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3833:
	// Setting char
	flag[196] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3933;
	
	else 
		goto LABEL3832;
	
	LABEL3834:
	// Setting char
	flag[141] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3734;
	
	else 
		goto LABEL3833;
	
	LABEL3835:
	// Setting char
	flag[42] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3735;
	
	else 
		goto LABEL3834;
	
	LABEL3836:
	// Checking char
	flag[58] = 'M';
	goto LABEL3835;
	
	LABEL3837:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3838:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3839:
	// Checking char
	flag[247] = 'w';
	goto LABEL3939;
	
	LABEL3840:
	// Checking char
	flag[16] = 'w';
	goto LABEL3839;
	
	LABEL3841:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3842:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3843:
	// Checking char
	flag[128] = 'X';
	goto LABEL3943;
	
	LABEL3844:
	// Setting char
	flag[144] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3744;
	
	else 
		goto LABEL3843;
	
	LABEL3845:
	// Setting char
	flag[108] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3945;
	
	else 
		goto LABEL3844;
	
	LABEL3846:
	// Setting char
	flag[0] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3746;
	
	else 
		goto LABEL3845;
	
	LABEL3847:
	// Setting char
	flag[6] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3747;
	
	else 
		goto LABEL3846;
	
	LABEL3848:
	// Setting char
	flag[248] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3948;
	
	else 
		goto LABEL3847;
	
	LABEL3849:
	// Setting char
	flag[27] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3749;
	
	else if (r == 1)
		goto LABEL3949;
	
	else 
		goto LABEL3848;
	
	LABEL3850:
	// Checking char
	flag[228] = '>';
	goto LABEL3849;
	
	LABEL3851:
	// Setting char
	flag[29] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3751;
	
	else 
		goto LABEL3850;
	
	LABEL3852:
	// Checking char
	flag[18] = 'Z';
	goto LABEL3752;
	
	LABEL3853:
	// Checking char
	flag[122] = 'n';
	goto LABEL3852;
	
	LABEL3854:
	// Checking char
	flag[116] = ']';
	goto LABEL3853;
	
	LABEL3855:
	// Checking char
	flag[170] = 'N';
	goto LABEL3854;
	
	LABEL3856:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3857:
	// Setting char
	flag[128] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3957;
	
	else 
		goto LABEL3856;
	
	LABEL3858:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3859:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3860:
	// Setting char
	flag[82] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3960;
	
	else 
		goto LABEL3859;
	
	LABEL3861:
	// Checking char
	flag[82] = ';';
	goto LABEL3860;
	
	LABEL3862:
	// Setting char
	flag[126] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3962;
	
	else 
		goto LABEL3861;
	
	LABEL3863:
	// Setting char
	flag[198] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3963;
	
	else if (r == 1)
		goto LABEL3864;
	
	else 
		goto LABEL3862;
	
	LABEL3864:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3865:
	// Checking char
	flag[153] = '^';
	goto LABEL3765;
	
	LABEL3866:
	// Setting char
	flag[219] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3966;
	
	else 
		goto LABEL3865;
	
	LABEL3867:
	// Checking char
	flag[166] = '(';
	goto LABEL3866;
	
	LABEL3868:
	// Checking char
	flag[108] = '&';
	goto LABEL3968;
	
	LABEL3869:
	// Setting char
	flag[106] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3969;
	
	else 
		goto LABEL3868;
	
	LABEL3870:
	// Setting char
	flag[66] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3970;
	
	else 
		goto LABEL3871;
	
	LABEL3871:
	// Checking char
	flag[85] = '`';
	goto LABEL3971;
	
	LABEL3872:
	// Checking char
	flag[169] = 'b';
	goto LABEL3873;
	
	LABEL3873:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3874:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3875:
	// Checking char
	flag[95] = '(';
	goto LABEL3874;
	
	LABEL3876:
	// Checking char
	flag[186] = 'a';
	goto LABEL3976;
	
	LABEL3877:
	// Setting char
	flag[200] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3977;
	
	else 
		goto LABEL3876;
	
	LABEL3878:
	// Checking char
	flag[109] = 'H';
	goto LABEL3978;
	
	LABEL3879:
	// Checking char
	flag[148] = 'l';
	goto LABEL3878;
	
	LABEL3880:
	// Checking char
	flag[113] = '/';
	goto LABEL3980;
	
	LABEL3881:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3882:
	// Checking char
	flag[159] = '=';
	goto LABEL3982;
	
	LABEL3883:
	// Setting char
	flag[223] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3783;
	
	else 
		goto LABEL3882;
	
	LABEL3884:
	// Checking char
	flag[141] = 'B';
	goto LABEL3883;
	
	LABEL3885:
	// Checking char
	flag[37] = 'R';
	goto LABEL3884;
	
	LABEL3886:
	// Checking char
	flag[198] = '=';
	goto LABEL3986;
	
	LABEL3887:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3888:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3889:
	// Checking char
	flag[164] = 'v';
	goto LABEL3888;
	
	LABEL3890:
	// Setting char
	flag[134] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3990;
	
	else if (r == 1)
		goto LABEL3891;
	
	else 
		goto LABEL3889;
	
	LABEL3891:
	// Setting char
	flag[187] = '"';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3791;
	
	else if (r == 1)
		goto LABEL3991;
	
	else 
		goto LABEL3892;
	
	LABEL3892:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3893:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3894:
	// Checking char
	flag[125] = '?';
	goto LABEL3893;
	
	LABEL3895:
	// Checking char
	flag[89] = '*';
	goto LABEL3894;
	
	LABEL3896:
	// Checking char
	flag[9] = '8';
	goto LABEL3996;
	
	LABEL3897:
	// Setting char
	flag[15] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3997;
	
	else 
		goto LABEL3896;
	
	LABEL3898:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3899:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3900:
	// Checking char
	flag[90] = '$';
	goto LABEL3800;
	
	LABEL3901:
	// Setting char
	flag[150] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3801;
	
	else 
		goto LABEL4001;
	
	LABEL3902:
	// Checking char
	flag[179] = ')';
	goto LABEL3901;
	
	LABEL3903:
	// Setting char
	flag[134] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3803;
	
	else 
		goto LABEL3902;
	
	LABEL3904:
	// Setting char
	flag[241] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3804;
	
	else 
		goto LABEL3903;
	
	LABEL3905:
	// Setting char
	flag[59] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4005;
	
	else 
		goto LABEL3904;
	
	LABEL3906:
	// Setting char
	flag[125] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4006;
	
	else 
		goto LABEL3905;
	
	LABEL3907:
	// Checking char
	flag[63] = '#';
	goto LABEL3906;
	
	LABEL3908:
	// Checking char
	flag[53] = 'n';
	goto LABEL3909;
	
	LABEL3909:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3910:
	// Setting char
	flag[48] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3810;
	
	else 
		goto LABEL4010;
	
	LABEL3911:
	// Checking char
	flag[87] = 'X';
	goto LABEL3910;
	
	LABEL3912:
	// Setting char
	flag[239] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4012;
	
	else 
		goto LABEL3911;
	
	LABEL3913:
	// Checking char
	flag[6] = 'I';
	goto LABEL3912;
	
	LABEL3914:
	// Checking char
	flag[111] = '(';
	goto LABEL4014;
	
	LABEL3915:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3916:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3918:
	// Checking char
	flag[209] = ')';
	goto LABEL3917;
	
	LABEL3919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3920:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3921:
	// Checking char
	flag[107] = '}';
	goto LABEL3920;
	
	LABEL3922:
	// Setting char
	flag[190] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3822;
	
	else if (r == 1)
		goto LABEL4022;
	
	else 
		goto LABEL3921;
	
	LABEL3923:
	// Setting char
	flag[206] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3823;
	
	else 
		goto LABEL3922;
	
	LABEL3924:
	// Setting char
	flag[141] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3824;
	
	else 
		goto LABEL3923;
	
	LABEL3925:
	// Setting char
	flag[234] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4025;
	
	else 
		goto LABEL3924;
	
	LABEL3926:
	// Checking char
	flag[121] = 'a';
	goto LABEL3925;
	
	LABEL3927:
	// Checking char
	flag[118] = 'M';
	goto LABEL4027;
	
	LABEL3928:
	// Checking char
	flag[64] = 'F';
	goto LABEL3927;
	
	LABEL3929:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3930:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3931:
	// Checking char
	flag[146] = '#';
	goto LABEL3831;
	
	LABEL3932:
	// Checking char
	flag[137] = 'E';
	goto LABEL3931;
	
	LABEL3933:
	// Setting char
	flag[157] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4033;
	
	else 
		goto LABEL3932;
	
	LABEL3934:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3935:
	// Setting char
	flag[165] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4035;
	
	else 
		goto LABEL3934;
	
	LABEL3936:
	// Setting char
	flag[238] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4036;
	
	else 
		goto LABEL3935;
	
	LABEL3937:
	// Setting char
	flag[13] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3837;
	
	else 
		goto LABEL3936;
	
	LABEL3938:
	// Setting char
	flag[87] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3838;
	
	else if (r == 1)
		goto LABEL4038;
	
	else 
		goto LABEL3937;
	
	LABEL3939:
	// Setting char
	flag[223] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4039;
	
	else 
		goto LABEL3938;
	
	LABEL3940:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3941:
	// Checking char
	flag[113] = '4';
	goto LABEL4041;
	
	LABEL3942:
	// Checking char
	flag[207] = '@';
	goto LABEL3941;
	
	LABEL3943:
	// Setting char
	flag[228] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4043;
	
	else 
		goto LABEL3942;
	
	LABEL3944:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3945:
	// Checking char
	flag[159] = '5';
	goto LABEL4045;
	
	LABEL3946:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3947:
	// Setting char
	flag[28] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4047;
	
	else 
		goto LABEL3946;
	
	LABEL3948:
	// Setting char
	flag[45] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4048;
	
	else 
		goto LABEL3947;
	
	LABEL3949:
	// Checking char
	flag[37] = ',';
	goto LABEL4049;
	
	LABEL3950:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3951:
	// Setting char
	flag[90] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3851;
	
	else if (r == 1)
		goto LABEL4051;
	
	else 
		goto LABEL3950;
	
	LABEL3952:
	// Setting char
	flag[88] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4052;
	
	else 
		goto LABEL3951;
	
	LABEL3953:
	// Checking char
	flag[40] = 'D';
	goto LABEL3952;
	
	LABEL3954:
	// Checking char
	flag[4] = 'G';
	goto LABEL3953;
	
	LABEL3955:
	// Setting char
	flag[80] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4055;
	
	else 
		goto LABEL3954;
	
	LABEL3956:
	// Setting char
	flag[48] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4056;
	
	else 
		goto LABEL3955;
	
	LABEL3957:
	// Checking char
	flag[111] = 'F';
	goto LABEL3956;
	
	LABEL3958:
	// Checking char
	flag[183] = 'j';
	goto LABEL3858;
	
	LABEL3959:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3960:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3961:
	// Checking char
	flag[98] = 'i';
	goto LABEL4061;
	
	LABEL3962:
	// Setting char
	flag[84] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4062;
	
	else 
		goto LABEL3961;
	
	LABEL3963:
	// Checking char
	flag[192] = 'S';
	goto LABEL4063;
	
	LABEL3964:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3965:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3966:
	// Setting char
	flag[124] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3967;
	
	else 
		goto LABEL3965;
	
	LABEL3967:
	// Checking char
	flag[78] = '{';
	goto LABEL4067;
	
	LABEL3968:
	// Checking char
	flag[142] = '3';
	goto LABEL4068;
	
	LABEL3969:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3970:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3971:
	// Checking char
	flag[141] = 'K';
	goto LABEL4071;
	
	LABEL3972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3973:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3974:
	// Setting char
	flag[32] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3975;
	
	else 
		goto LABEL3973;
	
	LABEL3975:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3976:
	// Checking char
	flag[97] = ',';
	goto LABEL4076;
	
	LABEL3977:
	// Checking char
	flag[107] = 'a';
	goto LABEL4077;
	
	LABEL3978:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3979:
	// Checking char
	flag[49] = '"';
	goto LABEL3879;
	
	LABEL3980:
	// Setting char
	flag[13] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3981;
	
	else 
		goto LABEL3979;
	
	LABEL3981:
	// Checking char
	flag[61] = 't';
	goto LABEL3881;
	
	LABEL3982:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3983:
	// Checking char
	flag[243] = 'G';
	goto LABEL4083;
	
	LABEL3984:
	// Setting char
	flag[0] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4084;
	
	else 
		goto LABEL3983;
	
	LABEL3985:
	// Checking char
	flag[150] = 'E';
	goto LABEL3984;
	
	LABEL3986:
	// Setting char
	flag[8] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4086;
	
	else if (r == 1)
		goto LABEL3987;
	
	else 
		goto LABEL3985;
	
	LABEL3987:
	// Setting char
	flag[173] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3887;
	
	else 
		goto LABEL4087;
	
	LABEL3988:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3989:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3990:
	// Checking char
	flag[198] = 'Y';
	goto LABEL4090;
	
	LABEL3991:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3992:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3993:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3995:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL3996:
	// Checking char
	flag[37] = 'Y';
	goto LABEL3995;
	
	LABEL3997:
	// Setting char
	flag[14] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4097;
	
	else 
		goto LABEL3998;
	
	LABEL3998:
	// Checking char
	flag[11] = 'a';
	goto LABEL3999;
	
	LABEL3999:
	// Checking char
	flag[44] = 'k';
	goto LABEL4099;
	
	LABEL4000:
	// Checking char
	flag[29] = 'd';
	goto LABEL3900;
	
	LABEL4001:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4002:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4003:
	// Checking char
	flag[150] = '.';
	goto LABEL4002;
	
	LABEL4004:
	// Setting char
	flag[158] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4104;
	
	else 
		goto LABEL4003;
	
	LABEL4005:
	// Checking char
	flag[99] = 'a';
	goto LABEL4004;
	
	LABEL4006:
	// Setting char
	flag[147] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4106;
	
	else 
		goto LABEL4007;
	
	LABEL4007:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4008:
	// Checking char
	flag[156] = '"';
	goto LABEL3908;
	
	LABEL4009:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4010:
	// Checking char
	flag[246] = 'R';
	goto LABEL4009;
	
	LABEL4011:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4012:
	// Setting char
	flag[69] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4112;
	
	else if (r == 1)
		goto LABEL4013;
	
	else 
		goto LABEL4011;
	
	LABEL4013:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4014:
	// Checking char
	flag[134] = 'a';
	goto LABEL4015;
	
	LABEL4015:
	// Setting char
	flag[45] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3915;
	
	else 
		goto LABEL4115;
	
	LABEL4016:
	// Checking char
	flag[213] = 'P';
	goto LABEL4116;
	
	LABEL4017:
	// Setting char
	flag[41] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4117;
	
	else 
		goto LABEL4016;
	
	LABEL4018:
	// Setting char
	flag[125] = 'W';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3918;
	
	else if (r == 1)
		goto LABEL4118;
	
	else 
		goto LABEL4017;
	
	LABEL4019:
	// Setting char
	flag[172] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3919;
	
	else if (r == 1)
		goto LABEL4119;
	
	else 
		goto LABEL4018;
	
	LABEL4020:
	// Setting char
	flag[187] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4120;
	
	else 
		goto LABEL4019;
	
	LABEL4021:
	// Setting char
	flag[182] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4121;
	
	else 
		goto LABEL4020;
	
	LABEL4022:
	// Checking char
	flag[249] = '2';
	goto LABEL4021;
	
	LABEL4023:
	// Checking char
	flag[60] = '(';
	goto LABEL4123;
	
	LABEL4024:
	// Checking char
	flag[236] = 'f';
	goto LABEL4023;
	
	LABEL4025:
	// Checking char
	flag[131] = 'Z';
	goto LABEL4024;
	
	LABEL4026:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4027:
	// Setting char
	flag[12] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4127;
	
	else 
		goto LABEL4026;
	
	LABEL4028:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4029:
	// Checking char
	flag[84] = '!';
	goto LABEL4028;
	
	LABEL4030:
	// Checking char
	flag[134] = 'g';
	goto LABEL4130;
	
	LABEL4031:
	// Checking char
	flag[222] = ']';
	goto LABEL4030;
	
	LABEL4032:
	// Checking char
	flag[113] = 'G';
	goto LABEL4031;
	
	LABEL4033:
	// Setting char
	flag[90] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4133;
	
	else if (r == 1)
		goto LABEL4034;
	
	else 
		goto LABEL4032;
	
	LABEL4034:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4035:
	// Checking char
	flag[80] = 'k';
	goto LABEL4135;
	
	LABEL4036:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4037:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4038:
	// Checking char
	flag[62] = '"';
	goto LABEL4037;
	
	LABEL4039:
	// Checking char
	flag[119] = '=';
	goto LABEL4139;
	
	LABEL4040:
	// Setting char
	flag[186] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3940;
	
	else 
		goto LABEL4140;
	
	LABEL4041:
	// Setting char
	flag[156] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4042;
	
	else 
		goto LABEL4040;
	
	LABEL4042:
	// Checking char
	flag[18] = 'Q';
	goto LABEL4142;
	
	LABEL4043:
	// Setting char
	flag[232] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4143;
	
	else 
		goto LABEL4044;
	
	LABEL4044:
	// Setting char
	flag[68] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3944;
	
	else 
		goto LABEL4144;
	
	LABEL4045:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4046:
	// Checking char
	flag[34] = '9';
	goto LABEL4146;
	
	LABEL4047:
	// Checking char
	flag[137] = '_';
	goto LABEL4046;
	
	LABEL4048:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4049:
	// Checking char
	flag[134] = '0';
	goto LABEL4149;
	
	LABEL4050:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4051:
	// Setting char
	flag[50] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4151;
	
	else 
		goto LABEL4050;
	
	LABEL4052:
	// Checking char
	flag[169] = 't';
	goto LABEL4152;
	
	LABEL4053:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4054:
	// Setting char
	flag[79] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4154;
	
	else 
		goto LABEL4053;
	
	LABEL4055:
	// Checking char
	flag[57] = 'H';
	goto LABEL4054;
	
	LABEL4056:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4057:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4058:
	// Setting char
	flag[55] = ';';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3958;
	
	else if (r == 1)
		goto LABEL4158;
	
	else 
		goto LABEL4057;
	
	LABEL4059:
	// Setting char
	flag[160] = '4';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3959;
	
	else if (r == 1)
		goto LABEL4159;
	
	else 
		goto LABEL4058;
	
	LABEL4060:
	// Checking char
	flag[94] = '^';
	goto LABEL4059;
	
	LABEL4061:
	// Setting char
	flag[2] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4161;
	
	else 
		goto LABEL4060;
	
	LABEL4062:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4063:
	// Checking char
	flag[37] = 'Z';
	goto LABEL4163;
	
	LABEL4064:
	// Setting char
	flag[133] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3964;
	
	else 
		goto LABEL4164;
	
	LABEL4065:
	// Setting char
	flag[141] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4165;
	
	else 
		goto LABEL4064;
	
	LABEL4066:
	// Setting char
	flag[243] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4166;
	
	else 
		goto LABEL4065;
	
	LABEL4067:
	// Setting char
	flag[25] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4167;
	
	else 
		goto LABEL4066;
	
	LABEL4068:
	// Setting char
	flag[226] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4168;
	
	else 
		goto LABEL4069;
	
	LABEL4069:
	// Checking char
	flag[39] = '}';
	goto LABEL4169;
	
	LABEL4070:
	// Checking char
	flag[231] = '=';
	goto LABEL4170;
	
	LABEL4071:
	// Setting char
	flag[113] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4072;
	
	else 
		goto LABEL4070;
	
	LABEL4072:
	// Setting char
	flag[24] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3972;
	
	else if (r == 1)
		goto LABEL4172;
	
	else 
		goto LABEL4073;
	
	LABEL4073:
	// Checking char
	flag[48] = 'P';
	goto LABEL4074;
	
	LABEL4074:
	// Setting char
	flag[171] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3974;
	
	else 
		goto LABEL4075;
	
	LABEL4075:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4076:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4077:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4078:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4079:
	// Setting char
	flag[127] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4080;
	
	else 
		goto LABEL4078;
	
	LABEL4080:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4081:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4082:
	// Checking char
	flag[44] = '-';
	goto LABEL4081;
	
	LABEL4083:
	// Setting char
	flag[188] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4183;
	
	else 
		goto LABEL4082;
	
	LABEL4084:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4085:
	// Checking char
	flag[145] = 's';
	goto LABEL4185;
	
	LABEL4086:
	// Setting char
	flag[158] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4186;
	
	else 
		goto LABEL4085;
	
	LABEL4087:
	// Setting char
	flag[32] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4187;
	
	else 
		goto LABEL4088;
	
	LABEL4088:
	// Setting char
	flag[1] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3988;
	
	else 
		goto LABEL4188;
	
	LABEL4089:
	// Setting char
	flag[190] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3989;
	
	else 
		goto LABEL4189;
	
	LABEL4090:
	// Setting char
	flag[15] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4091;
	
	else 
		goto LABEL4089;
	
	LABEL4091:
	// Checking char
	flag[96] = 'F';
	goto LABEL4191;
	
	LABEL4092:
	// Checking char
	flag[99] = ':';
	goto LABEL3992;
	
	LABEL4093:
	// Setting char
	flag[184] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL3993;
	
	else if (r == 1)
		goto LABEL4193;
	
	else 
		goto LABEL4092;
	
	LABEL4094:
	// Setting char
	flag[45] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL3994;
	
	else 
		goto LABEL4093;
	
	LABEL4095:
	// Setting char
	flag[86] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4195;
	
	else 
		goto LABEL4094;
	
	LABEL4096:
	// Checking char
	flag[121] = 'u';
	goto LABEL4095;
	
	LABEL4097:
	// Setting char
	flag[22] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4197;
	
	else if (r == 1)
		goto LABEL4098;
	
	else 
		goto LABEL4096;
	
	LABEL4098:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4099:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4100:
	// Setting char
	flag[46] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4000;
	
	else 
		goto LABEL4200;
	
	LABEL4101:
	// Checking char
	flag[152] = '0';
	goto LABEL4100;
	
	LABEL4102:
	// Checking char
	flag[22] = '/';
	goto LABEL4101;
	
	LABEL4103:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4104:
	// Checking char
	flag[142] = 'B';
	goto LABEL4103;
	
	LABEL4105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4106:
	// Checking char
	flag[99] = 'z';
	goto LABEL4105;
	
	LABEL4107:
	// Checking char
	flag[71] = '}';
	goto LABEL4207;
	
	LABEL4108:
	// Setting char
	flag[39] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4008;
	
	else 
		goto LABEL4107;
	
	LABEL4109:
	// Setting char
	flag[139] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4110;
	
	else 
		goto LABEL4108;
	
	LABEL4110:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4111:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4112:
	// Setting char
	flag[64] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4113;
	
	else 
		goto LABEL4111;
	
	LABEL4113:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4114:
	// Checking char
	flag[238] = '2';
	goto LABEL4214;
	
	LABEL4115:
	// Checking char
	flag[229] = 'B';
	goto LABEL4114;
	
	LABEL4116:
	// Checking char
	flag[21] = ';';
	goto LABEL4216;
	
	LABEL4117:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4118:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4119:
	// Checking char
	flag[200] = 'N';
	goto LABEL4219;
	
	LABEL4120:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4121:
	// Checking char
	flag[66] = 'T';
	goto LABEL4122;
	
	LABEL4122:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4123:
	// Checking char
	flag[244] = '-';
	goto LABEL4223;
	
	LABEL4124:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4125:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4126:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4127:
	// Setting char
	flag[59] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4227;
	
	else if (r == 1)
		goto LABEL4128;
	
	else 
		goto LABEL4126;
	
	LABEL4128:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4129:
	// Setting char
	flag[68] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4029;
	
	else 
		goto LABEL4229;
	
	LABEL4130:
	// Checking char
	flag[157] = 'L';
	goto LABEL4129;
	
	LABEL4131:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4132:
	// Checking char
	flag[125] = '3';
	goto LABEL4131;
	
	LABEL4133:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4134:
	// Checking char
	flag[160] = 'D';
	goto LABEL4234;
	
	LABEL4135:
	// Setting char
	flag[83] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4136;
	
	else 
		goto LABEL4134;
	
	LABEL4136:
	// Checking char
	flag[144] = '{';
	goto LABEL4236;
	
	LABEL4137:
	// Checking char
	flag[225] = 'G';
	goto LABEL4138;
	
	LABEL4138:
	// Checking char
	flag[217] = 'a';
	goto LABEL4238;
	
	LABEL4139:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4140:
	// Checking char
	flag[230] = '(';
	goto LABEL4141;
	
	LABEL4141:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4142:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4143:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4144:
	// Checking char
	flag[137] = 'A';
	goto LABEL4244;
	
	LABEL4145:
	// Checking char
	flag[72] = 'o';
	goto LABEL4245;
	
	LABEL4146:
	// Checking char
	flag[9] = 'm';
	goto LABEL4145;
	
	LABEL4147:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4148:
	// Setting char
	flag[175] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4248;
	
	else 
		goto LABEL4147;
	
	LABEL4149:
	// Setting char
	flag[137] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4249;
	
	else 
		goto LABEL4148;
	
	LABEL4150:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4151:
	// Checking char
	flag[52] = '?';
	goto LABEL4251;
	
	LABEL4152:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4153:
	// Checking char
	flag[218] = 'q';
	goto LABEL4253;
	
	LABEL4154:
	// Setting char
	flag[90] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4254;
	
	else if (r == 1)
		goto LABEL4155;
	
	else 
		goto LABEL4153;
	
	LABEL4155:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4156:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4157:
	// Setting char
	flag[169] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4257;
	
	else 
		goto LABEL4156;
	
	LABEL4158:
	// Setting char
	flag[22] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4258;
	
	else 
		goto LABEL4157;
	
	LABEL4159:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4160:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4161:
	// Checking char
	flag[124] = '<';
	goto LABEL4261;
	
	LABEL4162:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4163:
	// Checking char
	flag[43] = 'E';
	goto LABEL4162;
	
	LABEL4164:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4165:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4166:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4167:
	// Checking char
	flag[200] = 'I';
	goto LABEL4267;
	
	LABEL4168:
	// Checking char
	flag[135] = 'B';
	goto LABEL4268;
	
	LABEL4169:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4170:
	// Checking char
	flag[98] = '<';
	goto LABEL4270;
	
	LABEL4171:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4172:
	// Setting char
	flag[247] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4272;
	
	else if (r == 1)
		goto LABEL4173;
	
	else 
		goto LABEL4171;
	
	LABEL4173:
	// Checking char
	flag[220] = '^';
	goto LABEL4174;
	
	LABEL4174:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4175:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4176:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4177:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4178:
	// Setting char
	flag[141] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4179;
	
	else 
		goto LABEL4177;
	
	LABEL4179:
	// Setting char
	flag[70] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4079;
	
	else 
		goto LABEL4180;
	
	LABEL4180:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4181:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4182:
	// Checking char
	flag[227] = '#';
	goto LABEL4181;
	
	LABEL4183:
	// Setting char
	flag[5] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4283;
	
	else 
		goto LABEL4182;
	
	LABEL4184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4185:
	// Checking char
	flag[248] = '"';
	goto LABEL4184;
	
	LABEL4186:
	// Checking char
	flag[39] = 'c';
	goto LABEL4286;
	
	LABEL4187:
	// Checking char
	flag[206] = 'J';
	goto LABEL4287;
	
	LABEL4188:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4189:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4190:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4191:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4192:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4193:
	// Setting char
	flag[140] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4293;
	
	else if (r == 1)
		goto LABEL4194;
	
	else 
		goto LABEL4192;
	
	LABEL4194:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4195:
	// Setting char
	flag[204] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4295;
	
	else 
		goto LABEL4196;
	
	LABEL4196:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4197:
	// Setting char
	flag[226] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4297;
	
	else 
		goto LABEL4198;
	
	LABEL4198:
	// Checking char
	flag[153] = 'O';
	goto LABEL4199;
	
	LABEL4199:
	// Checking char
	flag[20] = 'T';
	goto LABEL4299;
	
	LABEL4200:
	// Checking char
	flag[96] = '3';
	goto LABEL4300;
	
	LABEL4201:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4202:
	// Setting char
	flag[85] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4102;
	
	else 
		goto LABEL4201;
	
	LABEL4203:
	// Checking char
	flag[216] = '_';
	goto LABEL4202;
	
	LABEL4204:
	// Checking char
	flag[194] = 'W';
	goto LABEL4205;
	
	LABEL4205:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4206:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4207:
	// Checking char
	flag[117] = '|';
	goto LABEL4206;
	
	LABEL4208:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4209:
	// Setting char
	flag[117] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4109;
	
	else if (r == 1)
		goto LABEL4210;
	
	else 
		goto LABEL4208;
	
	LABEL4210:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4211:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4212:
	// Checking char
	flag[145] = 'T';
	goto LABEL4213;
	
	LABEL4213:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4214:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4215:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4216:
	// Setting char
	flag[118] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4217;
	
	else 
		goto LABEL4215;
	
	LABEL4217:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4218:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4219:
	// Setting char
	flag[55] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4319;
	
	else if (r == 1)
		goto LABEL4220;
	
	else 
		goto LABEL4218;
	
	LABEL4220:
	// Setting char
	flag[224] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4320;
	
	else 
		goto LABEL4221;
	
	LABEL4221:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4222:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4223:
	// Checking char
	flag[248] = 'o';
	goto LABEL4222;
	
	LABEL4224:
	// Checking char
	flag[45] = 'p';
	goto LABEL4124;
	
	LABEL4225:
	// Setting char
	flag[110] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4125;
	
	else 
		goto LABEL4224;
	
	LABEL4226:
	// Checking char
	flag[67] = 'r';
	goto LABEL4225;
	
	LABEL4227:
	// Setting char
	flag[215] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4327;
	
	else 
		goto LABEL4226;
	
	LABEL4228:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4229:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4230:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4231:
	// Checking char
	flag[100] = 'U';
	goto LABEL4230;
	
	LABEL4232:
	// Setting char
	flag[197] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4132;
	
	else 
		goto LABEL4233;
	
	LABEL4233:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4234:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4235:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4236:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4237:
	// Checking char
	flag[207] = 'M';
	goto LABEL4137;
	
	LABEL4238:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4239:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4240:
	// Checking char
	flag[173] = 'R';
	goto LABEL4239;
	
	LABEL4241:
	// Checking char
	flag[45] = 'j';
	goto LABEL4242;
	
	LABEL4242:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4243:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4244:
	// Checking char
	flag[100] = 'i';
	goto LABEL4243;
	
	LABEL4245:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4246:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4247:
	// Checking char
	flag[231] = 'M';
	goto LABEL4246;
	
	LABEL4248:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4249:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4250:
	// Setting char
	flag[139] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4150;
	
	else 
		goto LABEL4350;
	
	LABEL4251:
	// Checking char
	flag[233] = 'Y';
	goto LABEL4250;
	
	LABEL4252:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4253:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4254:
	// Checking char
	flag[129] = ':';
	goto LABEL4354;
	
	LABEL4255:
	// Checking char
	flag[219] = 'P';
	goto LABEL4355;
	
	LABEL4256:
	// Setting char
	flag[120] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4356;
	
	else 
		goto LABEL4255;
	
	LABEL4257:
	// Setting char
	flag[106] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4357;
	
	else 
		goto LABEL4256;
	
	LABEL4258:
	// Setting char
	flag[54] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4358;
	
	else 
		goto LABEL4259;
	
	LABEL4259:
	// Checking char
	flag[242] = ']';
	goto LABEL4260;
	
	LABEL4260:
	// Checking char
	flag[222] = 'A';
	goto LABEL4160;
	
	LABEL4261:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4262:
	// Checking char
	flag[193] = '?';
	goto LABEL4263;
	
	LABEL4263:
	// Checking char
	flag[177] = 'T';
	goto LABEL4264;
	
	LABEL4264:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4267:
	// Checking char
	flag[46] = '5';
	goto LABEL4266;
	
	LABEL4268:
	// Checking char
	flag[177] = 'e';
	goto LABEL4368;
	
	LABEL4269:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4270:
	// Setting char
	flag[16] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4271;
	
	else 
		goto LABEL4269;
	
	LABEL4271:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4272:
	// Setting char
	flag[147] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4372;
	
	else 
		goto LABEL4273;
	
	LABEL4273:
	// Checking char
	flag[195] = '"';
	goto LABEL4274;
	
	LABEL4274:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4275:
	// Checking char
	flag[121] = 'k';
	goto LABEL4175;
	
	LABEL4276:
	// Checking char
	flag[166] = '|';
	goto LABEL4176;
	
	LABEL4277:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4278:
	// Checking char
	flag[237] = 'O';
	goto LABEL4178;
	
	LABEL4279:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4280:
	// Checking char
	flag[163] = '3';
	goto LABEL4279;
	
	LABEL4281:
	// Checking char
	flag[208] = '&';
	goto LABEL4381;
	
	LABEL4282:
	// Checking char
	flag[92] = 'P';
	goto LABEL4281;
	
	LABEL4283:
	// Setting char
	flag[33] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4383;
	
	else 
		goto LABEL4282;
	
	LABEL4284:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4285:
	// Setting char
	flag[218] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4385;
	
	else 
		goto LABEL4284;
	
	LABEL4286:
	// Setting char
	flag[117] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4386;
	
	else 
		goto LABEL4285;
	
	LABEL4287:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4288:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4289:
	// Checking char
	flag[136] = '[';
	goto LABEL4288;
	
	LABEL4290:
	// Setting char
	flag[214] = '*';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4190;
	
	else if (r == 1)
		goto LABEL4390;
	
	else 
		goto LABEL4289;
	
	LABEL4291:
	// Setting char
	flag[30] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4391;
	
	else 
		goto LABEL4290;
	
	LABEL4292:
	// Setting char
	flag[249] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4392;
	
	else 
		goto LABEL4291;
	
	LABEL4293:
	// Setting char
	flag[173] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4393;
	
	else if (r == 1)
		goto LABEL4294;
	
	else 
		goto LABEL4292;
	
	LABEL4294:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4295:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4296:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4297:
	// Checking char
	flag[150] = '-';
	goto LABEL4397;
	
	LABEL4298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4299:
	// Setting char
	flag[163] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4399;
	
	else 
		goto LABEL4298;
	
	LABEL4300:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4301:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4302:
	// Checking char
	flag[98] = '[';
	goto LABEL4402;
	
	LABEL4303:
	// Setting char
	flag[27] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4203;
	
	else 
		goto LABEL4302;
	
	LABEL4304:
	// Setting char
	flag[225] = '`';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4204;
	
	else if (r == 1)
		goto LABEL4404;
	
	else 
		goto LABEL4303;
	
	LABEL4305:
	// Setting char
	flag[130] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4306;
	
	else 
		goto LABEL4304;
	
	LABEL4306:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4307:
	// Checking char
	flag[50] = '7';
	goto LABEL4407;
	
	LABEL4308:
	// Checking char
	flag[188] = 'i';
	goto LABEL4307;
	
	LABEL4309:
	// Setting char
	flag[197] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4209;
	
	else if (r == 1)
		goto LABEL4409;
	
	else 
		goto LABEL4308;
	
	LABEL4310:
	// Checking char
	flag[6] = 'X';
	goto LABEL4309;
	
	LABEL4311:
	// Setting char
	flag[222] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4211;
	
	else 
		goto LABEL4310;
	
	LABEL4312:
	// Setting char
	flag[160] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4212;
	
	else 
		goto LABEL4311;
	
	LABEL4313:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4314:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4315:
	// Checking char
	flag[186] = '6';
	goto LABEL4314;
	
	LABEL4316:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4317:
	// Checking char
	flag[101] = 'w';
	goto LABEL4316;
	
	LABEL4318:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4319:
	// Checking char
	flag[182] = 'a';
	goto LABEL4318;
	
	LABEL4320:
	// Checking char
	flag[94] = ',';
	goto LABEL4321;
	
	LABEL4321:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4322:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4323:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4324:
	// Checking char
	flag[196] = '8';
	goto LABEL4323;
	
	LABEL4325:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4326:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4327:
	// Setting char
	flag[92] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4427;
	
	else 
		goto LABEL4326;
	
	LABEL4328:
	// Setting char
	flag[171] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4228;
	
	else 
		goto LABEL4428;
	
	LABEL4329:
	// Setting char
	flag[49] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4429;
	
	else 
		goto LABEL4328;
	
	LABEL4330:
	// Checking char
	flag[28] = '(';
	goto LABEL4329;
	
	LABEL4331:
	// Setting char
	flag[35] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4231;
	
	else if (r == 1)
		goto LABEL4431;
	
	else 
		goto LABEL4330;
	
	LABEL4332:
	// Setting char
	flag[175] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4232;
	
	else 
		goto LABEL4331;
	
	LABEL4333:
	// Checking char
	flag[186] = '%';
	goto LABEL4332;
	
	LABEL4334:
	// Setting char
	flag[95] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4434;
	
	else 
		goto LABEL4333;
	
	LABEL4335:
	// Setting char
	flag[170] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4235;
	
	else 
		goto LABEL4334;
	
	LABEL4336:
	// Checking char
	flag[44] = 'g';
	goto LABEL4335;
	
	LABEL4337:
	// Setting char
	flag[14] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4237;
	
	else 
		goto LABEL4336;
	
	LABEL4338:
	// Setting char
	flag[190] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4438;
	
	else 
		goto LABEL4337;
	
	LABEL4339:
	// Checking char
	flag[40] = '1';
	goto LABEL4338;
	
	LABEL4340:
	// Setting char
	flag[16] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4240;
	
	else 
		goto LABEL4339;
	
	LABEL4341:
	// Checking char
	flag[148] = '6';
	goto LABEL4241;
	
	LABEL4342:
	// Checking char
	flag[24] = 'P';
	goto LABEL4341;
	
	LABEL4343:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4344:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4345:
	// Checking char
	flag[50] = 'x';
	goto LABEL4344;
	
	LABEL4346:
	// Checking char
	flag[232] = 'K';
	goto LABEL4446;
	
	LABEL4347:
	// Setting char
	flag[6] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4247;
	
	else if (r == 1)
		goto LABEL4348;
	
	else 
		goto LABEL4346;
	
	LABEL4348:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4349:
	// Checking char
	flag[242] = 'S';
	goto LABEL4449;
	
	LABEL4350:
	// Checking char
	flag[107] = 'K';
	goto LABEL4349;
	
	LABEL4351:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4352:
	// Setting char
	flag[111] = 'W';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4252;
	
	else if (r == 1)
		goto LABEL4452;
	
	else 
		goto LABEL4351;
	
	LABEL4353:
	// Setting char
	flag[155] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4453;
	
	else 
		goto LABEL4352;
	
	LABEL4354:
	// Checking char
	flag[85] = 'F';
	goto LABEL4353;
	
	LABEL4355:
	// Checking char
	flag[19] = 'I';
	goto LABEL4455;
	
	LABEL4356:
	// Checking char
	flag[141] = 'g';
	goto LABEL4456;
	
	LABEL4357:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4358:
	// Setting char
	flag[103] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4458;
	
	else 
		goto LABEL4359;
	
	LABEL4359:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4360:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4361:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4362:
	// Setting char
	flag[157] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4262;
	
	else if (r == 1)
		goto LABEL4363;
	
	else 
		goto LABEL4361;
	
	LABEL4363:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4364:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4365:
	// Setting char
	flag[149] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4265;
	
	else if (r == 1)
		goto LABEL4465;
	
	else 
		goto LABEL4364;
	
	LABEL4366:
	// Setting char
	flag[114] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4466;
	
	else 
		goto LABEL4365;
	
	LABEL4367:
	// Setting char
	flag[188] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4467;
	
	else 
		goto LABEL4366;
	
	LABEL4368:
	// Setting char
	flag[73] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4369;
	
	else 
		goto LABEL4367;
	
	LABEL4369:
	// Setting char
	flag[20] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4469;
	
	else 
		goto LABEL4370;
	
	LABEL4370:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4371:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4372:
	// Setting char
	flag[85] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4472;
	
	else 
		goto LABEL4371;
	
	LABEL4373:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4374:
	// Checking char
	flag[199] = 'l';
	goto LABEL4373;
	
	LABEL4375:
	// Setting char
	flag[87] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4275;
	
	else if (r == 1)
		goto LABEL4475;
	
	else 
		goto LABEL4374;
	
	LABEL4376:
	// Setting char
	flag[236] = 'K';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4276;
	
	else if (r == 1)
		goto LABEL4476;
	
	else 
		goto LABEL4375;
	
	LABEL4377:
	// Setting char
	flag[173] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4277;
	
	else if (r == 1)
		goto LABEL4477;
	
	else 
		goto LABEL4376;
	
	LABEL4378:
	// Setting char
	flag[38] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4278;
	
	else 
		goto LABEL4377;
	
	LABEL4379:
	// Checking char
	flag[69] = '^';
	goto LABEL4378;
	
	LABEL4380:
	// Setting char
	flag[30] = '2';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4280;
	
	else if (r == 1)
		goto LABEL4480;
	
	else 
		goto LABEL4379;
	
	LABEL4381:
	// Setting char
	flag[87] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4481;
	
	else if (r == 1)
		goto LABEL4382;
	
	else 
		goto LABEL4380;
	
	LABEL4382:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4383:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4384:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4385:
	// Checking char
	flag[10] = '3';
	goto LABEL4384;
	
	LABEL4386:
	// Setting char
	flag[248] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4486;
	
	else 
		goto LABEL4387;
	
	LABEL4387:
	// Checking char
	flag[125] = '5';
	goto LABEL4388;
	
	LABEL4388:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4389:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4390:
	// Setting char
	flag[170] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4490;
	
	else 
		goto LABEL4389;
	
	LABEL4391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4392:
	// Checking char
	flag[163] = '}';
	goto LABEL4492;
	
	LABEL4393:
	// Checking char
	flag[206] = '_';
	goto LABEL4394;
	
	LABEL4394:
	// Checking char
	flag[129] = 'a';
	goto LABEL4395;
	
	LABEL4395:
	// Checking char
	flag[165] = 'a';
	goto LABEL4495;
	
	LABEL4396:
	// Checking char
	flag[116] = ';';
	goto LABEL4296;
	
	LABEL4397:
	// Setting char
	flag[97] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4497;
	
	else 
		goto LABEL4396;
	
	LABEL4398:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4399:
	// Setting char
	flag[222] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4499;
	
	else 
		goto LABEL4398;
	
	LABEL4400:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4401:
	// Setting char
	flag[209] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4301;
	
	else 
		goto LABEL4400;
	
	LABEL4402:
	// Setting char
	flag[206] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4403;
	
	else 
		goto LABEL4401;
	
	LABEL4403:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4404:
	// Checking char
	flag[31] = 'D';
	goto LABEL4504;
	
	LABEL4405:
	// Checking char
	flag[51] = '2';
	goto LABEL4305;
	
	LABEL4406:
	// Checking char
	flag[193] = 'p';
	goto LABEL4405;
	
	LABEL4407:
	// Checking char
	flag[168] = 'X';
	goto LABEL4406;
	
	LABEL4408:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4409:
	// Checking char
	flag[63] = 'w';
	goto LABEL4408;
	
	LABEL4410:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4411:
	// Checking char
	flag[58] = 'X';
	goto LABEL4410;
	
	LABEL4412:
	// Setting char
	flag[211] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4312;
	
	else 
		goto LABEL4411;
	
	LABEL4413:
	// Setting char
	flag[29] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4313;
	
	else if (r == 1)
		goto LABEL4414;
	
	else 
		goto LABEL4412;
	
	LABEL4414:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4415:
	// Checking char
	flag[74] = 'e';
	goto LABEL4315;
	
	LABEL4416:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4417:
	// Setting char
	flag[5] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4317;
	
	else 
		goto LABEL4416;
	
	LABEL4418:
	// Checking char
	flag[77] = 'm';
	goto LABEL4417;
	
	LABEL4419:
	// Checking char
	flag[122] = '/';
	goto LABEL4420;
	
	LABEL4420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4421:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4422:
	// Setting char
	flag[143] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4322;
	
	else if (r == 1)
		goto LABEL4522;
	
	else 
		goto LABEL4421;
	
	LABEL4423:
	// Checking char
	flag[192] = '4';
	goto LABEL4422;
	
	LABEL4424:
	// Setting char
	flag[144] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4324;
	
	else 
		goto LABEL4423;
	
	LABEL4425:
	// Setting char
	flag[36] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4325;
	
	else 
		goto LABEL4424;
	
	LABEL4426:
	// Setting char
	flag[147] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4526;
	
	else 
		goto LABEL4425;
	
	LABEL4427:
	// Checking char
	flag[221] = '~';
	goto LABEL4426;
	
	LABEL4428:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4429:
	// Checking char
	flag[218] = '%';
	goto LABEL4529;
	
	LABEL4430:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4431:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4432:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4433:
	// Setting char
	flag[246] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4533;
	
	else 
		goto LABEL4432;
	
	LABEL4434:
	// Checking char
	flag[134] = '8';
	goto LABEL4433;
	
	LABEL4435:
	// Checking char
	flag[235] = 'l';
	goto LABEL4535;
	
	LABEL4436:
	// Checking char
	flag[89] = '(';
	goto LABEL4435;
	
	LABEL4437:
	// Checking char
	flag[37] = '-';
	goto LABEL4436;
	
	LABEL4438:
	// Setting char
	flag[193] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4538;
	
	else 
		goto LABEL4437;
	
	LABEL4439:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4440:
	// Setting char
	flag[114] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4340;
	
	else 
		goto LABEL4439;
	
	LABEL4441:
	// Checking char
	flag[230] = 'e';
	goto LABEL4440;
	
	LABEL4442:
	// Setting char
	flag[245] = 'K';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4342;
	
	else if (r == 1)
		goto LABEL4542;
	
	else 
		goto LABEL4441;
	
	LABEL4443:
	// Setting char
	flag[249] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4343;
	
	else 
		goto LABEL4442;
	
	LABEL4444:
	// Checking char
	flag[217] = 'W';
	goto LABEL4443;
	
	LABEL4445:
	// Checking char
	flag[194] = 'x';
	goto LABEL4345;
	
	LABEL4446:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4447:
	// Checking char
	flag[184] = 'E';
	goto LABEL4347;
	
	LABEL4448:
	// Setting char
	flag[105] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4548;
	
	else 
		goto LABEL4447;
	
	LABEL4449:
	// Setting char
	flag[171] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4549;
	
	else 
		goto LABEL4448;
	
	LABEL4450:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4451:
	// Checking char
	flag[143] = '-';
	goto LABEL4450;
	
	LABEL4452:
	// Checking char
	flag[245] = 'Q';
	goto LABEL4552;
	
	LABEL4453:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4454:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4455:
	// Setting char
	flag[132] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4555;
	
	else 
		goto LABEL4454;
	
	LABEL4456:
	// Checking char
	flag[99] = 'M';
	goto LABEL4556;
	
	LABEL4457:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4458:
	// Setting char
	flag[137] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4558;
	
	else if (r == 1)
		goto LABEL4459;
	
	else 
		goto LABEL4457;
	
	LABEL4459:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4460:
	// Checking char
	flag[95] = '(';
	goto LABEL4360;
	
	LABEL4461:
	// Setting char
	flag[111] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4561;
	
	else 
		goto LABEL4460;
	
	LABEL4462:
	// Setting char
	flag[23] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4362;
	
	else 
		goto LABEL4461;
	
	LABEL4463:
	// Checking char
	flag[27] = 'w';
	goto LABEL4462;
	
	LABEL4464:
	// Setting char
	flag[213] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4564;
	
	else 
		goto LABEL4463;
	
	LABEL4465:
	// Setting char
	flag[89] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4565;
	
	else 
		goto LABEL4464;
	
	LABEL4466:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4467:
	// Checking char
	flag[94] = 'm';
	goto LABEL4567;
	
	LABEL4468:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4469:
	// Setting char
	flag[25] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4569;
	
	else if (r == 1)
		goto LABEL4470;
	
	else 
		goto LABEL4468;
	
	LABEL4470:
	// Checking char
	flag[15] = 'A';
	goto LABEL4570;
	
	LABEL4471:
	// Checking char
	flag[115] = '6';
	goto LABEL4571;
	
	LABEL4472:
	// Setting char
	flag[202] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4572;
	
	else 
		goto LABEL4471;
	
	LABEL4473:
	// Checking char
	flag[26] = '~';
	goto LABEL4573;
	
	LABEL4474:
	// Checking char
	flag[27] = '~';
	goto LABEL4473;
	
	LABEL4475:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4476:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4477:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4478:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4479:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4480:
	// Checking char
	flag[184] = 'B';
	goto LABEL4479;
	
	LABEL4481:
	// Checking char
	flag[168] = '}';
	goto LABEL4581;
	
	LABEL4482:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4483:
	// Checking char
	flag[182] = 'b';
	goto LABEL4482;
	
	LABEL4484:
	// Checking char
	flag[189] = '2';
	goto LABEL4485;
	
	LABEL4485:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4486:
	// Checking char
	flag[223] = '&';
	goto LABEL4586;
	
	LABEL4487:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4488:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4489:
	// Checking char
	flag[248] = 'V';
	goto LABEL4589;
	
	LABEL4490:
	// Checking char
	flag[21] = 't';
	goto LABEL4489;
	
	LABEL4491:
	// Checking char
	flag[19] = 'x';
	goto LABEL4591;
	
	LABEL4492:
	// Setting char
	flag[196] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4493;
	
	else 
		goto LABEL4491;
	
	LABEL4493:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4494:
	// Checking char
	flag[83] = 'd';
	goto LABEL4594;
	
	LABEL4495:
	// Setting char
	flag[95] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4496;
	
	else 
		goto LABEL4494;
	
	LABEL4496:
	// Checking char
	flag[155] = 'N';
	goto LABEL4596;
	
	LABEL4497:
	// Checking char
	flag[24] = '~';
	goto LABEL4597;
	
	LABEL4498:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4499:
	// Setting char
	flag[112] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4599;
	
	else 
		goto LABEL4498;
	
	LABEL4500:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4501:
	// Setting char
	flag[192] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4601;
	
	else 
		goto LABEL4500;
	
	LABEL4502:
	// Setting char
	flag[153] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4602;
	
	else 
		goto LABEL4501;
	
	LABEL4503:
	// Checking char
	flag[94] = 'R';
	goto LABEL4502;
	
	LABEL4504:
	// Checking char
	flag[32] = 'v';
	goto LABEL4503;
	
	LABEL4505:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4506:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4507:
	// Checking char
	flag[42] = '&';
	goto LABEL4506;
	
	LABEL4508:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4509:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4510:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4511:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4512:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4513:
	// Setting char
	flag[89] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4413;
	
	else 
		goto LABEL4512;
	
	LABEL4514:
	// Checking char
	flag[148] = 'a';
	goto LABEL4513;
	
	LABEL4515:
	// Setting char
	flag[104] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4415;
	
	else 
		goto LABEL4514;
	
	LABEL4516:
	// Checking char
	flag[220] = 'j';
	goto LABEL4515;
	
	LABEL4517:
	// Checking char
	flag[130] = '8';
	goto LABEL4516;
	
	LABEL4518:
	// Checking char
	flag[165] = '7';
	goto LABEL4418;
	
	LABEL4519:
	// Setting char
	flag[58] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4419;
	
	else 
		goto LABEL4518;
	
	LABEL4520:
	// Checking char
	flag[53] = '1';
	goto LABEL4519;
	
	LABEL4521:
	// Checking char
	flag[133] = '2';
	goto LABEL4520;
	
	LABEL4522:
	// Setting char
	flag[7] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4622;
	
	else if (r == 1)
		goto LABEL4523;
	
	else 
		goto LABEL4521;
	
	LABEL4523:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4524:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4525:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4526:
	// Checking char
	flag[36] = '0';
	goto LABEL4525;
	
	LABEL4527:
	// Checking char
	flag[83] = 'm';
	goto LABEL4627;
	
	LABEL4528:
	// Setting char
	flag[217] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4628;
	
	else 
		goto LABEL4527;
	
	LABEL4529:
	// Setting char
	flag[148] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4530;
	
	else 
		goto LABEL4528;
	
	LABEL4530:
	// Setting char
	flag[225] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4430;
	
	else if (r == 1)
		goto LABEL4630;
	
	else 
		goto LABEL4531;
	
	LABEL4531:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4532:
	// Checking char
	flag[70] = '@';
	goto LABEL4632;
	
	LABEL4533:
	// Checking char
	flag[238] = 'z';
	goto LABEL4532;
	
	LABEL4534:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4535:
	// Checking char
	flag[168] = 'L';
	goto LABEL4534;
	
	LABEL4536:
	// Checking char
	flag[117] = 'y';
	goto LABEL4636;
	
	LABEL4537:
	// Checking char
	flag[14] = '_';
	goto LABEL4536;
	
	LABEL4538:
	// Checking char
	flag[229] = '&';
	goto LABEL4539;
	
	LABEL4539:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4540:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4541:
	// Setting char
	flag[97] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4641;
	
	else 
		goto LABEL4540;
	
	LABEL4542:
	// Checking char
	flag[24] = '$';
	goto LABEL4541;
	
	LABEL4543:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4544:
	// Setting char
	flag[143] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4444;
	
	else 
		goto LABEL4543;
	
	LABEL4545:
	// Setting char
	flag[58] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4445;
	
	else 
		goto LABEL4544;
	
	LABEL4546:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4547:
	// Setting char
	flag[54] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4647;
	
	else 
		goto LABEL4546;
	
	LABEL4548:
	// Checking char
	flag[1] = 'n';
	goto LABEL4547;
	
	LABEL4549:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4550:
	// Checking char
	flag[112] = '[';
	goto LABEL4650;
	
	LABEL4551:
	// Setting char
	flag[139] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4451;
	
	else 
		goto LABEL4550;
	
	LABEL4552:
	// Setting char
	flag[37] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4652;
	
	else 
		goto LABEL4551;
	
	LABEL4553:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4554:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4555:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4556:
	// Checking char
	flag[6] = 'C';
	goto LABEL4557;
	
	LABEL4557:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4558:
	// Setting char
	flag[67] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4658;
	
	else 
		goto LABEL4559;
	
	LABEL4559:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4560:
	// Checking char
	flag[29] = '~';
	goto LABEL4660;
	
	LABEL4561:
	// Checking char
	flag[126] = ':';
	goto LABEL4560;
	
	LABEL4562:
	// Checking char
	flag[43] = 'S';
	goto LABEL4563;
	
	LABEL4563:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4564:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4565:
	// Setting char
	flag[172] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4665;
	
	else 
		goto LABEL4566;
	
	LABEL4566:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4567:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4568:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4569:
	// Checking char
	flag[64] = '}';
	goto LABEL4568;
	
	LABEL4570:
	// Checking char
	flag[1] = '(';
	goto LABEL4670;
	
	LABEL4571:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4572:
	// Checking char
	flag[244] = '4';
	goto LABEL4672;
	
	LABEL4573:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4574:
	// Checking char
	flag[116] = 'G';
	goto LABEL4474;
	
	LABEL4575:
	// Checking char
	flag[77] = '<';
	goto LABEL4574;
	
	LABEL4576:
	// Setting char
	flag[51] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4676;
	
	else 
		goto LABEL4575;
	
	LABEL4577:
	// Checking char
	flag[152] = '2';
	goto LABEL4576;
	
	LABEL4578:
	// Setting char
	flag[195] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4478;
	
	else 
		goto LABEL4678;
	
	LABEL4579:
	// Checking char
	flag[28] = '}';
	goto LABEL4578;
	
	LABEL4580:
	// Checking char
	flag[243] = 'K';
	goto LABEL4680;
	
	LABEL4581:
	// Setting char
	flag[92] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4681;
	
	else if (r == 1)
		goto LABEL4582;
	
	else 
		goto LABEL4580;
	
	LABEL4582:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4583:
	// Checking char
	flag[162] = ':';
	goto LABEL4483;
	
	LABEL4584:
	// Setting char
	flag[225] = '4';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4484;
	
	else if (r == 1)
		goto LABEL4684;
	
	else 
		goto LABEL4583;
	
	LABEL4585:
	// Setting char
	flag[153] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4685;
	
	else 
		goto LABEL4584;
	
	LABEL4586:
	// Setting char
	flag[110] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4686;
	
	else if (r == 1)
		goto LABEL4587;
	
	else 
		goto LABEL4585;
	
	LABEL4587:
	// Setting char
	flag[83] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4487;
	
	else 
		goto LABEL4687;
	
	LABEL4588:
	// Checking char
	flag[65] = '@';
	goto LABEL4488;
	
	LABEL4589:
	// Checking char
	flag[218] = 'J';
	goto LABEL4588;
	
	LABEL4590:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4591:
	// Checking char
	flag[219] = 'y';
	goto LABEL4691;
	
	LABEL4592:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4593:
	// Checking char
	flag[51] = 'l';
	goto LABEL4693;
	
	LABEL4594:
	// Setting char
	flag[47] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4595;
	
	else 
		goto LABEL4593;
	
	LABEL4595:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4596:
	// Checking char
	flag[34] = 'X';
	goto LABEL4696;
	
	LABEL4597:
	// Checking char
	flag[3] = 'I';
	goto LABEL4697;
	
	LABEL4598:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4599:
	// Setting char
	flag[74] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4699;
	
	else 
		goto LABEL4598;
	
	LABEL4600:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4601:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4602:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4603:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4604:
	// Setting char
	flag[58] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4704;
	
	else 
		goto LABEL4603;
	
	LABEL4605:
	// Setting char
	flag[240] = '{';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4505;
	
	else if (r == 1)
		goto LABEL4705;
	
	else 
		goto LABEL4604;
	
	LABEL4606:
	// Checking char
	flag[164] = '3';
	goto LABEL4605;
	
	LABEL4607:
	// Setting char
	flag[22] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4507;
	
	else 
		goto LABEL4606;
	
	LABEL4608:
	// Setting char
	flag[211] = '1';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4508;
	
	else if (r == 1)
		goto LABEL4609;
	
	else 
		goto LABEL4607;
	
	LABEL4609:
	// Setting char
	flag[61] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4509;
	
	else 
		goto LABEL4610;
	
	LABEL4610:
	// Checking char
	flag[236] = 'N';
	goto LABEL4510;
	
	LABEL4611:
	// Checking char
	flag[42] = 'l';
	goto LABEL4511;
	
	LABEL4612:
	// Setting char
	flag[87] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4613;
	
	else 
		goto LABEL4611;
	
	LABEL4613:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4614:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4615:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4616:
	// Setting char
	flag[67] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4716;
	
	else 
		goto LABEL4615;
	
	LABEL4617:
	// Setting char
	flag[218] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4517;
	
	else 
		goto LABEL4616;
	
	LABEL4618:
	// Checking char
	flag[86] = '?';
	goto LABEL4617;
	
	LABEL4619:
	// Setting char
	flag[1] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4719;
	
	else 
		goto LABEL4618;
	
	LABEL4620:
	// Checking char
	flag[226] = '"';
	goto LABEL4619;
	
	LABEL4621:
	// Setting char
	flag[233] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4721;
	
	else 
		goto LABEL4620;
	
	LABEL4622:
	// Setting char
	flag[200] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4722;
	
	else 
		goto LABEL4621;
	
	LABEL4623:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4624:
	// Setting char
	flag[146] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4524;
	
	else if (r == 1)
		goto LABEL4724;
	
	else 
		goto LABEL4623;
	
	LABEL4625:
	// Checking char
	flag[134] = '_';
	goto LABEL4624;
	
	LABEL4626:
	// Checking char
	flag[131] = '<';
	goto LABEL4625;
	
	LABEL4627:
	// Setting char
	flag[21] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4727;
	
	else 
		goto LABEL4626;
	
	LABEL4628:
	// Checking char
	flag[190] = 'A';
	goto LABEL4728;
	
	LABEL4629:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4630:
	// Checking char
	flag[161] = '-';
	goto LABEL4629;
	
	LABEL4631:
	// Checking char
	flag[196] = 'O';
	goto LABEL4731;
	
	LABEL4632:
	// Checking char
	flag[242] = 'i';
	goto LABEL4631;
	
	LABEL4633:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4634:
	// Checking char
	flag[107] = '6';
	goto LABEL4633;
	
	LABEL4635:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4636:
	// Checking char
	flag[80] = 'm';
	goto LABEL4736;
	
	LABEL4637:
	// Setting char
	flag[249] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4537;
	
	else 
		goto LABEL4737;
	
	LABEL4638:
	// Setting char
	flag[87] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4738;
	
	else 
		goto LABEL4637;
	
	LABEL4639:
	// Checking char
	flag[132] = 's';
	goto LABEL4638;
	
	LABEL4640:
	// Setting char
	flag[74] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4740;
	
	else 
		goto LABEL4639;
	
	LABEL4641:
	// Checking char
	flag[109] = 'D';
	goto LABEL4640;
	
	LABEL4642:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4643:
	// Checking char
	flag[150] = 'b';
	goto LABEL4644;
	
	LABEL4644:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4645:
	// Setting char
	flag[241] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4545;
	
	else 
		goto LABEL4745;
	
	LABEL4646:
	// Setting char
	flag[148] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4746;
	
	else 
		goto LABEL4645;
	
	LABEL4647:
	// Setting char
	flag[84] = '}';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4747;
	
	else if (r == 1)
		goto LABEL4648;
	
	else 
		goto LABEL4646;
	
	LABEL4648:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4649:
	// Checking char
	flag[23] = 'u';
	goto LABEL4749;
	
	LABEL4650:
	// Setting char
	flag[91] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4651;
	
	else 
		goto LABEL4649;
	
	LABEL4651:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4652:
	// Checking char
	flag[224] = 'D';
	goto LABEL4752;
	
	LABEL4653:
	// Checking char
	flag[208] = '/';
	goto LABEL4553;
	
	LABEL4654:
	// Setting char
	flag[137] = 'H';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4554;
	
	else if (r == 1)
		goto LABEL4754;
	
	else 
		goto LABEL4653;
	
	LABEL4655:
	// Checking char
	flag[49] = '=';
	goto LABEL4654;
	
	LABEL4656:
	// Checking char
	flag[188] = 's';
	goto LABEL4756;
	
	LABEL4657:
	// Checking char
	flag[58] = '+';
	goto LABEL4656;
	
	LABEL4658:
	// Setting char
	flag[243] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4758;
	
	else 
		goto LABEL4657;
	
	LABEL4659:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4660:
	// Checking char
	flag[182] = 'i';
	goto LABEL4659;
	
	LABEL4661:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4662:
	// Setting char
	flag[113] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4562;
	
	else if (r == 1)
		goto LABEL4762;
	
	else 
		goto LABEL4661;
	
	LABEL4663:
	// Setting char
	flag[166] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4763;
	
	else 
		goto LABEL4662;
	
	LABEL4664:
	// Checking char
	flag[45] = 'q';
	goto LABEL4663;
	
	LABEL4665:
	// Setting char
	flag[81] = '"';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4765;
	
	else if (r == 1)
		goto LABEL4666;
	
	else 
		goto LABEL4664;
	
	LABEL4666:
	// Checking char
	flag[205] = '"';
	goto LABEL4667;
	
	LABEL4667:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4668:
	// Checking char
	flag[131] = 'k';
	goto LABEL4768;
	
	LABEL4669:
	// Setting char
	flag[0] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4769;
	
	else 
		goto LABEL4668;
	
	LABEL4670:
	// Setting char
	flag[153] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4770;
	
	else if (r == 1)
		goto LABEL4671;
	
	else 
		goto LABEL4669;
	
	LABEL4671:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4672:
	// Checking char
	flag[236] = '*';
	goto LABEL4673;
	
	LABEL4673:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4674:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4675:
	// Checking char
	flag[189] = 'g';
	goto LABEL4674;
	
	LABEL4676:
	// Checking char
	flag[0] = 'I';
	goto LABEL4675;
	
	LABEL4677:
	// Checking char
	flag[48] = 'y';
	goto LABEL4577;
	
	LABEL4678:
	// Checking char
	flag[93] = 'W';
	goto LABEL4778;
	
	LABEL4679:
	// Checking char
	flag[156] = '|';
	goto LABEL4579;
	
	LABEL4680:
	// Setting char
	flag[129] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4780;
	
	else 
		goto LABEL4679;
	
	LABEL4681:
	// Setting char
	flag[221] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4781;
	
	else 
		goto LABEL4682;
	
	LABEL4682:
	// Checking char
	flag[29] = 'f';
	goto LABEL4683;
	
	LABEL4683:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4684:
	// Checking char
	flag[190] = '!';
	goto LABEL4784;
	
	LABEL4685:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4686:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4687:
	// Checking char
	flag[172] = ',';
	goto LABEL4787;
	
	LABEL4688:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4689:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4690:
	// Setting char
	flag[58] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4590;
	
	else if (r == 1)
		goto LABEL4790;
	
	else 
		goto LABEL4689;
	
	LABEL4691:
	// Checking char
	flag[64] = '[';
	goto LABEL4690;
	
	LABEL4692:
	// Checking char
	flag[62] = 'o';
	goto LABEL4592;
	
	LABEL4693:
	// Setting char
	flag[33] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4793;
	
	else if (r == 1)
		goto LABEL4694;
	
	else 
		goto LABEL4692;
	
	LABEL4694:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4695:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4696:
	// Setting char
	flag[45] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4796;
	
	else 
		goto LABEL4695;
	
	LABEL4697:
	// Checking char
	flag[167] = 'z';
	goto LABEL4698;
	
	LABEL4698:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4699:
	// Checking char
	flag[35] = 'd';
	goto LABEL4799;
	
	LABEL4700:
	// Setting char
	flag[199] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4600;
	
	else 
		goto LABEL4800;
	
	LABEL4701:
	// Checking char
	flag[23] = 'B';
	goto LABEL4700;
	
	LABEL4702:
	// Checking char
	flag[98] = 'd';
	goto LABEL4701;
	
	LABEL4703:
	// Setting char
	flag[171] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4803;
	
	else 
		goto LABEL4702;
	
	LABEL4704:
	// Setting char
	flag[45] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4804;
	
	else 
		goto LABEL4703;
	
	LABEL4705:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4706:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4707:
	// Checking char
	flag[15] = '7';
	goto LABEL4708;
	
	LABEL4708:
	// Setting char
	flag[198] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4608;
	
	else 
		goto LABEL4709;
	
	LABEL4709:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4710:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4711:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4712:
	// Setting char
	flag[78] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4612;
	
	else 
		goto LABEL4711;
	
	LABEL4713:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4714:
	// Setting char
	flag[66] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4614;
	
	else 
		goto LABEL4713;
	
	LABEL4715:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4716:
	// Setting char
	flag[34] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4816;
	
	else 
		goto LABEL4715;
	
	LABEL4717:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4718:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4719:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4720:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4721:
	// Setting char
	flag[30] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4821;
	
	else 
		goto LABEL4720;
	
	LABEL4722:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4723:
	// Checking char
	flag[103] = ',';
	goto LABEL4823;
	
	LABEL4724:
	// Setting char
	flag[206] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4824;
	
	else 
		goto LABEL4723;
	
	LABEL4725:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4726:
	// Checking char
	flag[181] = 'P';
	goto LABEL4725;
	
	LABEL4727:
	// Checking char
	flag[174] = '{';
	goto LABEL4827;
	
	LABEL4728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4729:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4730:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4731:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4732:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4733:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4734:
	// Checking char
	flag[185] = 'l';
	goto LABEL4634;
	
	LABEL4735:
	// Checking char
	flag[33] = 'n';
	goto LABEL4635;
	
	LABEL4736:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4737:
	// Checking char
	flag[130] = '7';
	goto LABEL4837;
	
	LABEL4738:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4739:
	// Checking char
	flag[124] = 'z';
	goto LABEL4839;
	
	LABEL4740:
	// Setting char
	flag[190] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4840;
	
	else 
		goto LABEL4739;
	
	LABEL4741:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4742:
	// Setting char
	flag[75] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4642;
	
	else if (r == 1)
		goto LABEL4842;
	
	else 
		goto LABEL4741;
	
	LABEL4743:
	// Setting char
	flag[53] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4643;
	
	else 
		goto LABEL4742;
	
	LABEL4744:
	// Checking char
	flag[85] = '4';
	goto LABEL4743;
	
	LABEL4745:
	// Setting char
	flag[139] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4845;
	
	else 
		goto LABEL4744;
	
	LABEL4746:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4747:
	// Setting char
	flag[203] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4847;
	
	else 
		goto LABEL4748;
	
	LABEL4748:
	// Checking char
	flag[10] = 'v';
	goto LABEL4848;
	
	LABEL4749:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4750:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4751:
	// Checking char
	flag[167] = 'Z';
	goto LABEL4750;
	
	LABEL4752:
	// Checking char
	flag[201] = 'D';
	goto LABEL4751;
	
	LABEL4753:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4754:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4755:
	// Setting char
	flag[197] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4655;
	
	else 
		goto LABEL4855;
	
	LABEL4756:
	// Setting char
	flag[237] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4856;
	
	else 
		goto LABEL4755;
	
	LABEL4757:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4758:
	// Setting char
	flag[16] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4858;
	
	else if (r == 1)
		goto LABEL4759;
	
	else 
		goto LABEL4757;
	
	LABEL4759:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4760:
	// Checking char
	flag[231] = '7';
	goto LABEL4761;
	
	LABEL4761:
	// Checking char
	flag[55] = 'Q';
	goto LABEL4861;
	
	LABEL4762:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4763:
	// Checking char
	flag[19] = 'T';
	goto LABEL4863;
	
	LABEL4764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4765:
	// Setting char
	flag[3] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4865;
	
	else if (r == 1)
		goto LABEL4766;
	
	else 
		goto LABEL4764;
	
	LABEL4766:
	// Checking char
	flag[140] = 'd';
	goto LABEL4767;
	
	LABEL4767:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4768:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4769:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4770:
	// Checking char
	flag[79] = '"';
	goto LABEL4870;
	
	LABEL4771:
	// Checking char
	flag[22] = '>';
	goto LABEL4871;
	
	LABEL4772:
	// Setting char
	flag[56] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4872;
	
	else 
		goto LABEL4771;
	
	LABEL4773:
	// Setting char
	flag[176] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4873;
	
	else 
		goto LABEL4772;
	
	LABEL4774:
	// Setting char
	flag[239] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4775;
	
	else 
		goto LABEL4773;
	
	LABEL4775:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4776:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4777:
	// Setting char
	flag[244] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4677;
	
	else 
		goto LABEL4877;
	
	LABEL4778:
	// Setting char
	flag[149] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4779;
	
	else 
		goto LABEL4777;
	
	LABEL4779:
	// Checking char
	flag[35] = 'v';
	goto LABEL4879;
	
	LABEL4780:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4781:
	// Checking char
	flag[48] = '5';
	goto LABEL4881;
	
	LABEL4782:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4783:
	// Checking char
	flag[121] = 'm';
	goto LABEL4883;
	
	LABEL4784:
	// Setting char
	flag[246] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4785;
	
	else 
		goto LABEL4783;
	
	LABEL4785:
	// Checking char
	flag[1] = '(';
	goto LABEL4885;
	
	LABEL4786:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4787:
	// Setting char
	flag[29] = 'x';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4887;
	
	else if (r == 1)
		goto LABEL4788;
	
	else 
		goto LABEL4786;
	
	LABEL4788:
	// Setting char
	flag[90] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4688;
	
	else 
		goto LABEL4789;
	
	LABEL4789:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4790:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4791:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4792:
	// Checking char
	flag[174] = '(';
	goto LABEL4791;
	
	LABEL4793:
	// Setting char
	flag[46] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4893;
	
	else if (r == 1)
		goto LABEL4794;
	
	else 
		goto LABEL4792;
	
	LABEL4794:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4795:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4796:
	// Checking char
	flag[135] = ';';
	goto LABEL4896;
	
	LABEL4797:
	// Checking char
	flag[206] = '`';
	goto LABEL4897;
	
	LABEL4798:
	// Setting char
	flag[180] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4898;
	
	else 
		goto LABEL4797;
	
	LABEL4799:
	// Setting char
	flag[196] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4899;
	
	else 
		goto LABEL4798;
	
	LABEL4800:
	// Setting char
	flag[147] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4900;
	
	else 
		goto LABEL4801;
	
	LABEL4801:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4802:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4803:
	// Setting char
	flag[139] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4903;
	
	else 
		goto LABEL4802;
	
	LABEL4804:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4806:
	// Setting char
	flag[202] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4706;
	
	else 
		goto LABEL4805;
	
	LABEL4807:
	// Setting char
	flag[106] = ')';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4707;
	
	else if (r == 1)
		goto LABEL4808;
	
	else 
		goto LABEL4806;
	
	LABEL4808:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4810:
	// Checking char
	flag[143] = 'e';
	goto LABEL4710;
	
	LABEL4811:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4812:
	// Setting char
	flag[32] = 'P';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4712;
	
	else if (r == 1)
		goto LABEL4813;
	
	else 
		goto LABEL4811;
	
	LABEL4813:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4814:
	// Checking char
	flag[92] = '?';
	goto LABEL4714;
	
	LABEL4815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4816:
	// Setting char
	flag[82] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4916;
	
	else 
		goto LABEL4817;
	
	LABEL4817:
	// Setting char
	flag[204] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4717;
	
	else 
		goto LABEL4818;
	
	LABEL4818:
	// Checking char
	flag[239] = 'J';
	goto LABEL4718;
	
	LABEL4819:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4820:
	// Setting char
	flag[41] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4920;
	
	else 
		goto LABEL4819;
	
	LABEL4821:
	// Checking char
	flag[185] = 'P';
	goto LABEL4820;
	
	LABEL4822:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4823:
	// Checking char
	flag[57] = 'm';
	goto LABEL4822;
	
	LABEL4824:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4825:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4826:
	// Setting char
	flag[215] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4726;
	
	else 
		goto LABEL4825;
	
	LABEL4827:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4828:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4829:
	// Setting char
	flag[244] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4729;
	
	else 
		goto LABEL4828;
	
	LABEL4830:
	// Setting char
	flag[137] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4730;
	
	else 
		goto LABEL4829;
	
	LABEL4831:
	// Setting char
	flag[68] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4931;
	
	else 
		goto LABEL4830;
	
	LABEL4832:
	// Setting char
	flag[222] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4732;
	
	else 
		goto LABEL4831;
	
	LABEL4833:
	// Setting char
	flag[151] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4733;
	
	else 
		goto LABEL4832;
	
	LABEL4834:
	// Setting char
	flag[27] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4734;
	
	else if (r == 1)
		goto LABEL4934;
	
	else 
		goto LABEL4833;
	
	LABEL4835:
	// Setting char
	flag[14] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4735;
	
	else 
		goto LABEL4834;
	
	LABEL4836:
	// Setting char
	flag[170] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4936;
	
	else 
		goto LABEL4835;
	
	LABEL4837:
	// Setting char
	flag[232] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4838;
	
	else 
		goto LABEL4836;
	
	LABEL4838:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4839:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4840:
	// Checking char
	flag[217] = '/';
	goto LABEL4940;
	
	LABEL4841:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4842:
	// Setting char
	flag[63] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4942;
	
	else 
		goto LABEL4841;
	
	LABEL4843:
	// Checking char
	flag[215] = 'o';
	goto LABEL4943;
	
	LABEL4844:
	// Checking char
	flag[222] = 't';
	goto LABEL4843;
	
	LABEL4845:
	// Setting char
	flag[35] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4945;
	
	else if (r == 1)
		goto LABEL4846;
	
	else 
		goto LABEL4844;
	
	LABEL4846:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4847:
	// Checking char
	flag[105] = 'S';
	goto LABEL4947;
	
	LABEL4848:
	// Checking char
	flag[127] = '8';
	goto LABEL4948;
	
	LABEL4849:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4850:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4851:
	// Checking char
	flag[220] = '~';
	goto LABEL4850;
	
	LABEL4852:
	// Checking char
	flag[217] = 'x';
	goto LABEL4851;
	
	LABEL4853:
	// Setting char
	flag[79] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4753;
	
	else 
		goto LABEL4852;
	
	LABEL4854:
	// Checking char
	flag[151] = 'C';
	goto LABEL4853;
	
	LABEL4855:
	// Setting char
	flag[125] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4955;
	
	else 
		goto LABEL4854;
	
	LABEL4856:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4857:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4858:
	// Setting char
	flag[12] = '&';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4958;
	
	else if (r == 1)
		goto LABEL4859;
	
	else 
		goto LABEL4857;
	
	LABEL4859:
	// Setting char
	flag[233] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4959;
	
	else 
		goto LABEL4860;
	
	LABEL4860:
	// Checking char
	flag[216] = 'Z';
	goto LABEL4760;
	
	LABEL4861:
	// Checking char
	flag[10] = 'D';
	goto LABEL4961;
	
	LABEL4862:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4863:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4864:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4865:
	// Setting char
	flag[140] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4965;
	
	else if (r == 1)
		goto LABEL4866;
	
	else 
		goto LABEL4864;
	
	LABEL4866:
	// Setting char
	flag[17] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4966;
	
	else 
		goto LABEL4867;
	
	LABEL4867:
	// Checking char
	flag[153] = '&';
	goto LABEL4967;
	
	LABEL4868:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4869:
	// Setting char
	flag[23] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4969;
	
	else 
		goto LABEL4868;
	
	LABEL4870:
	// Setting char
	flag[159] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4970;
	
	else 
		goto LABEL4869;
	
	LABEL4871:
	// Checking char
	flag[115] = '[';
	goto LABEL4971;
	
	LABEL4872:
	// Checking char
	flag[244] = 'Z';
	goto LABEL4972;
	
	LABEL4873:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4874:
	// Setting char
	flag[100] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4774;
	
	else 
		goto LABEL4974;
	
	LABEL4875:
	// Setting char
	flag[217] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4975;
	
	else 
		goto LABEL4874;
	
	LABEL4876:
	// Setting char
	flag[60] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4776;
	
	else 
		goto LABEL4875;
	
	LABEL4877:
	// Setting char
	flag[233] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4977;
	
	else 
		goto LABEL4876;
	
	LABEL4878:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4879:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4880:
	// Checking char
	flag[200] = '7';
	goto LABEL4980;
	
	LABEL4881:
	// Setting char
	flag[181] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4882;
	
	else 
		goto LABEL4880;
	
	LABEL4882:
	// Setting char
	flag[54] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4782;
	
	else 
		goto LABEL4982;
	
	LABEL4883:
	// Checking char
	flag[228] = 'K';
	goto LABEL4983;
	
	LABEL4884:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4885:
	// Setting char
	flag[104] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4985;
	
	else 
		goto LABEL4884;
	
	LABEL4886:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4887:
	// Checking char
	flag[127] = 'T';
	goto LABEL4886;
	
	LABEL4888:
	// Checking char
	flag[194] = 's';
	goto LABEL4889;
	
	LABEL4889:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4890:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4891:
	// Checking char
	flag[96] = '/';
	goto LABEL4890;
	
	LABEL4892:
	// Checking char
	flag[91] = '|';
	goto LABEL4891;
	
	LABEL4893:
	// Setting char
	flag[136] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4993;
	
	else 
		goto LABEL4894;
	
	LABEL4894:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4895:
	// Checking char
	flag[18] = '^';
	goto LABEL4795;
	
	LABEL4896:
	// Setting char
	flag[13] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4996;
	
	else 
		goto LABEL4895;
	
	LABEL4897:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4898:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4899:
	// Checking char
	flag[19] = '"';
	goto LABEL4999;
	
	LABEL4900:
	// Checking char
	flag[218] = 'k';
	goto LABEL5000;
	
	LABEL4901:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4902:
	// Checking char
	flag[50] = '&';
	goto LABEL4901;
	
	LABEL4903:
	// Setting char
	flag[58] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5003;
	
	else 
		goto LABEL4904;
	
	LABEL4904:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4905:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4906:
	// Checking char
	flag[228] = 'c';
	goto LABEL4905;
	
	LABEL4907:
	// Setting char
	flag[206] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4807;
	
	else 
		goto LABEL4906;
	
	LABEL4908:
	// Checking char
	flag[210] = '^';
	goto LABEL4907;
	
	LABEL4909:
	// Setting char
	flag[66] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4809;
	
	else 
		goto LABEL5009;
	
	LABEL4910:
	// Setting char
	flag[12] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4810;
	
	else 
		goto LABEL4909;
	
	LABEL4911:
	// Setting char
	flag[94] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5011;
	
	else 
		goto LABEL4910;
	
	LABEL4912:
	// Setting char
	flag[171] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4812;
	
	else if (r == 1)
		goto LABEL5012;
	
	else 
		goto LABEL4911;
	
	LABEL4913:
	// Checking char
	flag[120] = '7';
	goto LABEL4912;
	
	LABEL4914:
	// Setting char
	flag[217] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4814;
	
	else if (r == 1)
		goto LABEL5014;
	
	else 
		goto LABEL4913;
	
	LABEL4915:
	// Setting char
	flag[211] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4815;
	
	else 
		goto LABEL4914;
	
	LABEL4916:
	// Setting char
	flag[40] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5016;
	
	else 
		goto LABEL4915;
	
	LABEL4917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4918:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4919:
	// Checking char
	flag[167] = '/';
	goto LABEL4918;
	
	LABEL4920:
	// Checking char
	flag[122] = 'L';
	goto LABEL4919;
	
	LABEL4921:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4922:
	// Checking char
	flag[247] = '&';
	goto LABEL4921;
	
	LABEL4923:
	// Checking char
	flag[189] = 'Z';
	goto LABEL4922;
	
	LABEL4924:
	// Setting char
	flag[249] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5024;
	
	else 
		goto LABEL4923;
	
	LABEL4925:
	// Checking char
	flag[100] = '.';
	goto LABEL4924;
	
	LABEL4926:
	// Setting char
	flag[28] = 'W';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL4826;
	
	else if (r == 1)
		goto LABEL5026;
	
	else 
		goto LABEL4925;
	
	LABEL4927:
	// Checking char
	flag[117] = 'r';
	goto LABEL4926;
	
	LABEL4928:
	// Setting char
	flag[199] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5028;
	
	else 
		goto LABEL4927;
	
	LABEL4929:
	// Checking char
	flag[217] = '[';
	goto LABEL4928;
	
	LABEL4930:
	// Checking char
	flag[90] = 'U';
	goto LABEL4929;
	
	LABEL4931:
	// Checking char
	flag[237] = 'A';
	goto LABEL4930;
	
	LABEL4932:
	// Checking char
	flag[84] = 'a';
	goto LABEL5032;
	
	LABEL4933:
	// Checking char
	flag[139] = 'U';
	goto LABEL4932;
	
	LABEL4934:
	// Setting char
	flag[105] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5034;
	
	else if (r == 1)
		goto LABEL4935;
	
	else 
		goto LABEL4933;
	
	LABEL4935:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4936:
	// Checking char
	flag[185] = '<';
	goto LABEL5036;
	
	LABEL4937:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4938:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4939:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4940:
	// Setting char
	flag[78] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5040;
	
	else 
		goto LABEL4939;
	
	LABEL4941:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4942:
	// Setting char
	flag[199] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5042;
	
	else 
		goto LABEL4941;
	
	LABEL4943:
	// Checking char
	flag[46] = '1';
	goto LABEL5043;
	
	LABEL4944:
	// Checking char
	flag[127] = ')';
	goto LABEL5044;
	
	LABEL4945:
	// Setting char
	flag[41] = 'R';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5045;
	
	else if (r == 1)
		goto LABEL4946;
	
	else 
		goto LABEL4944;
	
	LABEL4946:
	// Checking char
	flag[73] = 'p';
	goto LABEL5046;
	
	LABEL4947:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4948:
	// Checking char
	flag[215] = 'p';
	goto LABEL5048;
	
	LABEL4949:
	// Checking char
	flag[57] = 'S';
	goto LABEL4849;
	
	LABEL4950:
	// Setting char
	flag[90] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5050;
	
	else 
		goto LABEL4949;
	
	LABEL4951:
	// Setting char
	flag[180] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5051;
	
	else 
		goto LABEL4950;
	
	LABEL4952:
	// Checking char
	flag[164] = 'm';
	goto LABEL4951;
	
	LABEL4953:
	// Setting char
	flag[241] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5053;
	
	else 
		goto LABEL4952;
	
	LABEL4954:
	// Checking char
	flag[166] = '<';
	goto LABEL4953;
	
	LABEL4955:
	// Setting char
	flag[1] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5055;
	
	else if (r == 1)
		goto LABEL4956;
	
	else 
		goto LABEL4954;
	
	LABEL4956:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4957:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4958:
	// Setting char
	flag[233] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5058;
	
	else 
		goto LABEL4957;
	
	LABEL4959:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4960:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4961:
	// Checking char
	flag[112] = '8';
	goto LABEL4960;
	
	LABEL4962:
	// Checking char
	flag[9] = 'K';
	goto LABEL4862;
	
	LABEL4963:
	// Checking char
	flag[120] = 'p';
	goto LABEL4962;
	
	LABEL4964:
	// Setting char
	flag[176] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5064;
	
	else 
		goto LABEL4963;
	
	LABEL4965:
	// Checking char
	flag[52] = '&';
	goto LABEL4964;
	
	LABEL4966:
	// Checking char
	flag[31] = 'U';
	goto LABEL5066;
	
	LABEL4967:
	// Checking char
	flag[123] = 'r';
	goto LABEL4968;
	
	LABEL4968:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4969:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4970:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4971:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4973:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4974:
	// Checking char
	flag[72] = 'W';
	goto LABEL4973;
	
	LABEL4975:
	// Checking char
	flag[100] = ']';
	goto LABEL5075;
	
	LABEL4976:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4977:
	// Setting char
	flag[7] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5077;
	
	else 
		goto LABEL4978;
	
	LABEL4978:
	// Setting char
	flag[148] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4878;
	
	else 
		goto LABEL5078;
	
	LABEL4979:
	// Checking char
	flag[131] = '{';
	goto LABEL5079;
	
	LABEL4980:
	// Checking char
	flag[195] = 'K';
	goto LABEL4979;
	
	LABEL4981:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4982:
	// Checking char
	flag[245] = 's';
	goto LABEL5082;
	
	LABEL4983:
	// Checking char
	flag[134] = '{';
	goto LABEL5083;
	
	LABEL4984:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4985:
	// Setting char
	flag[79] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5085;
	
	else 
		goto LABEL4986;
	
	LABEL4986:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4987:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4988:
	// Setting char
	flag[63] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4888;
	
	else 
		goto LABEL4987;
	
	LABEL4989:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4990:
	// Checking char
	flag[215] = ')';
	goto LABEL5090;
	
	LABEL4991:
	// Checking char
	flag[97] = 'S';
	goto LABEL4990;
	
	LABEL4992:
	// Checking char
	flag[65] = 'g';
	goto LABEL4892;
	
	LABEL4993:
	// Setting char
	flag[5] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5093;
	
	else if (r == 1)
		goto LABEL4994;
	
	else 
		goto LABEL4992;
	
	LABEL4994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4995:
	// Checking char
	flag[200] = '~';
	goto LABEL5095;
	
	LABEL4996:
	// Setting char
	flag[71] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4997;
	
	else 
		goto LABEL4995;
	
	LABEL4997:
	// Checking char
	flag[136] = '7';
	goto LABEL5097;
	
	LABEL4998:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL4999:
	// Setting char
	flag[121] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5099;
	
	else 
		goto LABEL4998;
	
	LABEL5000:
	// Setting char
	flag[42] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5100;
	
	else 
		goto LABEL5001;
	
	LABEL5001:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5002:
	// Checking char
	flag[188] = 'I';
	goto LABEL4902;
	
	LABEL5003:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5004:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5005:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5006:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5007:
	// Checking char
	flag[218] = '=';
	goto LABEL5006;
	
	LABEL5008:
	// Setting char
	flag[40] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4908;
	
	else 
		goto LABEL5007;
	
	LABEL5009:
	// Setting char
	flag[227] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5109;
	
	else 
		goto LABEL5008;
	
	LABEL5010:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5011:
	// Checking char
	flag[196] = '0';
	goto LABEL5111;
	
	LABEL5012:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5013:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5014:
	// Setting char
	flag[77] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5114;
	
	else 
		goto LABEL5015;
	
	LABEL5015:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5016:
	// Checking char
	flag[60] = '8';
	goto LABEL5017;
	
	LABEL5017:
	// Setting char
	flag[126] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4917;
	
	else 
		goto LABEL5018;
	
	LABEL5018:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5019:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5020:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5021:
	// Setting char
	flag[110] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5022;
	
	else 
		goto LABEL5020;
	
	LABEL5022:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5023:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5024:
	// Setting char
	flag[8] = 'C';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5124;
	
	else if (r == 1)
		goto LABEL5025;
	
	else 
		goto LABEL5023;
	
	LABEL5025:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5026:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5027:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5028:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5029:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5030:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5031:
	// Checking char
	flag[41] = ']';
	goto LABEL5030;
	
	LABEL5032:
	// Checking char
	flag[224] = 'y';
	goto LABEL5031;
	
	LABEL5033:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5034:
	// Setting char
	flag[245] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5134;
	
	else 
		goto LABEL5033;
	
	LABEL5035:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5036:
	// Setting char
	flag[7] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5136;
	
	else if (r == 1)
		goto LABEL5037;
	
	else 
		goto LABEL5035;
	
	LABEL5037:
	// Setting char
	flag[122] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4937;
	
	else 
		goto LABEL5038;
	
	LABEL5038:
	// Checking char
	flag[234] = 'h';
	goto LABEL4938;
	
	LABEL5039:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5040:
	// Setting char
	flag[247] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5041;
	
	else 
		goto LABEL5039;
	
	LABEL5041:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5042:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5043:
	// Checking char
	flag[161] = 'G';
	goto LABEL5143;
	
	LABEL5044:
	// Checking char
	flag[219] = '9';
	goto LABEL5144;
	
	LABEL5045:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5046:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5047:
	// Checking char
	flag[22] = 'X';
	goto LABEL5147;
	
	LABEL5048:
	// Setting char
	flag[159] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5049;
	
	else 
		goto LABEL5047;
	
	LABEL5049:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5050:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5051:
	// Setting char
	flag[63] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5151;
	
	else 
		goto LABEL5052;
	
	LABEL5052:
	// Checking char
	flag[59] = 'w';
	goto LABEL5152;
	
	LABEL5053:
	// Checking char
	flag[174] = 'l';
	goto LABEL5153;
	
	LABEL5054:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5055:
	// Checking char
	flag[172] = ';';
	goto LABEL5054;
	
	LABEL5056:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5057:
	// Checking char
	flag[14] = 'X';
	goto LABEL5056;
	
	LABEL5058:
	// Setting char
	flag[172] = '6';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5158;
	
	else if (r == 1)
		goto LABEL5059;
	
	else 
		goto LABEL5057;
	
	LABEL5059:
	// Setting char
	flag[224] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5159;
	
	else 
		goto LABEL5060;
	
	LABEL5060:
	// Checking char
	flag[194] = 'X';
	goto LABEL5061;
	
	LABEL5061:
	// Checking char
	flag[69] = '0';
	goto LABEL5161;
	
	LABEL5062:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5063:
	// Checking char
	flag[42] = 'C';
	goto LABEL5062;
	
	LABEL5064:
	// Setting char
	flag[39] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5164;
	
	else if (r == 1)
		goto LABEL5065;
	
	else 
		goto LABEL5063;
	
	LABEL5065:
	// Checking char
	flag[93] = '-';
	goto LABEL5165;
	
	LABEL5066:
	// Checking char
	flag[141] = 'P';
	goto LABEL5067;
	
	LABEL5067:
	// Setting char
	flag[248] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5167;
	
	else 
		goto LABEL5068;
	
	LABEL5068:
	// Checking char
	flag[239] = '1';
	goto LABEL5168;
	
	LABEL5069:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5070:
	// Checking char
	flag[66] = 'M';
	goto LABEL5170;
	
	LABEL5071:
	// Checking char
	flag[184] = '2';
	goto LABEL5070;
	
	LABEL5072:
	// Setting char
	flag[93] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5073;
	
	else 
		goto LABEL5071;
	
	LABEL5073:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5074:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5075:
	// Setting char
	flag[187] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5175;
	
	else 
		goto LABEL5076;
	
	LABEL5076:
	// Checking char
	flag[26] = 'L';
	goto LABEL4976;
	
	LABEL5077:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5078:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5079:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5080:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5081:
	// Setting char
	flag[100] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4981;
	
	else 
		goto LABEL5181;
	
	LABEL5082:
	// Checking char
	flag[18] = 'h';
	goto LABEL5081;
	
	LABEL5083:
	// Setting char
	flag[208] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5183;
	
	else 
		goto LABEL5084;
	
	LABEL5084:
	// Checking char
	flag[83] = ']';
	goto LABEL4984;
	
	LABEL5085:
	// Checking char
	flag[167] = 'w';
	goto LABEL5185;
	
	LABEL5086:
	// Checking char
	flag[208] = '1';
	goto LABEL5186;
	
	LABEL5087:
	// Checking char
	flag[159] = 'h';
	goto LABEL5086;
	
	LABEL5088:
	// Setting char
	flag[127] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4988;
	
	else 
		goto LABEL5087;
	
	LABEL5089:
	// Setting char
	flag[65] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL4989;
	
	else 
		goto LABEL5088;
	
	LABEL5090:
	// Setting char
	flag[45] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5190;
	
	else 
		goto LABEL5089;
	
	LABEL5091:
	// Checking char
	flag[87] = 'G';
	goto LABEL4991;
	
	LABEL5092:
	// Setting char
	flag[123] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5192;
	
	else 
		goto LABEL5091;
	
	LABEL5093:
	// Setting char
	flag[172] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5193;
	
	else 
		goto LABEL5092;
	
	LABEL5094:
	// Checking char
	flag[125] = '<';
	goto LABEL5194;
	
	LABEL5095:
	// Setting char
	flag[244] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5096;
	
	else 
		goto LABEL5094;
	
	LABEL5096:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5097:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5098:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5099:
	// Setting char
	flag[199] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5199;
	
	else 
		goto LABEL5098;
	
	LABEL5100:
	// Checking char
	flag[85] = 'x';
	goto LABEL5200;
	
	LABEL5101:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5102:
	// Setting char
	flag[13] = 'g';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5002;
	
	else if (r == 1)
		goto LABEL5202;
	
	else 
		goto LABEL5101;
	
	LABEL5103:
	// Checking char
	flag[156] = '5';
	goto LABEL5102;
	
	LABEL5104:
	// Setting char
	flag[113] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5004;
	
	else 
		goto LABEL5103;
	
	LABEL5105:
	// Setting char
	flag[182] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5005;
	
	else if (r == 1)
		goto LABEL5205;
	
	else 
		goto LABEL5104;
	
	LABEL5106:
	// Checking char
	flag[3] = 'W';
	goto LABEL5105;
	
	LABEL5107:
	// Setting char
	flag[107] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5207;
	
	else 
		goto LABEL5106;
	
	LABEL5108:
	// Checking char
	flag[97] = 'W';
	goto LABEL5107;
	
	LABEL5109:
	// Setting char
	flag[101] = 'U';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5209;
	
	else if (r == 1)
		goto LABEL5110;
	
	else 
		goto LABEL5108;
	
	LABEL5110:
	// Checking char
	flag[23] = 'a';
	goto LABEL5010;
	
	LABEL5111:
	// Checking char
	flag[206] = 'D';
	goto LABEL5112;
	
	LABEL5112:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5113:
	// Setting char
	flag[92] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5013;
	
	else 
		goto LABEL5213;
	
	LABEL5114:
	// Setting char
	flag[124] = 'D';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5214;
	
	else if (r == 1)
		goto LABEL5115;
	
	else 
		goto LABEL5113;
	
	LABEL5115:
	// Checking char
	flag[53] = 'X';
	goto LABEL5215;
	
	LABEL5116:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5117:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5118:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5119:
	// Setting char
	flag[166] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5019;
	
	else 
		goto LABEL5118;
	
	LABEL5120:
	// Checking char
	flag[69] = '2';
	goto LABEL5119;
	
	LABEL5121:
	// Setting char
	flag[184] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5021;
	
	else 
		goto LABEL5120;
	
	LABEL5122:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5123:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5124:
	// Setting char
	flag[192] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5224;
	
	else 
		goto LABEL5123;
	
	LABEL5125:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5126:
	// Checking char
	flag[67] = ']';
	goto LABEL5125;
	
	LABEL5127:
	// Setting char
	flag[141] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5027;
	
	else if (r == 1)
		goto LABEL5227;
	
	else 
		goto LABEL5126;
	
	LABEL5128:
	// Checking char
	flag[147] = '0';
	goto LABEL5127;
	
	LABEL5129:
	// Checking char
	flag[54] = '=';
	goto LABEL5029;
	
	LABEL5130:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5131:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5132:
	// Checking char
	flag[175] = 'U';
	goto LABEL5131;
	
	LABEL5133:
	// Checking char
	flag[193] = 'V';
	goto LABEL5132;
	
	LABEL5134:
	// Setting char
	flag[74] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5234;
	
	else 
		goto LABEL5133;
	
	LABEL5135:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5136:
	// Checking char
	flag[152] = '|';
	goto LABEL5135;
	
	LABEL5137:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5138:
	// Checking char
	flag[10] = '*';
	goto LABEL5137;
	
	LABEL5139:
	// Setting char
	flag[232] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5239;
	
	else 
		goto LABEL5138;
	
	LABEL5140:
	// Checking char
	flag[161] = 'p';
	goto LABEL5139;
	
	LABEL5141:
	// Setting char
	flag[120] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5241;
	
	else 
		goto LABEL5140;
	
	LABEL5142:
	// Checking char
	flag[109] = 'K';
	goto LABEL5141;
	
	LABEL5143:
	// Setting char
	flag[37] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5243;
	
	else 
		goto LABEL5142;
	
	LABEL5144:
	// Checking char
	flag[59] = 'N';
	goto LABEL5244;
	
	LABEL5145:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5146:
	// Checking char
	flag[30] = 'N';
	goto LABEL5246;
	
	LABEL5147:
	// Setting char
	flag[8] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5148;
	
	else 
		goto LABEL5146;
	
	LABEL5148:
	// Checking char
	flag[234] = 'O';
	goto LABEL5248;
	
	LABEL5149:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5150:
	// Checking char
	flag[88] = 'p';
	goto LABEL5149;
	
	LABEL5151:
	// Setting char
	flag[105] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5251;
	
	else 
		goto LABEL5150;
	
	LABEL5152:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5153:
	// Setting char
	flag[244] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5253;
	
	else 
		goto LABEL5154;
	
	LABEL5154:
	// Checking char
	flag[198] = 'y';
	goto LABEL5155;
	
	LABEL5155:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5156:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5157:
	// Setting char
	flag[88] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5257;
	
	else 
		goto LABEL5156;
	
	LABEL5158:
	// Checking char
	flag[135] = 'J';
	goto LABEL5157;
	
	LABEL5159:
	// Checking char
	flag[18] = 'e';
	goto LABEL5160;
	
	LABEL5160:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5162:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5163:
	// Checking char
	flag[176] = ']';
	goto LABEL5263;
	
	LABEL5164:
	// Checking char
	flag[32] = 't';
	goto LABEL5163;
	
	LABEL5165:
	// Checking char
	flag[226] = 'J';
	goto LABEL5265;
	
	LABEL5166:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5167:
	// Setting char
	flag[144] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5267;
	
	else 
		goto LABEL5166;
	
	LABEL5168:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5169:
	// Checking char
	flag[232] = '~';
	goto LABEL5069;
	
	LABEL5170:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5171:
	// Checking char
	flag[145] = 'V';
	goto LABEL5271;
	
	LABEL5172:
	// Setting char
	flag[15] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5072;
	
	else 
		goto LABEL5171;
	
	LABEL5173:
	// Checking char
	flag[181] = '6';
	goto LABEL5172;
	
	LABEL5174:
	// Setting char
	flag[68] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5074;
	
	else 
		goto LABEL5173;
	
	LABEL5175:
	// Setting char
	flag[183] = '@';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5275;
	
	else if (r == 1)
		goto LABEL5176;
	
	else 
		goto LABEL5174;
	
	LABEL5176:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5177:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5178:
	// Checking char
	flag[243] = ')';
	goto LABEL5177;
	
	LABEL5179:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5180:
	// Setting char
	flag[166] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5080;
	
	else 
		goto LABEL5280;
	
	LABEL5181:
	// Checking char
	flag[3] = '0';
	goto LABEL5180;
	
	LABEL5182:
	// Checking char
	flag[34] = 'h';
	goto LABEL5282;
	
	LABEL5183:
	// Setting char
	flag[223] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5283;
	
	else if (r == 1)
		goto LABEL5184;
	
	else 
		goto LABEL5182;
	
	LABEL5184:
	// Checking char
	flag[126] = 'j';
	goto LABEL5284;
	
	LABEL5185:
	// Checking char
	flag[92] = 'c';
	goto LABEL5285;
	
	LABEL5186:
	// Checking char
	flag[215] = 'P';
	goto LABEL5286;
	
	LABEL5187:
	// Checking char
	flag[207] = 'E';
	goto LABEL5287;
	
	LABEL5188:
	// Setting char
	flag[194] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5288;
	
	else 
		goto LABEL5187;
	
	LABEL5189:
	// Checking char
	flag[201] = ';';
	goto LABEL5188;
	
	LABEL5190:
	// Setting char
	flag[11] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5290;
	
	else 
		goto LABEL5189;
	
	LABEL5191:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5192:
	// Checking char
	flag[80] = 'Q';
	goto LABEL5191;
	
	LABEL5193:
	// Checking char
	flag[17] = '_';
	goto LABEL5293;
	
	LABEL5194:
	// Checking char
	flag[203] = '"';
	goto LABEL5195;
	
	LABEL5195:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5196:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5197:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5199:
	// Setting char
	flag[61] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5299;
	
	else 
		goto LABEL5198;
	
	LABEL5200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5201:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5202:
	// Checking char
	flag[177] = 'f';
	goto LABEL5201;
	
	LABEL5203:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5204:
	// Checking char
	flag[192] = '-';
	goto LABEL5203;
	
	LABEL5205:
	// Checking char
	flag[246] = '"';
	goto LABEL5204;
	
	LABEL5206:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5207:
	// Setting char
	flag[203] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5208;
	
	else 
		goto LABEL5206;
	
	LABEL5208:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5209:
	// Checking char
	flag[150] = '|';
	goto LABEL5309;
	
	LABEL5210:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5211:
	// Checking char
	flag[185] = '"';
	goto LABEL5210;
	
	LABEL5212:
	// Setting char
	flag[144] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5312;
	
	else 
		goto LABEL5211;
	
	LABEL5213:
	// Setting char
	flag[54] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5313;
	
	else 
		goto LABEL5212;
	
	LABEL5214:
	// Checking char
	flag[72] = '#';
	goto LABEL5314;
	
	LABEL5215:
	// Checking char
	flag[123] = 'u';
	goto LABEL5216;
	
	LABEL5216:
	// Setting char
	flag[174] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5116;
	
	else if (r == 1)
		goto LABEL5316;
	
	else 
		goto LABEL5217;
	
	LABEL5217:
	// Setting char
	flag[103] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5117;
	
	else if (r == 1)
		goto LABEL5317;
	
	else 
		goto LABEL5218;
	
	LABEL5218:
	// Checking char
	flag[122] = 'o';
	goto LABEL5318;
	
	LABEL5219:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5220:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5221:
	// Setting char
	flag[190] = 'P';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5121;
	
	else if (r == 1)
		goto LABEL5321;
	
	else 
		goto LABEL5220;
	
	LABEL5222:
	// Setting char
	flag[196] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5122;
	
	else 
		goto LABEL5221;
	
	LABEL5223:
	// Checking char
	flag[28] = 'l';
	goto LABEL5222;
	
	LABEL5224:
	// Checking char
	flag[163] = '-';
	goto LABEL5223;
	
	LABEL5225:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5226:
	// Checking char
	flag[211] = 'l';
	goto LABEL5225;
	
	LABEL5227:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5228:
	// Checking char
	flag[242] = '}';
	goto LABEL5128;
	
	LABEL5229:
	// Setting char
	flag[65] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5129;
	
	else 
		goto LABEL5228;
	
	LABEL5230:
	// Checking char
	flag[45] = '+';
	goto LABEL5130;
	
	LABEL5231:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5232:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5233:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5234:
	// Setting char
	flag[66] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5334;
	
	else 
		goto LABEL5233;
	
	LABEL5235:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5236:
	// Checking char
	flag[134] = 'G';
	goto LABEL5235;
	
	LABEL5237:
	// Checking char
	flag[206] = '1';
	goto LABEL5337;
	
	LABEL5238:
	// Setting char
	flag[235] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5338;
	
	else 
		goto LABEL5237;
	
	LABEL5239:
	// Setting char
	flag[110] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5339;
	
	else if (r == 1)
		goto LABEL5240;
	
	else 
		goto LABEL5238;
	
	LABEL5240:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5241:
	// Checking char
	flag[23] = ',';
	goto LABEL5341;
	
	LABEL5242:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5243:
	// Setting char
	flag[224] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5343;
	
	else 
		goto LABEL5242;
	
	LABEL5244:
	// Checking char
	flag[155] = 'g';
	goto LABEL5245;
	
	LABEL5245:
	// Setting char
	flag[20] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5145;
	
	else 
		goto LABEL5345;
	
	LABEL5246:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5247:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5248:
	// Checking char
	flag[113] = '(';
	goto LABEL5249;
	
	LABEL5249:
	// Setting char
	flag[135] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5349;
	
	else 
		goto LABEL5250;
	
	LABEL5250:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5251:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5252:
	// Checking char
	flag[81] = 'V';
	goto LABEL5352;
	
	LABEL5253:
	// Checking char
	flag[138] = 'z';
	goto LABEL5252;
	
	LABEL5254:
	// Checking char
	flag[96] = '~';
	goto LABEL5354;
	
	LABEL5255:
	// Checking char
	flag[49] = '0';
	goto LABEL5254;
	
	LABEL5256:
	// Setting char
	flag[244] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5356;
	
	else 
		goto LABEL5255;
	
	LABEL5257:
	// Setting char
	flag[182] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5258;
	
	else 
		goto LABEL5256;
	
	LABEL5258:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5259:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5260:
	// Checking char
	flag[243] = '2';
	goto LABEL5259;
	
	LABEL5261:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5262:
	// Setting char
	flag[67] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5162;
	
	else 
		goto LABEL5362;
	
	LABEL5263:
	// Setting char
	flag[220] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5264;
	
	else 
		goto LABEL5262;
	
	LABEL5264:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5267:
	// Checking char
	flag[209] = '.';
	goto LABEL5367;
	
	LABEL5268:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5269:
	// Checking char
	flag[161] = 'Q';
	goto LABEL5169;
	
	LABEL5270:
	// Setting char
	flag[205] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5370;
	
	else 
		goto LABEL5269;
	
	LABEL5271:
	// Checking char
	flag[104] = 'y';
	goto LABEL5270;
	
	LABEL5272:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5274:
	// Checking char
	flag[127] = '|';
	goto LABEL5374;
	
	LABEL5275:
	// Setting char
	flag[214] = ')';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5375;
	
	else if (r == 1)
		goto LABEL5276;
	
	else 
		goto LABEL5274;
	
	LABEL5276:
	// Checking char
	flag[126] = 'Q';
	goto LABEL5277;
	
	LABEL5277:
	// Checking char
	flag[45] = '+';
	goto LABEL5377;
	
	LABEL5278:
	// Checking char
	flag[86] = 'w';
	goto LABEL5178;
	
	LABEL5279:
	// Setting char
	flag[79] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5179;
	
	else if (r == 1)
		goto LABEL5379;
	
	else 
		goto LABEL5278;
	
	LABEL5280:
	// Checking char
	flag[48] = 'q';
	goto LABEL5279;
	
	LABEL5281:
	// Checking char
	flag[118] = '-';
	goto LABEL5381;
	
	LABEL5282:
	// Setting char
	flag[220] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5382;
	
	else 
		goto LABEL5281;
	
	LABEL5283:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5284:
	// Checking char
	flag[96] = '=';
	goto LABEL5384;
	
	LABEL5285:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5286:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5287:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5288:
	// Checking char
	flag[66] = '+';
	goto LABEL5388;
	
	LABEL5289:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5290:
	// Setting char
	flag[185] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5291;
	
	else 
		goto LABEL5289;
	
	LABEL5291:
	// Checking char
	flag[21] = '-';
	goto LABEL5391;
	
	LABEL5292:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5293:
	// Setting char
	flag[63] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5294;
	
	else 
		goto LABEL5292;
	
	LABEL5294:
	// Setting char
	flag[97] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5394;
	
	else 
		goto LABEL5295;
	
	LABEL5295:
	// Checking char
	flag[77] = 'i';
	goto LABEL5296;
	
	LABEL5296:
	// Setting char
	flag[94] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5196;
	
	else if (r == 1)
		goto LABEL5396;
	
	else 
		goto LABEL5297;
	
	LABEL5297:
	// Checking char
	flag[192] = 'q';
	goto LABEL5197;
	
	LABEL5298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5299:
	// Checking char
	flag[21] = 'a';
	goto LABEL5399;
	
	LABEL5300:
	// Checking char
	flag[140] = 'F';
	goto LABEL5400;
	
	LABEL5301:
	// Checking char
	flag[137] = 'j';
	goto LABEL5300;
	
	LABEL5302:
	// Setting char
	flag[208] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5402;
	
	else 
		goto LABEL5301;
	
	LABEL5303:
	// Checking char
	flag[141] = 'h';
	goto LABEL5302;
	
	LABEL5304:
	// Setting char
	flag[149] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5404;
	
	else 
		goto LABEL5303;
	
	LABEL5305:
	// Checking char
	flag[7] = 'y';
	goto LABEL5304;
	
	LABEL5306:
	// Setting char
	flag[240] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5406;
	
	else 
		goto LABEL5305;
	
	LABEL5307:
	// Checking char
	flag[93] = 'c';
	goto LABEL5306;
	
	LABEL5308:
	// Setting char
	flag[54] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5408;
	
	else 
		goto LABEL5307;
	
	LABEL5309:
	// Setting char
	flag[128] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5409;
	
	else 
		goto LABEL5308;
	
	LABEL5310:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5311:
	// Checking char
	flag[121] = 'b';
	goto LABEL5310;
	
	LABEL5312:
	// Checking char
	flag[5] = '`';
	goto LABEL5412;
	
	LABEL5313:
	// Checking char
	flag[39] = ',';
	goto LABEL5413;
	
	LABEL5314:
	// Checking char
	flag[78] = 'V';
	goto LABEL5414;
	
	LABEL5315:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5316:
	// Setting char
	flag[87] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5416;
	
	else 
		goto LABEL5315;
	
	LABEL5317:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5318:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5319:
	// Checking char
	flag[189] = '@';
	goto LABEL5219;
	
	LABEL5320:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5321:
	// Checking char
	flag[29] = '2';
	goto LABEL5320;
	
	LABEL5322:
	// Checking char
	flag[124] = 'T';
	goto LABEL5422;
	
	LABEL5323:
	// Setting char
	flag[160] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5324;
	
	else 
		goto LABEL5322;
	
	LABEL5324:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5325:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5326:
	// Setting char
	flag[161] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5226;
	
	else 
		goto LABEL5325;
	
	LABEL5327:
	// Checking char
	flag[80] = '&';
	goto LABEL5326;
	
	LABEL5328:
	// Checking char
	flag[185] = 'X';
	goto LABEL5327;
	
	LABEL5329:
	// Setting char
	flag[8] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5229;
	
	else if (r == 1)
		goto LABEL5429;
	
	else 
		goto LABEL5328;
	
	LABEL5330:
	// Setting char
	flag[20] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5230;
	
	else 
		goto LABEL5329;
	
	LABEL5331:
	// Setting char
	flag[239] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5231;
	
	else 
		goto LABEL5330;
	
	LABEL5332:
	// Setting char
	flag[102] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5232;
	
	else 
		goto LABEL5331;
	
	LABEL5333:
	// Checking char
	flag[117] = 'T';
	goto LABEL5433;
	
	LABEL5334:
	// Setting char
	flag[156] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5335;
	
	else 
		goto LABEL5333;
	
	LABEL5335:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5336:
	// Checking char
	flag[80] = 'O';
	goto LABEL5236;
	
	LABEL5337:
	// Setting char
	flag[5] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5437;
	
	else 
		goto LABEL5336;
	
	LABEL5338:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5339:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5340:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5341:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5342:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5343:
	// Setting char
	flag[249] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5443;
	
	else 
		goto LABEL5344;
	
	LABEL5344:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5345:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5346:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5347:
	// Setting char
	flag[16] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5247;
	
	else if (r == 1)
		goto LABEL5447;
	
	else 
		goto LABEL5346;
	
	LABEL5348:
	// Checking char
	flag[124] = 'm';
	goto LABEL5347;
	
	LABEL5349:
	// Setting char
	flag[158] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5449;
	
	else 
		goto LABEL5348;
	
	LABEL5350:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5351:
	// Checking char
	flag[105] = '3';
	goto LABEL5350;
	
	LABEL5352:
	// Setting char
	flag[145] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5452;
	
	else 
		goto LABEL5353;
	
	LABEL5353:
	// Checking char
	flag[34] = 'a';
	goto LABEL5453;
	
	LABEL5354:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5355:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5356:
	// Setting char
	flag[158] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5456;
	
	else 
		goto LABEL5357;
	
	LABEL5357:
	// Checking char
	flag[177] = 'P';
	goto LABEL5358;
	
	LABEL5358:
	// Checking char
	flag[162] = 'd';
	goto LABEL5458;
	
	LABEL5359:
	// Checking char
	flag[51] = '<';
	goto LABEL5459;
	
	LABEL5360:
	// Setting char
	flag[216] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5260;
	
	else if (r == 1)
		goto LABEL5460;
	
	else 
		goto LABEL5359;
	
	LABEL5361:
	// Setting char
	flag[34] = '-';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5261;
	
	else if (r == 1)
		goto LABEL5461;
	
	else 
		goto LABEL5360;
	
	LABEL5362:
	// Setting char
	flag[50] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5462;
	
	else 
		goto LABEL5361;
	
	LABEL5363:
	// Checking char
	flag[100] = 'd';
	goto LABEL5463;
	
	LABEL5364:
	// Checking char
	flag[76] = '.';
	goto LABEL5363;
	
	LABEL5365:
	// Checking char
	flag[69] = 'b';
	goto LABEL5364;
	
	LABEL5366:
	// Setting char
	flag[191] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5266;
	
	else 
		goto LABEL5466;
	
	LABEL5367:
	// Checking char
	flag[95] = 'f';
	goto LABEL5366;
	
	LABEL5368:
	// Checking char
	flag[12] = '*';
	goto LABEL5268;
	
	LABEL5369:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5370:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5371:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5372:
	// Setting char
	flag[32] = 'y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5272;
	
	else if (r == 1)
		goto LABEL5472;
	
	else 
		goto LABEL5371;
	
	LABEL5373:
	// Setting char
	flag[55] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5273;
	
	else if (r == 1)
		goto LABEL5473;
	
	else 
		goto LABEL5372;
	
	LABEL5374:
	// Setting char
	flag[123] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5474;
	
	else 
		goto LABEL5373;
	
	LABEL5375:
	// Checking char
	flag[226] = 'n';
	goto LABEL5475;
	
	LABEL5376:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5377:
	// Setting char
	flag[204] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5477;
	
	else 
		goto LABEL5378;
	
	LABEL5378:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5379:
	// Checking char
	flag[117] = '%';
	goto LABEL5380;
	
	LABEL5380:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5381:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5382:
	// Setting char
	flag[229] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5482;
	
	else 
		goto LABEL5383;
	
	LABEL5383:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5384:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5385:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5386:
	// Checking char
	flag[140] = '#';
	goto LABEL5385;
	
	LABEL5387:
	// Setting char
	flag[40] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5487;
	
	else 
		goto LABEL5386;
	
	LABEL5388:
	// Setting char
	flag[44] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5389;
	
	else 
		goto LABEL5387;
	
	LABEL5389:
	// Checking char
	flag[114] = 'X';
	goto LABEL5489;
	
	LABEL5390:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5391:
	// Checking char
	flag[210] = 'R';
	goto LABEL5390;
	
	LABEL5392:
	// Checking char
	flag[30] = 'L';
	goto LABEL5492;
	
	LABEL5393:
	// Setting char
	flag[63] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5493;
	
	else 
		goto LABEL5392;
	
	LABEL5394:
	// Setting char
	flag[36] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5494;
	
	else if (r == 1)
		goto LABEL5395;
	
	else 
		goto LABEL5393;
	
	LABEL5395:
	// Checking char
	flag[66] = 'm';
	goto LABEL5495;
	
	LABEL5396:
	// Checking char
	flag[64] = '_';
	goto LABEL5397;
	
	LABEL5397:
	// Checking char
	flag[29] = '<';
	goto LABEL5398;
	
	LABEL5398:
	// Checking char
	flag[197] = 'z';
	goto LABEL5298;
	
	LABEL5399:
	// Checking char
	flag[164] = 'k';
	goto LABEL5499;
	
	LABEL5400:
	// Setting char
	flag[215] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5500;
	
	else 
		goto LABEL5401;
	
	LABEL5401:
	// Checking char
	flag[88] = 'e';
	goto LABEL5501;
	
	LABEL5402:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5403:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5404:
	// Setting char
	flag[25] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5405;
	
	else 
		goto LABEL5403;
	
	LABEL5405:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5406:
	// Checking char
	flag[117] = '`';
	goto LABEL5407;
	
	LABEL5407:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5408:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5409:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5410:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5411:
	// Setting char
	flag[206] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5311;
	
	else 
		goto LABEL5410;
	
	LABEL5412:
	// Setting char
	flag[199] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5512;
	
	else 
		goto LABEL5411;
	
	LABEL5413:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5414:
	// Checking char
	flag[44] = '>';
	goto LABEL5514;
	
	LABEL5415:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5416:
	// Setting char
	flag[80] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5516;
	
	else if (r == 1)
		goto LABEL5417;
	
	else 
		goto LABEL5415;
	
	LABEL5417:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5418:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5419:
	// Setting char
	flag[232] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5319;
	
	else if (r == 1)
		goto LABEL5519;
	
	else 
		goto LABEL5418;
	
	LABEL5420:
	// Setting char
	flag[8] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5520;
	
	else 
		goto LABEL5419;
	
	LABEL5421:
	// Checking char
	flag[194] = 'T';
	goto LABEL5420;
	
	LABEL5422:
	// Checking char
	flag[214] = 'X';
	goto LABEL5421;
	
	LABEL5423:
	// Setting char
	flag[196] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5323;
	
	else 
		goto LABEL5523;
	
	LABEL5424:
	// Checking char
	flag[151] = 'q';
	goto LABEL5423;
	
	LABEL5425:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5426:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5427:
	// Setting char
	flag[53] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5527;
	
	else 
		goto LABEL5426;
	
	LABEL5428:
	// Checking char
	flag[31] = ';';
	goto LABEL5427;
	
	LABEL5429:
	// Checking char
	flag[32] = '5';
	goto LABEL5428;
	
	LABEL5430:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5431:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5432:
	// Setting char
	flag[237] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5332;
	
	else 
		goto LABEL5532;
	
	LABEL5433:
	// Setting char
	flag[208] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5533;
	
	else 
		goto LABEL5432;
	
	LABEL5434:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5435:
	// Setting char
	flag[22] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5535;
	
	else 
		goto LABEL5434;
	
	LABEL5436:
	// Checking char
	flag[161] = '$';
	goto LABEL5435;
	
	LABEL5437:
	// Setting char
	flag[62] = '4';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5537;
	
	else if (r == 1)
		goto LABEL5438;
	
	else 
		goto LABEL5436;
	
	LABEL5438:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5439:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5440:
	// Setting char
	flag[178] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5340;
	
	else if (r == 1)
		goto LABEL5540;
	
	else 
		goto LABEL5439;
	
	LABEL5441:
	// Checking char
	flag[174] = 'c';
	goto LABEL5440;
	
	LABEL5442:
	// Setting char
	flag[32] = 'q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5342;
	
	else if (r == 1)
		goto LABEL5542;
	
	else 
		goto LABEL5441;
	
	LABEL5443:
	// Setting char
	flag[168] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5444;
	
	else 
		goto LABEL5442;
	
	LABEL5444:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5445:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5446:
	// Checking char
	flag[183] = ']';
	goto LABEL5445;
	
	LABEL5447:
	// Setting char
	flag[137] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5448;
	
	else 
		goto LABEL5446;
	
	LABEL5448:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5449:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5450:
	// Checking char
	flag[110] = 'o';
	goto LABEL5550;
	
	LABEL5451:
	// Setting char
	flag[23] = '1';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5351;
	
	else if (r == 1)
		goto LABEL5551;
	
	else 
		goto LABEL5450;
	
	LABEL5452:
	// Checking char
	flag[26] = 'b';
	goto LABEL5451;
	
	LABEL5453:
	// Checking char
	flag[139] = 'p';
	goto LABEL5553;
	
	LABEL5454:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5455:
	// Setting char
	flag[218] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5355;
	
	else if (r == 1)
		goto LABEL5555;
	
	else 
		goto LABEL5454;
	
	LABEL5456:
	// Setting char
	flag[67] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5556;
	
	else 
		goto LABEL5455;
	
	LABEL5457:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5458:
	// Checking char
	flag[78] = 'K';
	goto LABEL5457;
	
	LABEL5459:
	// Checking char
	flag[149] = 'p';
	goto LABEL5559;
	
	LABEL5460:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5461:
	// Checking char
	flag[164] = ':';
	goto LABEL5561;
	
	LABEL5462:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5463:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5464:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5465:
	// Setting char
	flag[160] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5365;
	
	else 
		goto LABEL5565;
	
	LABEL5466:
	// Setting char
	flag[83] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5566;
	
	else 
		goto LABEL5465;
	
	LABEL5467:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5468:
	// Setting char
	flag[227] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5368;
	
	else 
		goto LABEL5467;
	
	LABEL5469:
	// Setting char
	flag[15] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5369;
	
	else 
		goto LABEL5468;
	
	LABEL5470:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5471:
	// Checking char
	flag[141] = '0';
	goto LABEL5470;
	
	LABEL5472:
	// Checking char
	flag[115] = ';';
	goto LABEL5471;
	
	LABEL5473:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5474:
	// Checking char
	flag[55] = 'r';
	goto LABEL5574;
	
	LABEL5475:
	// Checking char
	flag[127] = 'n';
	goto LABEL5575;
	
	LABEL5476:
	// Setting char
	flag[73] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5376;
	
	else 
		goto LABEL5576;
	
	LABEL5477:
	// Setting char
	flag[81] = '>';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5577;
	
	else if (r == 1)
		goto LABEL5478;
	
	else 
		goto LABEL5476;
	
	LABEL5478:
	// Setting char
	flag[26] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5578;
	
	else 
		goto LABEL5479;
	
	LABEL5479:
	// Setting char
	flag[237] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5579;
	
	else 
		goto LABEL5480;
	
	LABEL5480:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5481:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5482:
	// Setting char
	flag[247] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5483;
	
	else 
		goto LABEL5481;
	
	LABEL5483:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5484:
	// Checking char
	flag[29] = 'u';
	goto LABEL5485;
	
	LABEL5485:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5486:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5487:
	// Setting char
	flag[82] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5587;
	
	else 
		goto LABEL5486;
	
	LABEL5488:
	// Checking char
	flag[158] = 'R';
	goto LABEL5588;
	
	LABEL5489:
	// Setting char
	flag[51] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5589;
	
	else if (r == 1)
		goto LABEL5490;
	
	else 
		goto LABEL5488;
	
	LABEL5490:
	// Setting char
	flag[233] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5590;
	
	else 
		goto LABEL5491;
	
	LABEL5491:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5492:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5493:
	// Checking char
	flag[65] = 'C';
	goto LABEL5593;
	
	LABEL5494:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5495:
	// Setting char
	flag[74] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5595;
	
	else 
		goto LABEL5496;
	
	LABEL5496:
	// Setting char
	flag[138] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5596;
	
	else 
		goto LABEL5497;
	
	LABEL5497:
	// Checking char
	flag[34] = '+';
	goto LABEL5498;
	
	LABEL5498:
	// Checking char
	flag[170] = 'H';
	goto LABEL5598;
	
	LABEL5499:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5500:
	// Checking char
	flag[244] = '#';
	goto LABEL5600;
	
	LABEL5501:
	// Checking char
	flag[136] = '{';
	goto LABEL5601;
	
	LABEL5502:
	// Checking char
	flag[92] = ')';
	goto LABEL5602;
	
	LABEL5503:
	// Checking char
	flag[107] = 'b';
	goto LABEL5502;
	
	LABEL5504:
	// Checking char
	flag[89] = '9';
	goto LABEL5503;
	
	LABEL5505:
	// Checking char
	flag[39] = '/';
	goto LABEL5504;
	
	LABEL5506:
	// Checking char
	flag[85] = 'K';
	goto LABEL5505;
	
	LABEL5507:
	// Checking char
	flag[177] = 'd';
	goto LABEL5506;
	
	LABEL5508:
	// Setting char
	flag[28] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5608;
	
	else 
		goto LABEL5507;
	
	LABEL5509:
	// Setting char
	flag[44] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5609;
	
	else 
		goto LABEL5508;
	
	LABEL5510:
	// Checking char
	flag[8] = '9';
	goto LABEL5509;
	
	LABEL5511:
	// Checking char
	flag[225] = 'S';
	goto LABEL5510;
	
	LABEL5512:
	// Setting char
	flag[175] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5612;
	
	else 
		goto LABEL5511;
	
	LABEL5513:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5514:
	// Setting char
	flag[28] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5614;
	
	else 
		goto LABEL5513;
	
	LABEL5515:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5516:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5517:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5518:
	// Checking char
	flag[157] = 'D';
	goto LABEL5517;
	
	LABEL5519:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5520:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5521:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5522:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5523:
	// Setting char
	flag[175] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5623;
	
	else 
		goto LABEL5522;
	
	LABEL5524:
	// Checking char
	flag[140] = '%';
	goto LABEL5424;
	
	LABEL5525:
	// Setting char
	flag[202] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5425;
	
	else 
		goto LABEL5524;
	
	LABEL5526:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5527:
	// Checking char
	flag[229] = 'I';
	goto LABEL5526;
	
	LABEL5528:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5529:
	// Checking char
	flag[189] = 'q';
	goto LABEL5528;
	
	LABEL5530:
	// Setting char
	flag[214] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5430;
	
	else 
		goto LABEL5630;
	
	LABEL5531:
	// Setting char
	flag[223] = 'j';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5431;
	
	else if (r == 1)
		goto LABEL5631;
	
	else 
		goto LABEL5530;
	
	LABEL5532:
	// Checking char
	flag[154] = 'N';
	goto LABEL5531;
	
	LABEL5533:
	// Setting char
	flag[102] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5633;
	
	else 
		goto LABEL5534;
	
	LABEL5534:
	// Checking char
	flag[225] = ',';
	goto LABEL5634;
	
	LABEL5535:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5536:
	// Checking char
	flag[128] = 'Q';
	goto LABEL5636;
	
	LABEL5537:
	// Setting char
	flag[228] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5637;
	
	else 
		goto LABEL5536;
	
	LABEL5538:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5539:
	// Setting char
	flag[67] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5639;
	
	else 
		goto LABEL5538;
	
	LABEL5540:
	// Checking char
	flag[123] = '-';
	goto LABEL5539;
	
	LABEL5541:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5542:
	// Setting char
	flag[235] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5642;
	
	else if (r == 1)
		goto LABEL5543;
	
	else 
		goto LABEL5541;
	
	LABEL5543:
	// Checking char
	flag[214] = 'F';
	goto LABEL5544;
	
	LABEL5544:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5545:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5546:
	// Checking char
	flag[219] = '?';
	goto LABEL5545;
	
	LABEL5547:
	// Checking char
	flag[235] = '2';
	goto LABEL5647;
	
	LABEL5548:
	// Setting char
	flag[121] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5648;
	
	else 
		goto LABEL5547;
	
	LABEL5549:
	// Checking char
	flag[221] = 'H';
	goto LABEL5548;
	
	LABEL5550:
	// Checking char
	flag[119] = '#';
	goto LABEL5549;
	
	LABEL5551:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5552:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5553:
	// Setting char
	flag[126] = '1';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5653;
	
	else if (r == 1)
		goto LABEL5554;
	
	else 
		goto LABEL5552;
	
	LABEL5554:
	// Checking char
	flag[55] = '8';
	goto LABEL5654;
	
	LABEL5555:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5556:
	// Checking char
	flag[66] = 'S';
	goto LABEL5656;
	
	LABEL5557:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5558:
	// Checking char
	flag[102] = 'W';
	goto LABEL5557;
	
	LABEL5559:
	// Setting char
	flag[100] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5659;
	
	else 
		goto LABEL5558;
	
	LABEL5560:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5561:
	// Setting char
	flag[214] = 'B';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5661;
	
	else if (r == 1)
		goto LABEL5562;
	
	else 
		goto LABEL5560;
	
	LABEL5562:
	// Checking char
	flag[102] = '=';
	goto LABEL5662;
	
	LABEL5563:
	// Checking char
	flag[158] = '8';
	goto LABEL5663;
	
	LABEL5564:
	// Setting char
	flag[167] = '3';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5464;
	
	else if (r == 1)
		goto LABEL5664;
	
	else 
		goto LABEL5563;
	
	LABEL5565:
	// Setting char
	flag[29] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5665;
	
	else 
		goto LABEL5564;
	
	LABEL5566:
	// Checking char
	flag[82] = 'K';
	goto LABEL5567;
	
	LABEL5567:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5568:
	// Checking char
	flag[230] = 'n';
	goto LABEL5668;
	
	LABEL5569:
	// Setting char
	flag[119] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5469;
	
	else 
		goto LABEL5568;
	
	LABEL5570:
	// Checking char
	flag[39] = 'L';
	goto LABEL5569;
	
	LABEL5571:
	// Checking char
	flag[200] = 'N';
	goto LABEL5570;
	
	LABEL5572:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5573:
	// Checking char
	flag[72] = ';';
	goto LABEL5673;
	
	LABEL5574:
	// Checking char
	flag[171] = '7';
	goto LABEL5573;
	
	LABEL5575:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5576:
	// Checking char
	flag[166] = 'M';
	goto LABEL5676;
	
	LABEL5577:
	// Checking char
	flag[202] = 'D';
	goto LABEL5677;
	
	LABEL5578:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5579:
	// Checking char
	flag[169] = 't';
	goto LABEL5580;
	
	LABEL5580:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5581:
	// Checking char
	flag[104] = '$';
	goto LABEL5582;
	
	LABEL5582:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5583:
	// Checking char
	flag[198] = 'r';
	goto LABEL5683;
	
	LABEL5584:
	// Setting char
	flag[163] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5484;
	
	else 
		goto LABEL5583;
	
	LABEL5585:
	// Checking char
	flag[202] = '~';
	goto LABEL5584;
	
	LABEL5586:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5587:
	// Checking char
	flag[116] = 'J';
	goto LABEL5687;
	
	LABEL5588:
	// Checking char
	flag[19] = '3';
	goto LABEL5688;
	
	LABEL5589:
	// Checking char
	flag[7] = ')';
	goto LABEL5689;
	
	LABEL5590:
	// Checking char
	flag[219] = '(';
	goto LABEL5690;
	
	LABEL5591:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5592:
	// Checking char
	flag[17] = 'o';
	goto LABEL5591;
	
	LABEL5593:
	// Setting char
	flag[92] = 'D';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5693;
	
	else if (r == 1)
		goto LABEL5594;
	
	else 
		goto LABEL5592;
	
	LABEL5594:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5595:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5596:
	// Checking char
	flag[227] = '_';
	goto LABEL5597;
	
	LABEL5597:
	// Checking char
	flag[139] = 'e';
	goto LABEL5697;
	
	LABEL5598:
	// Checking char
	flag[68] = 't';
	goto LABEL5599;
	
	LABEL5599:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5600:
	// Checking char
	flag[238] = '4';
	goto LABEL5700;
	
	LABEL5601:
	// Checking char
	flag[71] = '`';
	goto LABEL5701;
	
	LABEL5602:
	// Checking char
	flag[28] = '2';
	goto LABEL5702;
	
	LABEL5603:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5604:
	// Checking char
	flag[86] = 'C';
	goto LABEL5605;
	
	LABEL5605:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5606:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5607:
	// Checking char
	flag[109] = 'P';
	goto LABEL5606;
	
	LABEL5608:
	// Setting char
	flag[93] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5708;
	
	else 
		goto LABEL5607;
	
	LABEL5609:
	// Checking char
	flag[228] = 'U';
	goto LABEL5610;
	
	LABEL5610:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5611:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5612:
	// Setting char
	flag[211] = 'f';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5712;
	
	else if (r == 1)
		goto LABEL5613;
	
	else 
		goto LABEL5611;
	
	LABEL5613:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5614:
	// Checking char
	flag[29] = '@';
	goto LABEL5615;
	
	LABEL5615:
	// Checking char
	flag[233] = 'W';
	goto LABEL5515;
	
	LABEL5616:
	// Checking char
	flag[121] = '_';
	goto LABEL5617;
	
	LABEL5617:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5618:
	// Checking char
	flag[143] = '_';
	goto LABEL5518;
	
	LABEL5619:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5620:
	// Checking char
	flag[29] = 'V';
	goto LABEL5619;
	
	LABEL5621:
	// Checking char
	flag[180] = '8';
	goto LABEL5521;
	
	LABEL5622:
	// Checking char
	flag[86] = '*';
	goto LABEL5621;
	
	LABEL5623:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5624:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5625:
	// Setting char
	flag[127] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5525;
	
	else 
		goto LABEL5725;
	
	LABEL5626:
	// Checking char
	flag[33] = '"';
	goto LABEL5625;
	
	LABEL5627:
	// Checking char
	flag[13] = '}';
	goto LABEL5626;
	
	LABEL5628:
	// Checking char
	flag[139] = '8';
	goto LABEL5627;
	
	LABEL5629:
	// Setting char
	flag[160] = '.';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5529;
	
	else if (r == 1)
		goto LABEL5729;
	
	else 
		goto LABEL5628;
	
	LABEL5630:
	// Setting char
	flag[31] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5730;
	
	else 
		goto LABEL5629;
	
	LABEL5631:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5632:
	// Checking char
	flag[28] = 'g';
	goto LABEL5732;
	
	LABEL5633:
	// Checking char
	flag[139] = '1';
	goto LABEL5632;
	
	LABEL5634:
	// Setting char
	flag[66] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5734;
	
	else 
		goto LABEL5635;
	
	LABEL5635:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5636:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5637:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5638:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5639:
	// Checking char
	flag[111] = ':';
	goto LABEL5638;
	
	LABEL5640:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5641:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5642:
	// Setting char
	flag[85] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5742;
	
	else 
		goto LABEL5641;
	
	LABEL5643:
	// Checking char
	flag[25] = '%';
	goto LABEL5644;
	
	LABEL5644:
	// Checking char
	flag[26] = '3';
	goto LABEL5744;
	
	LABEL5645:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5646:
	// Setting char
	flag[194] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5546;
	
	else 
		goto LABEL5746;
	
	LABEL5647:
	// Setting char
	flag[102] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5747;
	
	else 
		goto LABEL5646;
	
	LABEL5648:
	// Checking char
	flag[60] = 'L';
	goto LABEL5748;
	
	LABEL5649:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5650:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5651:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5652:
	// Checking char
	flag[48] = 'A';
	goto LABEL5752;
	
	LABEL5653:
	// Setting char
	flag[143] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5753;
	
	else 
		goto LABEL5652;
	
	LABEL5654:
	// Setting char
	flag[213] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5754;
	
	else 
		goto LABEL5655;
	
	LABEL5655:
	// Checking char
	flag[24] = ':';
	goto LABEL5755;
	
	LABEL5656:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5657:
	// Checking char
	flag[238] = 'o';
	goto LABEL5658;
	
	LABEL5658:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5659:
	// Setting char
	flag[228] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5759;
	
	else 
		goto LABEL5660;
	
	LABEL5660:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5661:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5662:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5663:
	// Checking char
	flag[83] = 'j';
	goto LABEL5763;
	
	LABEL5664:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5665:
	// Setting char
	flag[149] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5765;
	
	else 
		goto LABEL5666;
	
	LABEL5666:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5667:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5668:
	// Checking char
	flag[181] = ';';
	goto LABEL5768;
	
	LABEL5669:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5670:
	// Checking char
	flag[101] = '`';
	goto LABEL5669;
	
	LABEL5671:
	// Setting char
	flag[49] = 'Q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5571;
	
	else if (r == 1)
		goto LABEL5771;
	
	else 
		goto LABEL5670;
	
	LABEL5672:
	// Setting char
	flag[197] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5572;
	
	else 
		goto LABEL5671;
	
	LABEL5673:
	// Setting char
	flag[106] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5773;
	
	else 
		goto LABEL5672;
	
	LABEL5674:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5675:
	// Checking char
	flag[25] = 'O';
	goto LABEL5674;
	
	LABEL5676:
	// Setting char
	flag[37] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5776;
	
	else 
		goto LABEL5675;
	
	LABEL5677:
	// Checking char
	flag[165] = 'x';
	goto LABEL5678;
	
	LABEL5678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5679:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5680:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5681:
	// Checking char
	flag[59] = '0';
	goto LABEL5581;
	
	LABEL5682:
	// Setting char
	flag[236] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5782;
	
	else 
		goto LABEL5681;
	
	LABEL5683:
	// Checking char
	flag[34] = 'x';
	goto LABEL5682;
	
	LABEL5684:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5685:
	// Checking char
	flag[132] = 'E';
	goto LABEL5585;
	
	LABEL5686:
	// Checking char
	flag[211] = 'v';
	goto LABEL5586;
	
	LABEL5687:
	// Checking char
	flag[177] = 'L';
	goto LABEL5686;
	
	LABEL5688:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5689:
	// Checking char
	flag[143] = 'y';
	goto LABEL5789;
	
	LABEL5690:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5691:
	// Checking char
	flag[169] = 'f';
	goto LABEL5692;
	
	LABEL5692:
	// Checking char
	flag[153] = '/';
	goto LABEL5792;
	
	LABEL5693:
	// Setting char
	flag[126] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5793;
	
	else 
		goto LABEL5694;
	
	LABEL5694:
	// Checking char
	flag[159] = '5';
	goto LABEL5794;
	
	LABEL5695:
	// Checking char
	flag[48] = 'P';
	goto LABEL5795;
	
	LABEL5696:
	// Checking char
	flag[10] = '^';
	goto LABEL5695;
	
	LABEL5697:
	// Setting char
	flag[38] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5797;
	
	else if (r == 1)
		goto LABEL5698;
	
	else 
		goto LABEL5696;
	
	LABEL5698:
	// Checking char
	flag[210] = 'I';
	goto LABEL5798;
	
	LABEL5699:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5700:
	// Checking char
	flag[71] = '^';
	goto LABEL5800;
	
	LABEL5701:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5702:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5703:
	// Setting char
	flag[233] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5603;
	
	else 
		goto LABEL5803;
	
	LABEL5704:
	// Setting char
	flag[147] = '@';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5604;
	
	else if (r == 1)
		goto LABEL5804;
	
	else 
		goto LABEL5703;
	
	LABEL5705:
	// Checking char
	flag[133] = '<';
	goto LABEL5704;
	
	LABEL5706:
	// Setting char
	flag[7] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5806;
	
	else 
		goto LABEL5705;
	
	LABEL5707:
	// Setting char
	flag[108] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5807;
	
	else 
		goto LABEL5706;
	
	LABEL5708:
	// Setting char
	flag[75] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5808;
	
	else 
		goto LABEL5707;
	
	LABEL5709:
	// Checking char
	flag[248] = '_';
	goto LABEL5809;
	
	LABEL5710:
	// Checking char
	flag[214] = 'b';
	goto LABEL5709;
	
	LABEL5711:
	// Checking char
	flag[144] = ':';
	goto LABEL5710;
	
	LABEL5712:
	// Setting char
	flag[36] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5713;
	
	else 
		goto LABEL5711;
	
	LABEL5713:
	// Checking char
	flag[159] = '|';
	goto LABEL5813;
	
	LABEL5714:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5715:
	// Checking char
	flag[132] = 'j';
	goto LABEL5714;
	
	LABEL5716:
	// Setting char
	flag[105] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5616;
	
	else 
		goto LABEL5715;
	
	LABEL5717:
	// Setting char
	flag[215] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5817;
	
	else 
		goto LABEL5716;
	
	LABEL5718:
	// Setting char
	flag[153] = ',';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5618;
	
	else if (r == 1)
		goto LABEL5818;
	
	else 
		goto LABEL5717;
	
	LABEL5719:
	// Checking char
	flag[65] = 'C';
	goto LABEL5718;
	
	LABEL5720:
	// Setting char
	flag[34] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5620;
	
	else 
		goto LABEL5719;
	
	LABEL5721:
	// Checking char
	flag[193] = 'x';
	goto LABEL5720;
	
	LABEL5722:
	// Setting char
	flag[5] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5622;
	
	else 
		goto LABEL5721;
	
	LABEL5723:
	// Setting char
	flag[77] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5823;
	
	else 
		goto LABEL5722;
	
	LABEL5724:
	// Setting char
	flag[186] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5624;
	
	else 
		goto LABEL5723;
	
	LABEL5725:
	// Setting char
	flag[208] = '.';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5825;
	
	else if (r == 1)
		goto LABEL5726;
	
	else 
		goto LABEL5724;
	
	LABEL5726:
	// Checking char
	flag[36] = 'z';
	goto LABEL5826;
	
	LABEL5727:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5728:
	// Checking char
	flag[120] = '3';
	goto LABEL5727;
	
	LABEL5729:
	// Setting char
	flag[130] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5829;
	
	else 
		goto LABEL5728;
	
	LABEL5730:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5731:
	// Checking char
	flag[154] = 'u';
	goto LABEL5831;
	
	LABEL5732:
	// Setting char
	flag[53] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5733;
	
	else 
		goto LABEL5731;
	
	LABEL5733:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5734:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5735:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5736:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5737:
	// Checking char
	flag[64] = 'I';
	goto LABEL5736;
	
	LABEL5738:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5739:
	// Checking char
	flag[123] = 'l';
	goto LABEL5738;
	
	LABEL5740:
	// Setting char
	flag[113] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5640;
	
	else 
		goto LABEL5840;
	
	LABEL5741:
	// Checking char
	flag[29] = 'y';
	goto LABEL5740;
	
	LABEL5742:
	// Setting char
	flag[23] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5743;
	
	else 
		goto LABEL5741;
	
	LABEL5743:
	// Setting char
	flag[5] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5643;
	
	else 
		goto LABEL5843;
	
	LABEL5744:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5745:
	// Setting char
	flag[76] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5645;
	
	else 
		goto LABEL5845;
	
	LABEL5746:
	// Setting char
	flag[87] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5846;
	
	else 
		goto LABEL5745;
	
	LABEL5747:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5748:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5749:
	// Checking char
	flag[96] = '0';
	goto LABEL5649;
	
	LABEL5750:
	// Setting char
	flag[149] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5650;
	
	else 
		goto LABEL5749;
	
	LABEL5751:
	// Setting char
	flag[133] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5651;
	
	else 
		goto LABEL5750;
	
	LABEL5752:
	// Setting char
	flag[18] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5852;
	
	else 
		goto LABEL5751;
	
	LABEL5753:
	// Checking char
	flag[246] = 'k';
	goto LABEL5853;
	
	LABEL5754:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5755:
	// Setting char
	flag[99] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5855;
	
	else 
		goto LABEL5756;
	
	LABEL5756:
	// Checking char
	flag[53] = 'L';
	goto LABEL5757;
	
	LABEL5757:
	// Setting char
	flag[26] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5657;
	
	else 
		goto LABEL5857;
	
	LABEL5758:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5759:
	// Setting char
	flag[177] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5859;
	
	else if (r == 1)
		goto LABEL5760;
	
	else 
		goto LABEL5758;
	
	LABEL5760:
	// Checking char
	flag[144] = 'E';
	goto LABEL5761;
	
	LABEL5761:
	// Checking char
	flag[42] = '_';
	goto LABEL5861;
	
	LABEL5762:
	// Checking char
	flag[60] = 'L';
	goto LABEL5862;
	
	LABEL5763:
	// Setting char
	flag[17] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5863;
	
	else if (r == 1)
		goto LABEL5764;
	
	else 
		goto LABEL5762;
	
	LABEL5764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5765:
	// Setting char
	flag[237] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5865;
	
	else 
		goto LABEL5766;
	
	LABEL5766:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5767:
	// Checking char
	flag[142] = '%';
	goto LABEL5667;
	
	LABEL5768:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5769:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5770:
	// Checking char
	flag[74] = '[';
	goto LABEL5870;
	
	LABEL5771:
	// Setting char
	flag[203] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5772;
	
	else 
		goto LABEL5770;
	
	LABEL5772:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5773:
	// Checking char
	flag[206] = 'E';
	goto LABEL5774;
	
	LABEL5774:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5775:
	// Checking char
	flag[199] = '=';
	goto LABEL5875;
	
	LABEL5776:
	// Setting char
	flag[238] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5876;
	
	else if (r == 1)
		goto LABEL5777;
	
	else 
		goto LABEL5775;
	
	LABEL5777:
	// Setting char
	flag[148] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5877;
	
	else 
		goto LABEL5778;
	
	LABEL5778:
	// Checking char
	flag[191] = '/';
	goto LABEL5878;
	
	LABEL5779:
	// Checking char
	flag[231] = 'k';
	goto LABEL5679;
	
	LABEL5780:
	// Setting char
	flag[34] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5680;
	
	else 
		goto LABEL5779;
	
	LABEL5781:
	// Checking char
	flag[87] = '1';
	goto LABEL5780;
	
	LABEL5782:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5783:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5784:
	// Setting char
	flag[171] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5684;
	
	else 
		goto LABEL5783;
	
	LABEL5785:
	// Setting char
	flag[38] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5685;
	
	else 
		goto LABEL5784;
	
	LABEL5786:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5787:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5788:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5789:
	// Setting char
	flag[205] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5889;
	
	else if (r == 1)
		goto LABEL5790;
	
	else 
		goto LABEL5788;
	
	LABEL5790:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5791:
	// Checking char
	flag[245] = '"';
	goto LABEL5691;
	
	LABEL5792:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5793:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5794:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5795:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5796:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5797:
	// Checking char
	flag[230] = '[';
	goto LABEL5796;
	
	LABEL5798:
	// Setting char
	flag[93] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5898;
	
	else 
		goto LABEL5799;
	
	LABEL5799:
	// Setting char
	flag[51] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5699;
	
	else 
		goto LABEL5899;
	
	LABEL5800:
	// Checking char
	flag[68] = 'g';
	goto LABEL5900;
	
	LABEL5801:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5802:
	// Setting char
	flag[27] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5902;
	
	else 
		goto LABEL5801;
	
	LABEL5803:
	// Setting char
	flag[69] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5903;
	
	else 
		goto LABEL5802;
	
	LABEL5804:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5806:
	// Checking char
	flag[246] = '-';
	goto LABEL5906;
	
	LABEL5807:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5808:
	// Checking char
	flag[93] = '|';
	goto LABEL5908;
	
	LABEL5809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5810:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5811:
	// Checking char
	flag[20] = '=';
	goto LABEL5812;
	
	LABEL5812:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5813:
	// Checking char
	flag[210] = 'E';
	goto LABEL5913;
	
	LABEL5814:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5815:
	// Checking char
	flag[28] = '7';
	goto LABEL5814;
	
	LABEL5816:
	// Checking char
	flag[5] = 'D';
	goto LABEL5815;
	
	LABEL5817:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5818:
	// Checking char
	flag[129] = 'M';
	goto LABEL5819;
	
	LABEL5819:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5820:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5821:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5822:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5823:
	// Checking char
	flag[124] = 'K';
	goto LABEL5923;
	
	LABEL5824:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5825:
	// Setting char
	flag[243] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5925;
	
	else 
		goto LABEL5824;
	
	LABEL5826:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5827:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5828:
	// Checking char
	flag[79] = '~';
	goto LABEL5827;
	
	LABEL5829:
	// Setting char
	flag[188] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5830;
	
	else 
		goto LABEL5828;
	
	LABEL5830:
	// Checking char
	flag[182] = 'T';
	goto LABEL5930;
	
	LABEL5831:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5832:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5833:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5834:
	// Setting char
	flag[183] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5934;
	
	else 
		goto LABEL5833;
	
	LABEL5835:
	// Setting char
	flag[177] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5735;
	
	else 
		goto LABEL5834;
	
	LABEL5836:
	// Checking char
	flag[196] = '#';
	goto LABEL5835;
	
	LABEL5837:
	// Setting char
	flag[149] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5737;
	
	else if (r == 1)
		goto LABEL5937;
	
	else 
		goto LABEL5836;
	
	LABEL5838:
	// Checking char
	flag[163] = 'g';
	goto LABEL5837;
	
	LABEL5839:
	// Setting char
	flag[29] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5739;
	
	else if (r == 1)
		goto LABEL5939;
	
	else 
		goto LABEL5838;
	
	LABEL5840:
	// Setting char
	flag[169] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5940;
	
	else if (r == 1)
		goto LABEL5841;
	
	else 
		goto LABEL5839;
	
	LABEL5841:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5842:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5843:
	// Setting char
	flag[44] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5943;
	
	else 
		goto LABEL5842;
	
	LABEL5844:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5845:
	// Checking char
	flag[145] = 'f';
	goto LABEL5844;
	
	LABEL5846:
	// Checking char
	flag[202] = 't';
	goto LABEL5946;
	
	LABEL5847:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5848:
	// Setting char
	flag[13] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5948;
	
	else 
		goto LABEL5847;
	
	LABEL5849:
	// Setting char
	flag[158] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5949;
	
	else 
		goto LABEL5848;
	
	LABEL5850:
	// Checking char
	flag[138] = 'u';
	goto LABEL5849;
	
	LABEL5851:
	// Checking char
	flag[98] = '@';
	goto LABEL5850;
	
	LABEL5852:
	// Setting char
	flag[9] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5952;
	
	else 
		goto LABEL5851;
	
	LABEL5853:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5854:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5855:
	// Setting char
	flag[102] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5955;
	
	else 
		goto LABEL5854;
	
	LABEL5856:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5857:
	// Checking char
	flag[88] = 'S';
	goto LABEL5858;
	
	LABEL5858:
	// Checking char
	flag[104] = '5';
	goto LABEL5958;
	
	LABEL5859:
	// Checking char
	flag[114] = '`';
	goto LABEL5860;
	
	LABEL5860:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5861:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5862:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5863:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5864:
	// Checking char
	flag[199] = '<';
	goto LABEL5964;
	
	LABEL5865:
	// Setting char
	flag[173] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5965;
	
	else 
		goto LABEL5864;
	
	LABEL5866:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5867:
	// Setting char
	flag[14] = '>';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5767;
	
	else if (r == 1)
		goto LABEL5967;
	
	else 
		goto LABEL5866;
	
	LABEL5868:
	// Checking char
	flag[8] = 'c';
	goto LABEL5867;
	
	LABEL5869:
	// Setting char
	flag[117] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5769;
	
	else if (r == 1)
		goto LABEL5969;
	
	else 
		goto LABEL5868;
	
	LABEL5870:
	// Setting char
	flag[14] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5871;
	
	else 
		goto LABEL5869;
	
	LABEL5871:
	// Setting char
	flag[120] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5971;
	
	else 
		goto LABEL5872;
	
	LABEL5872:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5873:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5874:
	// Checking char
	flag[113] = '}';
	goto LABEL5974;
	
	LABEL5875:
	// Checking char
	flag[158] = 'F';
	goto LABEL5874;
	
	LABEL5876:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5877:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5878:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5879:
	// Checking char
	flag[30] = 'a';
	goto LABEL5880;
	
	LABEL5880:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5881:
	// Setting char
	flag[159] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5781;
	
	else 
		goto LABEL5981;
	
	LABEL5882:
	// Setting char
	flag[221] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5982;
	
	else 
		goto LABEL5881;
	
	LABEL5883:
	// Checking char
	flag[230] = 'k';
	goto LABEL5882;
	
	LABEL5884:
	// Setting char
	flag[73] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5984;
	
	else 
		goto LABEL5883;
	
	LABEL5885:
	// Setting char
	flag[61] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5785;
	
	else if (r == 1)
		goto LABEL5886;
	
	else 
		goto LABEL5884;
	
	LABEL5886:
	// Checking char
	flag[63] = '6';
	goto LABEL5786;
	
	LABEL5887:
	// Checking char
	flag[180] = 'Z';
	goto LABEL5787;
	
	LABEL5888:
	// Checking char
	flag[208] = 'p';
	goto LABEL5887;
	
	LABEL5889:
	// Setting char
	flag[132] = 'N';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5989;
	
	else if (r == 1)
		goto LABEL5890;
	
	else 
		goto LABEL5888;
	
	LABEL5890:
	// Checking char
	flag[63] = 'g';
	goto LABEL5891;
	
	LABEL5891:
	// Setting char
	flag[98] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5791;
	
	else if (r == 1)
		goto LABEL5991;
	
	else 
		goto LABEL5892;
	
	LABEL5892:
	// Checking char
	flag[212] = 'x';
	goto LABEL5893;
	
	LABEL5893:
	// Checking char
	flag[144] = '"';
	goto LABEL5894;
	
	LABEL5894:
	// Checking char
	flag[17] = 'J';
	goto LABEL5994;
	
	LABEL5895:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5896:
	// Setting char
	flag[58] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5996;
	
	else 
		goto LABEL5895;
	
	LABEL5897:
	// Setting char
	flag[168] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5997;
	
	else 
		goto LABEL5896;
	
	LABEL5898:
	// Setting char
	flag[241] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5998;
	
	else 
		goto LABEL5897;
	
	LABEL5899:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5900:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5901:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5902:
	// Checking char
	flag[68] = '"';
	goto LABEL5901;
	
	LABEL5903:
	// Checking char
	flag[27] = '_';
	goto LABEL6003;
	
	LABEL5904:
	// Checking char
	flag[239] = 'o';
	goto LABEL6004;
	
	LABEL5905:
	// Setting char
	flag[121] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5805;
	
	else 
		goto LABEL5904;
	
	LABEL5906:
	// Checking char
	flag[222] = 't';
	goto LABEL5905;
	
	LABEL5907:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5908:
	// Setting char
	flag[57] = '3';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6008;
	
	else if (r == 1)
		goto LABEL5909;
	
	else 
		goto LABEL5907;
	
	LABEL5909:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5910:
	// Checking char
	flag[106] = '*';
	goto LABEL5810;
	
	LABEL5911:
	// Setting char
	flag[22] = '?';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5811;
	
	else if (r == 1)
		goto LABEL6011;
	
	else 
		goto LABEL5910;
	
	LABEL5912:
	// Setting char
	flag[15] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6012;
	
	else 
		goto LABEL5911;
	
	LABEL5913:
	// Setting char
	flag[144] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6013;
	
	else 
		goto LABEL5912;
	
	LABEL5914:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5915:
	// Checking char
	flag[220] = 'Q';
	goto LABEL5914;
	
	LABEL5916:
	// Setting char
	flag[71] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5816;
	
	else 
		goto LABEL5915;
	
	LABEL5917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5918:
	// Setting char
	flag[34] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5919;
	
	else 
		goto LABEL5917;
	
	LABEL5919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5920:
	// Checking char
	flag[111] = 'Z';
	goto LABEL5820;
	
	LABEL5921:
	// Setting char
	flag[5] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5821;
	
	else 
		goto LABEL5920;
	
	LABEL5922:
	// Setting char
	flag[178] = ':';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5822;
	
	else if (r == 1)
		goto LABEL6022;
	
	else 
		goto LABEL5921;
	
	LABEL5923:
	// Checking char
	flag[222] = 'K';
	goto LABEL5922;
	
	LABEL5924:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5925:
	// Setting char
	flag[20] = 'Y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6025;
	
	else if (r == 1)
		goto LABEL5926;
	
	else 
		goto LABEL5924;
	
	LABEL5926:
	// Checking char
	flag[0] = '^';
	goto LABEL5927;
	
	LABEL5927:
	// Setting char
	flag[162] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6027;
	
	else 
		goto LABEL5928;
	
	LABEL5928:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5929:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5930:
	// Setting char
	flag[183] = 'W';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6030;
	
	else if (r == 1)
		goto LABEL5931;
	
	else 
		goto LABEL5929;
	
	LABEL5931:
	// Setting char
	flag[160] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6031;
	
	else 
		goto LABEL5932;
	
	LABEL5932:
	// Setting char
	flag[200] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5832;
	
	else 
		goto LABEL6032;
	
	LABEL5933:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5934:
	// Setting char
	flag[177] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5935;
	
	else 
		goto LABEL5933;
	
	LABEL5935:
	// Checking char
	flag[204] = 'o';
	goto LABEL6035;
	
	LABEL5936:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5937:
	// Setting char
	flag[237] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6037;
	
	else 
		goto LABEL5936;
	
	LABEL5938:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5939:
	// Checking char
	flag[28] = 'h';
	goto LABEL6039;
	
	LABEL5940:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5941:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5942:
	// Setting char
	flag[205] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6042;
	
	else 
		goto LABEL5941;
	
	LABEL5943:
	// Setting char
	flag[180] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6043;
	
	else if (r == 1)
		goto LABEL5944;
	
	else 
		goto LABEL5942;
	
	LABEL5944:
	// Checking char
	flag[238] = 'C';
	goto LABEL6044;
	
	LABEL5945:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5946:
	// Setting char
	flag[186] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6046;
	
	else 
		goto LABEL5947;
	
	LABEL5947:
	// Checking char
	flag[69] = '?';
	goto LABEL6047;
	
	LABEL5948:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5949:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5950:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5952:
	// Setting char
	flag[104] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6052;
	
	else 
		goto LABEL5953;
	
	LABEL5953:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5954:
	// Checking char
	flag[24] = '8';
	goto LABEL6054;
	
	LABEL5955:
	// Setting char
	flag[149] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6055;
	
	else if (r == 1)
		goto LABEL5956;
	
	else 
		goto LABEL5954;
	
	LABEL5956:
	// Setting char
	flag[166] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5856;
	
	else 
		goto LABEL6056;
	
	LABEL5957:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5958:
	// Checking char
	flag[202] = 'e';
	goto LABEL6058;
	
	LABEL5959:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5960:
	// Setting char
	flag[237] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6060;
	
	else 
		goto LABEL5959;
	
	LABEL5961:
	// Checking char
	flag[142] = 'z';
	goto LABEL5960;
	
	LABEL5962:
	// Setting char
	flag[248] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6062;
	
	else 
		goto LABEL5961;
	
	LABEL5963:
	// Setting char
	flag[173] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6063;
	
	else 
		goto LABEL5962;
	
	LABEL5964:
	// Setting char
	flag[68] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6064;
	
	else 
		goto LABEL5963;
	
	LABEL5965:
	// Checking char
	flag[229] = 'J';
	goto LABEL6065;
	
	LABEL5966:
	// Checking char
	flag[198] = 'l';
	goto LABEL6066;
	
	LABEL5967:
	// Setting char
	flag[67] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5968;
	
	else 
		goto LABEL5966;
	
	LABEL5968:
	// Checking char
	flag[59] = 'm';
	goto LABEL6068;
	
	LABEL5969:
	// Setting char
	flag[194] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6069;
	
	else 
		goto LABEL5970;
	
	LABEL5970:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5971:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5973:
	// Setting char
	flag[25] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5873;
	
	else 
		goto LABEL5972;
	
	LABEL5974:
	// Setting char
	flag[23] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6074;
	
	else 
		goto LABEL5975;
	
	LABEL5975:
	// Checking char
	flag[89] = '^';
	goto LABEL5976;
	
	LABEL5976:
	// Checking char
	flag[160] = '6';
	goto LABEL6076;
	
	LABEL5977:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5978:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5979:
	// Setting char
	flag[128] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5879;
	
	else if (r == 1)
		goto LABEL6079;
	
	else 
		goto LABEL5978;
	
	LABEL5980:
	// Setting char
	flag[56] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6080;
	
	else 
		goto LABEL5979;
	
	LABEL5981:
	// Setting char
	flag[111] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6081;
	
	else 
		goto LABEL5980;
	
	LABEL5982:
	// Checking char
	flag[75] = 'N';
	goto LABEL6082;
	
	LABEL5983:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5984:
	// Checking char
	flag[203] = 'r';
	goto LABEL6084;
	
	LABEL5985:
	// Checking char
	flag[124] = '&';
	goto LABEL5885;
	
	LABEL5986:
	// Checking char
	flag[121] = 'r';
	goto LABEL5985;
	
	LABEL5987:
	// Setting char
	flag[93] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5988;
	
	else 
		goto LABEL5986;
	
	LABEL5988:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5989:
	// Setting char
	flag[244] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6089;
	
	else 
		goto LABEL5990;
	
	LABEL5990:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5991:
	// Checking char
	flag[168] = '{';
	goto LABEL6091;
	
	LABEL5992:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5993:
	// Checking char
	flag[236] = 'h';
	goto LABEL5992;
	
	LABEL5994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5995:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5996:
	// Setting char
	flag[241] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6096;
	
	else 
		goto LABEL5995;
	
	LABEL5997:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL5998:
	// Setting char
	flag[229] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6098;
	
	else 
		goto LABEL5999;
	
	LABEL5999:
	// Checking char
	flag[222] = 'i';
	goto LABEL6099;
	
	LABEL6000:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6001:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6002:
	// Setting char
	flag[179] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6102;
	
	else 
		goto LABEL6001;
	
	LABEL6003:
	// Checking char
	flag[89] = 'o';
	goto LABEL6002;
	
	LABEL6004:
	// Checking char
	flag[171] = 'B';
	goto LABEL6005;
	
	LABEL6005:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6006:
	// Checking char
	flag[196] = '?';
	goto LABEL6106;
	
	LABEL6007:
	// Setting char
	flag[25] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6107;
	
	else 
		goto LABEL6006;
	
	LABEL6008:
	// Setting char
	flag[0] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6108;
	
	else 
		goto LABEL6007;
	
	LABEL6009:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6010:
	// Setting char
	flag[56] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6110;
	
	else 
		goto LABEL6009;
	
	LABEL6011:
	// Setting char
	flag[46] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6111;
	
	else 
		goto LABEL6010;
	
	LABEL6012:
	// Checking char
	flag[75] = '+';
	goto LABEL6112;
	
	LABEL6013:
	// Checking char
	flag[181] = 'W';
	goto LABEL6113;
	
	LABEL6014:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6015:
	// Setting char
	flag[81] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6115;
	
	else 
		goto LABEL6014;
	
	LABEL6016:
	// Setting char
	flag[115] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5916;
	
	else 
		goto LABEL6015;
	
	LABEL6017:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6018:
	// Setting char
	flag[104] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5918;
	
	else 
		goto LABEL6017;
	
	LABEL6019:
	// Checking char
	flag[175] = '+';
	goto LABEL6119;
	
	LABEL6020:
	// Checking char
	flag[22] = 'h';
	goto LABEL6019;
	
	LABEL6021:
	// Checking char
	flag[44] = 'I';
	goto LABEL6020;
	
	LABEL6022:
	// Setting char
	flag[163] = 'd';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6122;
	
	else if (r == 1)
		goto LABEL6023;
	
	else 
		goto LABEL6021;
	
	LABEL6023:
	// Checking char
	flag[63] = 'q';
	goto LABEL6123;
	
	LABEL6024:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6025:
	// Setting char
	flag[1] = 'R';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6125;
	
	else if (r == 1)
		goto LABEL6026;
	
	else 
		goto LABEL6024;
	
	LABEL6026:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6027:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6028:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6029:
	// Setting char
	flag[85] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6129;
	
	else 
		goto LABEL6028;
	
	LABEL6030:
	// Setting char
	flag[130] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6130;
	
	else 
		goto LABEL6029;
	
	LABEL6031:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6032:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6033:
	// Checking char
	flag[14] = '}';
	goto LABEL6133;
	
	LABEL6034:
	// Checking char
	flag[107] = 'V';
	goto LABEL6033;
	
	LABEL6035:
	// Setting char
	flag[3] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6135;
	
	else if (r == 1)
		goto LABEL6036;
	
	else 
		goto LABEL6034;
	
	LABEL6036:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6037:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6038:
	// Checking char
	flag[240] = 'q';
	goto LABEL5938;
	
	LABEL6039:
	// Setting char
	flag[193] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6139;
	
	else if (r == 1)
		goto LABEL6040;
	
	else 
		goto LABEL6038;
	
	LABEL6040:
	// Checking char
	flag[193] = 'c';
	goto LABEL6041;
	
	LABEL6041:
	// Checking char
	flag[106] = 'V';
	goto LABEL6141;
	
	LABEL6042:
	// Checking char
	flag[199] = 'a';
	goto LABEL6142;
	
	LABEL6043:
	// Checking char
	flag[233] = '-';
	goto LABEL6143;
	
	LABEL6044:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6045:
	// Setting char
	flag[185] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5945;
	
	else 
		goto LABEL6145;
	
	LABEL6046:
	// Checking char
	flag[155] = 'C';
	goto LABEL6045;
	
	LABEL6047:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6048:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6049:
	// Setting char
	flag[134] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6149;
	
	else 
		goto LABEL6048;
	
	LABEL6050:
	// Setting char
	flag[43] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5950;
	
	else if (r == 1)
		goto LABEL6150;
	
	else 
		goto LABEL6049;
	
	LABEL6051:
	// Setting char
	flag[168] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5951;
	
	else 
		goto LABEL6050;
	
	LABEL6052:
	// Setting char
	flag[182] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6152;
	
	else if (r == 1)
		goto LABEL6053;
	
	else 
		goto LABEL6051;
	
	LABEL6053:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6054:
	// Checking char
	flag[158] = 'f';
	goto LABEL6154;
	
	LABEL6055:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6056:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6057:
	// Setting char
	flag[117] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5957;
	
	else 
		goto LABEL6157;
	
	LABEL6058:
	// Setting char
	flag[29] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6158;
	
	else if (r == 1)
		goto LABEL6059;
	
	else 
		goto LABEL6057;
	
	LABEL6059:
	// Checking char
	flag[203] = '.';
	goto LABEL6159;
	
	LABEL6060:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6061:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6062:
	// Setting char
	flag[157] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6162;
	
	else 
		goto LABEL6061;
	
	LABEL6063:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6064:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6065:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6066:
	// Checking char
	flag[50] = '%';
	goto LABEL6166;
	
	LABEL6067:
	// Checking char
	flag[19] = 'D';
	goto LABEL6167;
	
	LABEL6068:
	// Checking char
	flag[142] = 'm';
	goto LABEL6067;
	
	LABEL6069:
	// Setting char
	flag[218] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6169;
	
	else 
		goto LABEL6070;
	
	LABEL6070:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6071:
	// Checking char
	flag[97] = 'Z';
	goto LABEL6171;
	
	LABEL6072:
	// Setting char
	flag[25] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6172;
	
	else 
		goto LABEL6071;
	
	LABEL6073:
	// Setting char
	flag[244] = '?';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5973;
	
	else if (r == 1)
		goto LABEL6173;
	
	else 
		goto LABEL6072;
	
	LABEL6074:
	// Setting char
	flag[95] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6174;
	
	else 
		goto LABEL6073;
	
	LABEL6075:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6076:
	// Setting char
	flag[148] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6077;
	
	else 
		goto LABEL6075;
	
	LABEL6077:
	// Setting char
	flag[42] = '2';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5977;
	
	else if (r == 1)
		goto LABEL6177;
	
	else 
		goto LABEL6078;
	
	LABEL6078:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6079:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6080:
	// Checking char
	flag[2] = 'c';
	goto LABEL6180;
	
	LABEL6081:
	// Checking char
	flag[12] = '|';
	goto LABEL6181;
	
	LABEL6082:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6083:
	// Checking char
	flag[87] = 'C';
	goto LABEL5983;
	
	LABEL6084:
	// Checking char
	flag[168] = ')';
	goto LABEL6083;
	
	LABEL6085:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6086:
	// Setting char
	flag[112] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6186;
	
	else 
		goto LABEL6085;
	
	LABEL6087:
	// Setting char
	flag[115] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL5987;
	
	else 
		goto LABEL6086;
	
	LABEL6088:
	// Setting char
	flag[150] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6188;
	
	else 
		goto LABEL6087;
	
	LABEL6089:
	// Setting char
	flag[35] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6090;
	
	else 
		goto LABEL6088;
	
	LABEL6090:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6091:
	// Setting char
	flag[67] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6191;
	
	else 
		goto LABEL6092;
	
	LABEL6092:
	// Setting char
	flag[248] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6192;
	
	else 
		goto LABEL6093;
	
	LABEL6093:
	// Setting char
	flag[31] = 'R';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL5993;
	
	else if (r == 1)
		goto LABEL6193;
	
	else 
		goto LABEL6094;
	
	LABEL6094:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6095:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6096:
	// Setting char
	flag[90] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6196;
	
	else 
		goto LABEL6097;
	
	LABEL6097:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6098:
	// Checking char
	flag[155] = '2';
	goto LABEL6198;
	
	LABEL6099:
	// Checking char
	flag[96] = 'e';
	goto LABEL6199;
	
	LABEL6100:
	// Checking char
	flag[137] = 'T';
	goto LABEL6000;
	
	LABEL6101:
	// Checking char
	flag[128] = 'D';
	goto LABEL6100;
	
	LABEL6102:
	// Checking char
	flag[111] = 'D';
	goto LABEL6101;
	
	LABEL6103:
	// Checking char
	flag[71] = 'D';
	goto LABEL6203;
	
	LABEL6104:
	// Checking char
	flag[159] = 'Y';
	goto LABEL6103;
	
	LABEL6105:
	// Setting char
	flag[122] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6205;
	
	else 
		goto LABEL6104;
	
	LABEL6106:
	// Setting char
	flag[218] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6206;
	
	else 
		goto LABEL6105;
	
	LABEL6107:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6108:
	// Setting char
	flag[44] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6208;
	
	else 
		goto LABEL6109;
	
	LABEL6109:
	// Checking char
	flag[104] = ']';
	goto LABEL6209;
	
	LABEL6110:
	// Checking char
	flag[166] = '3';
	goto LABEL6210;
	
	LABEL6111:
	// Checking char
	flag[18] = 'Q';
	goto LABEL6211;
	
	LABEL6112:
	// Checking char
	flag[54] = '{';
	goto LABEL6212;
	
	LABEL6113:
	// Checking char
	flag[42] = '0';
	goto LABEL6114;
	
	LABEL6114:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6115:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6116:
	// Setting char
	flag[109] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6016;
	
	else 
		goto LABEL6216;
	
	LABEL6117:
	// Checking char
	flag[43] = 'c';
	goto LABEL6116;
	
	LABEL6118:
	// Setting char
	flag[157] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6018;
	
	else 
		goto LABEL6117;
	
	LABEL6119:
	// Setting char
	flag[82] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6219;
	
	else 
		goto LABEL6118;
	
	LABEL6120:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6121:
	// Checking char
	flag[215] = '[';
	goto LABEL6120;
	
	LABEL6122:
	// Checking char
	flag[41] = 'h';
	goto LABEL6222;
	
	LABEL6123:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6124:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6125:
	// Setting char
	flag[245] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6225;
	
	else 
		goto LABEL6126;
	
	LABEL6126:
	// Checking char
	flag[235] = 'B';
	goto LABEL6226;
	
	LABEL6127:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6128:
	// Checking char
	flag[152] = ';';
	goto LABEL6127;
	
	LABEL6129:
	// Setting char
	flag[152] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6229;
	
	else 
		goto LABEL6128;
	
	LABEL6130:
	// Checking char
	flag[149] = 'B';
	goto LABEL6131;
	
	LABEL6131:
	// Checking char
	flag[155] = 'f';
	goto LABEL6231;
	
	LABEL6132:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6133:
	// Setting char
	flag[146] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6233;
	
	else 
		goto LABEL6132;
	
	LABEL6134:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6135:
	// Setting char
	flag[130] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6235;
	
	else if (r == 1)
		goto LABEL6136;
	
	else 
		goto LABEL6134;
	
	LABEL6136:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6137:
	// Checking char
	flag[84] = 'J';
	goto LABEL6237;
	
	LABEL6138:
	// Checking char
	flag[224] = '@';
	goto LABEL6137;
	
	LABEL6139:
	// Setting char
	flag[239] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6239;
	
	else if (r == 1)
		goto LABEL6140;
	
	else 
		goto LABEL6138;
	
	LABEL6140:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6141:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6142:
	// Checking char
	flag[145] = 'c';
	goto LABEL6242;
	
	LABEL6143:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6144:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6145:
	// Setting char
	flag[196] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6245;
	
	else 
		goto LABEL6144;
	
	LABEL6146:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6147:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6148:
	// Setting char
	flag[229] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6248;
	
	else 
		goto LABEL6147;
	
	LABEL6149:
	// Checking char
	flag[136] = '~';
	goto LABEL6148;
	
	LABEL6150:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6151:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6152:
	// Setting char
	flag[118] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6252;
	
	else 
		goto LABEL6151;
	
	LABEL6153:
	// Checking char
	flag[245] = 'p';
	goto LABEL6253;
	
	LABEL6154:
	// Checking char
	flag[62] = '$';
	goto LABEL6153;
	
	LABEL6155:
	// Checking char
	flag[219] = '`';
	goto LABEL6255;
	
	LABEL6156:
	// Setting char
	flag[70] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6256;
	
	else 
		goto LABEL6155;
	
	LABEL6157:
	// Setting char
	flag[177] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6257;
	
	else 
		goto LABEL6156;
	
	LABEL6158:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6159:
	// Checking char
	flag[43] = 'k';
	goto LABEL6259;
	
	LABEL6160:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6162:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6163:
	// Checking char
	flag[70] = 'C';
	goto LABEL6263;
	
	LABEL6164:
	// Setting char
	flag[76] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6264;
	
	else 
		goto LABEL6163;
	
	LABEL6165:
	// Setting char
	flag[72] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6265;
	
	else 
		goto LABEL6164;
	
	LABEL6166:
	// Checking char
	flag[164] = '~';
	goto LABEL6165;
	
	LABEL6167:
	// Checking char
	flag[83] = 'W';
	goto LABEL6267;
	
	LABEL6168:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6169:
	// Checking char
	flag[129] = 'K';
	goto LABEL6168;
	
	LABEL6170:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6171:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6172:
	// Checking char
	flag[33] = '`';
	goto LABEL6272;
	
	LABEL6173:
	// Checking char
	flag[146] = 'Q';
	goto LABEL6273;
	
	LABEL6174:
	// Setting char
	flag[216] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6274;
	
	else 
		goto LABEL6175;
	
	LABEL6175:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6176:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6177:
	// Checking char
	flag[12] = 'w';
	goto LABEL6176;
	
	LABEL6178:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6179:
	// Checking char
	flag[33] = 'l';
	goto LABEL6178;
	
	LABEL6180:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6181:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6182:
	// Checking char
	flag[87] = 'z';
	goto LABEL6183;
	
	LABEL6183:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6185:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6186:
	// Setting char
	flag[249] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6286;
	
	else if (r == 1)
		goto LABEL6187;
	
	else 
		goto LABEL6185;
	
	LABEL6187:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6188:
	// Setting char
	flag[16] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6288;
	
	else 
		goto LABEL6189;
	
	LABEL6189:
	// Checking char
	flag[46] = 'H';
	goto LABEL6289;
	
	LABEL6190:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6191:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6192:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6193:
	// Checking char
	flag[96] = 'W';
	goto LABEL6194;
	
	LABEL6194:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6195:
	// Checking char
	flag[206] = '=';
	goto LABEL6095;
	
	LABEL6196:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6197:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6198:
	// Setting char
	flag[46] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6298;
	
	else 
		goto LABEL6197;
	
	LABEL6199:
	// Checking char
	flag[205] = 'x';
	goto LABEL6299;
	
	LABEL6200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6201:
	// Setting char
	flag[215] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6301;
	
	else 
		goto LABEL6200;
	
	LABEL6202:
	// Checking char
	flag[83] = '3';
	goto LABEL6201;
	
	LABEL6203:
	// Setting char
	flag[218] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6303;
	
	else 
		goto LABEL6202;
	
	LABEL6204:
	// Checking char
	flag[17] = '}';
	goto LABEL6304;
	
	LABEL6205:
	// Checking char
	flag[196] = 'p';
	goto LABEL6204;
	
	LABEL6206:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6207:
	// Checking char
	flag[51] = ')';
	goto LABEL6307;
	
	LABEL6208:
	// Checking char
	flag[24] = ';';
	goto LABEL6207;
	
	LABEL6209:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6210:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6211:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6212:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6213:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6214:
	// Setting char
	flag[167] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6314;
	
	else 
		goto LABEL6213;
	
	LABEL6215:
	// Checking char
	flag[80] = 'h';
	goto LABEL6214;
	
	LABEL6216:
	// Setting char
	flag[50] = 'Y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6316;
	
	else if (r == 1)
		goto LABEL6217;
	
	else 
		goto LABEL6215;
	
	LABEL6217:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6218:
	// Checking char
	flag[21] = 'h';
	goto LABEL6318;
	
	LABEL6219:
	// Setting char
	flag[43] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6319;
	
	else 
		goto LABEL6218;
	
	LABEL6220:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6221:
	// Setting char
	flag[218] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6121;
	
	else if (r == 1)
		goto LABEL6321;
	
	else 
		goto LABEL6220;
	
	LABEL6222:
	// Setting char
	flag[156] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6223;
	
	else 
		goto LABEL6221;
	
	LABEL6223:
	// Checking char
	flag[78] = 'F';
	goto LABEL6323;
	
	LABEL6224:
	// Setting char
	flag[88] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6124;
	
	else 
		goto LABEL6324;
	
	LABEL6225:
	// Checking char
	flag[188] = 'x';
	goto LABEL6224;
	
	LABEL6226:
	// Checking char
	flag[79] = 'q';
	goto LABEL6326;
	
	LABEL6227:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6228:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6229:
	// Setting char
	flag[52] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6329;
	
	else 
		goto LABEL6230;
	
	LABEL6230:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6231:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6232:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6233:
	// Setting char
	flag[178] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6234;
	
	else 
		goto LABEL6232;
	
	LABEL6234:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6235:
	// Checking char
	flag[178] = 'E';
	goto LABEL6335;
	
	LABEL6236:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6237:
	// Checking char
	flag[192] = 'R';
	goto LABEL6236;
	
	LABEL6238:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6239:
	// Setting char
	flag[85] = 'C';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6339;
	
	else if (r == 1)
		goto LABEL6240;
	
	else 
		goto LABEL6238;
	
	LABEL6240:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6241:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6242:
	// Setting char
	flag[83] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6342;
	
	else 
		goto LABEL6241;
	
	LABEL6243:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6244:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6245:
	// Checking char
	flag[87] = 'u';
	goto LABEL6345;
	
	LABEL6246:
	// Checking char
	flag[161] = '9';
	goto LABEL6146;
	
	LABEL6247:
	// Checking char
	flag[240] = 'e';
	goto LABEL6347;
	
	LABEL6248:
	// Setting char
	flag[79] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6249;
	
	else 
		goto LABEL6247;
	
	LABEL6249:
	// Setting char
	flag[187] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6349;
	
	else 
		goto LABEL6250;
	
	LABEL6250:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6251:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6252:
	// Setting char
	flag[183] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6352;
	
	else 
		goto LABEL6251;
	
	LABEL6253:
	// Setting char
	flag[153] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6353;
	
	else 
		goto LABEL6254;
	
	LABEL6254:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6255:
	// Checking char
	flag[226] = 'e';
	goto LABEL6355;
	
	LABEL6256:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6257:
	// Setting char
	flag[235] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6357;
	
	else 
		goto LABEL6258;
	
	LABEL6258:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6259:
	// Setting char
	flag[184] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6359;
	
	else 
		goto LABEL6260;
	
	LABEL6260:
	// Setting char
	flag[229] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6160;
	
	else 
		goto LABEL6261;
	
	LABEL6261:
	// Setting char
	flag[201] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6161;
	
	else 
		goto LABEL6361;
	
	LABEL6262:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6263:
	// Setting char
	flag[123] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6363;
	
	else 
		goto LABEL6262;
	
	LABEL6264:
	// Checking char
	flag[145] = 'Y';
	goto LABEL6364;
	
	LABEL6265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6267:
	// Checking char
	flag[41] = 'i';
	goto LABEL6266;
	
	LABEL6268:
	// Checking char
	flag[95] = '_';
	goto LABEL6368;
	
	LABEL6269:
	// Checking char
	flag[75] = 'J';
	goto LABEL6268;
	
	LABEL6270:
	// Setting char
	flag[199] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6170;
	
	else 
		goto LABEL6269;
	
	LABEL6271:
	// Setting char
	flag[99] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6371;
	
	else 
		goto LABEL6270;
	
	LABEL6272:
	// Checking char
	flag[165] = 'A';
	goto LABEL6271;
	
	LABEL6273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6274:
	// Checking char
	flag[107] = '}';
	goto LABEL6374;
	
	LABEL6275:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6276:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6277:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6278:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6279:
	// Setting char
	flag[172] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6179;
	
	else 
		goto LABEL6280;
	
	LABEL6280:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6281:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6282:
	// Checking char
	flag[53] = '7';
	goto LABEL6182;
	
	LABEL6283:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6284:
	// Checking char
	flag[8] = ']';
	goto LABEL6184;
	
	LABEL6285:
	// Checking char
	flag[86] = 'L';
	goto LABEL6284;
	
	LABEL6286:
	// Checking char
	flag[219] = '=';
	goto LABEL6386;
	
	LABEL6287:
	// Checking char
	flag[65] = 'Q';
	goto LABEL6387;
	
	LABEL6288:
	// Setting char
	flag[139] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6388;
	
	else 
		goto LABEL6287;
	
	LABEL6289:
	// Checking char
	flag[26] = 'e';
	goto LABEL6290;
	
	LABEL6290:
	// Setting char
	flag[228] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6190;
	
	else if (r == 1)
		goto LABEL6390;
	
	else 
		goto LABEL6291;
	
	LABEL6291:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6292:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6293:
	// Setting char
	flag[26] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6393;
	
	else 
		goto LABEL6292;
	
	LABEL6294:
	// Checking char
	flag[3] = 'x';
	goto LABEL6293;
	
	LABEL6295:
	// Setting char
	flag[191] = '~';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6195;
	
	else if (r == 1)
		goto LABEL6395;
	
	else 
		goto LABEL6294;
	
	LABEL6296:
	// Setting char
	flag[17] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6396;
	
	else 
		goto LABEL6295;
	
	LABEL6297:
	// Setting char
	flag[47] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6397;
	
	else 
		goto LABEL6296;
	
	LABEL6298:
	// Setting char
	flag[158] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6398;
	
	else 
		goto LABEL6297;
	
	LABEL6299:
	// Checking char
	flag[7] = 'p';
	goto LABEL6399;
	
	LABEL6300:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6301:
	// Checking char
	flag[189] = 'j';
	goto LABEL6401;
	
	LABEL6302:
	// Checking char
	flag[49] = 'W';
	goto LABEL6402;
	
	LABEL6303:
	// Setting char
	flag[67] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6403;
	
	else 
		goto LABEL6302;
	
	LABEL6304:
	// Setting char
	flag[190] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6404;
	
	else 
		goto LABEL6305;
	
	LABEL6305:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6306:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6307:
	// Setting char
	flag[211] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6407;
	
	else if (r == 1)
		goto LABEL6308;
	
	else 
		goto LABEL6306;
	
	LABEL6308:
	// Checking char
	flag[190] = 'D';
	goto LABEL6408;
	
	LABEL6309:
	// Checking char
	flag[15] = ';';
	goto LABEL6409;
	
	LABEL6310:
	// Checking char
	flag[37] = '+';
	goto LABEL6309;
	
	LABEL6311:
	// Setting char
	flag[79] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6411;
	
	else 
		goto LABEL6310;
	
	LABEL6312:
	// Checking char
	flag[138] = '%';
	goto LABEL6311;
	
	LABEL6313:
	// Setting char
	flag[216] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6413;
	
	else 
		goto LABEL6312;
	
	LABEL6314:
	// Checking char
	flag[25] = 'n';
	goto LABEL6313;
	
	LABEL6315:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6316:
	// Checking char
	flag[140] = 'y';
	goto LABEL6315;
	
	LABEL6317:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6318:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6319:
	// Checking char
	flag[113] = ':';
	goto LABEL6419;
	
	LABEL6320:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6321:
	// Setting char
	flag[77] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6421;
	
	else 
		goto LABEL6322;
	
	LABEL6322:
	// Checking char
	flag[82] = 'b';
	goto LABEL6422;
	
	LABEL6323:
	// Checking char
	flag[170] = '"';
	goto LABEL6423;
	
	LABEL6324:
	// Checking char
	flag[47] = 'K';
	goto LABEL6325;
	
	LABEL6325:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6326:
	// Setting char
	flag[90] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6426;
	
	else 
		goto LABEL6327;
	
	LABEL6327:
	// Checking char
	flag[158] = 'G';
	goto LABEL6227;
	
	LABEL6328:
	// Setting char
	flag[46] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6228;
	
	else 
		goto LABEL6428;
	
	LABEL6329:
	// Setting char
	flag[152] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6330;
	
	else 
		goto LABEL6328;
	
	LABEL6330:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6331:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6332:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6333:
	// Checking char
	flag[17] = 'c';
	goto LABEL6332;
	
	LABEL6334:
	// Setting char
	flag[66] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6434;
	
	else 
		goto LABEL6333;
	
	LABEL6335:
	// Setting char
	flag[177] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6336;
	
	else 
		goto LABEL6334;
	
	LABEL6336:
	// Setting char
	flag[216] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6436;
	
	else 
		goto LABEL6337;
	
	LABEL6337:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6338:
	// Checking char
	flag[115] = 'u';
	goto LABEL6438;
	
	LABEL6339:
	// Setting char
	flag[56] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6340;
	
	else 
		goto LABEL6338;
	
	LABEL6340:
	// Checking char
	flag[180] = 'J';
	goto LABEL6440;
	
	LABEL6341:
	// Checking char
	flag[187] = '~';
	goto LABEL6441;
	
	LABEL6342:
	// Checking char
	flag[0] = '-';
	goto LABEL6341;
	
	LABEL6343:
	// Checking char
	flag[179] = 'F';
	goto LABEL6243;
	
	LABEL6344:
	// Setting char
	flag[30] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6244;
	
	else if (r == 1)
		goto LABEL6444;
	
	else 
		goto LABEL6343;
	
	LABEL6345:
	// Checking char
	flag[19] = '_';
	goto LABEL6344;
	
	LABEL6346:
	// Checking char
	flag[27] = '(';
	goto LABEL6246;
	
	LABEL6347:
	// Setting char
	flag[110] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6447;
	
	else 
		goto LABEL6346;
	
	LABEL6348:
	// Checking char
	flag[206] = 'm';
	goto LABEL6448;
	
	LABEL6349:
	// Checking char
	flag[160] = '2';
	goto LABEL6348;
	
	LABEL6350:
	// Checking char
	flag[204] = '>';
	goto LABEL6450;
	
	LABEL6351:
	// Checking char
	flag[213] = '5';
	goto LABEL6350;
	
	LABEL6352:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6353:
	// Checking char
	flag[234] = '6';
	goto LABEL6453;
	
	LABEL6354:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6355:
	// Setting char
	flag[4] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6356;
	
	else 
		goto LABEL6354;
	
	LABEL6356:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6357:
	// Checking char
	flag[180] = 'd';
	goto LABEL6358;
	
	LABEL6358:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6359:
	// Checking char
	flag[107] = 'U';
	goto LABEL6459;
	
	LABEL6360:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6361:
	// Checking char
	flag[92] = 'j';
	goto LABEL6360;
	
	LABEL6362:
	// Checking char
	flag[230] = '2';
	goto LABEL6462;
	
	LABEL6363:
	// Checking char
	flag[240] = 'E';
	goto LABEL6362;
	
	LABEL6364:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6365:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6366:
	// Setting char
	flag[109] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6466;
	
	else 
		goto LABEL6365;
	
	LABEL6367:
	// Checking char
	flag[70] = '&';
	goto LABEL6366;
	
	LABEL6368:
	// Checking char
	flag[35] = 'S';
	goto LABEL6468;
	
	LABEL6369:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6370:
	// Setting char
	flag[179] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6470;
	
	else 
		goto LABEL6369;
	
	LABEL6371:
	// Checking char
	flag[14] = 'b';
	goto LABEL6370;
	
	LABEL6372:
	// Checking char
	flag[58] = 'Z';
	goto LABEL6472;
	
	LABEL6373:
	// Checking char
	flag[48] = 'a';
	goto LABEL6372;
	
	LABEL6374:
	// Setting char
	flag[42] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6474;
	
	else 
		goto LABEL6373;
	
	LABEL6375:
	// Checking char
	flag[112] = '-';
	goto LABEL6275;
	
	LABEL6376:
	// Setting char
	flag[226] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6276;
	
	else 
		goto LABEL6375;
	
	LABEL6377:
	// Checking char
	flag[105] = 'x';
	goto LABEL6277;
	
	LABEL6378:
	// Setting char
	flag[187] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6278;
	
	else 
		goto LABEL6377;
	
	LABEL6379:
	// Setting char
	flag[41] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6279;
	
	else 
		goto LABEL6378;
	
	LABEL6380:
	// Checking char
	flag[52] = 'L';
	goto LABEL6480;
	
	LABEL6381:
	// Setting char
	flag[242] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6281;
	
	else 
		goto LABEL6380;
	
	LABEL6382:
	// Setting char
	flag[147] = 'v';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6282;
	
	else if (r == 1)
		goto LABEL6482;
	
	else 
		goto LABEL6381;
	
	LABEL6383:
	// Setting char
	flag[37] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6283;
	
	else 
		goto LABEL6382;
	
	LABEL6384:
	// Checking char
	flag[31] = 'P';
	goto LABEL6383;
	
	LABEL6385:
	// Setting char
	flag[69] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6285;
	
	else 
		goto LABEL6384;
	
	LABEL6386:
	// Setting char
	flag[117] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6486;
	
	else 
		goto LABEL6385;
	
	LABEL6387:
	// Checking char
	flag[168] = 'i';
	goto LABEL6487;
	
	LABEL6388:
	// Checking char
	flag[135] = 'F';
	goto LABEL6389;
	
	LABEL6389:
	// Checking char
	flag[166] = '<';
	goto LABEL6489;
	
	LABEL6390:
	// Checking char
	flag[62] = 'N';
	goto LABEL6391;
	
	LABEL6391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6392:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6393:
	// Setting char
	flag[44] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6493;
	
	else 
		goto LABEL6392;
	
	LABEL6394:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6395:
	// Checking char
	flag[128] = 'L';
	goto LABEL6495;
	
	LABEL6396:
	// Checking char
	flag[103] = 'T';
	goto LABEL6496;
	
	LABEL6397:
	// Checking char
	flag[150] = 'u';
	goto LABEL6497;
	
	LABEL6398:
	// Checking char
	flag[147] = '<';
	goto LABEL6498;
	
	LABEL6399:
	// Checking char
	flag[60] = 'o';
	goto LABEL6499;
	
	LABEL6400:
	// Setting char
	flag[12] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6300;
	
	else 
		goto LABEL6500;
	
	LABEL6401:
	// Checking char
	flag[243] = '`';
	goto LABEL6400;
	
	LABEL6402:
	// Checking char
	flag[95] = '#';
	goto LABEL6502;
	
	LABEL6403:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6404:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6405:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6406:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6407:
	// Checking char
	flag[92] = 'P';
	goto LABEL6406;
	
	LABEL6408:
	// Checking char
	flag[85] = '0';
	goto LABEL6508;
	
	LABEL6409:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6410:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6411:
	// Checking char
	flag[246] = '-';
	goto LABEL6410;
	
	LABEL6412:
	// Checking char
	flag[233] = '#';
	goto LABEL6512;
	
	LABEL6413:
	// Setting char
	flag[245] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6513;
	
	else 
		goto LABEL6412;
	
	LABEL6414:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6415:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6416:
	// Checking char
	flag[241] = 'F';
	goto LABEL6415;
	
	LABEL6417:
	// Checking char
	flag[110] = '.';
	goto LABEL6317;
	
	LABEL6418:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6419:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6420:
	// Checking char
	flag[205] = 'A';
	goto LABEL6320;
	
	LABEL6421:
	// Setting char
	flag[127] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6521;
	
	else 
		goto LABEL6420;
	
	LABEL6422:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6423:
	// Setting char
	flag[228] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6523;
	
	else 
		goto LABEL6424;
	
	LABEL6424:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6425:
	// Checking char
	flag[176] = ':';
	goto LABEL6525;
	
	LABEL6426:
	// Setting char
	flag[21] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6526;
	
	else 
		goto LABEL6425;
	
	LABEL6427:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6428:
	// Checking char
	flag[215] = 'z';
	goto LABEL6427;
	
	LABEL6429:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6430:
	// Checking char
	flag[69] = '=';
	goto LABEL6429;
	
	LABEL6431:
	// Setting char
	flag[129] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6331;
	
	else if (r == 1)
		goto LABEL6531;
	
	else 
		goto LABEL6430;
	
	LABEL6432:
	// Checking char
	flag[22] = ')';
	goto LABEL6431;
	
	LABEL6433:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6434:
	// Setting char
	flag[123] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6534;
	
	else 
		goto LABEL6433;
	
	LABEL6435:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6436:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6437:
	// Checking char
	flag[152] = 'l';
	goto LABEL6537;
	
	LABEL6438:
	// Setting char
	flag[151] = '-';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6538;
	
	else if (r == 1)
		goto LABEL6439;
	
	else 
		goto LABEL6437;
	
	LABEL6439:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6440:
	// Checking char
	flag[24] = ')';
	goto LABEL6540;
	
	LABEL6441:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6442:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6443:
	// Checking char
	flag[201] = '/';
	goto LABEL6442;
	
	LABEL6444:
	// Setting char
	flag[19] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6544;
	
	else 
		goto LABEL6443;
	
	LABEL6445:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6446:
	// Checking char
	flag[181] = '!';
	goto LABEL6546;
	
	LABEL6447:
	// Checking char
	flag[138] = 'j';
	goto LABEL6446;
	
	LABEL6448:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6449:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6450:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6451:
	// Setting char
	flag[247] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6351;
	
	else 
		goto LABEL6551;
	
	LABEL6452:
	// Checking char
	flag[1] = 'r';
	goto LABEL6451;
	
	LABEL6453:
	// Setting char
	flag[170] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6553;
	
	else if (r == 1)
		goto LABEL6454;
	
	else 
		goto LABEL6452;
	
	LABEL6454:
	// Setting char
	flag[240] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6554;
	
	else 
		goto LABEL6455;
	
	LABEL6455:
	// Setting char
	flag[6] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6555;
	
	else 
		goto LABEL6456;
	
	LABEL6456:
	// Checking char
	flag[150] = 'm';
	goto LABEL6556;
	
	LABEL6457:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6458:
	// Setting char
	flag[99] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6558;
	
	else 
		goto LABEL6457;
	
	LABEL6459:
	// Setting char
	flag[174] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6460;
	
	else 
		goto LABEL6458;
	
	LABEL6460:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6461:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6462:
	// Checking char
	flag[230] = '-';
	goto LABEL6461;
	
	LABEL6463:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6464:
	// Checking char
	flag[7] = '+';
	goto LABEL6463;
	
	LABEL6465:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6466:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6467:
	// Setting char
	flag[113] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6367;
	
	else 
		goto LABEL6567;
	
	LABEL6468:
	// Setting char
	flag[62] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6568;
	
	else 
		goto LABEL6467;
	
	LABEL6469:
	// Checking char
	flag[50] = 'G';
	goto LABEL6569;
	
	LABEL6470:
	// Setting char
	flag[80] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6570;
	
	else 
		goto LABEL6469;
	
	LABEL6471:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6472:
	// Setting char
	flag[11] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6572;
	
	else 
		goto LABEL6471;
	
	LABEL6473:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6474:
	// Checking char
	flag[21] = '5';
	goto LABEL6473;
	
	LABEL6475:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6476:
	// Setting char
	flag[18] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6376;
	
	else 
		goto LABEL6475;
	
	LABEL6477:
	// Setting char
	flag[44] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6577;
	
	else 
		goto LABEL6476;
	
	LABEL6478:
	// Setting char
	flag[165] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6578;
	
	else 
		goto LABEL6477;
	
	LABEL6479:
	// Setting char
	flag[244] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6379;
	
	else 
		goto LABEL6478;
	
	LABEL6480:
	// Setting char
	flag[63] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6580;
	
	else 
		goto LABEL6479;
	
	LABEL6481:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6482:
	// Checking char
	flag[91] = 'i';
	goto LABEL6582;
	
	LABEL6483:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6484:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6485:
	// Checking char
	flag[81] = '/';
	goto LABEL6484;
	
	LABEL6486:
	// Setting char
	flag[246] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6586;
	
	else 
		goto LABEL6485;
	
	LABEL6487:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6488:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6489:
	// Setting char
	flag[243] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6490;
	
	else 
		goto LABEL6488;
	
	LABEL6490:
	// Setting char
	flag[138] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6590;
	
	else 
		goto LABEL6491;
	
	LABEL6491:
	// Setting char
	flag[20] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6591;
	
	else 
		goto LABEL6492;
	
	LABEL6492:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6493:
	// Checking char
	flag[189] = 'b';
	goto LABEL6593;
	
	LABEL6494:
	// Checking char
	flag[46] = 'S';
	goto LABEL6394;
	
	LABEL6495:
	// Checking char
	flag[244] = 'D';
	goto LABEL6595;
	
	LABEL6496:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6497:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6498:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6499:
	// Checking char
	flag[9] = 'u';
	goto LABEL6599;
	
	LABEL6500:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6501:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6502:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6503:
	// Checking char
	flag[218] = '[';
	goto LABEL6603;
	
	LABEL6504:
	// Checking char
	flag[8] = 'Y';
	goto LABEL6503;
	
	LABEL6505:
	// Setting char
	flag[235] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6405;
	
	else if (r == 1)
		goto LABEL6605;
	
	else 
		goto LABEL6504;
	
	LABEL6506:
	// Checking char
	flag[30] = 'P';
	goto LABEL6505;
	
	LABEL6507:
	// Setting char
	flag[1] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6607;
	
	else 
		goto LABEL6506;
	
	LABEL6508:
	// Checking char
	flag[9] = 'x';
	goto LABEL6507;
	
	LABEL6509:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6510:
	// Setting char
	flag[198] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6610;
	
	else 
		goto LABEL6509;
	
	LABEL6511:
	// Checking char
	flag[74] = 'R';
	goto LABEL6510;
	
	LABEL6512:
	// Setting char
	flag[212] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6612;
	
	else 
		goto LABEL6511;
	
	LABEL6513:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6514:
	// Setting char
	flag[114] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6414;
	
	else 
		goto LABEL6614;
	
	LABEL6515:
	// Checking char
	flag[44] = 'w';
	goto LABEL6514;
	
	LABEL6516:
	// Setting char
	flag[99] = '@';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6416;
	
	else if (r == 1)
		goto LABEL6616;
	
	else 
		goto LABEL6515;
	
	LABEL6517:
	// Setting char
	flag[52] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6417;
	
	else 
		goto LABEL6516;
	
	LABEL6518:
	// Setting char
	flag[186] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6418;
	
	else if (r == 1)
		goto LABEL6618;
	
	else 
		goto LABEL6517;
	
	LABEL6519:
	// Checking char
	flag[11] = 'g';
	goto LABEL6518;
	
	LABEL6520:
	// Checking char
	flag[137] = 'd';
	goto LABEL6519;
	
	LABEL6521:
	// Setting char
	flag[100] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6621;
	
	else 
		goto LABEL6520;
	
	LABEL6522:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6523:
	// Setting char
	flag[95] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6524;
	
	else 
		goto LABEL6522;
	
	LABEL6524:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6525:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6526:
	// Checking char
	flag[56] = 'T';
	goto LABEL6626;
	
	LABEL6527:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6528:
	// Checking char
	flag[15] = 'l';
	goto LABEL6527;
	
	LABEL6529:
	// Checking char
	flag[41] = '/';
	goto LABEL6629;
	
	LABEL6530:
	// Setting char
	flag[137] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6630;
	
	else 
		goto LABEL6529;
	
	LABEL6531:
	// Setting char
	flag[32] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6631;
	
	else 
		goto LABEL6530;
	
	LABEL6532:
	// Checking char
	flag[219] = '|';
	goto LABEL6432;
	
	LABEL6533:
	// Setting char
	flag[221] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6633;
	
	else 
		goto LABEL6532;
	
	LABEL6534:
	// Setting char
	flag[231] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6634;
	
	else if (r == 1)
		goto LABEL6535;
	
	else 
		goto LABEL6533;
	
	LABEL6535:
	// Setting char
	flag[216] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6435;
	
	else 
		goto LABEL6635;
	
	LABEL6536:
	// Checking char
	flag[168] = 'P';
	goto LABEL6636;
	
	LABEL6537:
	// Setting char
	flag[200] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6637;
	
	else 
		goto LABEL6536;
	
	LABEL6538:
	// Checking char
	flag[197] = '`';
	goto LABEL6638;
	
	LABEL6539:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6540:
	// Checking char
	flag[45] = 't';
	goto LABEL6539;
	
	LABEL6541:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6542:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6543:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6544:
	// Checking char
	flag[115] = '@';
	goto LABEL6644;
	
	LABEL6545:
	// Setting char
	flag[156] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6445;
	
	else 
		goto LABEL6645;
	
	LABEL6546:
	// Setting char
	flag[162] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6646;
	
	else if (r == 1)
		goto LABEL6547;
	
	else 
		goto LABEL6545;
	
	LABEL6547:
	// Checking char
	flag[196] = '=';
	goto LABEL6548;
	
	LABEL6548:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6549:
	// Checking char
	flag[75] = 'R';
	goto LABEL6449;
	
	LABEL6550:
	// Setting char
	flag[107] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6650;
	
	else 
		goto LABEL6549;
	
	LABEL6551:
	// Setting char
	flag[5] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6651;
	
	else 
		goto LABEL6550;
	
	LABEL6552:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6553:
	// Setting char
	flag[213] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6653;
	
	else 
		goto LABEL6552;
	
	LABEL6554:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6555:
	// Checking char
	flag[106] = '7';
	goto LABEL6655;
	
	LABEL6556:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6557:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6558:
	// Checking char
	flag[106] = '0';
	goto LABEL6658;
	
	LABEL6559:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6560:
	// Checking char
	flag[29] = 'z';
	goto LABEL6559;
	
	LABEL6561:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6562:
	// Checking char
	flag[117] = '%';
	goto LABEL6561;
	
	LABEL6563:
	// Setting char
	flag[9] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6663;
	
	else 
		goto LABEL6562;
	
	LABEL6564:
	// Setting char
	flag[167] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6464;
	
	else 
		goto LABEL6563;
	
	LABEL6565:
	// Setting char
	flag[174] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6465;
	
	else if (r == 1)
		goto LABEL6665;
	
	else 
		goto LABEL6564;
	
	LABEL6566:
	// Checking char
	flag[77] = 'G';
	goto LABEL6565;
	
	LABEL6567:
	// Checking char
	flag[125] = 'x';
	goto LABEL6667;
	
	LABEL6568:
	// Checking char
	flag[204] = 'G';
	goto LABEL6668;
	
	LABEL6569:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6570:
	// Setting char
	flag[3] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6670;
	
	else 
		goto LABEL6571;
	
	LABEL6571:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6572:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6573:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6574:
	// Checking char
	flag[24] = 'Q';
	goto LABEL6674;
	
	LABEL6575:
	// Setting char
	flag[58] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6675;
	
	else 
		goto LABEL6574;
	
	LABEL6576:
	// Checking char
	flag[160] = '>';
	goto LABEL6575;
	
	LABEL6577:
	// Setting char
	flag[127] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6677;
	
	else 
		goto LABEL6576;
	
	LABEL6578:
	// Checking char
	flag[101] = '9';
	goto LABEL6678;
	
	LABEL6579:
	// Checking char
	flag[199] = 'z';
	goto LABEL6679;
	
	LABEL6580:
	// Setting char
	flag[55] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6581;
	
	else 
		goto LABEL6579;
	
	LABEL6581:
	// Setting char
	flag[56] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6481;
	
	else 
		goto LABEL6681;
	
	LABEL6582:
	// Checking char
	flag[20] = 'n';
	goto LABEL6583;
	
	LABEL6583:
	// Checking char
	flag[13] = ',';
	goto LABEL6483;
	
	LABEL6584:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6585:
	// Setting char
	flag[118] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6685;
	
	else 
		goto LABEL6584;
	
	LABEL6586:
	// Setting char
	flag[5] = 'M';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6686;
	
	else if (r == 1)
		goto LABEL6587;
	
	else 
		goto LABEL6585;
	
	LABEL6587:
	// Checking char
	flag[230] = 'x';
	goto LABEL6687;
	
	LABEL6588:
	// Checking char
	flag[154] = '|';
	goto LABEL6589;
	
	LABEL6589:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6590:
	// Checking char
	flag[130] = 't';
	goto LABEL6690;
	
	LABEL6591:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6592:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6593:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6594:
	// Setting char
	flag[118] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6494;
	
	else 
		goto LABEL6694;
	
	LABEL6595:
	// Setting char
	flag[156] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6596;
	
	else 
		goto LABEL6594;
	
	LABEL6596:
	// Setting char
	flag[70] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6696;
	
	else 
		goto LABEL6597;
	
	LABEL6597:
	// Checking char
	flag[171] = '!';
	goto LABEL6697;
	
	LABEL6598:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6599:
	// Checking char
	flag[76] = '_';
	goto LABEL6699;
	
	LABEL6600:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6601:
	// Setting char
	flag[173] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6501;
	
	else 
		goto LABEL6600;
	
	LABEL6602:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6603:
	// Setting char
	flag[214] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6703;
	
	else 
		goto LABEL6602;
	
	LABEL6604:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6605:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6606:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6607:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6608:
	// Checking char
	flag[167] = 'y';
	goto LABEL6708;
	
	LABEL6609:
	// Setting char
	flag[74] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6709;
	
	else 
		goto LABEL6608;
	
	LABEL6610:
	// Setting char
	flag[185] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6710;
	
	else 
		goto LABEL6609;
	
	LABEL6611:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6612:
	// Checking char
	flag[66] = 'y';
	goto LABEL6611;
	
	LABEL6613:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6614:
	// Setting char
	flag[205] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6714;
	
	else if (r == 1)
		goto LABEL6615;
	
	else 
		goto LABEL6613;
	
	LABEL6615:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6616:
	// Checking char
	flag[75] = 'p';
	goto LABEL6716;
	
	LABEL6617:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6618:
	// Checking char
	flag[215] = 'O';
	goto LABEL6617;
	
	LABEL6619:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6620:
	// Setting char
	flag[213] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6720;
	
	else 
		goto LABEL6619;
	
	LABEL6621:
	// Setting char
	flag[203] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6622;
	
	else 
		goto LABEL6620;
	
	LABEL6622:
	// Setting char
	flag[90] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6722;
	
	else 
		goto LABEL6623;
	
	LABEL6623:
	// Checking char
	flag[150] = 'R';
	goto LABEL6624;
	
	LABEL6624:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6625:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6626:
	// Checking char
	flag[168] = '0';
	goto LABEL6625;
	
	LABEL6627:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6628:
	// Setting char
	flag[35] = 'j';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6528;
	
	else if (r == 1)
		goto LABEL6728;
	
	else 
		goto LABEL6627;
	
	LABEL6629:
	// Checking char
	flag[21] = 'R';
	goto LABEL6628;
	
	LABEL6630:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6631:
	// Setting char
	flag[169] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6731;
	
	else 
		goto LABEL6632;
	
	LABEL6632:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6633:
	// Checking char
	flag[7] = 'd';
	goto LABEL6733;
	
	LABEL6634:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6635:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6636:
	// Checking char
	flag[165] = '<';
	goto LABEL6736;
	
	LABEL6637:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6638:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6639:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6640:
	// Setting char
	flag[226] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6740;
	
	else 
		goto LABEL6639;
	
	LABEL6641:
	// Setting char
	flag[136] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6541;
	
	else 
		goto LABEL6640;
	
	LABEL6642:
	// Setting char
	flag[184] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6542;
	
	else if (r == 1)
		goto LABEL6742;
	
	else 
		goto LABEL6641;
	
	LABEL6643:
	// Setting char
	flag[45] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6543;
	
	else 
		goto LABEL6642;
	
	LABEL6644:
	// Checking char
	flag[137] = 'K';
	goto LABEL6643;
	
	LABEL6645:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6646:
	// Setting char
	flag[32] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6746;
	
	else 
		goto LABEL6647;
	
	LABEL6647:
	// Checking char
	flag[166] = 'N';
	goto LABEL6747;
	
	LABEL6648:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6649:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6650:
	// Setting char
	flag[39] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6750;
	
	else 
		goto LABEL6649;
	
	LABEL6651:
	// Checking char
	flag[42] = '[';
	goto LABEL6751;
	
	LABEL6652:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6653:
	// Checking char
	flag[87] = 'Z';
	goto LABEL6753;
	
	LABEL6654:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6655:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6656:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6657:
	// Setting char
	flag[107] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6557;
	
	else 
		goto LABEL6656;
	
	LABEL6658:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6659:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6660:
	// Checking char
	flag[27] = 'u';
	goto LABEL6560;
	
	LABEL6661:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6662:
	// Checking char
	flag[35] = '@';
	goto LABEL6661;
	
	LABEL6663:
	// Setting char
	flag[186] = ':';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6763;
	
	else if (r == 1)
		goto LABEL6664;
	
	else 
		goto LABEL6662;
	
	LABEL6664:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6665:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6666:
	// Checking char
	flag[106] = 'S';
	goto LABEL6566;
	
	LABEL6667:
	// Setting char
	flag[71] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6767;
	
	else 
		goto LABEL6666;
	
	LABEL6668:
	// Checking char
	flag[200] = '>';
	goto LABEL6768;
	
	LABEL6669:
	// Checking char
	flag[8] = 'd';
	goto LABEL6769;
	
	LABEL6670:
	// Setting char
	flag[10] = '2';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6770;
	
	else if (r == 1)
		goto LABEL6671;
	
	else 
		goto LABEL6669;
	
	LABEL6671:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6672:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6673:
	// Setting char
	flag[127] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6573;
	
	else 
		goto LABEL6773;
	
	LABEL6674:
	// Setting char
	flag[94] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6774;
	
	else 
		goto LABEL6673;
	
	LABEL6675:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6676:
	// Checking char
	flag[191] = '[';
	goto LABEL6776;
	
	LABEL6677:
	// Checking char
	flag[35] = '9';
	goto LABEL6676;
	
	LABEL6678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6679:
	// Checking char
	flag[227] = 'T';
	goto LABEL6779;
	
	LABEL6680:
	// Checking char
	flag[186] = '!';
	goto LABEL6780;
	
	LABEL6681:
	// Checking char
	flag[136] = 'p';
	goto LABEL6680;
	
	LABEL6682:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6683:
	// Checking char
	flag[144] = 's';
	goto LABEL6682;
	
	LABEL6684:
	// Checking char
	flag[160] = 'i';
	goto LABEL6784;
	
	LABEL6685:
	// Checking char
	flag[128] = '6';
	goto LABEL6684;
	
	LABEL6686:
	// Checking char
	flag[147] = '6';
	goto LABEL6786;
	
	LABEL6687:
	// Checking char
	flag[81] = '[';
	goto LABEL6688;
	
	LABEL6688:
	// Setting char
	flag[230] = 'N';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6588;
	
	else if (r == 1)
		goto LABEL6788;
	
	else 
		goto LABEL6689;
	
	LABEL6689:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6690:
	// Setting char
	flag[113] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6790;
	
	else 
		goto LABEL6691;
	
	LABEL6691:
	// Setting char
	flag[9] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6791;
	
	else 
		goto LABEL6692;
	
	LABEL6692:
	// Checking char
	flag[97] = 'g';
	goto LABEL6592;
	
	LABEL6693:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6694:
	// Setting char
	flag[20] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6794;
	
	else 
		goto LABEL6693;
	
	LABEL6695:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6696:
	// Checking char
	flag[209] = 'B';
	goto LABEL6695;
	
	LABEL6697:
	// Setting char
	flag[69] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6797;
	
	else 
		goto LABEL6698;
	
	LABEL6698:
	// Checking char
	flag[234] = '1';
	goto LABEL6598;
	
	LABEL6699:
	// Checking char
	flag[112] = 'a';
	goto LABEL6799;
	
	LABEL6700:
	// Checking char
	flag[135] = 'u';
	goto LABEL6800;
	
	LABEL6701:
	// Setting char
	flag[110] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6601;
	
	else 
		goto LABEL6700;
	
	LABEL6702:
	// Setting char
	flag[19] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6802;
	
	else 
		goto LABEL6701;
	
	LABEL6703:
	// Setting char
	flag[53] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6704;
	
	else 
		goto LABEL6702;
	
	LABEL6704:
	// Setting char
	flag[204] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6604;
	
	else 
		goto LABEL6705;
	
	LABEL6705:
	// Checking char
	flag[96] = 'X';
	goto LABEL6706;
	
	LABEL6706:
	// Checking char
	flag[136] = '$';
	goto LABEL6606;
	
	LABEL6707:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6708:
	// Checking char
	flag[98] = 'd';
	goto LABEL6808;
	
	LABEL6709:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6710:
	// Checking char
	flag[10] = 'K';
	goto LABEL6810;
	
	LABEL6711:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6712:
	// Checking char
	flag[143] = 'M';
	goto LABEL6812;
	
	LABEL6713:
	// Setting char
	flag[168] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6813;
	
	else 
		goto LABEL6712;
	
	LABEL6714:
	// Setting char
	flag[85] = 'Q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6814;
	
	else if (r == 1)
		goto LABEL6715;
	
	else 
		goto LABEL6713;
	
	LABEL6715:
	// Checking char
	flag[217] = '@';
	goto LABEL6815;
	
	LABEL6716:
	// Checking char
	flag[62] = 'Q';
	goto LABEL6816;
	
	LABEL6717:
	// Checking char
	flag[61] = '@';
	goto LABEL6817;
	
	LABEL6718:
	// Checking char
	flag[89] = 'D';
	goto LABEL6717;
	
	LABEL6719:
	// Checking char
	flag[112] = '}';
	goto LABEL6718;
	
	LABEL6720:
	// Setting char
	flag[231] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6820;
	
	else 
		goto LABEL6719;
	
	LABEL6721:
	// Checking char
	flag[240] = '"';
	goto LABEL6821;
	
	LABEL6722:
	// Setting char
	flag[160] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6723;
	
	else 
		goto LABEL6721;
	
	LABEL6723:
	// Checking char
	flag[132] = ']';
	goto LABEL6724;
	
	LABEL6724:
	// Checking char
	flag[191] = 'b';
	goto LABEL6824;
	
	LABEL6725:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6726:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6727:
	// Checking char
	flag[90] = 'q';
	goto LABEL6726;
	
	LABEL6728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6729:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6730:
	// Checking char
	flag[97] = ')';
	goto LABEL6729;
	
	LABEL6731:
	// Setting char
	flag[132] = 'R';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6831;
	
	else if (r == 1)
		goto LABEL6732;
	
	else 
		goto LABEL6730;
	
	LABEL6732:
	// Checking char
	flag[159] = '3';
	goto LABEL6832;
	
	LABEL6733:
	// Checking char
	flag[105] = 'a';
	goto LABEL6734;
	
	LABEL6734:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6735:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6736:
	// Setting char
	flag[106] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6836;
	
	else 
		goto LABEL6735;
	
	LABEL6737:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6738:
	// Setting char
	flag[128] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6838;
	
	else 
		goto LABEL6737;
	
	LABEL6739:
	// Setting char
	flag[203] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6839;
	
	else 
		goto LABEL6738;
	
	LABEL6740:
	// Checking char
	flag[141] = 'z';
	goto LABEL6739;
	
	LABEL6741:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6742:
	// Checking char
	flag[244] = 'u';
	goto LABEL6842;
	
	LABEL6743:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6744:
	// Checking char
	flag[218] = 'y';
	goto LABEL6743;
	
	LABEL6745:
	// Checking char
	flag[33] = 'C';
	goto LABEL6744;
	
	LABEL6746:
	// Setting char
	flag[167] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6846;
	
	else 
		goto LABEL6745;
	
	LABEL6747:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6748:
	// Checking char
	flag[22] = 's';
	goto LABEL6648;
	
	LABEL6749:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6750:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6751:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6752:
	// Checking char
	flag[185] = '#';
	goto LABEL6652;
	
	LABEL6753:
	// Setting char
	flag[40] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6853;
	
	else 
		goto LABEL6752;
	
	LABEL6754:
	// Checking char
	flag[202] = 'Z';
	goto LABEL6654;
	
	LABEL6755:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6756:
	// Setting char
	flag[233] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6856;
	
	else 
		goto LABEL6755;
	
	LABEL6757:
	// Setting char
	flag[227] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6657;
	
	else if (r == 1)
		goto LABEL6857;
	
	else 
		goto LABEL6756;
	
	LABEL6758:
	// Setting char
	flag[83] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6858;
	
	else 
		goto LABEL6757;
	
	LABEL6759:
	// Setting char
	flag[60] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6659;
	
	else 
		goto LABEL6758;
	
	LABEL6760:
	// Setting char
	flag[95] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6660;
	
	else if (r == 1)
		goto LABEL6860;
	
	else 
		goto LABEL6759;
	
	LABEL6761:
	// Checking char
	flag[202] = 'w';
	goto LABEL6760;
	
	LABEL6762:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6763:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6765:
	// Checking char
	flag[41] = 'u';
	goto LABEL6766;
	
	LABEL6766:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6767:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6768:
	// Checking char
	flag[76] = '<';
	goto LABEL6868;
	
	LABEL6769:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6770:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6771:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6772:
	// Setting char
	flag[130] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6672;
	
	else if (r == 1)
		goto LABEL6872;
	
	else 
		goto LABEL6771;
	
	LABEL6773:
	// Checking char
	flag[159] = 'H';
	goto LABEL6772;
	
	LABEL6774:
	// Setting char
	flag[14] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6874;
	
	else 
		goto LABEL6775;
	
	LABEL6775:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6776:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6777:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6778:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6779:
	// Checking char
	flag[123] = 'E';
	goto LABEL6879;
	
	LABEL6780:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6781:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6782:
	// Checking char
	flag[209] = 'X';
	goto LABEL6781;
	
	LABEL6783:
	// Setting char
	flag[92] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6683;
	
	else 
		goto LABEL6782;
	
	LABEL6784:
	// Checking char
	flag[108] = 'R';
	goto LABEL6783;
	
	LABEL6785:
	// Checking char
	flag[146] = ',';
	goto LABEL6885;
	
	LABEL6786:
	// Setting char
	flag[153] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6886;
	
	else 
		goto LABEL6785;
	
	LABEL6787:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6788:
	// Setting char
	flag[178] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6888;
	
	else if (r == 1)
		goto LABEL6789;
	
	else 
		goto LABEL6787;
	
	LABEL6789:
	// Checking char
	flag[202] = 'C';
	goto LABEL6889;
	
	LABEL6790:
	// Checking char
	flag[143] = 'f';
	goto LABEL6890;
	
	LABEL6791:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6792:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6793:
	// Checking char
	flag[231] = 'r';
	goto LABEL6792;
	
	LABEL6794:
	// Setting char
	flag[43] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6894;
	
	else 
		goto LABEL6793;
	
	LABEL6795:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6796:
	// Setting char
	flag[181] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6896;
	
	else 
		goto LABEL6795;
	
	LABEL6797:
	// Setting char
	flag[113] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6897;
	
	else if (r == 1)
		goto LABEL6798;
	
	else 
		goto LABEL6796;
	
	LABEL6798:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6799:
	// Checking char
	flag[21] = '_';
	goto LABEL6899;
	
	LABEL6800:
	// Checking char
	flag[19] = 'e';
	goto LABEL6900;
	
	LABEL6801:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6802:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6803:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6804:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6805:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6806:
	// Checking char
	flag[78] = 'Q';
	goto LABEL6906;
	
	LABEL6807:
	// Setting char
	flag[113] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6707;
	
	else if (r == 1)
		goto LABEL6907;
	
	else 
		goto LABEL6806;
	
	LABEL6808:
	// Setting char
	flag[243] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6908;
	
	else 
		goto LABEL6807;
	
	LABEL6809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6810:
	// Checking char
	flag[86] = '4';
	goto LABEL6809;
	
	LABEL6811:
	// Setting char
	flag[122] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6711;
	
	else 
		goto LABEL6911;
	
	LABEL6812:
	// Checking char
	flag[67] = '|';
	goto LABEL6811;
	
	LABEL6813:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6814:
	// Checking char
	flag[165] = 'W';
	goto LABEL6914;
	
	LABEL6815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6816:
	// Checking char
	flag[237] = '-';
	goto LABEL6916;
	
	LABEL6817:
	// Checking char
	flag[130] = '-';
	goto LABEL6917;
	
	LABEL6818:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6819:
	// Checking char
	flag[196] = 'q';
	goto LABEL6818;
	
	LABEL6820:
	// Setting char
	flag[232] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6920;
	
	else 
		goto LABEL6819;
	
	LABEL6821:
	// Checking char
	flag[46] = 'h';
	goto LABEL6822;
	
	LABEL6822:
	// Checking char
	flag[210] = '?';
	goto LABEL6922;
	
	LABEL6823:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6824:
	// Setting char
	flag[102] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6924;
	
	else if (r == 1)
		goto LABEL6825;
	
	else 
		goto LABEL6823;
	
	LABEL6825:
	// Checking char
	flag[143] = '(';
	goto LABEL6725;
	
	LABEL6826:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6827:
	// Setting char
	flag[127] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6727;
	
	else 
		goto LABEL6927;
	
	LABEL6828:
	// Checking char
	flag[231] = 'u';
	goto LABEL6827;
	
	LABEL6829:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6830:
	// Checking char
	flag[224] = 'm';
	goto LABEL6930;
	
	LABEL6831:
	// Setting char
	flag[223] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6931;
	
	else 
		goto LABEL6830;
	
	LABEL6832:
	// Setting char
	flag[234] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6932;
	
	else 
		goto LABEL6833;
	
	LABEL6833:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6834:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6835:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6836:
	// Setting char
	flag[31] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6936;
	
	else if (r == 1)
		goto LABEL6837;
	
	else 
		goto LABEL6835;
	
	LABEL6837:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6838:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6839:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6840:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6841:
	// Setting char
	flag[103] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6741;
	
	else 
		goto LABEL6840;
	
	LABEL6842:
	// Checking char
	flag[204] = '7';
	goto LABEL6841;
	
	LABEL6843:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6844:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6845:
	// Checking char
	flag[9] = '1';
	goto LABEL6844;
	
	LABEL6846:
	// Setting char
	flag[26] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6946;
	
	else 
		goto LABEL6845;
	
	LABEL6847:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6848:
	// Setting char
	flag[199] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6748;
	
	else 
		goto LABEL6847;
	
	LABEL6849:
	// Setting char
	flag[146] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6749;
	
	else if (r == 1)
		goto LABEL6949;
	
	else 
		goto LABEL6848;
	
	LABEL6850:
	// Setting char
	flag[98] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6851;
	
	else 
		goto LABEL6849;
	
	LABEL6851:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6852:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6853:
	// Setting char
	flag[183] = '7';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6953;
	
	else if (r == 1)
		goto LABEL6854;
	
	else 
		goto LABEL6852;
	
	LABEL6854:
	// Setting char
	flag[199] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6754;
	
	else 
		goto LABEL6954;
	
	LABEL6855:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6856:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6857:
	// Checking char
	flag[80] = 'J';
	goto LABEL6957;
	
	LABEL6858:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6859:
	// Checking char
	flag[194] = '"';
	goto LABEL6959;
	
	LABEL6860:
	// Checking char
	flag[25] = 'R';
	goto LABEL6859;
	
	LABEL6861:
	// Setting char
	flag[57] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6761;
	
	else 
		goto LABEL6961;
	
	LABEL6862:
	// Setting char
	flag[0] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6762;
	
	else 
		goto LABEL6861;
	
	LABEL6863:
	// Checking char
	flag[226] = '!';
	goto LABEL6862;
	
	LABEL6864:
	// Setting char
	flag[92] = '4';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6764;
	
	else if (r == 1)
		goto LABEL6964;
	
	else 
		goto LABEL6863;
	
	LABEL6865:
	// Setting char
	flag[31] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6765;
	
	else 
		goto LABEL6864;
	
	LABEL6866:
	// Checking char
	flag[7] = 'u';
	goto LABEL6865;
	
	LABEL6867:
	// Checking char
	flag[113] = '}';
	goto LABEL6866;
	
	LABEL6868:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6869:
	// Checking char
	flag[168] = '?';
	goto LABEL6969;
	
	LABEL6870:
	// Checking char
	flag[228] = '"';
	goto LABEL6869;
	
	LABEL6871:
	// Checking char
	flag[221] = 'E';
	goto LABEL6870;
	
	LABEL6872:
	// Setting char
	flag[230] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6972;
	
	else 
		goto LABEL6871;
	
	LABEL6873:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6874:
	// Setting char
	flag[131] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6974;
	
	else 
		goto LABEL6873;
	
	LABEL6875:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6876:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6877:
	// Setting char
	flag[13] = 'K';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6777;
	
	else if (r == 1)
		goto LABEL6977;
	
	else 
		goto LABEL6876;
	
	LABEL6878:
	// Setting char
	flag[169] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6778;
	
	else 
		goto LABEL6877;
	
	LABEL6879:
	// Setting char
	flag[13] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6979;
	
	else 
		goto LABEL6878;
	
	LABEL6880:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6881:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6882:
	// Checking char
	flag[93] = 'g';
	goto LABEL6881;
	
	LABEL6883:
	// Checking char
	flag[151] = 'f';
	goto LABEL6882;
	
	LABEL6884:
	// Setting char
	flag[176] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6984;
	
	else 
		goto LABEL6883;
	
	LABEL6885:
	// Setting char
	flag[8] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6985;
	
	else 
		goto LABEL6884;
	
	LABEL6886:
	// Setting char
	flag[244] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6986;
	
	else 
		goto LABEL6887;
	
	LABEL6887:
	// Checking char
	flag[113] = 'F';
	goto LABEL6987;
	
	LABEL6888:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6889:
	// Checking char
	flag[245] = 'O';
	goto LABEL6989;
	
	LABEL6890:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6891:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6892:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6893:
	// Setting char
	flag[3] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6993;
	
	else 
		goto LABEL6892;
	
	LABEL6894:
	// Checking char
	flag[140] = 'j';
	goto LABEL6893;
	
	LABEL6895:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6896:
	// Checking char
	flag[185] = 'i';
	goto LABEL6895;
	
	LABEL6897:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6898:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6899:
	// Setting char
	flag[167] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6999;
	
	else 
		goto LABEL6898;
	
	LABEL6900:
	// Checking char
	flag[125] = 'K';
	goto LABEL7000;
	
	LABEL6901:
	// Checking char
	flag[115] = 't';
	goto LABEL6801;
	
	LABEL6902:
	// Setting char
	flag[215] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7002;
	
	else 
		goto LABEL6901;
	
	LABEL6903:
	// Setting char
	flag[161] = '{';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6803;
	
	else if (r == 1)
		goto LABEL7003;
	
	else 
		goto LABEL6902;
	
	LABEL6904:
	// Setting char
	flag[249] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6804;
	
	else 
		goto LABEL6903;
	
	LABEL6905:
	// Setting char
	flag[174] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6805;
	
	else if (r == 1)
		goto LABEL7005;
	
	else 
		goto LABEL6904;
	
	LABEL6906:
	// Checking char
	flag[134] = 'n';
	goto LABEL6905;
	
	LABEL6907:
	// Checking char
	flag[223] = '<';
	goto LABEL7007;
	
	LABEL6908:
	// Checking char
	flag[86] = 'E';
	goto LABEL6909;
	
	LABEL6909:
	// Setting char
	flag[203] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7009;
	
	else 
		goto LABEL6910;
	
	LABEL6910:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6911:
	// Setting char
	flag[159] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7011;
	
	else 
		goto LABEL6912;
	
	LABEL6912:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6913:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6914:
	// Checking char
	flag[195] = 's';
	goto LABEL7014;
	
	LABEL6915:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6916:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6917:
	// Setting char
	flag[127] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7017;
	
	else 
		goto LABEL6918;
	
	LABEL6918:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6920:
	// Setting char
	flag[13] = 'B';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7020;
	
	else if (r == 1)
		goto LABEL6921;
	
	else 
		goto LABEL6919;
	
	LABEL6921:
	// Checking char
	flag[46] = '$';
	goto LABEL7021;
	
	LABEL6922:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6923:
	// Checking char
	flag[206] = 'p';
	goto LABEL7023;
	
	LABEL6924:
	// Checking char
	flag[207] = 'B';
	goto LABEL6923;
	
	LABEL6925:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6926:
	// Setting char
	flag[30] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6826;
	
	else 
		goto LABEL6925;
	
	LABEL6927:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6928:
	// Checking char
	flag[228] = '|';
	goto LABEL6828;
	
	LABEL6929:
	// Setting char
	flag[90] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6829;
	
	else 
		goto LABEL7029;
	
	LABEL6930:
	// Setting char
	flag[219] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7030;
	
	else 
		goto LABEL6929;
	
	LABEL6931:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6932:
	// Checking char
	flag[147] = ':';
	goto LABEL6933;
	
	LABEL6933:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6934:
	// Checking char
	flag[164] = 'H';
	goto LABEL6834;
	
	LABEL6935:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6936:
	// Setting char
	flag[62] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7036;
	
	else 
		goto LABEL6937;
	
	LABEL6937:
	// Checking char
	flag[24] = 't';
	goto LABEL6938;
	
	LABEL6938:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6939:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6940:
	// Checking char
	flag[13] = 'P';
	goto LABEL6939;
	
	LABEL6941:
	// Checking char
	flag[237] = '~';
	goto LABEL6940;
	
	LABEL6942:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6943:
	// Setting char
	flag[147] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6843;
	
	else if (r == 1)
		goto LABEL7043;
	
	else 
		goto LABEL6942;
	
	LABEL6944:
	// Setting char
	flag[92] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7044;
	
	else 
		goto LABEL6943;
	
	LABEL6945:
	// Checking char
	flag[72] = 'T';
	goto LABEL6944;
	
	LABEL6946:
	// Setting char
	flag[61] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7046;
	
	else 
		goto LABEL6947;
	
	LABEL6947:
	// Checking char
	flag[17] = ':';
	goto LABEL6948;
	
	LABEL6948:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6949:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6950:
	// Setting char
	flag[249] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6850;
	
	else 
		goto LABEL6951;
	
	LABEL6951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6952:
	// Checking char
	flag[57] = 'b';
	goto LABEL7052;
	
	LABEL6953:
	// Checking char
	flag[102] = '!';
	goto LABEL6952;
	
	LABEL6954:
	// Checking char
	flag[183] = 'l';
	goto LABEL7054;
	
	LABEL6955:
	// Setting char
	flag[238] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6855;
	
	else 
		goto LABEL6956;
	
	LABEL6956:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6957:
	// Setting char
	flag[167] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7057;
	
	else 
		goto LABEL6958;
	
	LABEL6958:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6959:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6960:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6961:
	// Checking char
	flag[241] = 'j';
	goto LABEL6960;
	
	LABEL6962:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6963:
	// Checking char
	flag[129] = '$';
	goto LABEL6962;
	
	LABEL6964:
	// Setting char
	flag[17] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7064;
	
	else 
		goto LABEL6963;
	
	LABEL6965:
	// Checking char
	flag[0] = 'P';
	goto LABEL6966;
	
	LABEL6966:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6967:
	// Checking char
	flag[222] = 'J';
	goto LABEL6867;
	
	LABEL6968:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6969:
	// Checking char
	flag[114] = '/';
	goto LABEL6968;
	
	LABEL6970:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6971:
	// Setting char
	flag[128] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7071;
	
	else 
		goto LABEL6970;
	
	LABEL6972:
	// Checking char
	flag[22] = 'v';
	goto LABEL6971;
	
	LABEL6973:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6974:
	// Setting char
	flag[136] = '&';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7074;
	
	else if (r == 1)
		goto LABEL6975;
	
	else 
		goto LABEL6973;
	
	LABEL6975:
	// Setting char
	flag[115] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6875;
	
	else 
		goto LABEL6976;
	
	LABEL6976:
	// Checking char
	flag[97] = 'C';
	goto LABEL7076;
	
	LABEL6977:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6978:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6979:
	// Setting char
	flag[157] = 'v';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7079;
	
	else if (r == 1)
		goto LABEL6980;
	
	else 
		goto LABEL6978;
	
	LABEL6980:
	// Checking char
	flag[225] = '7';
	goto LABEL6880;
	
	LABEL6981:
	// Checking char
	flag[148] = 'n';
	goto LABEL7081;
	
	LABEL6982:
	// Setting char
	flag[73] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7082;
	
	else 
		goto LABEL6981;
	
	LABEL6983:
	// Checking char
	flag[56] = 'g';
	goto LABEL6982;
	
	LABEL6984:
	// Setting char
	flag[48] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7084;
	
	else 
		goto LABEL6983;
	
	LABEL6985:
	// Checking char
	flag[114] = '_';
	goto LABEL7085;
	
	LABEL6986:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6987:
	// Checking char
	flag[66] = 'F';
	goto LABEL7087;
	
	LABEL6988:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6989:
	// Setting char
	flag[0] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7089;
	
	else 
		goto LABEL6988;
	
	LABEL6990:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6991:
	// Setting char
	flag[83] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6891;
	
	else 
		goto LABEL6990;
	
	LABEL6992:
	// Setting char
	flag[203] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7092;
	
	else 
		goto LABEL6991;
	
	LABEL6993:
	// Setting char
	flag[132] = 'M';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7093;
	
	else if (r == 1)
		goto LABEL6994;
	
	else 
		goto LABEL6992;
	
	LABEL6994:
	// Setting char
	flag[3] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7094;
	
	else 
		goto LABEL6995;
	
	LABEL6995:
	// Checking char
	flag[41] = 'g';
	goto LABEL6996;
	
	LABEL6996:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6997:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL6998:
	// Checking char
	flag[231] = '&';
	goto LABEL6997;
	
	LABEL6999:
	// Checking char
	flag[168] = 'o';
	goto LABEL7099;
	
	LABEL7000:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7001:
	// Checking char
	flag[208] = '4';
	goto LABEL7101;
	
	LABEL7002:
	// Checking char
	flag[28] = '}';
	goto LABEL7001;
	
	LABEL7003:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7004:
	// Checking char
	flag[4] = '3';
	goto LABEL7104;
	
	LABEL7005:
	// Setting char
	flag[38] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7006;
	
	else 
		goto LABEL7004;
	
	LABEL7006:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7007:
	// Setting char
	flag[45] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7107;
	
	else 
		goto LABEL7008;
	
	LABEL7008:
	// Checking char
	flag[144] = 'm';
	goto LABEL7108;
	
	LABEL7009:
	// Checking char
	flag[210] = 'w';
	goto LABEL7109;
	
	LABEL7010:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7011:
	// Setting char
	flag[174] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7012;
	
	else 
		goto LABEL7010;
	
	LABEL7012:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7013:
	// Setting char
	flag[96] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6913;
	
	else 
		goto LABEL7113;
	
	LABEL7014:
	// Setting char
	flag[108] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7114;
	
	else if (r == 1)
		goto LABEL7015;
	
	else 
		goto LABEL7013;
	
	LABEL7015:
	// Checking char
	flag[164] = 'r';
	goto LABEL6915;
	
	LABEL7016:
	// Checking char
	flag[25] = ';';
	goto LABEL7116;
	
	LABEL7017:
	// Setting char
	flag[81] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7018;
	
	else 
		goto LABEL7016;
	
	LABEL7018:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7019:
	// Checking char
	flag[81] = '*';
	goto LABEL7119;
	
	LABEL7020:
	// Checking char
	flag[61] = ']';
	goto LABEL7019;
	
	LABEL7021:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7022:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7023:
	// Setting char
	flag[61] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7123;
	
	else 
		goto LABEL7022;
	
	LABEL7024:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7025:
	// Checking char
	flag[98] = 'v';
	goto LABEL7024;
	
	LABEL7026:
	// Checking char
	flag[93] = 'u';
	goto LABEL6926;
	
	LABEL7027:
	// Checking char
	flag[221] = 'P';
	goto LABEL7127;
	
	LABEL7028:
	// Setting char
	flag[141] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6928;
	
	else 
		goto LABEL7027;
	
	LABEL7029:
	// Setting char
	flag[229] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7129;
	
	else 
		goto LABEL7028;
	
	LABEL7030:
	// Checking char
	flag[118] = 'S';
	goto LABEL7031;
	
	LABEL7031:
	// Checking char
	flag[149] = 'X';
	goto LABEL7131;
	
	LABEL7032:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7033:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7034:
	// Checking char
	flag[22] = '@';
	goto LABEL6934;
	
	LABEL7035:
	// Setting char
	flag[14] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6935;
	
	else 
		goto LABEL7034;
	
	LABEL7036:
	// Setting char
	flag[209] = 'F';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7136;
	
	else if (r == 1)
		goto LABEL7037;
	
	else 
		goto LABEL7035;
	
	LABEL7037:
	// Checking char
	flag[210] = 'l';
	goto LABEL7038;
	
	LABEL7038:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7039:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7040:
	// Setting char
	flag[210] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7140;
	
	else 
		goto LABEL7039;
	
	LABEL7041:
	// Setting char
	flag[78] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6941;
	
	else if (r == 1)
		goto LABEL7141;
	
	else 
		goto LABEL7040;
	
	LABEL7042:
	// Checking char
	flag[150] = '@';
	goto LABEL7041;
	
	LABEL7043:
	// Setting char
	flag[228] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7143;
	
	else 
		goto LABEL7042;
	
	LABEL7044:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7045:
	// Setting char
	flag[37] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6945;
	
	else 
		goto LABEL7145;
	
	LABEL7046:
	// Setting char
	flag[13] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7047;
	
	else 
		goto LABEL7045;
	
	LABEL7047:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7048:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7049:
	// Setting char
	flag[69] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7149;
	
	else 
		goto LABEL7048;
	
	LABEL7050:
	// Setting char
	flag[182] = 'H';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6950;
	
	else if (r == 1)
		goto LABEL7150;
	
	else 
		goto LABEL7049;
	
	LABEL7051:
	// Checking char
	flag[142] = '3';
	goto LABEL7050;
	
	LABEL7052:
	// Setting char
	flag[99] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7152;
	
	else 
		goto LABEL7051;
	
	LABEL7053:
	// Checking char
	flag[64] = ')';
	goto LABEL7153;
	
	LABEL7054:
	// Setting char
	flag[9] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7055;
	
	else 
		goto LABEL7053;
	
	LABEL7055:
	// Setting char
	flag[102] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL6955;
	
	else 
		goto LABEL7155;
	
	LABEL7056:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7057:
	// Checking char
	flag[212] = 'O';
	goto LABEL7056;
	
	LABEL7058:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7059:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7060:
	// Setting char
	flag[136] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7160;
	
	else 
		goto LABEL7059;
	
	LABEL7061:
	// Checking char
	flag[24] = 'J';
	goto LABEL7060;
	
	LABEL7062:
	// Setting char
	flag[204] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7162;
	
	else 
		goto LABEL7061;
	
	LABEL7063:
	// Setting char
	flag[84] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7163;
	
	else 
		goto LABEL7062;
	
	LABEL7064:
	// Setting char
	flag[72] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7164;
	
	else 
		goto LABEL7063;
	
	LABEL7065:
	// Checking char
	flag[121] = 'X';
	goto LABEL6965;
	
	LABEL7066:
	// Checking char
	flag[179] = '>';
	goto LABEL7065;
	
	LABEL7067:
	// Setting char
	flag[1] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6967;
	
	else if (r == 1)
		goto LABEL7068;
	
	else 
		goto LABEL7066;
	
	LABEL7068:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7069:
	// Checking char
	flag[136] = '"';
	goto LABEL7169;
	
	LABEL7070:
	// Checking char
	flag[79] = 'F';
	goto LABEL7069;
	
	LABEL7071:
	// Setting char
	flag[46] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7171;
	
	else if (r == 1)
		goto LABEL7072;
	
	else 
		goto LABEL7070;
	
	LABEL7072:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7073:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7074:
	// Checking char
	flag[71] = '9';
	goto LABEL7174;
	
	LABEL7075:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7076:
	// Checking char
	flag[194] = 'z';
	goto LABEL7075;
	
	LABEL7077:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7078:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7079:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7080:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7081:
	// Setting char
	flag[7] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7181;
	
	else 
		goto LABEL7080;
	
	LABEL7082:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7083:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7084:
	// Setting char
	flag[152] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7184;
	
	else 
		goto LABEL7083;
	
	LABEL7085:
	// Checking char
	flag[121] = '4';
	goto LABEL7185;
	
	LABEL7086:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7087:
	// Setting char
	flag[65] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7088;
	
	else 
		goto LABEL7086;
	
	LABEL7088:
	// Checking char
	flag[87] = 'U';
	goto LABEL7188;
	
	LABEL7089:
	// Setting char
	flag[37] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7189;
	
	else 
		goto LABEL7090;
	
	LABEL7090:
	// Checking char
	flag[1] = 'Q';
	goto LABEL7091;
	
	LABEL7091:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7092:
	// Checking char
	flag[151] = '-';
	goto LABEL7192;
	
	LABEL7093:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7094:
	// Setting char
	flag[151] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7194;
	
	else 
		goto LABEL7095;
	
	LABEL7095:
	// Checking char
	flag[97] = 'a';
	goto LABEL7195;
	
	LABEL7096:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7097:
	// Checking char
	flag[12] = 'd';
	goto LABEL7197;
	
	LABEL7098:
	// Setting char
	flag[226] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL6998;
	
	else if (r == 1)
		goto LABEL7198;
	
	else 
		goto LABEL7097;
	
	LABEL7099:
	// Setting char
	flag[193] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7199;
	
	else 
		goto LABEL7098;
	
	LABEL7100:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7101:
	// Setting char
	flag[30] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7201;
	
	else 
		goto LABEL7100;
	
	LABEL7102:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7103:
	// Setting char
	flag[164] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7203;
	
	else 
		goto LABEL7102;
	
	LABEL7104:
	// Setting char
	flag[59] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7105;
	
	else 
		goto LABEL7103;
	
	LABEL7105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7106:
	// Checking char
	flag[19] = 'j';
	goto LABEL7206;
	
	LABEL7107:
	// Setting char
	flag[218] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7207;
	
	else 
		goto LABEL7106;
	
	LABEL7108:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7109:
	// Checking char
	flag[188] = 'W';
	goto LABEL7209;
	
	LABEL7110:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7111:
	// Checking char
	flag[136] = 'c';
	goto LABEL7110;
	
	LABEL7112:
	// Checking char
	flag[8] = '*';
	goto LABEL7111;
	
	LABEL7113:
	// Checking char
	flag[79] = ':';
	goto LABEL7213;
	
	LABEL7114:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7115:
	// Checking char
	flag[72] = '^';
	goto LABEL7215;
	
	LABEL7116:
	// Checking char
	flag[248] = 'a';
	goto LABEL7115;
	
	LABEL7117:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7118:
	// Setting char
	flag[239] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7218;
	
	else 
		goto LABEL7117;
	
	LABEL7119:
	// Setting char
	flag[30] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7219;
	
	else if (r == 1)
		goto LABEL7120;
	
	else 
		goto LABEL7118;
	
	LABEL7120:
	// Checking char
	flag[141] = 'q';
	goto LABEL7121;
	
	LABEL7121:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7122:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7123:
	// Setting char
	flag[114] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7223;
	
	else 
		goto LABEL7122;
	
	LABEL7124:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7125:
	// Setting char
	flag[40] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7025;
	
	else 
		goto LABEL7124;
	
	LABEL7126:
	// Setting char
	flag[231] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7026;
	
	else if (r == 1)
		goto LABEL7226;
	
	else 
		goto LABEL7125;
	
	LABEL7127:
	// Setting char
	flag[85] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7128;
	
	else 
		goto LABEL7126;
	
	LABEL7128:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7129:
	// Checking char
	flag[127] = '1';
	goto LABEL7229;
	
	LABEL7130:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7131:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7132:
	// Checking char
	flag[87] = '8';
	goto LABEL7032;
	
	LABEL7133:
	// Setting char
	flag[152] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7033;
	
	else 
		goto LABEL7132;
	
	LABEL7134:
	// Setting char
	flag[25] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7234;
	
	else 
		goto LABEL7133;
	
	LABEL7135:
	// Checking char
	flag[129] = '^';
	goto LABEL7134;
	
	LABEL7136:
	// Setting char
	flag[21] = 'b';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7236;
	
	else if (r == 1)
		goto LABEL7137;
	
	else 
		goto LABEL7135;
	
	LABEL7137:
	// Checking char
	flag[132] = '>';
	goto LABEL7138;
	
	LABEL7138:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7139:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7140:
	// Checking char
	flag[215] = 'O';
	goto LABEL7240;
	
	LABEL7141:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7142:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7143:
	// Checking char
	flag[182] = '>';
	goto LABEL7144;
	
	LABEL7144:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7145:
	// Setting char
	flag[228] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7245;
	
	else 
		goto LABEL7146;
	
	LABEL7146:
	// Setting char
	flag[200] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7246;
	
	else 
		goto LABEL7147;
	
	LABEL7147:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7148:
	// Checking char
	flag[155] = 'S';
	goto LABEL7248;
	
	LABEL7149:
	// Checking char
	flag[188] = 'C';
	goto LABEL7148;
	
	LABEL7150:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7151:
	// Checking char
	flag[86] = '~';
	goto LABEL7251;
	
	LABEL7152:
	// Checking char
	flag[213] = '}';
	goto LABEL7151;
	
	LABEL7153:
	// Checking char
	flag[49] = 'O';
	goto LABEL7253;
	
	LABEL7154:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7155:
	// Setting char
	flag[168] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7255;
	
	else if (r == 1)
		goto LABEL7156;
	
	else 
		goto LABEL7154;
	
	LABEL7156:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7157:
	// Checking char
	flag[243] = 'n';
	goto LABEL7257;
	
	LABEL7158:
	// Setting char
	flag[218] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7058;
	
	else 
		goto LABEL7157;
	
	LABEL7159:
	// Setting char
	flag[244] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7259;
	
	else 
		goto LABEL7158;
	
	LABEL7160:
	// Checking char
	flag[208] = 'g';
	goto LABEL7159;
	
	LABEL7161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7162:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7163:
	// Checking char
	flag[45] = 'n';
	goto LABEL7263;
	
	LABEL7164:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7165:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7166:
	// Setting char
	flag[9] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7266;
	
	else 
		goto LABEL7165;
	
	LABEL7167:
	// Setting char
	flag[237] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7067;
	
	else 
		goto LABEL7166;
	
	LABEL7168:
	// Setting char
	flag[96] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7268;
	
	else 
		goto LABEL7167;
	
	LABEL7169:
	// Checking char
	flag[59] = 'P';
	goto LABEL7168;
	
	LABEL7170:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7171:
	// Setting char
	flag[29] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7271;
	
	else if (r == 1)
		goto LABEL7172;
	
	else 
		goto LABEL7170;
	
	LABEL7172:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7173:
	// Checking char
	flag[98] = 'q';
	goto LABEL7073;
	
	LABEL7174:
	// Setting char
	flag[75] = '>';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7274;
	
	else if (r == 1)
		goto LABEL7175;
	
	else 
		goto LABEL7173;
	
	LABEL7175:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7176:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7177:
	// Setting char
	flag[49] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7077;
	
	else 
		goto LABEL7176;
	
	LABEL7178:
	// Setting char
	flag[68] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7078;
	
	else 
		goto LABEL7177;
	
	LABEL7179:
	// Checking char
	flag[129] = '6';
	goto LABEL7178;
	
	LABEL7180:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7181:
	// Checking char
	flag[187] = '=';
	goto LABEL7180;
	
	LABEL7182:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7183:
	// Setting char
	flag[97] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7283;
	
	else 
		goto LABEL7182;
	
	LABEL7184:
	// Setting char
	flag[101] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7284;
	
	else 
		goto LABEL7183;
	
	LABEL7185:
	// Checking char
	flag[214] = '.';
	goto LABEL7186;
	
	LABEL7186:
	// Checking char
	flag[133] = 'k';
	goto LABEL7286;
	
	LABEL7187:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7188:
	// Setting char
	flag[175] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7288;
	
	else 
		goto LABEL7187;
	
	LABEL7189:
	// Checking char
	flag[92] = 'v';
	goto LABEL7190;
	
	LABEL7190:
	// Checking char
	flag[95] = 'B';
	goto LABEL7191;
	
	LABEL7191:
	// Checking char
	flag[73] = 'A';
	goto LABEL7291;
	
	LABEL7192:
	// Checking char
	flag[95] = 'r';
	goto LABEL7292;
	
	LABEL7193:
	// Checking char
	flag[120] = 'Z';
	goto LABEL7293;
	
	LABEL7194:
	// Setting char
	flag[241] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7294;
	
	else 
		goto LABEL7193;
	
	LABEL7195:
	// Setting char
	flag[96] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7295;
	
	else 
		goto LABEL7196;
	
	LABEL7196:
	// Checking char
	flag[20] = 'z';
	goto LABEL7096;
	
	LABEL7197:
	// Checking char
	flag[232] = '_';
	goto LABEL7297;
	
	LABEL7198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7199:
	// Checking char
	flag[225] = '+';
	goto LABEL7299;
	
	LABEL7200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7201:
	// Setting char
	flag[66] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7301;
	
	else 
		goto LABEL7200;
	
	LABEL7202:
	// Checking char
	flag[166] = '5';
	goto LABEL7302;
	
	LABEL7203:
	// Setting char
	flag[203] = 'V';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7303;
	
	else if (r == 1)
		goto LABEL7204;
	
	else 
		goto LABEL7202;
	
	LABEL7204:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7205:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7206:
	// Checking char
	flag[88] = ',';
	goto LABEL7306;
	
	LABEL7207:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7208:
	// Checking char
	flag[222] = ']';
	goto LABEL7308;
	
	LABEL7209:
	// Setting char
	flag[247] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7309;
	
	else 
		goto LABEL7208;
	
	LABEL7210:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7211:
	// Setting char
	flag[137] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7311;
	
	else 
		goto LABEL7210;
	
	LABEL7212:
	// Setting char
	flag[30] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7112;
	
	else 
		goto LABEL7211;
	
	LABEL7213:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7214:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7215:
	// Checking char
	flag[153] = '!';
	goto LABEL7214;
	
	LABEL7216:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7217:
	// Checking char
	flag[241] = 'i';
	goto LABEL7216;
	
	LABEL7218:
	// Checking char
	flag[122] = 'I';
	goto LABEL7217;
	
	LABEL7219:
	// Checking char
	flag[203] = '(';
	goto LABEL7220;
	
	LABEL7220:
	// Checking char
	flag[88] = 'I';
	goto LABEL7221;
	
	LABEL7221:
	// Setting char
	flag[14] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7321;
	
	else 
		goto LABEL7222;
	
	LABEL7222:
	// Checking char
	flag[210] = ']';
	goto LABEL7322;
	
	LABEL7223:
	// Checking char
	flag[172] = '-';
	goto LABEL7323;
	
	LABEL7224:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7225:
	// Checking char
	flag[224] = 'T';
	goto LABEL7325;
	
	LABEL7226:
	// Checking char
	flag[167] = 'x';
	goto LABEL7225;
	
	LABEL7227:
	// Checking char
	flag[140] = '_';
	goto LABEL7327;
	
	LABEL7228:
	// Checking char
	flag[27] = '"';
	goto LABEL7227;
	
	LABEL7229:
	// Setting char
	flag[81] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7329;
	
	else 
		goto LABEL7230;
	
	LABEL7230:
	// Checking char
	flag[75] = 'a';
	goto LABEL7130;
	
	LABEL7231:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7232:
	// Setting char
	flag[121] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7332;
	
	else 
		goto LABEL7231;
	
	LABEL7233:
	// Checking char
	flag[212] = 'r';
	goto LABEL7232;
	
	LABEL7234:
	// Setting char
	flag[61] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7334;
	
	else 
		goto LABEL7233;
	
	LABEL7235:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7236:
	// Checking char
	flag[228] = 'c';
	goto LABEL7336;
	
	LABEL7237:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7238:
	// Checking char
	flag[29] = '7';
	goto LABEL7237;
	
	LABEL7239:
	// Setting char
	flag[207] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7139;
	
	else if (r == 1)
		goto LABEL7339;
	
	else 
		goto LABEL7238;
	
	LABEL7240:
	// Setting char
	flag[14] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7340;
	
	else 
		goto LABEL7239;
	
	LABEL7241:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7242:
	// Setting char
	flag[62] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7142;
	
	else 
		goto LABEL7241;
	
	LABEL7243:
	// Checking char
	flag[149] = 'R';
	goto LABEL7242;
	
	LABEL7244:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7245:
	// Checking char
	flag[44] = 'f';
	goto LABEL7345;
	
	LABEL7246:
	// Setting char
	flag[171] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7346;
	
	else 
		goto LABEL7247;
	
	LABEL7247:
	// Checking char
	flag[233] = 'z';
	goto LABEL7347;
	
	LABEL7248:
	// Checking char
	flag[15] = 'i';
	goto LABEL7249;
	
	LABEL7249:
	// Checking char
	flag[243] = '!';
	goto LABEL7250;
	
	LABEL7250:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7251:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7252:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7253:
	// Setting char
	flag[171] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7353;
	
	else 
		goto LABEL7252;
	
	LABEL7254:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7255:
	// Setting char
	flag[133] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7355;
	
	else if (r == 1)
		goto LABEL7256;
	
	else 
		goto LABEL7254;
	
	LABEL7256:
	// Checking char
	flag[219] = '8';
	goto LABEL7356;
	
	LABEL7257:
	// Checking char
	flag[124] = '`';
	goto LABEL7357;
	
	LABEL7258:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7259:
	// Setting char
	flag[144] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7359;
	
	else if (r == 1)
		goto LABEL7260;
	
	else 
		goto LABEL7258;
	
	LABEL7260:
	// Checking char
	flag[231] = '|';
	goto LABEL7360;
	
	LABEL7261:
	// Checking char
	flag[101] = '#';
	goto LABEL7161;
	
	LABEL7262:
	// Checking char
	flag[137] = 'p';
	goto LABEL7261;
	
	LABEL7263:
	// Checking char
	flag[230] = 'B';
	goto LABEL7262;
	
	LABEL7264:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7266:
	// Setting char
	flag[77] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7366;
	
	else 
		goto LABEL7265;
	
	LABEL7267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7268:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7269:
	// Checking char
	flag[8] = 't';
	goto LABEL7369;
	
	LABEL7270:
	// Setting char
	flag[187] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7370;
	
	else 
		goto LABEL7269;
	
	LABEL7271:
	// Setting char
	flag[130] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7371;
	
	else if (r == 1)
		goto LABEL7272;
	
	else 
		goto LABEL7270;
	
	LABEL7272:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7274:
	// Setting char
	flag[213] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7374;
	
	else 
		goto LABEL7275;
	
	LABEL7275:
	// Setting char
	flag[168] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7375;
	
	else 
		goto LABEL7276;
	
	LABEL7276:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7277:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7278:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7279:
	// Setting char
	flag[104] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7179;
	
	else 
		goto LABEL7278;
	
	LABEL7280:
	// Checking char
	flag[8] = 'e';
	goto LABEL7279;
	
	LABEL7281:
	// Checking char
	flag[48] = '&';
	goto LABEL7280;
	
	LABEL7282:
	// Checking char
	flag[148] = 'u';
	goto LABEL7281;
	
	LABEL7283:
	// Checking char
	flag[147] = 'J';
	goto LABEL7383;
	
	LABEL7284:
	// Checking char
	flag[157] = 'x';
	goto LABEL7285;
	
	LABEL7285:
	// Checking char
	flag[71] = '}';
	goto LABEL7385;
	
	LABEL7286:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7287:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7288:
	// Setting char
	flag[167] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7388;
	
	else 
		goto LABEL7287;
	
	LABEL7289:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7290:
	// Checking char
	flag[117] = 'u';
	goto LABEL7390;
	
	LABEL7291:
	// Setting char
	flag[67] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7391;
	
	else 
		goto LABEL7290;
	
	LABEL7292:
	// Checking char
	flag[62] = 'S';
	goto LABEL7392;
	
	LABEL7293:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7294:
	// Checking char
	flag[52] = 'U';
	goto LABEL7394;
	
	LABEL7295:
	// Setting char
	flag[54] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7395;
	
	else 
		goto LABEL7296;
	
	LABEL7296:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7297:
	// Setting char
	flag[18] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7397;
	
	else 
		goto LABEL7298;
	
	LABEL7298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7299:
	// Checking char
	flag[59] = '5';
	goto LABEL7399;
	
	LABEL7300:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7301:
	// Checking char
	flag[185] = '1';
	goto LABEL7401;
	
	LABEL7302:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7303:
	// Setting char
	flag[54] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7403;
	
	else 
		goto LABEL7304;
	
	LABEL7304:
	// Checking char
	flag[26] = '?';
	goto LABEL7404;
	
	LABEL7305:
	// Setting char
	flag[67] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7205;
	
	else 
		goto LABEL7405;
	
	LABEL7306:
	// Checking char
	flag[198] = 'O';
	goto LABEL7305;
	
	LABEL7307:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7308:
	// Checking char
	flag[97] = 't';
	goto LABEL7307;
	
	LABEL7309:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7310:
	// Checking char
	flag[32] = ';';
	goto LABEL7410;
	
	LABEL7311:
	// Checking char
	flag[68] = 'W';
	goto LABEL7310;
	
	LABEL7312:
	// Setting char
	flag[120] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7212;
	
	else 
		goto LABEL7412;
	
	LABEL7313:
	// Setting char
	flag[149] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7413;
	
	else 
		goto LABEL7312;
	
	LABEL7314:
	// Checking char
	flag[63] = 'x';
	goto LABEL7313;
	
	LABEL7315:
	// Checking char
	flag[190] = 'D';
	goto LABEL7316;
	
	LABEL7316:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7317:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7318:
	// Checking char
	flag[58] = '~';
	goto LABEL7317;
	
	LABEL7319:
	// Setting char
	flag[25] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7419;
	
	else 
		goto LABEL7318;
	
	LABEL7320:
	// Checking char
	flag[36] = 'z';
	goto LABEL7319;
	
	LABEL7321:
	// Setting char
	flag[226] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7421;
	
	else 
		goto LABEL7320;
	
	LABEL7322:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7323:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7324:
	// Setting char
	flag[107] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7224;
	
	else 
		goto LABEL7424;
	
	LABEL7325:
	// Checking char
	flag[78] = '4';
	goto LABEL7324;
	
	LABEL7326:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7327:
	// Checking char
	flag[61] = '1';
	goto LABEL7326;
	
	LABEL7328:
	// Setting char
	flag[53] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7228;
	
	else 
		goto LABEL7428;
	
	LABEL7329:
	// Setting char
	flag[34] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7330;
	
	else 
		goto LABEL7328;
	
	LABEL7330:
	// Setting char
	flag[90] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7430;
	
	else 
		goto LABEL7331;
	
	LABEL7331:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7332:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7333:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7334:
	// Setting char
	flag[24] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7434;
	
	else 
		goto LABEL7333;
	
	LABEL7335:
	// Checking char
	flag[61] = '"';
	goto LABEL7235;
	
	LABEL7336:
	// Setting char
	flag[158] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7436;
	
	else 
		goto LABEL7335;
	
	LABEL7337:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7338:
	// Checking char
	flag[25] = 's';
	goto LABEL7438;
	
	LABEL7339:
	// Setting char
	flag[56] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7439;
	
	else 
		goto LABEL7338;
	
	LABEL7340:
	// Setting char
	flag[125] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7440;
	
	else 
		goto LABEL7341;
	
	LABEL7341:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7342:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7343:
	// Setting char
	flag[99] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7243;
	
	else 
		goto LABEL7342;
	
	LABEL7344:
	// Setting char
	flag[6] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7244;
	
	else 
		goto LABEL7343;
	
	LABEL7345:
	// Setting char
	flag[193] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7445;
	
	else 
		goto LABEL7344;
	
	LABEL7346:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7347:
	// Setting char
	flag[82] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7447;
	
	else 
		goto LABEL7348;
	
	LABEL7348:
	// Setting char
	flag[9] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7448;
	
	else 
		goto LABEL7349;
	
	LABEL7349:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7350:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7351:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7352:
	// Checking char
	flag[226] = '-';
	goto LABEL7452;
	
	LABEL7353:
	// Setting char
	flag[206] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7453;
	
	else 
		goto LABEL7352;
	
	LABEL7354:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7355:
	// Setting char
	flag[232] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7455;
	
	else 
		goto LABEL7354;
	
	LABEL7356:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7357:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7358:
	// Checking char
	flag[4] = '>';
	goto LABEL7458;
	
	LABEL7359:
	// Checking char
	flag[200] = 'a';
	goto LABEL7358;
	
	LABEL7360:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7361:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7362:
	// Checking char
	flag[82] = '3';
	goto LABEL7361;
	
	LABEL7363:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7364:
	// Setting char
	flag[163] = 'M';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7264;
	
	else if (r == 1)
		goto LABEL7464;
	
	else 
		goto LABEL7363;
	
	LABEL7365:
	// Setting char
	flag[56] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7465;
	
	else 
		goto LABEL7364;
	
	LABEL7366:
	// Setting char
	flag[213] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7466;
	
	else 
		goto LABEL7365;
	
	LABEL7367:
	// Setting char
	flag[199] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7267;
	
	else 
		goto LABEL7368;
	
	LABEL7368:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7369:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7370:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7371:
	// Setting char
	flag[158] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7471;
	
	else 
		goto LABEL7372;
	
	LABEL7372:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7373:
	// Checking char
	flag[92] = 'E';
	goto LABEL7273;
	
	LABEL7374:
	// Setting char
	flag[187] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7474;
	
	else 
		goto LABEL7373;
	
	LABEL7375:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7376:
	// Checking char
	flag[40] = '_';
	goto LABEL7476;
	
	LABEL7377:
	// Setting char
	flag[38] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7277;
	
	else 
		goto LABEL7376;
	
	LABEL7378:
	// Checking char
	flag[144] = 'o';
	goto LABEL7377;
	
	LABEL7379:
	// Checking char
	flag[189] = 'Y';
	goto LABEL7378;
	
	LABEL7380:
	// Setting char
	flag[89] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7480;
	
	else 
		goto LABEL7379;
	
	LABEL7381:
	// Checking char
	flag[1] = ')';
	goto LABEL7380;
	
	LABEL7382:
	// Setting char
	flag[204] = 'P';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7282;
	
	else if (r == 1)
		goto LABEL7482;
	
	else 
		goto LABEL7381;
	
	LABEL7383:
	// Setting char
	flag[106] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7483;
	
	else if (r == 1)
		goto LABEL7384;
	
	else 
		goto LABEL7382;
	
	LABEL7384:
	// Checking char
	flag[41] = 'b';
	goto LABEL7484;
	
	LABEL7385:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7386:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7387:
	// Checking char
	flag[200] = 'H';
	goto LABEL7386;
	
	LABEL7388:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7389:
	// Checking char
	flag[190] = '*';
	goto LABEL7289;
	
	LABEL7390:
	// Checking char
	flag[143] = 'i';
	goto LABEL7389;
	
	LABEL7391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7392:
	// Checking char
	flag[242] = 'K';
	goto LABEL7492;
	
	LABEL7393:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7394:
	// Checking char
	flag[103] = 'A';
	goto LABEL7393;
	
	LABEL7395:
	// Checking char
	flag[161] = '7';
	goto LABEL7396;
	
	LABEL7396:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7397:
	// Setting char
	flag[156] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7497;
	
	else 
		goto LABEL7398;
	
	LABEL7398:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7399:
	// Checking char
	flag[186] = 'z';
	goto LABEL7499;
	
	LABEL7400:
	// Checking char
	flag[150] = 'W';
	goto LABEL7300;
	
	LABEL7401:
	// Checking char
	flag[137] = 'f';
	goto LABEL7400;
	
	LABEL7402:
	// Checking char
	flag[27] = '1';
	goto LABEL7502;
	
	LABEL7403:
	// Checking char
	flag[25] = '`';
	goto LABEL7402;
	
	LABEL7404:
	// Checking char
	flag[244] = '$';
	goto LABEL7504;
	
	LABEL7405:
	// Checking char
	flag[183] = '/';
	goto LABEL7406;
	
	LABEL7406:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7407:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7408:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7409:
	// Checking char
	flag[198] = 'O';
	goto LABEL7408;
	
	LABEL7410:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7411:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7412:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7413:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7414:
	// Checking char
	flag[231] = 'l';
	goto LABEL7314;
	
	LABEL7415:
	// Setting char
	flag[41] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7315;
	
	else 
		goto LABEL7414;
	
	LABEL7416:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7417:
	// Checking char
	flag[157] = 'K';
	goto LABEL7517;
	
	LABEL7418:
	// Setting char
	flag[35] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7518;
	
	else 
		goto LABEL7417;
	
	LABEL7419:
	// Setting char
	flag[110] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7420;
	
	else 
		goto LABEL7418;
	
	LABEL7420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7421:
	// Setting char
	flag[172] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7521;
	
	else 
		goto LABEL7422;
	
	LABEL7422:
	// Setting char
	flag[180] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7522;
	
	else 
		goto LABEL7423;
	
	LABEL7423:
	// Checking char
	flag[242] = '+';
	goto LABEL7523;
	
	LABEL7424:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7425:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7426:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7427:
	// Checking char
	flag[223] = 'g';
	goto LABEL7426;
	
	LABEL7428:
	// Setting char
	flag[69] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7528;
	
	else 
		goto LABEL7427;
	
	LABEL7429:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7430:
	// Setting char
	flag[86] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7431;
	
	else 
		goto LABEL7429;
	
	LABEL7431:
	// Setting char
	flag[197] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7531;
	
	else 
		goto LABEL7432;
	
	LABEL7432:
	// Checking char
	flag[212] = '{';
	goto LABEL7532;
	
	LABEL7433:
	// Checking char
	flag[75] = '*';
	goto LABEL7533;
	
	LABEL7434:
	// Checking char
	flag[160] = '&';
	goto LABEL7433;
	
	LABEL7435:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7436:
	// Setting char
	flag[89] = 'U';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7536;
	
	else if (r == 1)
		goto LABEL7437;
	
	else 
		goto LABEL7435;
	
	LABEL7437:
	// Checking char
	flag[216] = 'T';
	goto LABEL7337;
	
	LABEL7438:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7439:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7440:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7441:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7442:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7443:
	// Checking char
	flag[25] = 'U';
	goto LABEL7442;
	
	LABEL7444:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7445:
	// Setting char
	flag[43] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7545;
	
	else 
		goto LABEL7444;
	
	LABEL7446:
	// Checking char
	flag[234] = 'N';
	goto LABEL7546;
	
	LABEL7447:
	// Checking char
	flag[151] = '8';
	goto LABEL7446;
	
	LABEL7448:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7449:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7450:
	// Setting char
	flag[120] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7350;
	
	else 
		goto LABEL7451;
	
	LABEL7451:
	// Checking char
	flag[122] = '|';
	goto LABEL7351;
	
	LABEL7452:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7453:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7454:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7455:
	// Setting char
	flag[62] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7456;
	
	else 
		goto LABEL7454;
	
	LABEL7456:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7457:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7458:
	// Setting char
	flag[14] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7459;
	
	else 
		goto LABEL7457;
	
	LABEL7459:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7460:
	// Checking char
	flag[130] = '8';
	goto LABEL7560;
	
	LABEL7461:
	// Checking char
	flag[27] = 'Y';
	goto LABEL7460;
	
	LABEL7462:
	// Setting char
	flag[24] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7362;
	
	else if (r == 1)
		goto LABEL7562;
	
	else 
		goto LABEL7461;
	
	LABEL7463:
	// Setting char
	flag[154] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7563;
	
	else 
		goto LABEL7462;
	
	LABEL7464:
	// Checking char
	flag[37] = 'J';
	goto LABEL7463;
	
	LABEL7465:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7466:
	// Setting char
	flag[234] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7566;
	
	else 
		goto LABEL7467;
	
	LABEL7467:
	// Setting char
	flag[12] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7367;
	
	else 
		goto LABEL7468;
	
	LABEL7468:
	// Checking char
	flag[9] = 'L';
	goto LABEL7568;
	
	LABEL7469:
	// Checking char
	flag[169] = '|';
	goto LABEL7569;
	
	LABEL7470:
	// Setting char
	flag[148] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7570;
	
	else 
		goto LABEL7469;
	
	LABEL7471:
	// Checking char
	flag[153] = '(';
	goto LABEL7470;
	
	LABEL7472:
	// Checking char
	flag[138] = ']';
	goto LABEL7572;
	
	LABEL7473:
	// Setting char
	flag[124] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7573;
	
	else 
		goto LABEL7472;
	
	LABEL7474:
	// Setting char
	flag[179] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7574;
	
	else if (r == 1)
		goto LABEL7475;
	
	else 
		goto LABEL7473;
	
	LABEL7475:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7476:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7477:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7478:
	// Checking char
	flag[235] = '~';
	goto LABEL7477;
	
	LABEL7479:
	// Checking char
	flag[57] = 'F';
	goto LABEL7478;
	
	LABEL7480:
	// Checking char
	flag[63] = 'D';
	goto LABEL7479;
	
	LABEL7481:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7482:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7483:
	// Checking char
	flag[156] = 'M';
	goto LABEL7583;
	
	LABEL7484:
	// Checking char
	flag[46] = 's';
	goto LABEL7485;
	
	LABEL7485:
	// Setting char
	flag[34] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7585;
	
	else 
		goto LABEL7486;
	
	LABEL7486:
	// Checking char
	flag[94] = ')';
	goto LABEL7487;
	
	LABEL7487:
	// Setting char
	flag[140] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7387;
	
	else 
		goto LABEL7587;
	
	LABEL7488:
	// Checking char
	flag[243] = 'S';
	goto LABEL7588;
	
	LABEL7489:
	// Checking char
	flag[153] = 'r';
	goto LABEL7488;
	
	LABEL7490:
	// Setting char
	flag[101] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7590;
	
	else 
		goto LABEL7489;
	
	LABEL7491:
	// Setting char
	flag[20] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7591;
	
	else 
		goto LABEL7490;
	
	LABEL7492:
	// Setting char
	flag[208] = 'm';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7592;
	
	else if (r == 1)
		goto LABEL7493;
	
	else 
		goto LABEL7491;
	
	LABEL7493:
	// Checking char
	flag[144] = ',';
	goto LABEL7494;
	
	LABEL7494:
	// Checking char
	flag[132] = 'c';
	goto LABEL7594;
	
	LABEL7495:
	// Checking char
	flag[226] = 'K';
	goto LABEL7595;
	
	LABEL7496:
	// Checking char
	flag[66] = '7';
	goto LABEL7495;
	
	LABEL7497:
	// Setting char
	flag[39] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7597;
	
	else if (r == 1)
		goto LABEL7498;
	
	else 
		goto LABEL7496;
	
	LABEL7498:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7499:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7500:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7501:
	// Checking char
	flag[147] = 'C';
	goto LABEL7500;
	
	LABEL7502:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7503:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7504:
	// Setting char
	flag[166] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7604;
	
	else 
		goto LABEL7505;
	
	LABEL7505:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7506:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7507:
	// Setting char
	flag[137] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7407;
	
	else 
		goto LABEL7607;
	
	LABEL7508:
	// Setting char
	flag[227] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7608;
	
	else 
		goto LABEL7507;
	
	LABEL7509:
	// Setting char
	flag[60] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7409;
	
	else 
		goto LABEL7508;
	
	LABEL7510:
	// Checking char
	flag[13] = 'd';
	goto LABEL7610;
	
	LABEL7511:
	// Setting char
	flag[80] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7411;
	
	else if (r == 1)
		goto LABEL7611;
	
	else 
		goto LABEL7510;
	
	LABEL7512:
	// Checking char
	flag[122] = '-';
	goto LABEL7511;
	
	LABEL7513:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7514:
	// Checking char
	flag[28] = '[';
	goto LABEL7614;
	
	LABEL7515:
	// Setting char
	flag[2] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7415;
	
	else 
		goto LABEL7514;
	
	LABEL7516:
	// Setting char
	flag[237] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7416;
	
	else 
		goto LABEL7515;
	
	LABEL7517:
	// Setting char
	flag[0] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7617;
	
	else 
		goto LABEL7516;
	
	LABEL7518:
	// Checking char
	flag[94] = 'a';
	goto LABEL7618;
	
	LABEL7519:
	// Checking char
	flag[27] = '{';
	goto LABEL7619;
	
	LABEL7520:
	// Checking char
	flag[77] = 'S';
	goto LABEL7519;
	
	LABEL7521:
	// Setting char
	flag[45] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7621;
	
	else 
		goto LABEL7520;
	
	LABEL7522:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7523:
	// Checking char
	flag[124] = 'A';
	goto LABEL7623;
	
	LABEL7524:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7525:
	// Setting char
	flag[206] = 'h';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7425;
	
	else if (r == 1)
		goto LABEL7625;
	
	else 
		goto LABEL7524;
	
	LABEL7526:
	// Setting char
	flag[168] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7626;
	
	else 
		goto LABEL7525;
	
	LABEL7527:
	// Setting char
	flag[203] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7627;
	
	else 
		goto LABEL7526;
	
	LABEL7528:
	// Setting char
	flag[213] = '"';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7628;
	
	else if (r == 1)
		goto LABEL7529;
	
	else 
		goto LABEL7527;
	
	LABEL7529:
	// Setting char
	flag[123] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7629;
	
	else 
		goto LABEL7530;
	
	LABEL7530:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7531:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7532:
	// Checking char
	flag[225] = '|';
	goto LABEL7632;
	
	LABEL7533:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7534:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7535:
	// Setting char
	flag[223] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7635;
	
	else 
		goto LABEL7534;
	
	LABEL7536:
	// Setting char
	flag[163] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7636;
	
	else 
		goto LABEL7535;
	
	LABEL7537:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7538:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7539:
	// Checking char
	flag[167] = 'M';
	goto LABEL7538;
	
	LABEL7540:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7541:
	// Checking char
	flag[147] = 'x';
	goto LABEL7441;
	
	LABEL7542:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7543:
	// Setting char
	flag[148] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7443;
	
	else 
		goto LABEL7542;
	
	LABEL7544:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7545:
	// Checking char
	flag[61] = '<';
	goto LABEL7645;
	
	LABEL7546:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7547:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7548:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7549:
	// Setting char
	flag[143] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7449;
	
	else 
		goto LABEL7548;
	
	LABEL7550:
	// Checking char
	flag[30] = 'u';
	goto LABEL7450;
	
	LABEL7551:
	// Checking char
	flag[165] = '#';
	goto LABEL7651;
	
	LABEL7552:
	// Checking char
	flag[85] = ':';
	goto LABEL7551;
	
	LABEL7553:
	// Checking char
	flag[245] = 'W';
	goto LABEL7552;
	
	LABEL7554:
	// Setting char
	flag[190] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7654;
	
	else 
		goto LABEL7553;
	
	LABEL7555:
	// Checking char
	flag[73] = 'B';
	goto LABEL7554;
	
	LABEL7556:
	// Checking char
	flag[233] = 'I';
	goto LABEL7555;
	
	LABEL7557:
	// Setting char
	flag[219] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7657;
	
	else 
		goto LABEL7556;
	
	LABEL7558:
	// Setting char
	flag[220] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7658;
	
	else 
		goto LABEL7557;
	
	LABEL7559:
	// Setting char
	flag[208] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7659;
	
	else 
		goto LABEL7558;
	
	LABEL7560:
	// Checking char
	flag[11] = 'n';
	goto LABEL7559;
	
	LABEL7561:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7562:
	// Setting char
	flag[207] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7662;
	
	else 
		goto LABEL7561;
	
	LABEL7563:
	// Checking char
	flag[212] = '9';
	goto LABEL7663;
	
	LABEL7564:
	// Checking char
	flag[117] = 'J';
	goto LABEL7664;
	
	LABEL7565:
	// Checking char
	flag[177] = 'y';
	goto LABEL7564;
	
	LABEL7566:
	// Setting char
	flag[124] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7666;
	
	else 
		goto LABEL7567;
	
	LABEL7567:
	// Checking char
	flag[115] = 'S';
	goto LABEL7667;
	
	LABEL7568:
	// Checking char
	flag[192] = '`';
	goto LABEL7668;
	
	LABEL7569:
	// Checking char
	flag[26] = ';';
	goto LABEL7669;
	
	LABEL7570:
	// Setting char
	flag[139] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7670;
	
	else 
		goto LABEL7571;
	
	LABEL7571:
	// Checking char
	flag[113] = '}';
	goto LABEL7671;
	
	LABEL7572:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7573:
	// Checking char
	flag[32] = '.';
	goto LABEL7673;
	
	LABEL7574:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7575:
	// Checking char
	flag[5] = ':';
	goto LABEL7675;
	
	LABEL7576:
	// Checking char
	flag[6] = 'M';
	goto LABEL7575;
	
	LABEL7577:
	// Setting char
	flag[133] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7677;
	
	else 
		goto LABEL7576;
	
	LABEL7578:
	// Setting char
	flag[188] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7678;
	
	else 
		goto LABEL7577;
	
	LABEL7579:
	// Setting char
	flag[204] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7679;
	
	else 
		goto LABEL7578;
	
	LABEL7580:
	// Checking char
	flag[197] = 'V';
	goto LABEL7579;
	
	LABEL7581:
	// Setting char
	flag[23] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7481;
	
	else if (r == 1)
		goto LABEL7681;
	
	else 
		goto LABEL7580;
	
	LABEL7582:
	// Setting char
	flag[180] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7682;
	
	else 
		goto LABEL7581;
	
	LABEL7583:
	// Setting char
	flag[61] = '.';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7683;
	
	else if (r == 1)
		goto LABEL7584;
	
	else 
		goto LABEL7582;
	
	LABEL7584:
	// Checking char
	flag[192] = ';';
	goto LABEL7684;
	
	LABEL7585:
	// Setting char
	flag[70] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7685;
	
	else 
		goto LABEL7586;
	
	LABEL7586:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7587:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7588:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7589:
	// Checking char
	flag[39] = '(';
	goto LABEL7689;
	
	LABEL7590:
	// Setting char
	flag[59] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7690;
	
	else 
		goto LABEL7589;
	
	LABEL7591:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7592:
	// Setting char
	flag[119] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7692;
	
	else 
		goto LABEL7593;
	
	LABEL7593:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7594:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7595:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7596:
	// Checking char
	flag[216] = 'o';
	goto LABEL7696;
	
	LABEL7597:
	// Setting char
	flag[125] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7697;
	
	else if (r == 1)
		goto LABEL7598;
	
	else 
		goto LABEL7596;
	
	LABEL7598:
	// Setting char
	flag[50] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7698;
	
	else 
		goto LABEL7599;
	
	LABEL7599:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7600:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7601:
	// Setting char
	flag[2] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7501;
	
	else 
		goto LABEL7602;
	
	LABEL7602:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7603:
	// Checking char
	flag[162] = 'l';
	goto LABEL7503;
	
	LABEL7604:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7605:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7606:
	// Checking char
	flag[22] = 'K';
	goto LABEL7506;
	
	LABEL7607:
	// Checking char
	flag[65] = 'C';
	goto LABEL7606;
	
	LABEL7608:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7609:
	// Checking char
	flag[231] = 'v';
	goto LABEL7509;
	
	LABEL7610:
	// Setting char
	flag[245] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7710;
	
	else 
		goto LABEL7609;
	
	LABEL7611:
	// Checking char
	flag[202] = 'a';
	goto LABEL7711;
	
	LABEL7612:
	// Setting char
	flag[247] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7512;
	
	else 
		goto LABEL7712;
	
	LABEL7613:
	// Setting char
	flag[35] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7513;
	
	else if (r == 1)
		goto LABEL7713;
	
	else 
		goto LABEL7612;
	
	LABEL7614:
	// Setting char
	flag[68] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7714;
	
	else 
		goto LABEL7613;
	
	LABEL7615:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7616:
	// Checking char
	flag[65] = 'b';
	goto LABEL7615;
	
	LABEL7617:
	// Setting char
	flag[131] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7717;
	
	else 
		goto LABEL7616;
	
	LABEL7618:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7619:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7620:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7621:
	// Setting char
	flag[215] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7721;
	
	else 
		goto LABEL7620;
	
	LABEL7622:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7623:
	// Checking char
	flag[210] = 'Y';
	goto LABEL7622;
	
	LABEL7624:
	// Checking char
	flag[218] = 'W';
	goto LABEL7724;
	
	LABEL7625:
	// Setting char
	flag[189] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7725;
	
	else 
		goto LABEL7624;
	
	LABEL7626:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7627:
	// Checking char
	flag[151] = ';';
	goto LABEL7727;
	
	LABEL7628:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7629:
	// Checking char
	flag[16] = '~';
	goto LABEL7729;
	
	LABEL7630:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7631:
	// Checking char
	flag[58] = 'U';
	goto LABEL7630;
	
	LABEL7632:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7633:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7634:
	// Checking char
	flag[58] = 'N';
	goto LABEL7734;
	
	LABEL7635:
	// Setting char
	flag[111] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7735;
	
	else 
		goto LABEL7634;
	
	LABEL7636:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7637:
	// Checking char
	flag[62] = 'a';
	goto LABEL7537;
	
	LABEL7638:
	// Checking char
	flag[240] = '9';
	goto LABEL7637;
	
	LABEL7639:
	// Setting char
	flag[187] = '/';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7539;
	
	else if (r == 1)
		goto LABEL7739;
	
	else 
		goto LABEL7638;
	
	LABEL7640:
	// Setting char
	flag[75] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7540;
	
	else 
		goto LABEL7639;
	
	LABEL7641:
	// Setting char
	flag[186] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7541;
	
	else if (r == 1)
		goto LABEL7741;
	
	else 
		goto LABEL7640;
	
	LABEL7642:
	// Setting char
	flag[152] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7742;
	
	else 
		goto LABEL7641;
	
	LABEL7643:
	// Setting char
	flag[122] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7543;
	
	else if (r == 1)
		goto LABEL7743;
	
	else 
		goto LABEL7642;
	
	LABEL7644:
	// Setting char
	flag[135] = '}';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7544;
	
	else if (r == 1)
		goto LABEL7744;
	
	else 
		goto LABEL7643;
	
	LABEL7645:
	// Setting char
	flag[225] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7646;
	
	else 
		goto LABEL7644;
	
	LABEL7646:
	// Setting char
	flag[165] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7746;
	
	else 
		goto LABEL7647;
	
	LABEL7647:
	// Setting char
	flag[150] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7547;
	
	else 
		goto LABEL7648;
	
	LABEL7648:
	// Checking char
	flag[202] = '3';
	goto LABEL7748;
	
	LABEL7649:
	// Setting char
	flag[4] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7549;
	
	else 
		goto LABEL7749;
	
	LABEL7650:
	// Setting char
	flag[46] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7550;
	
	else 
		goto LABEL7649;
	
	LABEL7651:
	// Checking char
	flag[41] = '!';
	goto LABEL7650;
	
	LABEL7652:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7653:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7654:
	// Checking char
	flag[238] = 's';
	goto LABEL7754;
	
	LABEL7655:
	// Checking char
	flag[154] = 'C';
	goto LABEL7755;
	
	LABEL7656:
	// Checking char
	flag[187] = 'l';
	goto LABEL7655;
	
	LABEL7657:
	// Checking char
	flag[116] = ']';
	goto LABEL7757;
	
	LABEL7658:
	// Checking char
	flag[134] = 'i';
	goto LABEL7758;
	
	LABEL7659:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7660:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7661:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7662:
	// Setting char
	flag[158] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7762;
	
	else 
		goto LABEL7661;
	
	LABEL7663:
	// Checking char
	flag[63] = 'z';
	goto LABEL7763;
	
	LABEL7664:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7665:
	// Checking char
	flag[146] = '"';
	goto LABEL7565;
	
	LABEL7666:
	// Setting char
	flag[16] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7766;
	
	else 
		goto LABEL7665;
	
	LABEL7667:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7668:
	// Checking char
	flag[3] = 'i';
	goto LABEL7768;
	
	LABEL7669:
	// Checking char
	flag[162] = 'Y';
	goto LABEL7769;
	
	LABEL7670:
	// Checking char
	flag[228] = 'u';
	goto LABEL7770;
	
	LABEL7671:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7672:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7673:
	// Setting char
	flag[80] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7773;
	
	else if (r == 1)
		goto LABEL7674;
	
	else 
		goto LABEL7672;
	
	LABEL7674:
	// Checking char
	flag[239] = 'N';
	goto LABEL7774;
	
	LABEL7675:
	// Checking char
	flag[211] = 'g';
	goto LABEL7676;
	
	LABEL7676:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7677:
	// Checking char
	flag[44] = 'V';
	goto LABEL7777;
	
	LABEL7678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7679:
	// Checking char
	flag[186] = 'B';
	goto LABEL7779;
	
	LABEL7680:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7681:
	// Checking char
	flag[67] = 'B';
	goto LABEL7781;
	
	LABEL7682:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7683:
	// Checking char
	flag[192] = 'q';
	goto LABEL7783;
	
	LABEL7684:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7685:
	// Setting char
	flag[92] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7785;
	
	else 
		goto LABEL7686;
	
	LABEL7686:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7687:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7688:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7689:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7690:
	// Checking char
	flag[178] = 'H';
	goto LABEL7790;
	
	LABEL7691:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7692:
	// Setting char
	flag[219] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7792;
	
	else if (r == 1)
		goto LABEL7693;
	
	else 
		goto LABEL7691;
	
	LABEL7693:
	// Setting char
	flag[101] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7793;
	
	else 
		goto LABEL7694;
	
	LABEL7694:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7695:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7696:
	// Setting char
	flag[103] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7796;
	
	else 
		goto LABEL7695;
	
	LABEL7697:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7698:
	// Checking char
	flag[92] = 'M';
	goto LABEL7699;
	
	LABEL7699:
	// Checking char
	flag[100] = 'k';
	goto LABEL7799;
	
	LABEL7700:
	// Checking char
	flag[7] = 'R';
	goto LABEL7600;
	
	LABEL7701:
	// Setting char
	flag[177] = 'U';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7601;
	
	else if (r == 1)
		goto LABEL7801;
	
	else 
		goto LABEL7700;
	
	LABEL7702:
	// Checking char
	flag[167] = '3';
	goto LABEL7701;
	
	LABEL7703:
	// Setting char
	flag[165] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7603;
	
	else 
		goto LABEL7702;
	
	LABEL7704:
	// Checking char
	flag[221] = 'Q';
	goto LABEL7703;
	
	LABEL7705:
	// Checking char
	flag[37] = '5';
	goto LABEL7605;
	
	LABEL7706:
	// Setting char
	flag[48] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7707;
	
	else 
		goto LABEL7705;
	
	LABEL7707:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7708:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7709:
	// Setting char
	flag[201] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7809;
	
	else 
		goto LABEL7708;
	
	LABEL7710:
	// Setting char
	flag[88] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7810;
	
	else 
		goto LABEL7709;
	
	LABEL7711:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7712:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7713:
	// Checking char
	flag[75] = 'C';
	goto LABEL7813;
	
	LABEL7714:
	// Checking char
	flag[72] = '-';
	goto LABEL7814;
	
	LABEL7715:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7716:
	// Checking char
	flag[213] = 'U';
	goto LABEL7715;
	
	LABEL7717:
	// Setting char
	flag[201] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7817;
	
	else 
		goto LABEL7716;
	
	LABEL7718:
	// Checking char
	flag[239] = 'n';
	goto LABEL7719;
	
	LABEL7719:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7720:
	// Checking char
	flag[67] = 'R';
	goto LABEL7820;
	
	LABEL7721:
	// Setting char
	flag[50] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7722;
	
	else 
		goto LABEL7720;
	
	LABEL7722:
	// Checking char
	flag[152] = 'd';
	goto LABEL7822;
	
	LABEL7723:
	// Checking char
	flag[243] = 'g';
	goto LABEL7823;
	
	LABEL7724:
	// Checking char
	flag[114] = 'H';
	goto LABEL7723;
	
	LABEL7725:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7726:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7727:
	// Checking char
	flag[121] = 'L';
	goto LABEL7726;
	
	LABEL7728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7729:
	// Setting char
	flag[65] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7829;
	
	else 
		goto LABEL7728;
	
	LABEL7730:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7731:
	// Setting char
	flag[109] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7631;
	
	else if (r == 1)
		goto LABEL7831;
	
	else 
		goto LABEL7730;
	
	LABEL7732:
	// Setting char
	flag[7] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7832;
	
	else 
		goto LABEL7731;
	
	LABEL7733:
	// Setting char
	flag[95] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7633;
	
	else 
		goto LABEL7732;
	
	LABEL7734:
	// Checking char
	flag[136] = '7';
	goto LABEL7733;
	
	LABEL7735:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7736:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7737:
	// Checking char
	flag[173] = '#';
	goto LABEL7736;
	
	LABEL7738:
	// Setting char
	flag[23] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7838;
	
	else 
		goto LABEL7737;
	
	LABEL7739:
	// Checking char
	flag[220] = '2';
	goto LABEL7738;
	
	LABEL7740:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7741:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7742:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7743:
	// Checking char
	flag[95] = '+';
	goto LABEL7843;
	
	LABEL7744:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7745:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7746:
	// Setting char
	flag[166] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7846;
	
	else if (r == 1)
		goto LABEL7747;
	
	else 
		goto LABEL7745;
	
	LABEL7747:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7748:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7749:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7750:
	// Checking char
	flag[146] = 'Q';
	goto LABEL7850;
	
	LABEL7751:
	// Setting char
	flag[34] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7851;
	
	else 
		goto LABEL7750;
	
	LABEL7752:
	// Setting char
	flag[129] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7652;
	
	else 
		goto LABEL7751;
	
	LABEL7753:
	// Setting char
	flag[128] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7653;
	
	else 
		goto LABEL7752;
	
	LABEL7754:
	// Checking char
	flag[97] = 'h';
	goto LABEL7753;
	
	LABEL7755:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7756:
	// Checking char
	flag[157] = '#';
	goto LABEL7656;
	
	LABEL7757:
	// Checking char
	flag[28] = 'k';
	goto LABEL7756;
	
	LABEL7758:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7759:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7760:
	// Setting char
	flag[207] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7660;
	
	else 
		goto LABEL7759;
	
	LABEL7761:
	// Checking char
	flag[148] = 'p';
	goto LABEL7760;
	
	LABEL7762:
	// Checking char
	flag[249] = 'd';
	goto LABEL7862;
	
	LABEL7763:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7765:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7766:
	// Checking char
	flag[118] = '"';
	goto LABEL7866;
	
	LABEL7767:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7768:
	// Checking char
	flag[229] = 'j';
	goto LABEL7767;
	
	LABEL7769:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7770:
	// Checking char
	flag[14] = 'a';
	goto LABEL7870;
	
	LABEL7771:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7772:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7773:
	// Checking char
	flag[97] = 'A';
	goto LABEL7873;
	
	LABEL7774:
	// Checking char
	flag[98] = 's';
	goto LABEL7775;
	
	LABEL7775:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7776:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7777:
	// Setting char
	flag[186] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7877;
	
	else 
		goto LABEL7776;
	
	LABEL7778:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7779:
	// Checking char
	flag[187] = 'Q';
	goto LABEL7780;
	
	LABEL7780:
	// Setting char
	flag[48] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7680;
	
	else 
		goto LABEL7880;
	
	LABEL7781:
	// Checking char
	flag[36] = 'j';
	goto LABEL7881;
	
	LABEL7782:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7783:
	// Setting char
	flag[97] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7883;
	
	else 
		goto LABEL7782;
	
	LABEL7784:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7785:
	// Setting char
	flag[172] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7885;
	
	else if (r == 1)
		goto LABEL7786;
	
	else 
		goto LABEL7784;
	
	LABEL7786:
	// Setting char
	flag[34] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7886;
	
	else 
		goto LABEL7787;
	
	LABEL7787:
	// Setting char
	flag[180] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7687;
	
	else 
		goto LABEL7788;
	
	LABEL7788:
	// Checking char
	flag[8] = ')';
	goto LABEL7688;
	
	LABEL7789:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7790:
	// Setting char
	flag[241] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7890;
	
	else 
		goto LABEL7791;
	
	LABEL7791:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7792:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7793:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7794:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7795:
	// Setting char
	flag[65] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7895;
	
	else 
		goto LABEL7794;
	
	LABEL7796:
	// Setting char
	flag[113] = '_';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7896;
	
	else if (r == 1)
		goto LABEL7797;
	
	else 
		goto LABEL7795;
	
	LABEL7797:
	// Checking char
	flag[181] = 'b';
	goto LABEL7897;
	
	LABEL7798:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7799:
	// Checking char
	flag[142] = 'o';
	goto LABEL7798;
	
	LABEL7800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7801:
	// Checking char
	flag[197] = '.';
	goto LABEL7802;
	
	LABEL7802:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7803:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7804:
	// Checking char
	flag[114] = 'o';
	goto LABEL7704;
	
	LABEL7805:
	// Checking char
	flag[2] = '5';
	goto LABEL7804;
	
	LABEL7806:
	// Checking char
	flag[234] = ';';
	goto LABEL7706;
	
	LABEL7807:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7808:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7810:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7811:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7812:
	// Setting char
	flag[10] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7912;
	
	else 
		goto LABEL7811;
	
	LABEL7813:
	// Setting char
	flag[67] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7913;
	
	else 
		goto LABEL7812;
	
	LABEL7814:
	// Checking char
	flag[212] = 'd';
	goto LABEL7815;
	
	LABEL7815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7816:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7817:
	// Setting char
	flag[212] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7917;
	
	else 
		goto LABEL7816;
	
	LABEL7818:
	// Checking char
	flag[159] = 'K';
	goto LABEL7718;
	
	LABEL7819:
	// Setting char
	flag[219] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7919;
	
	else 
		goto LABEL7818;
	
	LABEL7820:
	// Setting char
	flag[61] = 'y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7920;
	
	else if (r == 1)
		goto LABEL7821;
	
	else 
		goto LABEL7819;
	
	LABEL7821:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7822:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7823:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7824:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7825:
	// Checking char
	flag[105] = '}';
	goto LABEL7824;
	
	LABEL7826:
	// Checking char
	flag[164] = 't';
	goto LABEL7825;
	
	LABEL7827:
	// Setting char
	flag[236] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7927;
	
	else 
		goto LABEL7826;
	
	LABEL7828:
	// Checking char
	flag[128] = 'o';
	goto LABEL7827;
	
	LABEL7829:
	// Setting char
	flag[239] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7929;
	
	else if (r == 1)
		goto LABEL7830;
	
	else 
		goto LABEL7828;
	
	LABEL7830:
	// Checking char
	flag[73] = '>';
	goto LABEL7930;
	
	LABEL7831:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7832:
	// Setting char
	flag[60] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7932;
	
	else 
		goto LABEL7833;
	
	LABEL7833:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7834:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7835:
	// Checking char
	flag[184] = '~';
	goto LABEL7834;
	
	LABEL7836:
	// Checking char
	flag[122] = '@';
	goto LABEL7835;
	
	LABEL7837:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7838:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7839:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7840:
	// Setting char
	flag[12] = 'V';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7740;
	
	else if (r == 1)
		goto LABEL7940;
	
	else 
		goto LABEL7839;
	
	LABEL7841:
	// Setting char
	flag[50] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7941;
	
	else 
		goto LABEL7840;
	
	LABEL7842:
	// Setting char
	flag[32] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7942;
	
	else 
		goto LABEL7841;
	
	LABEL7843:
	// Setting char
	flag[158] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7943;
	
	else if (r == 1)
		goto LABEL7844;
	
	else 
		goto LABEL7842;
	
	LABEL7844:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7845:
	// Checking char
	flag[50] = 'k';
	goto LABEL7945;
	
	LABEL7846:
	// Setting char
	flag[146] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7946;
	
	else if (r == 1)
		goto LABEL7847;
	
	else 
		goto LABEL7845;
	
	LABEL7847:
	// Setting char
	flag[143] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7947;
	
	else 
		goto LABEL7848;
	
	LABEL7848:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7849:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7850:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7851:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7852:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7853:
	// Checking char
	flag[182] = 'u';
	goto LABEL7852;
	
	LABEL7854:
	// Checking char
	flag[82] = 'P';
	goto LABEL7853;
	
	LABEL7855:
	// Checking char
	flag[133] = '{';
	goto LABEL7955;
	
	LABEL7856:
	// Checking char
	flag[189] = '-';
	goto LABEL7855;
	
	LABEL7857:
	// Setting char
	flag[21] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7957;
	
	else 
		goto LABEL7856;
	
	LABEL7858:
	// Checking char
	flag[144] = '2';
	goto LABEL7857;
	
	LABEL7859:
	// Checking char
	flag[127] = '1';
	goto LABEL7858;
	
	LABEL7860:
	// Checking char
	flag[199] = 'n';
	goto LABEL7859;
	
	LABEL7861:
	// Setting char
	flag[83] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7761;
	
	else 
		goto LABEL7860;
	
	LABEL7862:
	// Setting char
	flag[112] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7962;
	
	else 
		goto LABEL7861;
	
	LABEL7863:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7864:
	// Checking char
	flag[165] = 'O';
	goto LABEL7764;
	
	LABEL7865:
	// Setting char
	flag[120] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7765;
	
	else 
		goto LABEL7864;
	
	LABEL7866:
	// Setting char
	flag[56] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7966;
	
	else if (r == 1)
		goto LABEL7867;
	
	else 
		goto LABEL7865;
	
	LABEL7867:
	// Checking char
	flag[72] = 'Q';
	goto LABEL7868;
	
	LABEL7868:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7869:
	// Checking char
	flag[202] = 't';
	goto LABEL7969;
	
	LABEL7870:
	// Setting char
	flag[182] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7970;
	
	else 
		goto LABEL7869;
	
	LABEL7871:
	// Setting char
	flag[92] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7771;
	
	else 
		goto LABEL7971;
	
	LABEL7872:
	// Setting char
	flag[37] = '3';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7772;
	
	else if (r == 1)
		goto LABEL7972;
	
	else 
		goto LABEL7871;
	
	LABEL7873:
	// Setting char
	flag[149] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7874;
	
	else 
		goto LABEL7872;
	
	LABEL7874:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7875:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7876:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7877:
	// Setting char
	flag[32] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7977;
	
	else if (r == 1)
		goto LABEL7878;
	
	else 
		goto LABEL7876;
	
	LABEL7878:
	// Setting char
	flag[144] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7778;
	
	else 
		goto LABEL7978;
	
	LABEL7879:
	// Checking char
	flag[53] = ']';
	goto LABEL7979;
	
	LABEL7880:
	// Setting char
	flag[52] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7980;
	
	else 
		goto LABEL7879;
	
	LABEL7881:
	// Setting char
	flag[69] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7981;
	
	else 
		goto LABEL7882;
	
	LABEL7882:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7883:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7884:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7885:
	// Checking char
	flag[95] = '{';
	goto LABEL7884;
	
	LABEL7886:
	// Setting char
	flag[22] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7986;
	
	else 
		goto LABEL7887;
	
	LABEL7887:
	// Checking char
	flag[148] = 'Z';
	goto LABEL7888;
	
	LABEL7888:
	// Checking char
	flag[53] = 'H';
	goto LABEL7988;
	
	LABEL7889:
	// Checking char
	flag[161] = 'N';
	goto LABEL7789;
	
	LABEL7890:
	// Setting char
	flag[204] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7990;
	
	else 
		goto LABEL7891;
	
	LABEL7891:
	// Setting char
	flag[78] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7991;
	
	else 
		goto LABEL7892;
	
	LABEL7892:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7893:
	// Checking char
	flag[192] = 's';
	goto LABEL7993;
	
	LABEL7894:
	// Checking char
	flag[102] = 'j';
	goto LABEL7893;
	
	LABEL7895:
	// Setting char
	flag[0] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7995;
	
	else 
		goto LABEL7894;
	
	LABEL7896:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7897:
	// Setting char
	flag[132] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7997;
	
	else 
		goto LABEL7898;
	
	LABEL7898:
	// Checking char
	flag[228] = 'I';
	goto LABEL7899;
	
	LABEL7899:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7900:
	// Checking char
	flag[46] = 'R';
	goto LABEL7800;
	
	LABEL7901:
	// Checking char
	flag[99] = '7';
	goto LABEL7900;
	
	LABEL7902:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7903:
	// Setting char
	flag[209] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7803;
	
	else 
		goto LABEL7902;
	
	LABEL7904:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7905:
	// Setting char
	flag[187] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7805;
	
	else if (r == 1)
		goto LABEL8005;
	
	else 
		goto LABEL7904;
	
	LABEL7906:
	// Setting char
	flag[148] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7806;
	
	else 
		goto LABEL7905;
	
	LABEL7907:
	// Setting char
	flag[220] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7807;
	
	else if (r == 1)
		goto LABEL8007;
	
	else 
		goto LABEL7906;
	
	LABEL7908:
	// Setting char
	flag[228] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7808;
	
	else 
		goto LABEL7907;
	
	LABEL7909:
	// Checking char
	flag[217] = 'V';
	goto LABEL7908;
	
	LABEL7910:
	// Checking char
	flag[10] = 'x';
	goto LABEL7909;
	
	LABEL7911:
	// Checking char
	flag[90] = 'm';
	goto LABEL7910;
	
	LABEL7912:
	// Setting char
	flag[141] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8012;
	
	else 
		goto LABEL7911;
	
	LABEL7913:
	// Setting char
	flag[87] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8013;
	
	else 
		goto LABEL7914;
	
	LABEL7914:
	// Checking char
	flag[4] = 'h';
	goto LABEL7915;
	
	LABEL7915:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7916:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7917:
	// Setting char
	flag[115] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8017;
	
	else if (r == 1)
		goto LABEL7918;
	
	else 
		goto LABEL7916;
	
	LABEL7918:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7920:
	// Checking char
	flag[88] = '0';
	goto LABEL8020;
	
	LABEL7921:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7922:
	// Checking char
	flag[145] = ',';
	goto LABEL7921;
	
	LABEL7923:
	// Setting char
	flag[137] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8023;
	
	else 
		goto LABEL7922;
	
	LABEL7924:
	// Checking char
	flag[38] = '`';
	goto LABEL7923;
	
	LABEL7925:
	// Checking char
	flag[222] = 'S';
	goto LABEL7926;
	
	LABEL7926:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7927:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7928:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7929:
	// Checking char
	flag[149] = 'f';
	goto LABEL8029;
	
	LABEL7930:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7931:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7932:
	// Checking char
	flag[131] = '%';
	goto LABEL7931;
	
	LABEL7933:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7934:
	// Checking char
	flag[107] = 'g';
	goto LABEL7933;
	
	LABEL7935:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7936:
	// Setting char
	flag[56] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7836;
	
	else 
		goto LABEL8036;
	
	LABEL7937:
	// Setting char
	flag[162] = ',';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7837;
	
	else if (r == 1)
		goto LABEL8037;
	
	else 
		goto LABEL7936;
	
	LABEL7938:
	// Checking char
	flag[199] = '9';
	goto LABEL7937;
	
	LABEL7939:
	// Checking char
	flag[232] = '!';
	goto LABEL7938;
	
	LABEL7940:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7941:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7942:
	// Checking char
	flag[45] = 'u';
	goto LABEL8042;
	
	LABEL7943:
	// Checking char
	flag[53] = '0';
	goto LABEL7944;
	
	LABEL7944:
	// Checking char
	flag[225] = '@';
	goto LABEL8044;
	
	LABEL7945:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7946:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7947:
	// Setting char
	flag[102] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8047;
	
	else 
		goto LABEL7948;
	
	LABEL7948:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7949:
	// Setting char
	flag[90] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7849;
	
	else 
		goto LABEL7950;
	
	LABEL7950:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7952:
	// Setting char
	flag[2] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8052;
	
	else 
		goto LABEL7951;
	
	LABEL7953:
	// Checking char
	flag[79] = 'D';
	goto LABEL7952;
	
	LABEL7954:
	// Setting char
	flag[113] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7854;
	
	else 
		goto LABEL7953;
	
	LABEL7955:
	// Setting char
	flag[135] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8055;
	
	else 
		goto LABEL7954;
	
	LABEL7956:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7957:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7958:
	// Checking char
	flag[28] = 'B';
	goto LABEL8058;
	
	LABEL7959:
	// Setting char
	flag[111] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8059;
	
	else 
		goto LABEL7958;
	
	LABEL7960:
	// Setting char
	flag[167] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8060;
	
	else 
		goto LABEL7959;
	
	LABEL7961:
	// Checking char
	flag[195] = '7';
	goto LABEL7960;
	
	LABEL7962:
	// Setting char
	flag[207] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8062;
	
	else if (r == 1)
		goto LABEL7963;
	
	else 
		goto LABEL7961;
	
	LABEL7963:
	// Setting char
	flag[33] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7863;
	
	else 
		goto LABEL7964;
	
	LABEL7964:
	// Checking char
	flag[16] = 'I';
	goto LABEL8064;
	
	LABEL7965:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7966:
	// Setting char
	flag[246] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8066;
	
	else if (r == 1)
		goto LABEL7967;
	
	else 
		goto LABEL7965;
	
	LABEL7967:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7968:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7969:
	// Setting char
	flag[167] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8069;
	
	else 
		goto LABEL7968;
	
	LABEL7970:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7971:
	// Checking char
	flag[109] = '_';
	goto LABEL8071;
	
	LABEL7972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7973:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7974:
	// Checking char
	flag[188] = '*';
	goto LABEL7973;
	
	LABEL7975:
	// Setting char
	flag[197] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7875;
	
	else 
		goto LABEL8075;
	
	LABEL7976:
	// Checking char
	flag[101] = 'E';
	goto LABEL7975;
	
	LABEL7977:
	// Setting char
	flag[157] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8077;
	
	else 
		goto LABEL7976;
	
	LABEL7978:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7979:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7980:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7981:
	// Setting char
	flag[140] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8081;
	
	else 
		goto LABEL7982;
	
	LABEL7982:
	// Checking char
	flag[68] = 'f';
	goto LABEL7983;
	
	LABEL7983:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7984:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7985:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7986:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7987:
	// Checking char
	flag[10] = 'X';
	goto LABEL8087;
	
	LABEL7988:
	// Setting char
	flag[185] = '-';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8088;
	
	else if (r == 1)
		goto LABEL7989;
	
	else 
		goto LABEL7987;
	
	LABEL7989:
	// Checking char
	flag[111] = '.';
	goto LABEL7889;
	
	LABEL7990:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7991:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7992:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7993:
	// Setting char
	flag[102] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8093;
	
	else 
		goto LABEL7994;
	
	LABEL7994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7995:
	// Checking char
	flag[92] = 'L';
	goto LABEL8095;
	
	LABEL7996:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7997:
	// Setting char
	flag[23] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8097;
	
	else 
		goto LABEL7998;
	
	LABEL7998:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL7999:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8000:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8001:
	// Checking char
	flag[114] = 'Z';
	goto LABEL7901;
	
	LABEL8002:
	// Setting char
	flag[233] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8102;
	
	else 
		goto LABEL8001;
	
	LABEL8003:
	// Setting char
	flag[113] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7903;
	
	else 
		goto LABEL8002;
	
	LABEL8004:
	// Checking char
	flag[178] = 'H';
	goto LABEL8003;
	
	LABEL8005:
	// Setting char
	flag[164] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8105;
	
	else 
		goto LABEL8004;
	
	LABEL8006:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8007:
	// Setting char
	flag[95] = 'I';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8107;
	
	else if (r == 1)
		goto LABEL8008;
	
	else 
		goto LABEL8006;
	
	LABEL8008:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8009:
	// Checking char
	flag[243] = 's';
	goto LABEL8109;
	
	LABEL8010:
	// Checking char
	flag[75] = '"';
	goto LABEL8009;
	
	LABEL8011:
	// Checking char
	flag[40] = '$';
	goto LABEL8010;
	
	LABEL8012:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8013:
	// Setting char
	flag[119] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8113;
	
	else 
		goto LABEL8014;
	
	LABEL8014:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8015:
	// Checking char
	flag[237] = 'r';
	goto LABEL8115;
	
	LABEL8016:
	// Checking char
	flag[73] = 'L';
	goto LABEL8015;
	
	LABEL8017:
	// Setting char
	flag[173] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8117;
	
	else if (r == 1)
		goto LABEL8018;
	
	else 
		goto LABEL8016;
	
	LABEL8018:
	// Setting char
	flag[16] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8118;
	
	else 
		goto LABEL8019;
	
	LABEL8019:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8020:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8021:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8022:
	// Checking char
	flag[63] = 'V';
	goto LABEL8021;
	
	LABEL8023:
	// Checking char
	flag[3] = 'e';
	goto LABEL8022;
	
	LABEL8024:
	// Setting char
	flag[209] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7924;
	
	else 
		goto LABEL8124;
	
	LABEL8025:
	// Setting char
	flag[121] = 'K';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7925;
	
	else if (r == 1)
		goto LABEL8125;
	
	else 
		goto LABEL8024;
	
	LABEL8026:
	// Checking char
	flag[40] = 'M';
	goto LABEL8025;
	
	LABEL8027:
	// Setting char
	flag[224] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8127;
	
	else 
		goto LABEL8026;
	
	LABEL8028:
	// Setting char
	flag[4] = '-';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7928;
	
	else if (r == 1)
		goto LABEL8128;
	
	else 
		goto LABEL8027;
	
	LABEL8029:
	// Setting char
	flag[177] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8030;
	
	else 
		goto LABEL8028;
	
	LABEL8030:
	// Checking char
	flag[134] = '!';
	goto LABEL8031;
	
	LABEL8031:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8032:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8033:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8034:
	// Checking char
	flag[243] = '_';
	goto LABEL7934;
	
	LABEL8035:
	// Checking char
	flag[108] = 'F';
	goto LABEL7935;
	
	LABEL8036:
	// Setting char
	flag[233] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8136;
	
	else 
		goto LABEL8035;
	
	LABEL8037:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8038:
	// Checking char
	flag[113] = 'k';
	goto LABEL8138;
	
	LABEL8039:
	// Setting char
	flag[185] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7939;
	
	else 
		goto LABEL8038;
	
	LABEL8040:
	// Checking char
	flag[136] = '5';
	goto LABEL8039;
	
	LABEL8041:
	// Setting char
	flag[149] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8141;
	
	else 
		goto LABEL8040;
	
	LABEL8042:
	// Setting char
	flag[85] = '6';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8142;
	
	else if (r == 1)
		goto LABEL8043;
	
	else 
		goto LABEL8041;
	
	LABEL8043:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8044:
	// Setting char
	flag[44] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8144;
	
	else 
		goto LABEL8045;
	
	LABEL8045:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8046:
	// Checking char
	flag[53] = 'B';
	goto LABEL8146;
	
	LABEL8047:
	// Setting char
	flag[168] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8147;
	
	else if (r == 1)
		goto LABEL8048;
	
	else 
		goto LABEL8046;
	
	LABEL8048:
	// Setting char
	flag[248] = '.';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8148;
	
	else 
		goto LABEL8049;
	
	LABEL8049:
	// Setting char
	flag[205] = '/';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7949;
	
	else if (r == 1)
		goto LABEL8149;
	
	else 
		goto LABEL8050;
	
	LABEL8050:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8051:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8052:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8053:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8054:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8055:
	// Setting char
	flag[78] = 'x';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8155;
	
	else if (r == 1)
		goto LABEL8056;
	
	else 
		goto LABEL8054;
	
	LABEL8056:
	// Checking char
	flag[197] = '1';
	goto LABEL7956;
	
	LABEL8057:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8058:
	// Setting char
	flag[172] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8158;
	
	else 
		goto LABEL8057;
	
	LABEL8059:
	// Checking char
	flag[41] = 'F';
	goto LABEL8159;
	
	LABEL8060:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8061:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8062:
	// Setting char
	flag[188] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8162;
	
	else if (r == 1)
		goto LABEL8063;
	
	else 
		goto LABEL8061;
	
	LABEL8063:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8064:
	// Checking char
	flag[161] = '5';
	goto LABEL8164;
	
	LABEL8065:
	// Checking char
	flag[52] = 'r';
	goto LABEL8165;
	
	LABEL8066:
	// Setting char
	flag[236] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8067;
	
	else 
		goto LABEL8065;
	
	LABEL8067:
	// Setting char
	flag[188] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8167;
	
	else 
		goto LABEL8068;
	
	LABEL8068:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8069:
	// Setting char
	flag[197] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8169;
	
	else 
		goto LABEL8070;
	
	LABEL8070:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8071:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8072:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8073:
	// Checking char
	flag[200] = 'V';
	goto LABEL8072;
	
	LABEL8074:
	// Setting char
	flag[34] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL7974;
	
	else if (r == 1)
		goto LABEL8174;
	
	else 
		goto LABEL8073;
	
	LABEL8075:
	// Checking char
	flag[138] = '(';
	goto LABEL8074;
	
	LABEL8076:
	// Checking char
	flag[196] = '(';
	goto LABEL8176;
	
	LABEL8077:
	// Setting char
	flag[59] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8177;
	
	else 
		goto LABEL8076;
	
	LABEL8078:
	// Checking char
	flag[78] = 'x';
	goto LABEL8178;
	
	LABEL8079:
	// Setting char
	flag[81] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8179;
	
	else 
		goto LABEL8078;
	
	LABEL8080:
	// Checking char
	flag[73] = '#';
	goto LABEL8079;
	
	LABEL8081:
	// Setting char
	flag[107] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8181;
	
	else 
		goto LABEL8080;
	
	LABEL8082:
	// Checking char
	flag[74] = 'N';
	goto LABEL8083;
	
	LABEL8083:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8084:
	// Checking char
	flag[199] = 'u';
	goto LABEL7984;
	
	LABEL8085:
	// Setting char
	flag[201] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7985;
	
	else 
		goto LABEL8084;
	
	LABEL8086:
	// Setting char
	flag[52] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8186;
	
	else 
		goto LABEL8085;
	
	LABEL8087:
	// Checking char
	flag[235] = '_';
	goto LABEL8086;
	
	LABEL8088:
	// Checking char
	flag[248] = '(';
	goto LABEL8089;
	
	LABEL8089:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8090:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8091:
	// Setting char
	flag[34] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8191;
	
	else 
		goto LABEL8090;
	
	LABEL8092:
	// Setting char
	flag[15] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7992;
	
	else 
		goto LABEL8091;
	
	LABEL8093:
	// Setting char
	flag[194] = '5';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8193;
	
	else if (r == 1)
		goto LABEL8094;
	
	else 
		goto LABEL8092;
	
	LABEL8094:
	// Checking char
	flag[180] = '4';
	goto LABEL8194;
	
	LABEL8095:
	// Checking char
	flag[195] = '"';
	goto LABEL8195;
	
	LABEL8096:
	// Checking char
	flag[249] = 'I';
	goto LABEL7996;
	
	LABEL8097:
	// Setting char
	flag[104] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8197;
	
	else if (r == 1)
		goto LABEL8098;
	
	else 
		goto LABEL8096;
	
	LABEL8098:
	// Checking char
	flag[170] = 'M';
	goto LABEL8099;
	
	LABEL8099:
	// Setting char
	flag[69] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL7999;
	
	else 
		goto LABEL8199;
	
	LABEL8100:
	// Checking char
	flag[75] = ':';
	goto LABEL8000;
	
	LABEL8101:
	// Checking char
	flag[50] = '0';
	goto LABEL8100;
	
	LABEL8102:
	// Setting char
	flag[176] = '>';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8202;
	
	else if (r == 1)
		goto LABEL8103;
	
	else 
		goto LABEL8101;
	
	LABEL8103:
	// Checking char
	flag[206] = '$';
	goto LABEL8203;
	
	LABEL8104:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8105:
	// Checking char
	flag[193] = 'B';
	goto LABEL8205;
	
	LABEL8106:
	// Checking char
	flag[202] = 'W';
	goto LABEL8206;
	
	LABEL8107:
	// Checking char
	flag[176] = 'D';
	goto LABEL8106;
	
	LABEL8108:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8109:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8110:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8111:
	// Setting char
	flag[246] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8011;
	
	else 
		goto LABEL8110;
	
	LABEL8112:
	// Checking char
	flag[235] = 'Y';
	goto LABEL8111;
	
	LABEL8113:
	// Setting char
	flag[75] = ';';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8213;
	
	else if (r == 1)
		goto LABEL8114;
	
	else 
		goto LABEL8112;
	
	LABEL8114:
	// Checking char
	flag[131] = 'd';
	goto LABEL8214;
	
	LABEL8115:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8116:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8117:
	// Checking char
	flag[3] = 'A';
	goto LABEL8217;
	
	LABEL8118:
	// Checking char
	flag[49] = '3';
	goto LABEL8119;
	
	LABEL8119:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8120:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8121:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8122:
	// Checking char
	flag[34] = 'H';
	goto LABEL8121;
	
	LABEL8123:
	// Checking char
	flag[155] = 'o';
	goto LABEL8223;
	
	LABEL8124:
	// Checking char
	flag[124] = 'j';
	goto LABEL8123;
	
	LABEL8125:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8126:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8127:
	// Checking char
	flag[35] = 'J';
	goto LABEL8126;
	
	LABEL8128:
	// Checking char
	flag[196] = '=';
	goto LABEL8129;
	
	LABEL8129:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8130:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8131:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8132:
	// Setting char
	flag[74] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8032;
	
	else 
		goto LABEL8232;
	
	LABEL8133:
	// Setting char
	flag[90] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8033;
	
	else if (r == 1)
		goto LABEL8233;
	
	else 
		goto LABEL8132;
	
	LABEL8134:
	// Setting char
	flag[202] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8034;
	
	else 
		goto LABEL8133;
	
	LABEL8135:
	// Setting char
	flag[196] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8235;
	
	else 
		goto LABEL8134;
	
	LABEL8136:
	// Setting char
	flag[116] = 'y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8236;
	
	else if (r == 1)
		goto LABEL8137;
	
	else 
		goto LABEL8135;
	
	LABEL8137:
	// Checking char
	flag[167] = 'o';
	goto LABEL8237;
	
	LABEL8138:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8139:
	// Checking char
	flag[117] = 'C';
	goto LABEL8140;
	
	LABEL8140:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8141:
	// Checking char
	flag[77] = 'k';
	goto LABEL8241;
	
	LABEL8142:
	// Checking char
	flag[216] = '&';
	goto LABEL8143;
	
	LABEL8143:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8144:
	// Checking char
	flag[126] = 'i';
	goto LABEL8244;
	
	LABEL8145:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8146:
	// Setting char
	flag[157] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8246;
	
	else 
		goto LABEL8145;
	
	LABEL8147:
	// Checking char
	flag[36] = '/';
	goto LABEL8247;
	
	LABEL8148:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8149:
	// Checking char
	flag[137] = 'Z';
	goto LABEL8150;
	
	LABEL8150:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8151:
	// Setting char
	flag[49] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8051;
	
	else 
		goto LABEL8251;
	
	LABEL8152:
	// Checking char
	flag[111] = 'j';
	goto LABEL8151;
	
	LABEL8153:
	// Setting char
	flag[181] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8053;
	
	else if (r == 1)
		goto LABEL8253;
	
	else 
		goto LABEL8152;
	
	LABEL8154:
	// Checking char
	flag[106] = 'F';
	goto LABEL8153;
	
	LABEL8155:
	// Setting char
	flag[207] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8156;
	
	else 
		goto LABEL8154;
	
	LABEL8156:
	// Checking char
	flag[154] = '9';
	goto LABEL8256;
	
	LABEL8157:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8158:
	// Setting char
	flag[125] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8258;
	
	else 
		goto LABEL8157;
	
	LABEL8159:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8160:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8161:
	// Checking char
	flag[171] = 'k';
	goto LABEL8160;
	
	LABEL8162:
	// Setting char
	flag[211] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8262;
	
	else 
		goto LABEL8161;
	
	LABEL8163:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8164:
	// Checking char
	flag[153] = ',';
	goto LABEL8264;
	
	LABEL8165:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8166:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8167:
	// Setting char
	flag[86] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8168;
	
	else 
		goto LABEL8166;
	
	LABEL8168:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8169:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8170:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8171:
	// Checking char
	flag[179] = '6';
	goto LABEL8170;
	
	LABEL8172:
	// Checking char
	flag[159] = 'J';
	goto LABEL8171;
	
	LABEL8173:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8174:
	// Setting char
	flag[41] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8274;
	
	else if (r == 1)
		goto LABEL8175;
	
	else 
		goto LABEL8173;
	
	LABEL8175:
	// Checking char
	flag[120] = '6';
	goto LABEL8275;
	
	LABEL8176:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8177:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8178:
	// Checking char
	flag[62] = '-';
	goto LABEL8278;
	
	LABEL8179:
	// Checking char
	flag[134] = 'R';
	goto LABEL8279;
	
	LABEL8180:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8181:
	// Checking char
	flag[229] = 'W';
	goto LABEL8180;
	
	LABEL8182:
	// Setting char
	flag[119] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8082;
	
	else 
		goto LABEL8183;
	
	LABEL8183:
	// Checking char
	flag[45] = 'X';
	goto LABEL8184;
	
	LABEL8184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8185:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8186:
	// Setting char
	flag[135] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8286;
	
	else if (r == 1)
		goto LABEL8187;
	
	else 
		goto LABEL8185;
	
	LABEL8187:
	// Checking char
	flag[130] = 'Y';
	goto LABEL8188;
	
	LABEL8188:
	// Setting char
	flag[129] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8288;
	
	else 
		goto LABEL8189;
	
	LABEL8189:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8190:
	// Checking char
	flag[61] = 'U';
	goto LABEL8290;
	
	LABEL8191:
	// Checking char
	flag[210] = 'd';
	goto LABEL8190;
	
	LABEL8192:
	// Checking char
	flag[169] = '|';
	goto LABEL8292;
	
	LABEL8193:
	// Setting char
	flag[127] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8293;
	
	else 
		goto LABEL8192;
	
	LABEL8194:
	// Checking char
	flag[145] = 'A';
	goto LABEL8294;
	
	LABEL8195:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8196:
	// Checking char
	flag[95] = 'w';
	goto LABEL8296;
	
	LABEL8197:
	// Setting char
	flag[58] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8297;
	
	else 
		goto LABEL8196;
	
	LABEL8198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8199:
	// Setting char
	flag[216] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8299;
	
	else 
		goto LABEL8198;
	
	LABEL8200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8201:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8202:
	// Checking char
	flag[225] = '.';
	goto LABEL8201;
	
	LABEL8203:
	// Checking char
	flag[181] = 'p';
	goto LABEL8303;
	
	LABEL8204:
	// Checking char
	flag[193] = '`';
	goto LABEL8104;
	
	LABEL8205:
	// Checking char
	flag[222] = 'H';
	goto LABEL8204;
	
	LABEL8206:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8207:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8208:
	// Setting char
	flag[71] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8108;
	
	else 
		goto LABEL8308;
	
	LABEL8209:
	// Checking char
	flag[150] = 'X';
	goto LABEL8208;
	
	LABEL8210:
	// Checking char
	flag[172] = 'v';
	goto LABEL8209;
	
	LABEL8211:
	// Setting char
	flag[39] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8311;
	
	else 
		goto LABEL8210;
	
	LABEL8212:
	// Checking char
	flag[6] = 'w';
	goto LABEL8211;
	
	LABEL8213:
	// Setting char
	flag[107] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8313;
	
	else 
		goto LABEL8212;
	
	LABEL8214:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8215:
	// Checking char
	flag[128] = ',';
	goto LABEL8315;
	
	LABEL8216:
	// Setting char
	flag[151] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8116;
	
	else 
		goto LABEL8215;
	
	LABEL8217:
	// Checking char
	flag[32] = 'l';
	goto LABEL8216;
	
	LABEL8218:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8219:
	// Checking char
	flag[41] = '&';
	goto LABEL8218;
	
	LABEL8220:
	// Checking char
	flag[230] = 'Q';
	goto LABEL8120;
	
	LABEL8221:
	// Checking char
	flag[234] = 's';
	goto LABEL8220;
	
	LABEL8222:
	// Checking char
	flag[197] = '%';
	goto LABEL8122;
	
	LABEL8223:
	// Setting char
	flag[10] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8323;
	
	else if (r == 1)
		goto LABEL8224;
	
	else 
		goto LABEL8222;
	
	LABEL8224:
	// Checking char
	flag[44] = 'N';
	goto LABEL8324;
	
	LABEL8225:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8226:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8227:
	// Checking char
	flag[181] = 'c';
	goto LABEL8226;
	
	LABEL8228:
	// Setting char
	flag[77] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8328;
	
	else 
		goto LABEL8227;
	
	LABEL8229:
	// Checking char
	flag[128] = '[';
	goto LABEL8228;
	
	LABEL8230:
	// Setting char
	flag[88] = ':';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8130;
	
	else if (r == 1)
		goto LABEL8330;
	
	else 
		goto LABEL8229;
	
	LABEL8231:
	// Setting char
	flag[208] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8131;
	
	else 
		goto LABEL8230;
	
	LABEL8232:
	// Setting char
	flag[18] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8332;
	
	else 
		goto LABEL8231;
	
	LABEL8233:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8234:
	// Checking char
	flag[153] = 'E';
	goto LABEL8334;
	
	LABEL8235:
	// Setting char
	flag[117] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8335;
	
	else 
		goto LABEL8234;
	
	LABEL8236:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8237:
	// Checking char
	flag[29] = 'i';
	goto LABEL8337;
	
	LABEL8238:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8239:
	// Setting char
	flag[44] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8139;
	
	else 
		goto LABEL8238;
	
	LABEL8240:
	// Setting char
	flag[13] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8340;
	
	else 
		goto LABEL8239;
	
	LABEL8241:
	// Setting char
	flag[138] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8242;
	
	else 
		goto LABEL8240;
	
	LABEL8242:
	// Checking char
	flag[123] = '0';
	goto LABEL8243;
	
	LABEL8243:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8244:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8245:
	// Checking char
	flag[33] = 'H';
	goto LABEL8345;
	
	LABEL8246:
	// Setting char
	flag[228] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8346;
	
	else 
		goto LABEL8245;
	
	LABEL8247:
	// Checking char
	flag[212] = '2';
	goto LABEL8347;
	
	LABEL8248:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8249:
	// Checking char
	flag[97] = '~';
	goto LABEL8248;
	
	LABEL8250:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8251:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8252:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8253:
	// Setting char
	flag[138] = 'N';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8353;
	
	else if (r == 1)
		goto LABEL8254;
	
	else 
		goto LABEL8252;
	
	LABEL8254:
	// Setting char
	flag[32] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8354;
	
	else 
		goto LABEL8255;
	
	LABEL8255:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8256:
	// Setting char
	flag[1] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8356;
	
	else 
		goto LABEL8257;
	
	LABEL8257:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8258:
	// Checking char
	flag[120] = '=';
	goto LABEL8259;
	
	LABEL8259:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8260:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8261:
	// Checking char
	flag[181] = 'V';
	goto LABEL8260;
	
	LABEL8262:
	// Setting char
	flag[218] = '`';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8362;
	
	else if (r == 1)
		goto LABEL8263;
	
	else 
		goto LABEL8261;
	
	LABEL8263:
	// Checking char
	flag[140] = 'F';
	goto LABEL8163;
	
	LABEL8264:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8265:
	// Checking char
	flag[99] = 'B';
	goto LABEL8266;
	
	LABEL8266:
	// Checking char
	flag[204] = 'I';
	goto LABEL8267;
	
	LABEL8267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8268:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8269:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8270:
	// Checking char
	flag[232] = '~';
	goto LABEL8269;
	
	LABEL8271:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8272:
	// Checking char
	flag[113] = 'n';
	goto LABEL8172;
	
	LABEL8273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8274:
	// Setting char
	flag[60] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8374;
	
	else 
		goto LABEL8273;
	
	LABEL8275:
	// Setting char
	flag[14] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8375;
	
	else 
		goto LABEL8276;
	
	LABEL8276:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8277:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8278:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8279:
	// Setting char
	flag[245] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8379;
	
	else 
		goto LABEL8280;
	
	LABEL8280:
	// Checking char
	flag[64] = 'X';
	goto LABEL8281;
	
	LABEL8281:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8282:
	// Checking char
	flag[180] = 'i';
	goto LABEL8182;
	
	LABEL8283:
	// Setting char
	flag[118] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8383;
	
	else 
		goto LABEL8282;
	
	LABEL8284:
	// Checking char
	flag[118] = 'A';
	goto LABEL8283;
	
	LABEL8285:
	// Setting char
	flag[199] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8385;
	
	else 
		goto LABEL8284;
	
	LABEL8286:
	// Checking char
	flag[222] = '4';
	goto LABEL8285;
	
	LABEL8287:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8288:
	// Setting char
	flag[69] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8388;
	
	else 
		goto LABEL8289;
	
	LABEL8289:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8290:
	// Checking char
	flag[191] = '@';
	goto LABEL8390;
	
	LABEL8291:
	// Checking char
	flag[236] = 'V';
	goto LABEL8391;
	
	LABEL8292:
	// Setting char
	flag[237] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8392;
	
	else 
		goto LABEL8291;
	
	LABEL8293:
	// Checking char
	flag[189] = '~';
	goto LABEL8393;
	
	LABEL8294:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8295:
	// Checking char
	flag[62] = 'l';
	goto LABEL8395;
	
	LABEL8296:
	// Setting char
	flag[238] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8396;
	
	else 
		goto LABEL8295;
	
	LABEL8297:
	// Checking char
	flag[197] = 'l';
	goto LABEL8397;
	
	LABEL8298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8299:
	// Checking char
	flag[87] = 'S';
	goto LABEL8399;
	
	LABEL8300:
	// Setting char
	flag[38] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8200;
	
	else 
		goto LABEL8400;
	
	LABEL8301:
	// Setting char
	flag[163] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8401;
	
	else 
		goto LABEL8300;
	
	LABEL8302:
	// Setting char
	flag[177] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8402;
	
	else 
		goto LABEL8301;
	
	LABEL8303:
	// Setting char
	flag[61] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8403;
	
	else 
		goto LABEL8302;
	
	LABEL8304:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8305:
	// Checking char
	flag[5] = '3';
	goto LABEL8304;
	
	LABEL8306:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8307:
	// Setting char
	flag[151] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8207;
	
	else 
		goto LABEL8306;
	
	LABEL8308:
	// Setting char
	flag[23] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8408;
	
	else if (r == 1)
		goto LABEL8309;
	
	else 
		goto LABEL8307;
	
	LABEL8309:
	// Checking char
	flag[134] = 'f';
	goto LABEL8310;
	
	LABEL8310:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8311:
	// Setting char
	flag[42] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8411;
	
	else 
		goto LABEL8312;
	
	LABEL8312:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8313:
	// Checking char
	flag[8] = 's';
	goto LABEL8413;
	
	LABEL8314:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8315:
	// Setting char
	flag[1] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8415;
	
	else 
		goto LABEL8314;
	
	LABEL8316:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8317:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8318:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8319:
	// Checking char
	flag[14] = 'l';
	goto LABEL8219;
	
	LABEL8320:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8321:
	// Setting char
	flag[62] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8221;
	
	else 
		goto LABEL8320;
	
	LABEL8322:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8323:
	// Checking char
	flag[85] = '0';
	goto LABEL8322;
	
	LABEL8324:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8325:
	// Setting char
	flag[157] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8225;
	
	else 
		goto LABEL8425;
	
	LABEL8326:
	// Setting char
	flag[7] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8426;
	
	else 
		goto LABEL8325;
	
	LABEL8327:
	// Checking char
	flag[155] = 'h';
	goto LABEL8326;
	
	LABEL8328:
	// Checking char
	flag[182] = 'W';
	goto LABEL8327;
	
	LABEL8329:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8330:
	// Setting char
	flag[211] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8430;
	
	else 
		goto LABEL8329;
	
	LABEL8331:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8332:
	// Setting char
	flag[188] = 'M';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8432;
	
	else if (r == 1)
		goto LABEL8333;
	
	else 
		goto LABEL8331;
	
	LABEL8333:
	// Checking char
	flag[44] = '[';
	goto LABEL8433;
	
	LABEL8334:
	// Checking char
	flag[121] = '&';
	goto LABEL8434;
	
	LABEL8335:
	// Setting char
	flag[184] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8435;
	
	else 
		goto LABEL8336;
	
	LABEL8336:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8337:
	// Setting char
	flag[106] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8437;
	
	else 
		goto LABEL8338;
	
	LABEL8338:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8339:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8340:
	// Setting char
	flag[168] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8440;
	
	else if (r == 1)
		goto LABEL8341;
	
	else 
		goto LABEL8339;
	
	LABEL8341:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8342:
	// Checking char
	flag[26] = '[';
	goto LABEL8343;
	
	LABEL8343:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8344:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8345:
	// Setting char
	flag[105] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8445;
	
	else 
		goto LABEL8344;
	
	LABEL8346:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8347:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8348:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8349:
	// Setting char
	flag[140] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8249;
	
	else 
		goto LABEL8348;
	
	LABEL8350:
	// Checking char
	flag[166] = '~';
	goto LABEL8250;
	
	LABEL8351:
	// Checking char
	flag[156] = '_';
	goto LABEL8350;
	
	LABEL8352:
	// Checking char
	flag[146] = 'G';
	goto LABEL8351;
	
	LABEL8353:
	// Setting char
	flag[35] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8453;
	
	else 
		goto LABEL8352;
	
	LABEL8354:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8355:
	// Checking char
	flag[173] = 'y';
	goto LABEL8455;
	
	LABEL8356:
	// Setting char
	flag[143] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8357;
	
	else 
		goto LABEL8355;
	
	LABEL8357:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8358:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8359:
	// Setting char
	flag[203] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8360;
	
	else 
		goto LABEL8358;
	
	LABEL8360:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8361:
	// Checking char
	flag[115] = '#';
	goto LABEL8461;
	
	LABEL8362:
	// Setting char
	flag[28] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8462;
	
	else if (r == 1)
		goto LABEL8363;
	
	else 
		goto LABEL8361;
	
	LABEL8363:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8364:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8365:
	// Setting char
	flag[63] = '@';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8265;
	
	else if (r == 1)
		goto LABEL8465;
	
	else 
		goto LABEL8364;
	
	LABEL8366:
	// Checking char
	flag[198] = 'o';
	goto LABEL8365;
	
	LABEL8367:
	// Setting char
	flag[109] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8467;
	
	else 
		goto LABEL8366;
	
	LABEL8368:
	// Setting char
	flag[65] = '^';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8268;
	
	else if (r == 1)
		goto LABEL8468;
	
	else 
		goto LABEL8367;
	
	LABEL8369:
	// Setting char
	flag[84] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8469;
	
	else 
		goto LABEL8368;
	
	LABEL8370:
	// Setting char
	flag[108] = '"';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8270;
	
	else if (r == 1)
		goto LABEL8470;
	
	else 
		goto LABEL8369;
	
	LABEL8371:
	// Setting char
	flag[149] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8271;
	
	else 
		goto LABEL8370;
	
	LABEL8372:
	// Setting char
	flag[121] = 'p';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8272;
	
	else if (r == 1)
		goto LABEL8472;
	
	else 
		goto LABEL8371;
	
	LABEL8373:
	// Checking char
	flag[165] = 'O';
	goto LABEL8372;
	
	LABEL8374:
	// Checking char
	flag[153] = ']';
	goto LABEL8373;
	
	LABEL8375:
	// Checking char
	flag[144] = 'O';
	goto LABEL8475;
	
	LABEL8376:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8377:
	// Setting char
	flag[205] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8277;
	
	else 
		goto LABEL8378;
	
	LABEL8378:
	// Checking char
	flag[114] = 'W';
	goto LABEL8478;
	
	LABEL8379:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8380:
	// Checking char
	flag[222] = 'j';
	goto LABEL8480;
	
	LABEL8381:
	// Checking char
	flag[14] = '"';
	goto LABEL8380;
	
	LABEL8382:
	// Checking char
	flag[157] = 'z';
	goto LABEL8381;
	
	LABEL8383:
	// Checking char
	flag[69] = 'l';
	goto LABEL8382;
	
	LABEL8384:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8385:
	// Setting char
	flag[151] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8485;
	
	else 
		goto LABEL8386;
	
	LABEL8386:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8387:
	// Checking char
	flag[124] = '1';
	goto LABEL8287;
	
	LABEL8388:
	// Setting char
	flag[3] = '}';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8488;
	
	else if (r == 1)
		goto LABEL8389;
	
	else 
		goto LABEL8387;
	
	LABEL8389:
	// Checking char
	flag[11] = '?';
	goto LABEL8489;
	
	LABEL8390:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8392:
	// Checking char
	flag[242] = '*';
	goto LABEL8492;
	
	LABEL8393:
	// Checking char
	flag[112] = '.';
	goto LABEL8394;
	
	LABEL8394:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8395:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8396:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8397:
	// Checking char
	flag[92] = 'a';
	goto LABEL8497;
	
	LABEL8398:
	// Setting char
	flag[176] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8298;
	
	else 
		goto LABEL8498;
	
	LABEL8399:
	// Setting char
	flag[222] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8499;
	
	else 
		goto LABEL8398;
	
	LABEL8400:
	// Checking char
	flag[77] = '7';
	goto LABEL8500;
	
	LABEL8401:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8402:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8403:
	// Setting char
	flag[115] = 'k';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8503;
	
	else 
		goto LABEL8404;
	
	LABEL8404:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8405:
	// Setting char
	flag[13] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8305;
	
	else 
		goto LABEL8406;
	
	LABEL8406:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8407:
	// Checking char
	flag[51] = 'Q';
	goto LABEL8507;
	
	LABEL8408:
	// Setting char
	flag[48] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8409;
	
	else 
		goto LABEL8407;
	
	LABEL8409:
	// Checking char
	flag[38] = 'e';
	goto LABEL8410;
	
	LABEL8410:
	// Checking char
	flag[204] = '?';
	goto LABEL8510;
	
	LABEL8411:
	// Checking char
	flag[114] = 'w';
	goto LABEL8511;
	
	LABEL8412:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8413:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8414:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8415:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8416:
	// Checking char
	flag[194] = 'i';
	goto LABEL8316;
	
	LABEL8417:
	// Setting char
	flag[31] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8317;
	
	else 
		goto LABEL8416;
	
	LABEL8418:
	// Checking char
	flag[64] = 'L';
	goto LABEL8318;
	
	LABEL8419:
	// Setting char
	flag[131] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8319;
	
	else if (r == 1)
		goto LABEL8420;
	
	else 
		goto LABEL8418;
	
	LABEL8420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8421:
	// Checking char
	flag[20] = '_';
	goto LABEL8321;
	
	LABEL8422:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8423:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8424:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8425:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8426:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8427:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8428:
	// Checking char
	flag[63] = '%';
	goto LABEL8427;
	
	LABEL8429:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8430:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8431:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8432:
	// Checking char
	flag[188] = 'g';
	goto LABEL8532;
	
	LABEL8433:
	// Checking char
	flag[54] = 'n';
	goto LABEL8533;
	
	LABEL8434:
	// Checking char
	flag[141] = 'b';
	goto LABEL8534;
	
	LABEL8435:
	// Checking char
	flag[130] = '=';
	goto LABEL8535;
	
	LABEL8436:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8437:
	// Checking char
	flag[171] = ')';
	goto LABEL8436;
	
	LABEL8438:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8439:
	// Setting char
	flag[159] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8539;
	
	else 
		goto LABEL8438;
	
	LABEL8440:
	// Setting char
	flag[236] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8441;
	
	else 
		goto LABEL8439;
	
	LABEL8441:
	// Checking char
	flag[70] = 'V';
	goto LABEL8442;
	
	LABEL8442:
	// Setting char
	flag[186] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8342;
	
	else 
		goto LABEL8443;
	
	LABEL8443:
	// Checking char
	flag[8] = '$';
	goto LABEL8543;
	
	LABEL8444:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8445:
	// Setting char
	flag[238] = '1';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8545;
	
	else if (r == 1)
		goto LABEL8446;
	
	else 
		goto LABEL8444;
	
	LABEL8446:
	// Checking char
	flag[89] = '7';
	goto LABEL8546;
	
	LABEL8447:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8448:
	// Checking char
	flag[245] = 'v';
	goto LABEL8447;
	
	LABEL8449:
	// Setting char
	flag[246] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8349;
	
	else 
		goto LABEL8448;
	
	LABEL8450:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8451:
	// Setting char
	flag[36] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8551;
	
	else 
		goto LABEL8450;
	
	LABEL8452:
	// Checking char
	flag[243] = 'e';
	goto LABEL8451;
	
	LABEL8453:
	// Setting char
	flag[92] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8553;
	
	else 
		goto LABEL8452;
	
	LABEL8454:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8455:
	// Checking char
	flag[117] = '9';
	goto LABEL8454;
	
	LABEL8456:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8457:
	// Checking char
	flag[144] = 'a';
	goto LABEL8456;
	
	LABEL8458:
	// Checking char
	flag[164] = 'e';
	goto LABEL8457;
	
	LABEL8459:
	// Setting char
	flag[35] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8359;
	
	else 
		goto LABEL8458;
	
	LABEL8460:
	// Checking char
	flag[56] = 'u';
	goto LABEL8459;
	
	LABEL8461:
	// Checking char
	flag[208] = 'V';
	goto LABEL8561;
	
	LABEL8462:
	// Setting char
	flag[189] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8562;
	
	else 
		goto LABEL8463;
	
	LABEL8463:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8464:
	// Checking char
	flag[27] = 'q';
	goto LABEL8564;
	
	LABEL8465:
	// Setting char
	flag[152] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8565;
	
	else 
		goto LABEL8464;
	
	LABEL8466:
	// Checking char
	flag[115] = 'D';
	goto LABEL8566;
	
	LABEL8467:
	// Checking char
	flag[13] = '#';
	goto LABEL8466;
	
	LABEL8468:
	// Checking char
	flag[186] = '5';
	goto LABEL8568;
	
	LABEL8469:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8470:
	// Checking char
	flag[129] = 'K';
	goto LABEL8570;
	
	LABEL8471:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8472:
	// Setting char
	flag[198] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8572;
	
	else 
		goto LABEL8471;
	
	LABEL8473:
	// Checking char
	flag[116] = '5';
	goto LABEL8573;
	
	LABEL8474:
	// Checking char
	flag[88] = ']';
	goto LABEL8473;
	
	LABEL8475:
	// Setting char
	flag[14] = 'A';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8575;
	
	else if (r == 1)
		goto LABEL8476;
	
	else 
		goto LABEL8474;
	
	LABEL8476:
	// Setting char
	flag[52] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8376;
	
	else 
		goto LABEL8477;
	
	LABEL8477:
	// Setting char
	flag[204] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8377;
	
	else 
		goto LABEL8577;
	
	LABEL8478:
	// Checking char
	flag[197] = '&';
	goto LABEL8578;
	
	LABEL8479:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8480:
	// Setting char
	flag[232] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8580;
	
	else 
		goto LABEL8479;
	
	LABEL8481:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8482:
	// Checking char
	flag[96] = 'B';
	goto LABEL8481;
	
	LABEL8483:
	// Setting char
	flag[175] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8583;
	
	else 
		goto LABEL8482;
	
	LABEL8484:
	// Setting char
	flag[15] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8384;
	
	else if (r == 1)
		goto LABEL8584;
	
	else 
		goto LABEL8483;
	
	LABEL8485:
	// Setting char
	flag[38] = 'o';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8585;
	
	else if (r == 1)
		goto LABEL8486;
	
	else 
		goto LABEL8484;
	
	LABEL8486:
	// Checking char
	flag[233] = '2';
	goto LABEL8487;
	
	LABEL8487:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8488:
	// Checking char
	flag[48] = 'z';
	goto LABEL8588;
	
	LABEL8489:
	// Setting char
	flag[72] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8589;
	
	else 
		goto LABEL8490;
	
	LABEL8490:
	// Setting char
	flag[171] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8590;
	
	else 
		goto LABEL8491;
	
	LABEL8491:
	// Checking char
	flag[115] = 'x';
	goto LABEL8591;
	
	LABEL8492:
	// Checking char
	flag[32] = '8';
	goto LABEL8493;
	
	LABEL8493:
	// Setting char
	flag[116] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8593;
	
	else 
		goto LABEL8494;
	
	LABEL8494:
	// Checking char
	flag[45] = '_';
	goto LABEL8495;
	
	LABEL8495:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8496:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8497:
	// Setting char
	flag[120] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8597;
	
	else 
		goto LABEL8496;
	
	LABEL8498:
	// Checking char
	flag[146] = 'L';
	goto LABEL8598;
	
	LABEL8499:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8500:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8501:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8502:
	// Setting char
	flag[186] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8602;
	
	else 
		goto LABEL8501;
	
	LABEL8503:
	// Setting char
	flag[81] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8603;
	
	else if (r == 1)
		goto LABEL8504;
	
	else 
		goto LABEL8502;
	
	LABEL8504:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8505:
	// Checking char
	flag[128] = 'C';
	goto LABEL8405;
	
	LABEL8506:
	// Checking char
	flag[222] = 'n';
	goto LABEL8505;
	
	LABEL8507:
	// Setting char
	flag[145] = 'K';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8607;
	
	else if (r == 1)
		goto LABEL8508;
	
	else 
		goto LABEL8506;
	
	LABEL8508:
	// Checking char
	flag[70] = '8';
	goto LABEL8509;
	
	LABEL8509:
	// Checking char
	flag[127] = 'K';
	goto LABEL8609;
	
	LABEL8510:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8511:
	// Setting char
	flag[188] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8611;
	
	else 
		goto LABEL8512;
	
	LABEL8512:
	// Setting char
	flag[108] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8412;
	
	else 
		goto LABEL8513;
	
	LABEL8513:
	// Checking char
	flag[158] = 'Z';
	goto LABEL8613;
	
	LABEL8514:
	// Checking char
	flag[221] = 'I';
	goto LABEL8414;
	
	LABEL8515:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8516:
	// Setting char
	flag[240] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8616;
	
	else 
		goto LABEL8515;
	
	LABEL8517:
	// Setting char
	flag[175] = 'j';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8417;
	
	else if (r == 1)
		goto LABEL8617;
	
	else 
		goto LABEL8516;
	
	LABEL8518:
	// Checking char
	flag[217] = 'w';
	goto LABEL8517;
	
	LABEL8519:
	// Setting char
	flag[133] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8419;
	
	else 
		goto LABEL8518;
	
	LABEL8520:
	// Setting char
	flag[47] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8620;
	
	else 
		goto LABEL8519;
	
	LABEL8521:
	// Setting char
	flag[230] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8421;
	
	else 
		goto LABEL8520;
	
	LABEL8522:
	// Checking char
	flag[46] = 'p';
	goto LABEL8422;
	
	LABEL8523:
	// Setting char
	flag[18] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8423;
	
	else 
		goto LABEL8522;
	
	LABEL8524:
	// Setting char
	flag[108] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8424;
	
	else 
		goto LABEL8523;
	
	LABEL8525:
	// Checking char
	flag[205] = ',';
	goto LABEL8625;
	
	LABEL8526:
	// Setting char
	flag[33] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8626;
	
	else 
		goto LABEL8525;
	
	LABEL8527:
	// Setting char
	flag[111] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8627;
	
	else 
		goto LABEL8526;
	
	LABEL8528:
	// Setting char
	flag[143] = 'y';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8428;
	
	else if (r == 1)
		goto LABEL8628;
	
	else 
		goto LABEL8527;
	
	LABEL8529:
	// Setting char
	flag[60] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8429;
	
	else if (r == 1)
		goto LABEL8629;
	
	else 
		goto LABEL8528;
	
	LABEL8530:
	// Setting char
	flag[47] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8630;
	
	else 
		goto LABEL8529;
	
	LABEL8531:
	// Setting char
	flag[137] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8431;
	
	else 
		goto LABEL8530;
	
	LABEL8532:
	// Setting char
	flag[95] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8632;
	
	else 
		goto LABEL8531;
	
	LABEL8533:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8534:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8535:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8536:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8537:
	// Setting char
	flag[239] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8637;
	
	else 
		goto LABEL8536;
	
	LABEL8538:
	// Setting char
	flag[81] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8638;
	
	else 
		goto LABEL8537;
	
	LABEL8539:
	// Setting char
	flag[146] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8639;
	
	else if (r == 1)
		goto LABEL8540;
	
	else 
		goto LABEL8538;
	
	LABEL8540:
	// Checking char
	flag[48] = '=';
	goto LABEL8640;
	
	LABEL8541:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8542:
	// Checking char
	flag[216] = '%';
	goto LABEL8642;
	
	LABEL8543:
	// Checking char
	flag[36] = 'k';
	goto LABEL8542;
	
	LABEL8544:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8545:
	// Setting char
	flag[209] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8645;
	
	else 
		goto LABEL8544;
	
	LABEL8546:
	// Checking char
	flag[21] = 'N';
	goto LABEL8547;
	
	LABEL8547:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8548:
	// Checking char
	flag[147] = '}';
	goto LABEL8648;
	
	LABEL8549:
	// Setting char
	flag[35] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8449;
	
	else 
		goto LABEL8548;
	
	LABEL8550:
	// Setting char
	flag[197] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8650;
	
	else 
		goto LABEL8549;
	
	LABEL8551:
	// Setting char
	flag[248] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8552;
	
	else 
		goto LABEL8550;
	
	LABEL8552:
	// Checking char
	flag[108] = 'j';
	goto LABEL8652;
	
	LABEL8553:
	// Checking char
	flag[96] = '{';
	goto LABEL8653;
	
	LABEL8554:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8555:
	// Setting char
	flag[173] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8655;
	
	else 
		goto LABEL8554;
	
	LABEL8556:
	// Checking char
	flag[211] = '`';
	goto LABEL8555;
	
	LABEL8557:
	// Checking char
	flag[37] = '6';
	goto LABEL8556;
	
	LABEL8558:
	// Checking char
	flag[153] = 'W';
	goto LABEL8557;
	
	LABEL8559:
	// Setting char
	flag[186] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8659;
	
	else 
		goto LABEL8558;
	
	LABEL8560:
	// Setting char
	flag[152] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8460;
	
	else 
		goto LABEL8559;
	
	LABEL8561:
	// Checking char
	flag[110] = '%';
	goto LABEL8560;
	
	LABEL8562:
	// Setting char
	flag[96] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8662;
	
	else 
		goto LABEL8563;
	
	LABEL8563:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8564:
	// Checking char
	flag[191] = 'Q';
	goto LABEL8664;
	
	LABEL8565:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8566:
	// Checking char
	flag[16] = 'S';
	goto LABEL8666;
	
	LABEL8567:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8568:
	// Setting char
	flag[207] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8668;
	
	else 
		goto LABEL8569;
	
	LABEL8569:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8570:
	// Checking char
	flag[1] = '>';
	goto LABEL8670;
	
	LABEL8571:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8572:
	// Setting char
	flag[31] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8672;
	
	else 
		goto LABEL8571;
	
	LABEL8573:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8574:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8575:
	// Setting char
	flag[86] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8675;
	
	else if (r == 1)
		goto LABEL8576;
	
	else 
		goto LABEL8574;
	
	LABEL8576:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8577:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8578:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8579:
	// Checking char
	flag[218] = '9';
	goto LABEL8679;
	
	LABEL8580:
	// Checking char
	flag[118] = 't';
	goto LABEL8579;
	
	LABEL8581:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8582:
	// Checking char
	flag[126] = 'J';
	goto LABEL8682;
	
	LABEL8583:
	// Setting char
	flag[225] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8683;
	
	else 
		goto LABEL8582;
	
	LABEL8584:
	// Checking char
	flag[190] = 'J';
	goto LABEL8684;
	
	LABEL8585:
	// Setting char
	flag[98] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8685;
	
	else 
		goto LABEL8586;
	
	LABEL8586:
	// Checking char
	flag[69] = '+';
	goto LABEL8587;
	
	LABEL8587:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8588:
	// Checking char
	flag[62] = '_';
	goto LABEL8688;
	
	LABEL8589:
	// Checking char
	flag[84] = '~';
	goto LABEL8689;
	
	LABEL8590:
	// Checking char
	flag[176] = 'J';
	goto LABEL8690;
	
	LABEL8591:
	// Setting char
	flag[208] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8691;
	
	else 
		goto LABEL8592;
	
	LABEL8592:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8593:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8594:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8595:
	// Checking char
	flag[13] = 'f';
	goto LABEL8695;
	
	LABEL8596:
	// Checking char
	flag[23] = '$';
	goto LABEL8595;
	
	LABEL8597:
	// Checking char
	flag[114] = 'a';
	goto LABEL8697;
	
	LABEL8598:
	// Checking char
	flag[238] = 'E';
	goto LABEL8599;
	
	LABEL8599:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8600:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8601:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8602:
	// Checking char
	flag[214] = '^';
	goto LABEL8601;
	
	LABEL8603:
	// Checking char
	flag[207] = 'L';
	goto LABEL8703;
	
	LABEL8604:
	// Checking char
	flag[117] = 'C';
	goto LABEL8704;
	
	LABEL8605:
	// Setting char
	flag[167] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8705;
	
	else 
		goto LABEL8604;
	
	LABEL8606:
	// Checking char
	flag[231] = '%';
	goto LABEL8605;
	
	LABEL8607:
	// Setting char
	flag[34] = 'K';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8707;
	
	else if (r == 1)
		goto LABEL8608;
	
	else 
		goto LABEL8606;
	
	LABEL8608:
	// Checking char
	flag[139] = 'n';
	goto LABEL8708;
	
	LABEL8609:
	// Setting char
	flag[8] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8709;
	
	else 
		goto LABEL8610;
	
	LABEL8610:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8611:
	// Setting char
	flag[64] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8711;
	
	else 
		goto LABEL8612;
	
	LABEL8612:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8613:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8614:
	// Setting char
	flag[166] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8514;
	
	else 
		goto LABEL8714;
	
	LABEL8615:
	// Setting char
	flag[227] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8715;
	
	else 
		goto LABEL8614;
	
	LABEL8616:
	// Checking char
	flag[32] = 'i';
	goto LABEL8615;
	
	LABEL8617:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8618:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8619:
	// Checking char
	flag[178] = 'g';
	goto LABEL8618;
	
	LABEL8620:
	// Setting char
	flag[29] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8720;
	
	else 
		goto LABEL8619;
	
	LABEL8621:
	// Checking char
	flag[230] = 'W';
	goto LABEL8521;
	
	LABEL8622:
	// Setting char
	flag[13] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8722;
	
	else 
		goto LABEL8621;
	
	LABEL8623:
	// Checking char
	flag[5] = '-';
	goto LABEL8622;
	
	LABEL8624:
	// Setting char
	flag[27] = 'S';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8524;
	
	else if (r == 1)
		goto LABEL8724;
	
	else 
		goto LABEL8623;
	
	LABEL8625:
	// Checking char
	flag[139] = ':';
	goto LABEL8624;
	
	LABEL8626:
	// Checking char
	flag[88] = '3';
	goto LABEL8726;
	
	LABEL8627:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8628:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8629:
	// Checking char
	flag[171] = 'z';
	goto LABEL8729;
	
	LABEL8630:
	// Setting char
	flag[196] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8730;
	
	else 
		goto LABEL8631;
	
	LABEL8631:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8632:
	// Setting char
	flag[96] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8732;
	
	else 
		goto LABEL8633;
	
	LABEL8633:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8634:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8635:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8636:
	// Setting char
	flag[73] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8736;
	
	else 
		goto LABEL8635;
	
	LABEL8637:
	// Checking char
	flag[72] = 'm';
	goto LABEL8636;
	
	LABEL8638:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8639:
	// Checking char
	flag[139] = 'M';
	goto LABEL8739;
	
	LABEL8640:
	// Checking char
	flag[133] = '4';
	goto LABEL8641;
	
	LABEL8641:
	// Checking char
	flag[218] = '$';
	goto LABEL8541;
	
	LABEL8642:
	// Checking char
	flag[122] = 'A';
	goto LABEL8742;
	
	LABEL8643:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8644:
	// Checking char
	flag[69] = '/';
	goto LABEL8744;
	
	LABEL8645:
	// Setting char
	flag[7] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8745;
	
	else 
		goto LABEL8644;
	
	LABEL8646:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8647:
	// Checking char
	flag[136] = '8';
	goto LABEL8646;
	
	LABEL8648:
	// Setting char
	flag[45] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8748;
	
	else 
		goto LABEL8647;
	
	LABEL8649:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8650:
	// Checking char
	flag[211] = '"';
	goto LABEL8750;
	
	LABEL8651:
	// Checking char
	flag[180] = '+';
	goto LABEL8751;
	
	LABEL8652:
	// Setting char
	flag[117] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8752;
	
	else 
		goto LABEL8651;
	
	LABEL8653:
	// Checking char
	flag[141] = '|';
	goto LABEL8753;
	
	LABEL8654:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8655:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8656:
	// Checking char
	flag[60] = 'c';
	goto LABEL8756;
	
	LABEL8657:
	// Checking char
	flag[119] = '0';
	goto LABEL8656;
	
	LABEL8658:
	// Setting char
	flag[138] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8758;
	
	else 
		goto LABEL8657;
	
	LABEL8659:
	// Setting char
	flag[216] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8759;
	
	else 
		goto LABEL8658;
	
	LABEL8660:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8661:
	// Checking char
	flag[115] = '}';
	goto LABEL8660;
	
	LABEL8662:
	// Setting char
	flag[9] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8762;
	
	else 
		goto LABEL8661;
	
	LABEL8663:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8664:
	// Checking char
	flag[38] = 'F';
	goto LABEL8665;
	
	LABEL8665:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8666:
	// Checking char
	flag[140] = 'x';
	goto LABEL8766;
	
	LABEL8667:
	// Setting char
	flag[45] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8567;
	
	else 
		goto LABEL8767;
	
	LABEL8668:
	// Setting char
	flag[140] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8768;
	
	else 
		goto LABEL8667;
	
	LABEL8669:
	// Checking char
	flag[144] = '!';
	goto LABEL8769;
	
	LABEL8670:
	// Setting char
	flag[213] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8770;
	
	else if (r == 1)
		goto LABEL8671;
	
	else 
		goto LABEL8669;
	
	LABEL8671:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8672:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8673:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8674:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8675:
	// Setting char
	flag[217] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8775;
	
	else if (r == 1)
		goto LABEL8676;
	
	else 
		goto LABEL8674;
	
	LABEL8676:
	// Checking char
	flag[98] = 'p';
	goto LABEL8677;
	
	LABEL8677:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8679:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8680:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8681:
	// Setting char
	flag[49] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8581;
	
	else if (r == 1)
		goto LABEL8781;
	
	else 
		goto LABEL8680;
	
	LABEL8682:
	// Checking char
	flag[155] = 'g';
	goto LABEL8681;
	
	LABEL8683:
	// Checking char
	flag[18] = '$';
	goto LABEL8783;
	
	LABEL8684:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8685:
	// Setting char
	flag[28] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8785;
	
	else 
		goto LABEL8686;
	
	LABEL8686:
	// Checking char
	flag[0] = 'N';
	goto LABEL8687;
	
	LABEL8687:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8688:
	// Checking char
	flag[221] = '/';
	goto LABEL8788;
	
	LABEL8689:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8690:
	// Checking char
	flag[25] = 'n';
	goto LABEL8790;
	
	LABEL8691:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8692:
	// Checking char
	flag[105] = 'j';
	goto LABEL8693;
	
	LABEL8693:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8694:
	// Checking char
	flag[44] = '>';
	goto LABEL8594;
	
	LABEL8695:
	// Checking char
	flag[9] = 'O';
	goto LABEL8694;
	
	LABEL8696:
	// Setting char
	flag[55] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8596;
	
	else 
		goto LABEL8796;
	
	LABEL8697:
	// Setting char
	flag[72] = 'm';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8797;
	
	else if (r == 1)
		goto LABEL8698;
	
	else 
		goto LABEL8696;
	
	LABEL8698:
	// Checking char
	flag[66] = '|';
	goto LABEL8699;
	
	LABEL8699:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8700:
	// Checking char
	flag[203] = 'j';
	goto LABEL8600;
	
	LABEL8701:
	// Checking char
	flag[40] = '`';
	goto LABEL8700;
	
	LABEL8702:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8703:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8704:
	// Checking char
	flag[20] = 'c';
	goto LABEL8804;
	
	LABEL8705:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8706:
	// Checking char
	flag[66] = ')';
	goto LABEL8806;
	
	LABEL8707:
	// Setting char
	flag[29] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8807;
	
	else 
		goto LABEL8706;
	
	LABEL8708:
	// Checking char
	flag[152] = 'W';
	goto LABEL8808;
	
	LABEL8709:
	// Checking char
	flag[99] = 'x';
	goto LABEL8809;
	
	LABEL8710:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8711:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8712:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8713:
	// Checking char
	flag[217] = 'A';
	goto LABEL8712;
	
	LABEL8714:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8715:
	// Setting char
	flag[78] = 'G';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8815;
	
	else 
		goto LABEL8716;
	
	LABEL8716:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8717:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8718:
	// Setting char
	flag[207] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8818;
	
	else 
		goto LABEL8717;
	
	LABEL8719:
	// Setting char
	flag[77] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8819;
	
	else 
		goto LABEL8718;
	
	LABEL8720:
	// Setting char
	flag[151] = 'X';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8820;
	
	else if (r == 1)
		goto LABEL8721;
	
	else 
		goto LABEL8719;
	
	LABEL8721:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8722:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8723:
	// Checking char
	flag[62] = '2';
	goto LABEL8823;
	
	LABEL8724:
	// Setting char
	flag[41] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8824;
	
	else if (r == 1)
		goto LABEL8725;
	
	else 
		goto LABEL8723;
	
	LABEL8725:
	// Checking char
	flag[44] = 'a';
	goto LABEL8825;
	
	LABEL8726:
	// Checking char
	flag[176] = 'm';
	goto LABEL8826;
	
	LABEL8727:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8728:
	// Checking char
	flag[13] = 'f';
	goto LABEL8727;
	
	LABEL8729:
	// Checking char
	flag[173] = 'n';
	goto LABEL8728;
	
	LABEL8730:
	// Checking char
	flag[110] = 'l';
	goto LABEL8830;
	
	LABEL8731:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8732:
	// Setting char
	flag[16] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8832;
	
	else 
		goto LABEL8731;
	
	LABEL8733:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8734:
	// Checking char
	flag[182] = 'D';
	goto LABEL8634;
	
	LABEL8735:
	// Setting char
	flag[77] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8835;
	
	else 
		goto LABEL8734;
	
	LABEL8736:
	// Setting char
	flag[145] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8836;
	
	else if (r == 1)
		goto LABEL8737;
	
	else 
		goto LABEL8735;
	
	LABEL8737:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8738:
	// Checking char
	flag[206] = '8';
	goto LABEL8838;
	
	LABEL8739:
	// Setting char
	flag[151] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8839;
	
	else 
		goto LABEL8738;
	
	LABEL8740:
	// Checking char
	flag[74] = '"';
	goto LABEL8840;
	
	LABEL8741:
	// Checking char
	flag[166] = 'c';
	goto LABEL8740;
	
	LABEL8742:
	// Setting char
	flag[68] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8842;
	
	else 
		goto LABEL8741;
	
	LABEL8743:
	// Checking char
	flag[21] = 'P';
	goto LABEL8643;
	
	LABEL8744:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8745:
	// Checking char
	flag[11] = 'H';
	goto LABEL8845;
	
	LABEL8746:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8747:
	// Checking char
	flag[160] = 'l';
	goto LABEL8746;
	
	LABEL8748:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8749:
	// Setting char
	flag[42] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8649;
	
	else 
		goto LABEL8849;
	
	LABEL8750:
	// Checking char
	flag[168] = 'I';
	goto LABEL8749;
	
	LABEL8751:
	// Checking char
	flag[248] = 'N';
	goto LABEL8851;
	
	LABEL8752:
	// Checking char
	flag[30] = '%';
	goto LABEL8852;
	
	LABEL8753:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8754:
	// Checking char
	flag[39] = 'B';
	goto LABEL8654;
	
	LABEL8755:
	// Checking char
	flag[40] = '~';
	goto LABEL8754;
	
	LABEL8756:
	// Checking char
	flag[50] = 'l';
	goto LABEL8856;
	
	LABEL8757:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8758:
	// Checking char
	flag[98] = '/';
	goto LABEL8757;
	
	LABEL8759:
	// Setting char
	flag[192] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8859;
	
	else 
		goto LABEL8760;
	
	LABEL8760:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8761:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8762:
	// Setting char
	flag[148] = ')';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8862;
	
	else if (r == 1)
		goto LABEL8763;
	
	else 
		goto LABEL8761;
	
	LABEL8763:
	// Checking char
	flag[62] = '<';
	goto LABEL8663;
	
	LABEL8764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8765:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8766:
	// Checking char
	flag[188] = 'L';
	goto LABEL8765;
	
	LABEL8767:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8768:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8769:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8770:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8771:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8772:
	// Setting char
	flag[238] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8872;
	
	else 
		goto LABEL8771;
	
	LABEL8773:
	// Setting char
	flag[155] = 'w';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8673;
	
	else if (r == 1)
		goto LABEL8873;
	
	else 
		goto LABEL8772;
	
	LABEL8774:
	// Setting char
	flag[35] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8874;
	
	else 
		goto LABEL8773;
	
	LABEL8775:
	// Setting char
	flag[106] = '(';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8875;
	
	else if (r == 1)
		goto LABEL8776;
	
	else 
		goto LABEL8774;
	
	LABEL8776:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8777:
	// Checking char
	flag[18] = '`';
	goto LABEL8778;
	
	LABEL8778:
	// Setting char
	flag[65] = 'k';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8678;
	
	else if (r == 1)
		goto LABEL8878;
	
	else 
		goto LABEL8779;
	
	LABEL8779:
	// Checking char
	flag[142] = 'K';
	goto LABEL8879;
	
	LABEL8780:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8781:
	// Checking char
	flag[178] = 'm';
	goto LABEL8881;
	
	LABEL8782:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8783:
	// Setting char
	flag[180] = 'E';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8883;
	
	else if (r == 1)
		goto LABEL8784;
	
	else 
		goto LABEL8782;
	
	LABEL8784:
	// Checking char
	flag[82] = '1';
	goto LABEL8884;
	
	LABEL8785:
	// Setting char
	flag[165] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8885;
	
	else 
		goto LABEL8786;
	
	LABEL8786:
	// Checking char
	flag[10] = 'P';
	goto LABEL8787;
	
	LABEL8787:
	// Checking char
	flag[8] = 'S';
	goto LABEL8887;
	
	LABEL8788:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8789:
	// Checking char
	flag[42] = 's';
	goto LABEL8889;
	
	LABEL8790:
	// Setting char
	flag[23] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8890;
	
	else if (r == 1)
		goto LABEL8791;
	
	else 
		goto LABEL8789;
	
	LABEL8791:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8792:
	// Checking char
	flag[177] = '?';
	goto LABEL8692;
	
	LABEL8793:
	// Checking char
	flag[11] = '?';
	goto LABEL8792;
	
	LABEL8794:
	// Setting char
	flag[152] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8795;
	
	else 
		goto LABEL8793;
	
	LABEL8795:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8796:
	// Checking char
	flag[99] = 't';
	goto LABEL8896;
	
	LABEL8797:
	// Checking char
	flag[102] = '^';
	goto LABEL8798;
	
	LABEL8798:
	// Setting char
	flag[92] = 'r';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8898;
	
	else 
		goto LABEL8799;
	
	LABEL8799:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8801:
	// Setting char
	flag[26] = '.';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8701;
	
	else if (r == 1)
		goto LABEL8901;
	
	else 
		goto LABEL8800;
	
	LABEL8802:
	// Setting char
	flag[103] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8702;
	
	else 
		goto LABEL8801;
	
	LABEL8803:
	// Checking char
	flag[209] = 'v';
	goto LABEL8802;
	
	LABEL8804:
	// Setting char
	flag[108] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8805;
	
	else 
		goto LABEL8803;
	
	LABEL8805:
	// Checking char
	flag[133] = 'm';
	goto LABEL8905;
	
	LABEL8806:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8807:
	// Checking char
	flag[2] = '*';
	goto LABEL8907;
	
	LABEL8808:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8810:
	// Setting char
	flag[126] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8710;
	
	else 
		goto LABEL8811;
	
	LABEL8811:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8812:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8813:
	// Checking char
	flag[115] = 'n';
	goto LABEL8713;
	
	LABEL8814:
	// Checking char
	flag[65] = 'q';
	goto LABEL8813;
	
	LABEL8815:
	// Checking char
	flag[78] = 'f';
	goto LABEL8814;
	
	LABEL8816:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8817:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8818:
	// Setting char
	flag[49] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8918;
	
	else 
		goto LABEL8817;
	
	LABEL8819:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8820:
	// Checking char
	flag[52] = ')';
	goto LABEL8920;
	
	LABEL8821:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8822:
	// Checking char
	flag[165] = 'D';
	goto LABEL8821;
	
	LABEL8823:
	// Setting char
	flag[86] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8923;
	
	else 
		goto LABEL8822;
	
	LABEL8824:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8825:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8826:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8827:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8828:
	// Checking char
	flag[15] = ')';
	goto LABEL8827;
	
	LABEL8829:
	// Checking char
	flag[200] = 'G';
	goto LABEL8828;
	
	LABEL8830:
	// Setting char
	flag[130] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8930;
	
	else 
		goto LABEL8829;
	
	LABEL8831:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8832:
	// Setting char
	flag[226] = '%';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8932;
	
	else 
		goto LABEL8831;
	
	LABEL8833:
	// Checking char
	flag[30] = '3';
	goto LABEL8733;
	
	LABEL8834:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8835:
	// Setting char
	flag[44] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8935;
	
	else 
		goto LABEL8834;
	
	LABEL8836:
	// Setting char
	flag[32] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8936;
	
	else 
		goto LABEL8837;
	
	LABEL8837:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8838:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8839:
	// Checking char
	flag[147] = '+';
	goto LABEL8939;
	
	LABEL8840:
	// Checking char
	flag[232] = 'm';
	goto LABEL8841;
	
	LABEL8841:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8842:
	// Setting char
	flag[127] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8942;
	
	else 
		goto LABEL8843;
	
	LABEL8843:
	// Checking char
	flag[38] = 'j';
	goto LABEL8743;
	
	LABEL8844:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8845:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8846:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8847:
	// Setting char
	flag[8] = 'e';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8747;
	
	else 
		goto LABEL8947;
	
	LABEL8848:
	// Checking char
	flag[230] = '&';
	goto LABEL8847;
	
	LABEL8849:
	// Setting char
	flag[218] = 'a';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8949;
	
	else if (r == 1)
		goto LABEL8850;
	
	else 
		goto LABEL8848;
	
	LABEL8850:
	// Checking char
	flag[196] = '3';
	goto LABEL8950;
	
	LABEL8851:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8852:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8853:
	// Checking char
	flag[66] = '3';
	goto LABEL8953;
	
	LABEL8854:
	// Setting char
	flag[6] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8954;
	
	else 
		goto LABEL8853;
	
	LABEL8855:
	// Setting char
	flag[9] = 'J';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8755;
	
	else if (r == 1)
		goto LABEL8955;
	
	else 
		goto LABEL8854;
	
	LABEL8856:
	// Setting char
	flag[98] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8956;
	
	else 
		goto LABEL8855;
	
	LABEL8857:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8858:
	// Checking char
	flag[149] = 'n';
	goto LABEL8857;
	
	LABEL8859:
	// Checking char
	flag[60] = ';';
	goto LABEL8858;
	
	LABEL8860:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8861:
	// Checking char
	flag[116] = 'l';
	goto LABEL8961;
	
	LABEL8862:
	// Setting char
	flag[226] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8863;
	
	else 
		goto LABEL8861;
	
	LABEL8863:
	// Checking char
	flag[21] = '-';
	goto LABEL8864;
	
	LABEL8864:
	// Setting char
	flag[83] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8764;
	
	else if (r == 1)
		goto LABEL8964;
	
	else 
		goto LABEL8865;
	
	LABEL8865:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8866:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8867:
	// Checking char
	flag[91] = 'M';
	goto LABEL8866;
	
	LABEL8868:
	// Checking char
	flag[171] = 'N';
	goto LABEL8867;
	
	LABEL8869:
	// Setting char
	flag[193] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8870;
	
	else 
		goto LABEL8868;
	
	LABEL8870:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8871:
	// Checking char
	flag[50] = '&';
	goto LABEL8971;
	
	LABEL8872:
	// Checking char
	flag[240] = '6';
	goto LABEL8871;
	
	LABEL8873:
	// Checking char
	flag[31] = '.';
	goto LABEL8973;
	
	LABEL8874:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8875:
	// Setting char
	flag[219] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8975;
	
	else 
		goto LABEL8876;
	
	LABEL8876:
	// Setting char
	flag[82] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8976;
	
	else 
		goto LABEL8877;
	
	LABEL8877:
	// Checking char
	flag[68] = 'C';
	goto LABEL8777;
	
	LABEL8878:
	// Checking char
	flag[0] = '#';
	goto LABEL8978;
	
	LABEL8879:
	// Checking char
	flag[212] = '(';
	goto LABEL8979;
	
	LABEL8880:
	// Checking char
	flag[118] = 'V';
	goto LABEL8780;
	
	LABEL8881:
	// Setting char
	flag[217] = '9';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8981;
	
	else if (r == 1)
		goto LABEL8882;
	
	else 
		goto LABEL8880;
	
	LABEL8882:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8883:
	// Checking char
	flag[52] = 'j';
	goto LABEL8983;
	
	LABEL8884:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8885:
	// Setting char
	flag[38] = 'h';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8985;
	
	else 
		goto LABEL8886;
	
	LABEL8886:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8887:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8888:
	// Checking char
	flag[49] = '(';
	goto LABEL8988;
	
	LABEL8889:
	// Checking char
	flag[210] = 'P';
	goto LABEL8888;
	
	LABEL8890:
	// Setting char
	flag[178] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8990;
	
	else 
		goto LABEL8891;
	
	LABEL8891:
	// Setting char
	flag[77] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8991;
	
	else 
		goto LABEL8892;
	
	LABEL8892:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8893:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8894:
	// Setting char
	flag[243] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8794;
	
	else 
		goto LABEL8994;
	
	LABEL8895:
	// Setting char
	flag[71] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8995;
	
	else 
		goto LABEL8894;
	
	LABEL8896:
	// Setting char
	flag[162] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8996;
	
	else if (r == 1)
		goto LABEL8897;
	
	else 
		goto LABEL8895;
	
	LABEL8897:
	// Checking char
	flag[200] = 'K';
	goto LABEL8997;
	
	LABEL8898:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8899:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8900:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8901:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8902:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8903:
	// Checking char
	flag[135] = 'H';
	goto LABEL8902;
	
	LABEL8904:
	// Checking char
	flag[111] = '.';
	goto LABEL8903;
	
	LABEL8905:
	// Setting char
	flag[247] = 'D';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9005;
	
	else if (r == 1)
		goto LABEL8906;
	
	else 
		goto LABEL8904;
	
	LABEL8906:
	// Checking char
	flag[132] = 'K';
	goto LABEL9006;
	
	LABEL8907:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8908:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8909:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8910:
	// Setting char
	flag[39] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8810;
	
	else 
		goto LABEL8909;
	
	LABEL8911:
	// Setting char
	flag[216] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9011;
	
	else 
		goto LABEL8910;
	
	LABEL8912:
	// Setting char
	flag[209] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8812;
	
	else 
		goto LABEL8911;
	
	LABEL8913:
	// Checking char
	flag[64] = 'O';
	goto LABEL8912;
	
	LABEL8914:
	// Checking char
	flag[65] = 'P';
	goto LABEL8913;
	
	LABEL8915:
	// Checking char
	flag[239] = 'R';
	goto LABEL8914;
	
	LABEL8916:
	// Checking char
	flag[33] = 'Y';
	goto LABEL8816;
	
	LABEL8917:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8918:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8919:
	// Checking char
	flag[183] = '0';
	goto LABEL9019;
	
	LABEL8920:
	// Setting char
	flag[25] = 'x';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9020;
	
	else if (r == 1)
		goto LABEL8921;
	
	else 
		goto LABEL8919;
	
	LABEL8921:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8922:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8923:
	// Setting char
	flag[199] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8924;
	
	else 
		goto LABEL8922;
	
	LABEL8924:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8925:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8926:
	// Checking char
	flag[148] = 't';
	goto LABEL8925;
	
	LABEL8927:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8928:
	// Setting char
	flag[23] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9028;
	
	else 
		goto LABEL8927;
	
	LABEL8929:
	// Checking char
	flag[95] = '`';
	goto LABEL8928;
	
	LABEL8930:
	// Setting char
	flag[59] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8931;
	
	else 
		goto LABEL8929;
	
	LABEL8931:
	// Checking char
	flag[9] = 'R';
	goto LABEL9031;
	
	LABEL8932:
	// Checking char
	flag[67] = '{';
	goto LABEL9032;
	
	LABEL8933:
	// Checking char
	flag[148] = 'n';
	goto LABEL8833;
	
	LABEL8934:
	// Setting char
	flag[120] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9034;
	
	else 
		goto LABEL8933;
	
	LABEL8935:
	// Setting char
	flag[169] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9035;
	
	else 
		goto LABEL8934;
	
	LABEL8936:
	// Setting char
	flag[141] = ';';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9036;
	
	else 
		goto LABEL8937;
	
	LABEL8937:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8938:
	// Checking char
	flag[122] = 'e';
	goto LABEL9038;
	
	LABEL8939:
	// Checking char
	flag[29] = 'P';
	goto LABEL8938;
	
	LABEL8940:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8941:
	// Setting char
	flag[95] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9041;
	
	else 
		goto LABEL8940;
	
	LABEL8942:
	// Setting char
	flag[243] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8943;
	
	else 
		goto LABEL8941;
	
	LABEL8943:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8944:
	// Setting char
	flag[177] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8844;
	
	else 
		goto LABEL9044;
	
	LABEL8945:
	// Checking char
	flag[127] = '4';
	goto LABEL8944;
	
	LABEL8946:
	// Setting char
	flag[95] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8846;
	
	else if (r == 1)
		goto LABEL9046;
	
	else 
		goto LABEL8945;
	
	LABEL8947:
	// Setting char
	flag[76] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8948;
	
	else 
		goto LABEL8946;
	
	LABEL8948:
	// Checking char
	flag[126] = 'O';
	goto LABEL9048;
	
	LABEL8949:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8950:
	// Setting char
	flag[18] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9050;
	
	else 
		goto LABEL8951;
	
	LABEL8951:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8952:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8953:
	// Checking char
	flag[159] = 'z';
	goto LABEL9053;
	
	LABEL8954:
	// Checking char
	flag[73] = 'B';
	goto LABEL9054;
	
	LABEL8955:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8956:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8957:
	// Checking char
	flag[43] = '6';
	goto LABEL8958;
	
	LABEL8958:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8959:
	// Checking char
	flag[94] = 'L';
	goto LABEL9059;
	
	LABEL8960:
	// Setting char
	flag[37] = 'Z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8860;
	
	else if (r == 1)
		goto LABEL9060;
	
	else 
		goto LABEL8959;
	
	LABEL8961:
	// Setting char
	flag[34] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9061;
	
	else if (r == 1)
		goto LABEL8962;
	
	else 
		goto LABEL8960;
	
	LABEL8962:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8963:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8964:
	// Checking char
	flag[7] = '&';
	goto LABEL8963;
	
	LABEL8965:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8966:
	// Setting char
	flag[10] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9066;
	
	else 
		goto LABEL8965;
	
	LABEL8967:
	// Checking char
	flag[164] = 'J';
	goto LABEL8966;
	
	LABEL8968:
	// Setting char
	flag[1] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9068;
	
	else 
		goto LABEL8967;
	
	LABEL8969:
	// Setting char
	flag[40] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8869;
	
	else if (r == 1)
		goto LABEL9069;
	
	else 
		goto LABEL8968;
	
	LABEL8970:
	// Setting char
	flag[165] = '>';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9070;
	
	else 
		goto LABEL8969;
	
	LABEL8971:
	// Setting char
	flag[53] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9071;
	
	else 
		goto LABEL8970;
	
	LABEL8972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8973:
	// Setting char
	flag[160] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9073;
	
	else 
		goto LABEL8972;
	
	LABEL8974:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8975:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8976:
	// Setting char
	flag[92] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9076;
	
	else 
		goto LABEL8977;
	
	LABEL8977:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8978:
	// Checking char
	flag[48] = 'r';
	goto LABEL9078;
	
	LABEL8979:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8980:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8981:
	// Setting char
	flag[178] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9081;
	
	else if (r == 1)
		goto LABEL8982;
	
	else 
		goto LABEL8980;
	
	LABEL8982:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8983:
	// Checking char
	flag[147] = '?';
	goto LABEL9083;
	
	LABEL8984:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8985:
	// Setting char
	flag[120] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8986;
	
	else 
		goto LABEL8984;
	
	LABEL8986:
	// Setting char
	flag[237] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9086;
	
	else 
		goto LABEL8987;
	
	LABEL8987:
	// Checking char
	flag[0] = '_';
	goto LABEL9087;
	
	LABEL8988:
	// Setting char
	flag[113] = '1';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9088;
	
	else 
		goto LABEL8989;
	
	LABEL8989:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8990:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8991:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8992:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8993:
	// Setting char
	flag[166] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8893;
	
	else 
		goto LABEL8992;
	
	LABEL8994:
	// Setting char
	flag[35] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9094;
	
	else 
		goto LABEL8993;
	
	LABEL8995:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL8996:
	// Checking char
	flag[55] = 'c';
	goto LABEL9096;
	
	LABEL8997:
	// Checking char
	flag[79] = 'Z';
	goto LABEL8998;
	
	LABEL8998:
	// Checking char
	flag[28] = '4';
	goto LABEL8999;
	
	LABEL8999:
	// Checking char
	flag[241] = '>';
	goto LABEL8899;
	
	LABEL9000:
	// Checking char
	flag[25] = 'Z';
	goto LABEL8900;
	
	LABEL9001:
	// Setting char
	flag[149] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9101;
	
	else 
		goto LABEL9000;
	
	LABEL9002:
	// Setting char
	flag[234] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9102;
	
	else 
		goto LABEL9001;
	
	LABEL9003:
	// Setting char
	flag[161] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9103;
	
	else 
		goto LABEL9002;
	
	LABEL9004:
	// Setting char
	flag[156] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9104;
	
	else 
		goto LABEL9003;
	
	LABEL9005:
	// Checking char
	flag[86] = 'i';
	goto LABEL9004;
	
	LABEL9006:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9007:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9008:
	// Setting char
	flag[30] = 'V';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8908;
	
	else if (r == 1)
		goto LABEL9108;
	
	else 
		goto LABEL9007;
	
	LABEL9009:
	// Checking char
	flag[205] = '?';
	goto LABEL9008;
	
	LABEL9010:
	// Checking char
	flag[172] = '%';
	goto LABEL9009;
	
	LABEL9011:
	// Setting char
	flag[145] = 'T';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9111;
	
	else if (r == 1)
		goto LABEL9012;
	
	else 
		goto LABEL9010;
	
	LABEL9012:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9013:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9014:
	// Checking char
	flag[162] = ',';
	goto LABEL9114;
	
	LABEL9015:
	// Setting char
	flag[36] = '|';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8915;
	
	else if (r == 1)
		goto LABEL9115;
	
	else 
		goto LABEL9014;
	
	LABEL9016:
	// Setting char
	flag[157] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8916;
	
	else 
		goto LABEL9015;
	
	LABEL9017:
	// Setting char
	flag[195] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8917;
	
	else 
		goto LABEL9016;
	
	LABEL9018:
	// Setting char
	flag[131] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9118;
	
	else 
		goto LABEL9017;
	
	LABEL9019:
	// Setting char
	flag[133] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9119;
	
	else 
		goto LABEL9018;
	
	LABEL9020:
	// Setting char
	flag[72] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9120;
	
	else 
		goto LABEL9021;
	
	LABEL9021:
	// Checking char
	flag[90] = ')';
	goto LABEL9022;
	
	LABEL9022:
	// Checking char
	flag[5] = ':';
	goto LABEL9122;
	
	LABEL9023:
	// Checking char
	flag[247] = 'j';
	goto LABEL9024;
	
	LABEL9024:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9025:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9026:
	// Setting char
	flag[167] = 'q';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL8926;
	
	else if (r == 1)
		goto LABEL9126;
	
	else 
		goto LABEL9025;
	
	LABEL9027:
	// Setting char
	flag[2] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9127;
	
	else 
		goto LABEL9026;
	
	LABEL9028:
	// Setting char
	flag[48] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9029;
	
	else 
		goto LABEL9027;
	
	LABEL9029:
	// Checking char
	flag[214] = 'a';
	goto LABEL9129;
	
	LABEL9030:
	// Checking char
	flag[147] = 'h';
	goto LABEL9130;
	
	LABEL9031:
	// Checking char
	flag[100] = 't';
	goto LABEL9030;
	
	LABEL9032:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9033:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9034:
	// Checking char
	flag[130] = '>';
	goto LABEL9033;
	
	LABEL9035:
	// Checking char
	flag[19] = 'U';
	goto LABEL9135;
	
	LABEL9036:
	// Setting char
	flag[8] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9136;
	
	else 
		goto LABEL9037;
	
	LABEL9037:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9038:
	// Setting char
	flag[243] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9138;
	
	else 
		goto LABEL9039;
	
	LABEL9039:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9040:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9041:
	// Setting char
	flag[179] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9141;
	
	else 
		goto LABEL9040;
	
	LABEL9042:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9043:
	// Setting char
	flag[36] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9143;
	
	else 
		goto LABEL9042;
	
	LABEL9044:
	// Setting char
	flag[125] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9045;
	
	else 
		goto LABEL9043;
	
	LABEL9045:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9046:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9047:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9048:
	// Checking char
	flag[108] = 'f';
	goto LABEL9148;
	
	LABEL9049:
	// Checking char
	flag[143] = 'v';
	goto LABEL9149;
	
	LABEL9050:
	// Setting char
	flag[216] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9150;
	
	else if (r == 1)
		goto LABEL9051;
	
	else 
		goto LABEL9049;
	
	LABEL9051:
	// Checking char
	flag[13] = 'k';
	goto LABEL9052;
	
	LABEL9052:
	// Checking char
	flag[234] = ']';
	goto LABEL8952;
	
	LABEL9053:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9054:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9055:
	// Checking char
	flag[173] = '>';
	goto LABEL9155;
	
	LABEL9056:
	// Setting char
	flag[46] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9057;
	
	else 
		goto LABEL9055;
	
	LABEL9057:
	// Setting char
	flag[42] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL8957;
	
	else 
		goto LABEL9157;
	
	LABEL9058:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9059:
	// Checking char
	flag[202] = 'I';
	goto LABEL9159;
	
	LABEL9060:
	// Checking char
	flag[76] = 'f';
	goto LABEL9160;
	
	LABEL9061:
	// Checking char
	flag[67] = '>';
	goto LABEL9062;
	
	LABEL9062:
	// Checking char
	flag[133] = 'f';
	goto LABEL9162;
	
	LABEL9063:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9064:
	// Checking char
	flag[145] = 'X';
	goto LABEL9063;
	
	LABEL9065:
	// Checking char
	flag[144] = ',';
	goto LABEL9165;
	
	LABEL9066:
	// Setting char
	flag[52] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9166;
	
	else 
		goto LABEL9065;
	
	LABEL9067:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9068:
	// Checking char
	flag[158] = '8';
	goto LABEL9067;
	
	LABEL9069:
	// Checking char
	flag[95] = '6';
	goto LABEL9169;
	
	LABEL9070:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9071:
	// Checking char
	flag[104] = 'd';
	goto LABEL9171;
	
	LABEL9072:
	// Checking char
	flag[68] = 'T';
	goto LABEL9172;
	
	LABEL9073:
	// Setting char
	flag[239] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9173;
	
	else 
		goto LABEL9072;
	
	LABEL9074:
	// Checking char
	flag[100] = 'O';
	goto LABEL8974;
	
	LABEL9075:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9076:
	// Checking char
	flag[154] = ':';
	goto LABEL9176;
	
	LABEL9077:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9078:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9079:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9080:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9081:
	// Setting char
	flag[56] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9082;
	
	else 
		goto LABEL9080;
	
	LABEL9082:
	// Checking char
	flag[82] = 'I';
	goto LABEL9182;
	
	LABEL9083:
	// Setting char
	flag[15] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9183;
	
	else 
		goto LABEL9084;
	
	LABEL9084:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9085:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9086:
	// Setting char
	flag[178] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9186;
	
	else 
		goto LABEL9085;
	
	LABEL9087:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9088:
	// Checking char
	flag[178] = 'S';
	goto LABEL9089;
	
	LABEL9089:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9090:
	// Checking char
	flag[118] = 'J';
	goto LABEL9091;
	
	LABEL9091:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9092:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9093:
	// Setting char
	flag[137] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9193;
	
	else 
		goto LABEL9092;
	
	LABEL9094:
	// Setting char
	flag[1] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9095;
	
	else 
		goto LABEL9093;
	
	LABEL9095:
	// Checking char
	flag[73] = 'p';
	goto LABEL9195;
	
	LABEL9096:
	// Setting char
	flag[159] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9196;
	
	else 
		goto LABEL9097;
	
	LABEL9097:
	// Checking char
	flag[41] = '_';
	goto LABEL9098;
	
	LABEL9098:
	// Checking char
	flag[224] = 'Y';
	goto LABEL9099;
	
	LABEL9099:
	// Checking char
	flag[246] = '4';
	goto LABEL9199;
	
	LABEL9100:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9101:
	// Setting char
	flag[95] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9201;
	
	else 
		goto LABEL9100;
	
	LABEL9102:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9103:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9104:
	// Setting char
	flag[107] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9204;
	
	else 
		goto LABEL9105;
	
	LABEL9105:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9106:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9107:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9108:
	// Setting char
	flag[208] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9109;
	
	else 
		goto LABEL9107;
	
	LABEL9109:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9110:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9111:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9112:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9113:
	// Setting char
	flag[80] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9013;
	
	else 
		goto LABEL9112;
	
	LABEL9114:
	// Checking char
	flag[63] = 'T';
	goto LABEL9113;
	
	LABEL9115:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9116:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9117:
	// Setting char
	flag[218] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9217;
	
	else 
		goto LABEL9116;
	
	LABEL9118:
	// Checking char
	flag[113] = 'o';
	goto LABEL9117;
	
	LABEL9119:
	// Checking char
	flag[64] = '<';
	goto LABEL9219;
	
	LABEL9120:
	// Setting char
	flag[224] = '6';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9220;
	
	else 
		goto LABEL9121;
	
	LABEL9121:
	// Checking char
	flag[91] = 't';
	goto LABEL9221;
	
	LABEL9122:
	// Checking char
	flag[37] = ']';
	goto LABEL9222;
	
	LABEL9123:
	// Checking char
	flag[150] = 'U';
	goto LABEL9023;
	
	LABEL9124:
	// Setting char
	flag[172] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9224;
	
	else 
		goto LABEL9123;
	
	LABEL9125:
	// Checking char
	flag[230] = '&';
	goto LABEL9124;
	
	LABEL9126:
	// Checking char
	flag[247] = 'N';
	goto LABEL9125;
	
	LABEL9127:
	// Checking char
	flag[195] = 'Z';
	goto LABEL9227;
	
	LABEL9128:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9129:
	// Setting char
	flag[201] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9229;
	
	else 
		goto LABEL9128;
	
	LABEL9130:
	// Setting char
	flag[167] = 'p';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9230;
	
	else 
		goto LABEL9131;
	
	LABEL9131:
	// Checking char
	flag[146] = '#';
	goto LABEL9231;
	
	LABEL9132:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9133:
	// Checking char
	flag[143] = 'C';
	goto LABEL9132;
	
	LABEL9134:
	// Checking char
	flag[147] = 'w';
	goto LABEL9133;
	
	LABEL9135:
	// Checking char
	flag[153] = '*';
	goto LABEL9134;
	
	LABEL9136:
	// Setting char
	flag[93] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9236;
	
	else 
		goto LABEL9137;
	
	LABEL9137:
	// Checking char
	flag[50] = '/';
	goto LABEL9237;
	
	LABEL9138:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9139:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9140:
	// Setting char
	flag[163] = '7';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9240;
	
	else 
		goto LABEL9139;
	
	LABEL9141:
	// Setting char
	flag[174] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9142;
	
	else 
		goto LABEL9140;
	
	LABEL9142:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9143:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9144:
	// Checking char
	flag[144] = '%';
	goto LABEL9244;
	
	LABEL9145:
	// Checking char
	flag[219] = '7';
	goto LABEL9144;
	
	LABEL9146:
	// Setting char
	flag[219] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9246;
	
	else 
		goto LABEL9145;
	
	LABEL9147:
	// Setting char
	flag[125] = '$';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9047;
	
	else if (r == 1)
		goto LABEL9247;
	
	else 
		goto LABEL9146;
	
	LABEL9148:
	// Checking char
	flag[40] = 'c';
	goto LABEL9147;
	
	LABEL9149:
	// Checking char
	flag[246] = 'c';
	goto LABEL9249;
	
	LABEL9150:
	// Setting char
	flag[69] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9250;
	
	else 
		goto LABEL9151;
	
	LABEL9151:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9152:
	// Checking char
	flag[100] = 'i';
	goto LABEL9153;
	
	LABEL9153:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9154:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9155:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9156:
	// Checking char
	flag[196] = 'f';
	goto LABEL9056;
	
	LABEL9157:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9158:
	// Checking char
	flag[153] = '8';
	goto LABEL9058;
	
	LABEL9159:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9160:
	// Checking char
	flag[157] = '#';
	goto LABEL9260;
	
	LABEL9161:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9162:
	// Setting char
	flag[131] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9262;
	
	else if (r == 1)
		goto LABEL9163;
	
	else 
		goto LABEL9161;
	
	LABEL9163:
	// Checking char
	flag[169] = 'S';
	goto LABEL9263;
	
	LABEL9164:
	// Setting char
	flag[173] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9064;
	
	else 
		goto LABEL9264;
	
	LABEL9165:
	// Setting char
	flag[225] = '$';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9265;
	
	else 
		goto LABEL9164;
	
	LABEL9166:
	// Setting char
	flag[214] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9266;
	
	else 
		goto LABEL9167;
	
	LABEL9167:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9168:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9169:
	// Setting char
	flag[89] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9269;
	
	else if (r == 1)
		goto LABEL9170;
	
	else 
		goto LABEL9168;
	
	LABEL9170:
	// Checking char
	flag[108] = 'G';
	goto LABEL9270;
	
	LABEL9171:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9172:
	// Checking char
	flag[110] = '}';
	goto LABEL9272;
	
	LABEL9173:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9174:
	// Setting char
	flag[238] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9074;
	
	else 
		goto LABEL9274;
	
	LABEL9175:
	// Setting char
	flag[179] = '8';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9075;
	
	else if (r == 1)
		goto LABEL9275;
	
	else 
		goto LABEL9174;
	
	LABEL9176:
	// Setting char
	flag[193] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9177;
	
	else 
		goto LABEL9175;
	
	LABEL9177:
	// Setting char
	flag[6] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9077;
	
	else 
		goto LABEL9277;
	
	LABEL9178:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9179:
	// Setting char
	flag[176] = 'R';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9079;
	
	else if (r == 1)
		goto LABEL9279;
	
	else 
		goto LABEL9178;
	
	LABEL9180:
	// Setting char
	flag[241] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9280;
	
	else 
		goto LABEL9179;
	
	LABEL9181:
	// Setting char
	flag[240] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9281;
	
	else 
		goto LABEL9180;
	
	LABEL9182:
	// Checking char
	flag[130] = ',';
	goto LABEL9181;
	
	LABEL9183:
	// Checking char
	flag[28] = 'E';
	goto LABEL9283;
	
	LABEL9184:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9185:
	// Checking char
	flag[137] = '-';
	goto LABEL9285;
	
	LABEL9186:
	// Setting char
	flag[99] = 'r';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9286;
	
	else if (r == 1)
		goto LABEL9187;
	
	else 
		goto LABEL9185;
	
	LABEL9187:
	// Checking char
	flag[132] = 'y';
	goto LABEL9188;
	
	LABEL9188:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9189:
	// Checking char
	flag[205] = '9';
	goto LABEL9289;
	
	LABEL9190:
	// Setting char
	flag[89] = 'u';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9090;
	
	else if (r == 1)
		goto LABEL9290;
	
	else 
		goto LABEL9189;
	
	LABEL9191:
	// Setting char
	flag[143] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9291;
	
	else 
		goto LABEL9190;
	
	LABEL9192:
	// Setting char
	flag[193] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9292;
	
	else 
		goto LABEL9191;
	
	LABEL9193:
	// Setting char
	flag[221] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9293;
	
	else if (r == 1)
		goto LABEL9194;
	
	else 
		goto LABEL9192;
	
	LABEL9194:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9195:
	// Checking char
	flag[200] = 'u';
	goto LABEL9295;
	
	LABEL9196:
	// Setting char
	flag[108] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9296;
	
	else 
		goto LABEL9197;
	
	LABEL9197:
	// Checking char
	flag[113] = 'P';
	goto LABEL9198;
	
	LABEL9198:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9199:
	// Checking char
	flag[115] = 'J';
	goto LABEL9299;
	
	LABEL9200:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9201:
	// Setting char
	flag[245] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9301;
	
	else 
		goto LABEL9202;
	
	LABEL9202:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9203:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9204:
	// Setting char
	flag[121] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9304;
	
	else 
		goto LABEL9203;
	
	LABEL9205:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9206:
	// Checking char
	flag[193] = '`';
	goto LABEL9106;
	
	LABEL9207:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9208:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9209:
	// Setting char
	flag[9] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9309;
	
	else 
		goto LABEL9208;
	
	LABEL9210:
	// Setting char
	flag[85] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9110;
	
	else 
		goto LABEL9209;
	
	LABEL9211:
	// Setting char
	flag[162] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9212;
	
	else 
		goto LABEL9210;
	
	LABEL9212:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9213:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9214:
	// Setting char
	flag[146] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9314;
	
	else 
		goto LABEL9213;
	
	LABEL9215:
	// Checking char
	flag[103] = '4';
	goto LABEL9214;
	
	LABEL9216:
	// Setting char
	flag[12] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9316;
	
	else 
		goto LABEL9215;
	
	LABEL9217:
	// Setting char
	flag[221] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9317;
	
	else 
		goto LABEL9216;
	
	LABEL9218:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9219:
	// Checking char
	flag[66] = 't';
	goto LABEL9319;
	
	LABEL9220:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9221:
	// Checking char
	flag[139] = 'i';
	goto LABEL9321;
	
	LABEL9222:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9223:
	// Checking char
	flag[129] = 'T';
	goto LABEL9323;
	
	LABEL9224:
	// Checking char
	flag[83] = 'J';
	goto LABEL9223;
	
	LABEL9225:
	// Checking char
	flag[235] = '>';
	goto LABEL9325;
	
	LABEL9226:
	// Setting char
	flag[226] = '-';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9326;
	
	else 
		goto LABEL9225;
	
	LABEL9227:
	// Setting char
	flag[52] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9327;
	
	else 
		goto LABEL9226;
	
	LABEL9228:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9229:
	// Setting char
	flag[80] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9329;
	
	else 
		goto LABEL9228;
	
	LABEL9230:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9231:
	// Setting char
	flag[180] = '=';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9331;
	
	else 
		goto LABEL9232;
	
	LABEL9232:
	// Checking char
	flag[65] = '5';
	goto LABEL9332;
	
	LABEL9233:
	// Checking char
	flag[229] = 'T';
	goto LABEL9333;
	
	LABEL9234:
	// Checking char
	flag[196] = 'w';
	goto LABEL9233;
	
	LABEL9235:
	// Setting char
	flag[135] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9335;
	
	else 
		goto LABEL9234;
	
	LABEL9236:
	// Setting char
	flag[144] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9336;
	
	else 
		goto LABEL9235;
	
	LABEL9237:
	// Setting char
	flag[80] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9337;
	
	else 
		goto LABEL9238;
	
	LABEL9238:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9239:
	// Checking char
	flag[196] = '>';
	goto LABEL9339;
	
	LABEL9240:
	// Setting char
	flag[162] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9340;
	
	else if (r == 1)
		goto LABEL9241;
	
	else 
		goto LABEL9239;
	
	LABEL9241:
	// Setting char
	flag[14] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9341;
	
	else 
		goto LABEL9242;
	
	LABEL9242:
	// Checking char
	flag[174] = '=';
	goto LABEL9243;
	
	LABEL9243:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9244:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9245:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9246:
	// Checking char
	flag[100] = 'Q';
	goto LABEL9346;
	
	LABEL9247:
	// Checking char
	flag[95] = 'x';
	goto LABEL9347;
	
	LABEL9248:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9249:
	// Checking char
	flag[123] = '`';
	goto LABEL9349;
	
	LABEL9250:
	// Setting char
	flag[15] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9350;
	
	else 
		goto LABEL9251;
	
	LABEL9251:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9252:
	// Checking char
	flag[177] = 'M';
	goto LABEL9152;
	
	LABEL9253:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9254:
	// Setting char
	flag[192] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9154;
	
	else 
		goto LABEL9253;
	
	LABEL9255:
	// Checking char
	flag[139] = 'A';
	goto LABEL9254;
	
	LABEL9256:
	// Setting char
	flag[30] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9156;
	
	else 
		goto LABEL9255;
	
	LABEL9257:
	// Setting char
	flag[14] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9357;
	
	else 
		goto LABEL9256;
	
	LABEL9258:
	// Setting char
	flag[149] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9158;
	
	else 
		goto LABEL9257;
	
	LABEL9259:
	// Setting char
	flag[214] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9359;
	
	else 
		goto LABEL9258;
	
	LABEL9260:
	// Setting char
	flag[36] = '`';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9360;
	
	else 
		goto LABEL9259;
	
	LABEL9261:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9262:
	// Setting char
	flag[5] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9362;
	
	else 
		goto LABEL9261;
	
	LABEL9263:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9264:
	// Checking char
	flag[11] = 'v';
	goto LABEL9364;
	
	LABEL9265:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9266:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9267:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9268:
	// Checking char
	flag[214] = 'z';
	goto LABEL9267;
	
	LABEL9269:
	// Setting char
	flag[173] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9369;
	
	else 
		goto LABEL9268;
	
	LABEL9270:
	// Setting char
	flag[49] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9370;
	
	else 
		goto LABEL9271;
	
	LABEL9271:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9272:
	// Checking char
	flag[233] = 'D';
	goto LABEL9273;
	
	LABEL9273:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9274:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9275:
	// Setting char
	flag[223] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9375;
	
	else 
		goto LABEL9276;
	
	LABEL9276:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9277:
	// Checking char
	flag[112] = '(';
	goto LABEL9377;
	
	LABEL9278:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9279:
	// Setting char
	flag[148] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9379;
	
	else 
		goto LABEL9278;
	
	LABEL9280:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9281:
	// Setting char
	flag[39] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9381;
	
	else 
		goto LABEL9282;
	
	LABEL9282:
	// Checking char
	flag[219] = '7';
	goto LABEL9382;
	
	LABEL9283:
	// Checking char
	flag[25] = '<';
	goto LABEL9383;
	
	LABEL9284:
	// Checking char
	flag[238] = '[';
	goto LABEL9184;
	
	LABEL9285:
	// Setting char
	flag[46] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9385;
	
	else 
		goto LABEL9284;
	
	LABEL9286:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9287:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9288:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9289:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9290:
	// Checking char
	flag[216] = '~';
	goto LABEL9390;
	
	LABEL9291:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9292:
	// Checking char
	flag[110] = 'g';
	goto LABEL9392;
	
	LABEL9293:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9294:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9295:
	// Setting char
	flag[128] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9395;
	
	else 
		goto LABEL9294;
	
	LABEL9296:
	// Checking char
	flag[172] = '(';
	goto LABEL9297;
	
	LABEL9297:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9298:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9299:
	// Setting char
	flag[227] = 'J';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9399;
	
	else 
		goto LABEL9298;
	
	LABEL9300:
	// Checking char
	flag[130] = 'p';
	goto LABEL9200;
	
	LABEL9301:
	// Setting char
	flag[3] = 'V';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9401;
	
	else 
		goto LABEL9300;
	
	LABEL9302:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9303:
	// Setting char
	flag[129] = 'K';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9403;
	
	else 
		goto LABEL9302;
	
	LABEL9304:
	// Setting char
	flag[173] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9404;
	
	else 
		goto LABEL9303;
	
	LABEL9305:
	// Setting char
	flag[172] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9205;
	
	else 
		goto LABEL9306;
	
	LABEL9306:
	// Checking char
	flag[223] = '>';
	goto LABEL9206;
	
	LABEL9307:
	// Checking char
	flag[78] = ':';
	goto LABEL9207;
	
	LABEL9308:
	// Checking char
	flag[162] = 'D';
	goto LABEL9307;
	
	LABEL9309:
	// Checking char
	flag[156] = 'L';
	goto LABEL9308;
	
	LABEL9310:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9311:
	// Setting char
	flag[181] = 't';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9211;
	
	else if (r == 1)
		goto LABEL9411;
	
	else 
		goto LABEL9310;
	
	LABEL9312:
	// Checking char
	flag[233] = '8';
	goto LABEL9311;
	
	LABEL9313:
	// Setting char
	flag[41] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9413;
	
	else 
		goto LABEL9312;
	
	LABEL9314:
	// Setting char
	flag[56] = '`';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9414;
	
	else if (r == 1)
		goto LABEL9315;
	
	else 
		goto LABEL9313;
	
	LABEL9315:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9316:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9317:
	// Setting char
	flag[97] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9417;
	
	else 
		goto LABEL9318;
	
	LABEL9318:
	// Checking char
	flag[211] = 'e';
	goto LABEL9218;
	
	LABEL9319:
	// Setting char
	flag[9] = 'f';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9419;
	
	else 
		goto LABEL9320;
	
	LABEL9320:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9321:
	// Checking char
	flag[28] = '[';
	goto LABEL9421;
	
	LABEL9322:
	// Checking char
	flag[19] = '~';
	goto LABEL9422;
	
	LABEL9323:
	// Checking char
	flag[169] = 'Z';
	goto LABEL9322;
	
	LABEL9324:
	// Checking char
	flag[221] = 'Z';
	goto LABEL9424;
	
	LABEL9325:
	// Checking char
	flag[124] = '*';
	goto LABEL9324;
	
	LABEL9326:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9327:
	// Setting char
	flag[123] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9427;
	
	else 
		goto LABEL9328;
	
	LABEL9328:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9329:
	// Checking char
	flag[192] = 'O';
	goto LABEL9429;
	
	LABEL9330:
	// Checking char
	flag[86] = 'u';
	goto LABEL9430;
	
	LABEL9331:
	// Setting char
	flag[189] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9431;
	
	else 
		goto LABEL9330;
	
	LABEL9332:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9333:
	// Checking char
	flag[230] = 'j';
	goto LABEL9334;
	
	LABEL9334:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9335:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9336:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9337:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9338:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9339:
	// Checking char
	flag[231] = '6';
	goto LABEL9338;
	
	LABEL9340:
	// Checking char
	flag[222] = '%';
	goto LABEL9440;
	
	LABEL9341:
	// Setting char
	flag[56] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9441;
	
	else 
		goto LABEL9342;
	
	LABEL9342:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9343:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9344:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9345:
	// Setting char
	flag[60] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9245;
	
	else if (r == 1)
		goto LABEL9445;
	
	else 
		goto LABEL9344;
	
	LABEL9346:
	// Setting char
	flag[222] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9446;
	
	else 
		goto LABEL9345;
	
	LABEL9347:
	// Checking char
	flag[163] = 'U';
	goto LABEL9447;
	
	LABEL9348:
	// Setting char
	flag[44] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9248;
	
	else 
		goto LABEL9448;
	
	LABEL9349:
	// Checking char
	flag[43] = '$';
	goto LABEL9348;
	
	LABEL9350:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9351:
	// Checking char
	flag[84] = ':';
	goto LABEL9451;
	
	LABEL9352:
	// Setting char
	flag[240] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9252;
	
	else 
		goto LABEL9351;
	
	LABEL9353:
	// Checking char
	flag[166] = 'G';
	goto LABEL9354;
	
	LABEL9354:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9355:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9356:
	// Checking char
	flag[190] = 'x';
	goto LABEL9456;
	
	LABEL9357:
	// Setting char
	flag[209] = '0';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9457;
	
	else if (r == 1)
		goto LABEL9358;
	
	else 
		goto LABEL9356;
	
	LABEL9358:
	// Checking char
	flag[125] = '>';
	goto LABEL9458;
	
	LABEL9359:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9360:
	// Checking char
	flag[101] = '0';
	goto LABEL9460;
	
	LABEL9361:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9362:
	// Setting char
	flag[155] = 'l';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9462;
	
	else if (r == 1)
		goto LABEL9363;
	
	else 
		goto LABEL9361;
	
	LABEL9363:
	// Checking char
	flag[113] = '@';
	goto LABEL9463;
	
	LABEL9364:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9365:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9366:
	// Setting char
	flag[55] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9466;
	
	else 
		goto LABEL9365;
	
	LABEL9367:
	// Setting char
	flag[164] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9467;
	
	else 
		goto LABEL9366;
	
	LABEL9368:
	// Checking char
	flag[59] = 'P';
	goto LABEL9367;
	
	LABEL9369:
	// Setting char
	flag[201] = 'X';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9469;
	
	else 
		goto LABEL9368;
	
	LABEL9370:
	// Checking char
	flag[96] = '[';
	goto LABEL9371;
	
	LABEL9371:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9372:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9373:
	// Checking char
	flag[118] = 'b';
	goto LABEL9473;
	
	LABEL9374:
	// Setting char
	flag[166] = 'm';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9474;
	
	else 
		goto LABEL9373;
	
	LABEL9375:
	// Setting char
	flag[150] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9475;
	
	else if (r == 1)
		goto LABEL9376;
	
	else 
		goto LABEL9374;
	
	LABEL9376:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9377:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9378:
	// Checking char
	flag[211] = 'q';
	goto LABEL9478;
	
	LABEL9379:
	// Setting char
	flag[147] = 'I';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9479;
	
	else 
		goto LABEL9378;
	
	LABEL9380:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9381:
	// Checking char
	flag[104] = 'U';
	goto LABEL9380;
	
	LABEL9382:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9383:
	// Checking char
	flag[57] = '}';
	goto LABEL9483;
	
	LABEL9384:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9385:
	// Setting char
	flag[65] = 'D';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9485;
	
	else if (r == 1)
		goto LABEL9386;
	
	else 
		goto LABEL9384;
	
	LABEL9386:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9387:
	// Setting char
	flag[132] = '[';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9287;
	
	else 
		goto LABEL9487;
	
	LABEL9388:
	// Setting char
	flag[190] = ';';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9288;
	
	else if (r == 1)
		goto LABEL9488;
	
	else 
		goto LABEL9387;
	
	LABEL9389:
	// Setting char
	flag[7] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9489;
	
	else 
		goto LABEL9388;
	
	LABEL9390:
	// Checking char
	flag[131] = 'd';
	goto LABEL9389;
	
	LABEL9391:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9392:
	// Setting char
	flag[165] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9492;
	
	else 
		goto LABEL9391;
	
	LABEL9393:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9394:
	// Setting char
	flag[204] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9494;
	
	else 
		goto LABEL9393;
	
	LABEL9395:
	// Setting char
	flag[203] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9396;
	
	else 
		goto LABEL9394;
	
	LABEL9396:
	// Setting char
	flag[187] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9496;
	
	else 
		goto LABEL9397;
	
	LABEL9397:
	// Checking char
	flag[136] = '1';
	goto LABEL9398;
	
	LABEL9398:
	// Checking char
	flag[97] = '6';
	goto LABEL9498;
	
	LABEL9399:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9400:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9401:
	// Checking char
	flag[148] = 'F';
	goto LABEL9400;
	
	LABEL9402:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9403:
	// Checking char
	flag[243] = 'K';
	goto LABEL9402;
	
	LABEL9404:
	// Checking char
	flag[146] = '^';
	goto LABEL9504;
	
	LABEL9405:
	// Setting char
	flag[0] = ',';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9305;
	
	else 
		goto LABEL9505;
	
	LABEL9406:
	// Checking char
	flag[9] = 'Q';
	goto LABEL9405;
	
	LABEL9407:
	// Checking char
	flag[77] = 'c';
	goto LABEL9406;
	
	LABEL9408:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9409:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9410:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9411:
	// Checking char
	flag[179] = 'o';
	goto LABEL9410;
	
	LABEL9412:
	// Checking char
	flag[39] = ',';
	goto LABEL9512;
	
	LABEL9413:
	// Checking char
	flag[206] = '.';
	goto LABEL9412;
	
	LABEL9414:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9415:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9416:
	// Checking char
	flag[139] = 'r';
	goto LABEL9516;
	
	LABEL9417:
	// Setting char
	flag[213] = 'O';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9517;
	
	else if (r == 1)
		goto LABEL9418;
	
	else 
		goto LABEL9416;
	
	LABEL9418:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9419:
	// Setting char
	flag[71] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9519;
	
	else 
		goto LABEL9420;
	
	LABEL9420:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9421:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9422:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9423:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9424:
	// Setting char
	flag[68] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9425;
	
	else 
		goto LABEL9423;
	
	LABEL9425:
	// Checking char
	flag[58] = 'j';
	goto LABEL9525;
	
	LABEL9426:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9427:
	// Setting char
	flag[184] = ']';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9527;
	
	else if (r == 1)
		goto LABEL9428;
	
	else 
		goto LABEL9426;
	
	LABEL9428:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9429:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9430:
	// Checking char
	flag[217] = 'p';
	goto LABEL9530;
	
	LABEL9431:
	// Setting char
	flag[199] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9531;
	
	else 
		goto LABEL9432;
	
	LABEL9432:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9433:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9434:
	// Checking char
	flag[172] = '{';
	goto LABEL9433;
	
	LABEL9435:
	// Checking char
	flag[174] = 'i';
	goto LABEL9434;
	
	LABEL9436:
	// Checking char
	flag[49] = 'S';
	goto LABEL9536;
	
	LABEL9437:
	// Checking char
	flag[172] = 'c';
	goto LABEL9436;
	
	LABEL9438:
	// Checking char
	flag[225] = 'g';
	goto LABEL9437;
	
	LABEL9439:
	// Checking char
	flag[82] = '~';
	goto LABEL9438;
	
	LABEL9440:
	// Setting char
	flag[19] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9540;
	
	else 
		goto LABEL9439;
	
	LABEL9441:
	// Checking char
	flag[105] = '$';
	goto LABEL9442;
	
	LABEL9442:
	// Checking char
	flag[141] = ')';
	goto LABEL9443;
	
	LABEL9443:
	// Checking char
	flag[201] = 'F';
	goto LABEL9343;
	
	LABEL9444:
	// Checking char
	flag[72] = 'j';
	goto LABEL9544;
	
	LABEL9445:
	// Setting char
	flag[170] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9545;
	
	else 
		goto LABEL9444;
	
	LABEL9446:
	// Checking char
	flag[200] = 'Y';
	goto LABEL9546;
	
	LABEL9447:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9448:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9449:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9450:
	// Checking char
	flag[78] = '_';
	goto LABEL9550;
	
	LABEL9451:
	// Setting char
	flag[240] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9551;
	
	else 
		goto LABEL9450;
	
	LABEL9452:
	// Checking char
	flag[137] = 'e';
	goto LABEL9352;
	
	LABEL9453:
	// Setting char
	flag[64] = 'C';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9353;
	
	else 
		goto LABEL9452;
	
	LABEL9454:
	// Checking char
	flag[210] = '9';
	goto LABEL9453;
	
	LABEL9455:
	// Setting char
	flag[135] = '[';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9355;
	
	else if (r == 1)
		goto LABEL9555;
	
	else 
		goto LABEL9454;
	
	LABEL9456:
	// Checking char
	flag[152] = '0';
	goto LABEL9455;
	
	LABEL9457:
	// Checking char
	flag[28] = ',';
	goto LABEL9557;
	
	LABEL9458:
	// Checking char
	flag[151] = '&';
	goto LABEL9558;
	
	LABEL9459:
	// Checking char
	flag[125] = 'L';
	goto LABEL9559;
	
	LABEL9460:
	// Setting char
	flag[249] = '{';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9560;
	
	else 
		goto LABEL9459;
	
	LABEL9461:
	// Checking char
	flag[83] = 'M';
	goto LABEL9561;
	
	LABEL9462:
	// Setting char
	flag[83] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9562;
	
	else 
		goto LABEL9461;
	
	LABEL9463:
	// Checking char
	flag[178] = '{';
	goto LABEL9464;
	
	LABEL9464:
	// Setting char
	flag[216] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9564;
	
	else 
		goto LABEL9465;
	
	LABEL9465:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9466:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9467:
	// Checking char
	flag[186] = 'r';
	goto LABEL9567;
	
	LABEL9468:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9469:
	// Setting char
	flag[81] = 'j';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9569;
	
	else if (r == 1)
		goto LABEL9470;
	
	else 
		goto LABEL9468;
	
	LABEL9470:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9471:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9472:
	// Setting char
	flag[121] = 'G';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9372;
	
	else if (r == 1)
		goto LABEL9572;
	
	else 
		goto LABEL9471;
	
	LABEL9473:
	// Checking char
	flag[115] = ']';
	goto LABEL9472;
	
	LABEL9474:
	// Checking char
	flag[207] = ']';
	goto LABEL9574;
	
	LABEL9475:
	// Checking char
	flag[72] = '9';
	goto LABEL9575;
	
	LABEL9476:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9477:
	// Setting char
	flag[219] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9577;
	
	else 
		goto LABEL9476;
	
	LABEL9478:
	// Checking char
	flag[63] = 'Q';
	goto LABEL9477;
	
	LABEL9479:
	// Checking char
	flag[147] = '}';
	goto LABEL9579;
	
	LABEL9480:
	// Checking char
	flag[117] = '!';
	goto LABEL9580;
	
	LABEL9481:
	// Setting char
	flag[62] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9581;
	
	else 
		goto LABEL9480;
	
	LABEL9482:
	// Setting char
	flag[78] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9582;
	
	else 
		goto LABEL9481;
	
	LABEL9483:
	// Setting char
	flag[179] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9583;
	
	else 
		goto LABEL9482;
	
	LABEL9484:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9485:
	// Setting char
	flag[77] = 'l';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9585;
	
	else 
		goto LABEL9484;
	
	LABEL9486:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9487:
	// Setting char
	flag[149] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9587;
	
	else 
		goto LABEL9486;
	
	LABEL9488:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9489:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9490:
	// Checking char
	flag[13] = '_';
	goto LABEL9590;
	
	LABEL9491:
	// Checking char
	flag[171] = '&';
	goto LABEL9490;
	
	LABEL9492:
	// Setting char
	flag[49] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9493;
	
	else 
		goto LABEL9491;
	
	LABEL9493:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9494:
	// Checking char
	flag[147] = 'h';
	goto LABEL9594;
	
	LABEL9495:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9496:
	// Setting char
	flag[134] = 'n';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9596;
	
	else if (r == 1)
		goto LABEL9497;
	
	else 
		goto LABEL9495;
	
	LABEL9497:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9498:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9499:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9500:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9501:
	// Checking char
	flag[123] = 'j';
	goto LABEL9500;
	
	LABEL9502:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9503:
	// Checking char
	flag[53] = '}';
	goto LABEL9502;
	
	LABEL9504:
	// Setting char
	flag[158] = 'H';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9604;
	
	else 
		goto LABEL9503;
	
	LABEL9505:
	// Checking char
	flag[207] = 'Z';
	goto LABEL9605;
	
	LABEL9506:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9507:
	// Setting char
	flag[195] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9407;
	
	else 
		goto LABEL9506;
	
	LABEL9508:
	// Setting char
	flag[225] = 'z';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9408;
	
	else if (r == 1)
		goto LABEL9608;
	
	else 
		goto LABEL9507;
	
	LABEL9509:
	// Setting char
	flag[6] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9409;
	
	else 
		goto LABEL9508;
	
	LABEL9510:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9511:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9512:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9513:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9514:
	// Setting char
	flag[137] = '}';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9614;
	
	else 
		goto LABEL9513;
	
	LABEL9515:
	// Setting char
	flag[231] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9415;
	
	else if (r == 1)
		goto LABEL9615;
	
	else 
		goto LABEL9514;
	
	LABEL9516:
	// Checking char
	flag[152] = '?';
	goto LABEL9515;
	
	LABEL9517:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9518:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9519:
	// Setting char
	flag[223] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9619;
	
	else 
		goto LABEL9518;
	
	LABEL9520:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9521:
	// Checking char
	flag[11] = 's';
	goto LABEL9520;
	
	LABEL9522:
	// Checking char
	flag[143] = '!';
	goto LABEL9521;
	
	LABEL9523:
	// Setting char
	flag[78] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9623;
	
	else 
		goto LABEL9522;
	
	LABEL9524:
	// Setting char
	flag[183] = '^';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9624;
	
	else 
		goto LABEL9523;
	
	LABEL9525:
	// Checking char
	flag[109] = 'w';
	goto LABEL9524;
	
	LABEL9526:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9527:
	// Setting char
	flag[132] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9627;
	
	else 
		goto LABEL9528;
	
	LABEL9528:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9529:
	// Checking char
	flag[78] = '>';
	goto LABEL9629;
	
	LABEL9530:
	// Setting char
	flag[183] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9630;
	
	else 
		goto LABEL9529;
	
	LABEL9531:
	// Checking char
	flag[26] = '@';
	goto LABEL9631;
	
	LABEL9532:
	// Checking char
	flag[153] = 'u';
	goto LABEL9632;
	
	LABEL9533:
	// Setting char
	flag[162] = 'x';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9534;
	
	else 
		goto LABEL9532;
	
	LABEL9534:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9535:
	// Setting char
	flag[65] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9435;
	
	else 
		goto LABEL9635;
	
	LABEL9536:
	// Setting char
	flag[218] = '~';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9636;
	
	else if (r == 1)
		goto LABEL9537;
	
	else 
		goto LABEL9535;
	
	LABEL9537:
	// Checking char
	flag[130] = 'P';
	goto LABEL9637;
	
	LABEL9538:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9539:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9540:
	// Setting char
	flag[164] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9541;
	
	else 
		goto LABEL9539;
	
	LABEL9541:
	// Setting char
	flag[248] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9641;
	
	else 
		goto LABEL9542;
	
	LABEL9542:
	// Checking char
	flag[7] = '@';
	goto LABEL9543;
	
	LABEL9543:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9544:
	// Checking char
	flag[6] = '|';
	goto LABEL9644;
	
	LABEL9545:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9546:
	// Checking char
	flag[17] = 'o';
	goto LABEL9547;
	
	LABEL9547:
	// Checking char
	flag[78] = 'x';
	goto LABEL9647;
	
	LABEL9548:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9549:
	// Checking char
	flag[19] = '4';
	goto LABEL9449;
	
	LABEL9550:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9551:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9552:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9553:
	// Checking char
	flag[166] = 'G';
	goto LABEL9554;
	
	LABEL9554:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9555:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9556:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9557:
	// Setting char
	flag[163] = 'O';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9657;
	
	else 
		goto LABEL9556;
	
	LABEL9558:
	// Checking char
	flag[115] = '3';
	goto LABEL9658;
	
	LABEL9559:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9560:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9561:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9562:
	// Checking char
	flag[221] = '+';
	goto LABEL9662;
	
	LABEL9563:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9564:
	// Checking char
	flag[58] = 's';
	goto LABEL9563;
	
	LABEL9565:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9566:
	// Setting char
	flag[116] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9666;
	
	else 
		goto LABEL9565;
	
	LABEL9567:
	// Setting char
	flag[83] = '&';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9667;
	
	else 
		goto LABEL9566;
	
	LABEL9568:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9569:
	// Setting char
	flag[213] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9669;
	
	else 
		goto LABEL9570;
	
	LABEL9570:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9571:
	// Checking char
	flag[200] = 'U';
	goto LABEL9671;
	
	LABEL9572:
	// Setting char
	flag[1] = '<';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9672;
	
	else if (r == 1)
		goto LABEL9573;
	
	else 
		goto LABEL9571;
	
	LABEL9573:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9574:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9575:
	// Setting char
	flag[65] = '"';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9675;
	
	else 
		goto LABEL9576;
	
	LABEL9576:
	// Checking char
	flag[115] = '/';
	goto LABEL9676;
	
	LABEL9577:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9578:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9579:
	// Setting char
	flag[199] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9679;
	
	else 
		goto LABEL9578;
	
	LABEL9580:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9581:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9582:
	// Checking char
	flag[17] = '>';
	goto LABEL9682;
	
	LABEL9583:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9584:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9585:
	// Checking char
	flag[169] = ',';
	goto LABEL9584;
	
	LABEL9586:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9587:
	// Checking char
	flag[202] = 'I';
	goto LABEL9586;
	
	LABEL9588:
	// Checking char
	flag[85] = '(';
	goto LABEL9688;
	
	LABEL9589:
	// Setting char
	flag[91] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9689;
	
	else 
		goto LABEL9588;
	
	LABEL9590:
	// Setting char
	flag[154] = 'i';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9690;
	
	else if (r == 1)
		goto LABEL9591;
	
	else 
		goto LABEL9589;
	
	LABEL9591:
	// Setting char
	flag[48] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9691;
	
	else 
		goto LABEL9592;
	
	LABEL9592:
	// Checking char
	flag[196] = ']';
	goto LABEL9692;
	
	LABEL9593:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9594:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9595:
	// Checking char
	flag[175] = 'r';
	goto LABEL9695;
	
	LABEL9596:
	// Setting char
	flag[81] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9696;
	
	else 
		goto LABEL9595;
	
	LABEL9597:
	// Checking char
	flag[182] = 'c';
	goto LABEL9598;
	
	LABEL9598:
	// Checking char
	flag[238] = '$';
	goto LABEL9599;
	
	LABEL9599:
	// Checking char
	flag[79] = 'T';
	goto LABEL9499;
	
	LABEL9600:
	// Checking char
	flag[77] = ')';
	goto LABEL9700;
	
	LABEL9601:
	// Setting char
	flag[235] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9501;
	
	else 
		goto LABEL9600;
	
	LABEL9602:
	// Setting char
	flag[228] = 'N';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9702;
	
	else 
		goto LABEL9601;
	
	LABEL9603:
	// Setting char
	flag[159] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9703;
	
	else 
		goto LABEL9602;
	
	LABEL9604:
	// Checking char
	flag[48] = 'o';
	goto LABEL9603;
	
	LABEL9605:
	// Checking char
	flag[147] = 'z';
	goto LABEL9606;
	
	LABEL9606:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9607:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9608:
	// Checking char
	flag[211] = ')';
	goto LABEL9607;
	
	LABEL9609:
	// Setting char
	flag[171] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9509;
	
	else 
		goto LABEL9709;
	
	LABEL9610:
	// Setting char
	flag[45] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9510;
	
	else 
		goto LABEL9609;
	
	LABEL9611:
	// Setting char
	flag[191] = ')';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9511;
	
	else if (r == 1)
		goto LABEL9711;
	
	else 
		goto LABEL9610;
	
	LABEL9612:
	// Setting char
	flag[238] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9712;
	
	else 
		goto LABEL9611;
	
	LABEL9613:
	// Checking char
	flag[195] = 'o';
	goto LABEL9612;
	
	LABEL9614:
	// Setting char
	flag[86] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9714;
	
	else 
		goto LABEL9613;
	
	LABEL9615:
	// Checking char
	flag[98] = 'e';
	goto LABEL9616;
	
	LABEL9616:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9617:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9618:
	// Setting char
	flag[145] = '9';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9718;
	
	else 
		goto LABEL9617;
	
	LABEL9619:
	// Checking char
	flag[58] = '^';
	goto LABEL9618;
	
	LABEL9620:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9621:
	// Checking char
	flag[78] = ';';
	goto LABEL9620;
	
	LABEL9622:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9623:
	// Checking char
	flag[164] = 'L';
	goto LABEL9622;
	
	LABEL9624:
	// Checking char
	flag[43] = 'U';
	goto LABEL9724;
	
	LABEL9625:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9626:
	// Setting char
	flag[108] = '?';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9526;
	
	else if (r == 1)
		goto LABEL9726;
	
	else 
		goto LABEL9625;
	
	LABEL9627:
	// Setting char
	flag[80] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9628;
	
	else 
		goto LABEL9626;
	
	LABEL9628:
	// Checking char
	flag[117] = 'V';
	goto LABEL9728;
	
	LABEL9629:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9630:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9631:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9632:
	// Checking char
	flag[161] = 'Z';
	goto LABEL9732;
	
	LABEL9633:
	// Checking char
	flag[181] = ')';
	goto LABEL9533;
	
	LABEL9634:
	// Setting char
	flag[78] = 'w';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9734;
	
	else 
		goto LABEL9633;
	
	LABEL9635:
	// Setting char
	flag[38] = '3';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9735;
	
	else 
		goto LABEL9634;
	
	LABEL9636:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9637:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9638:
	// Checking char
	flag[188] = 'C';
	goto LABEL9538;
	
	LABEL9639:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9640:
	// Setting char
	flag[140] = 'W';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9740;
	
	else 
		goto LABEL9639;
	
	LABEL9641:
	// Setting char
	flag[228] = '5';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9642;
	
	else 
		goto LABEL9640;
	
	LABEL9642:
	// Checking char
	flag[10] = 'b';
	goto LABEL9643;
	
	LABEL9643:
	// Checking char
	flag[130] = '%';
	goto LABEL9743;
	
	LABEL9644:
	// Checking char
	flag[175] = ':';
	goto LABEL9744;
	
	LABEL9645:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9646:
	// Checking char
	flag[111] = 'q';
	goto LABEL9746;
	
	LABEL9647:
	// Setting char
	flag[78] = 'A';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9747;
	
	else if (r == 1)
		goto LABEL9648;
	
	else 
		goto LABEL9646;
	
	LABEL9648:
	// Checking char
	flag[12] = 'V';
	goto LABEL9548;
	
	LABEL9649:
	// Setting char
	flag[71] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9549;
	
	else 
		goto LABEL9749;
	
	LABEL9650:
	// Checking char
	flag[157] = 'N';
	goto LABEL9649;
	
	LABEL9651:
	// Setting char
	flag[156] = '/';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9751;
	
	else 
		goto LABEL9650;
	
	LABEL9652:
	// Setting char
	flag[145] = '?';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9552;
	
	else 
		goto LABEL9651;
	
	LABEL9653:
	// Setting char
	flag[58] = 's';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9553;
	
	else if (r == 1)
		goto LABEL9753;
	
	else 
		goto LABEL9652;
	
	LABEL9654:
	// Checking char
	flag[15] = '#';
	goto LABEL9653;
	
	LABEL9655:
	// Setting char
	flag[129] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9755;
	
	else 
		goto LABEL9654;
	
	LABEL9656:
	// Setting char
	flag[118] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9756;
	
	else 
		goto LABEL9655;
	
	LABEL9657:
	// Checking char
	flag[99] = 'y';
	goto LABEL9656;
	
	LABEL9658:
	// Setting char
	flag[172] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9758;
	
	else 
		goto LABEL9659;
	
	LABEL9659:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9660:
	// Checking char
	flag[210] = 'w';
	goto LABEL9760;
	
	LABEL9661:
	// Checking char
	flag[157] = 'O';
	goto LABEL9660;
	
	LABEL9662:
	// Setting char
	flag[203] = '?';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9762;
	
	else if (r == 1)
		goto LABEL9663;
	
	else 
		goto LABEL9661;
	
	LABEL9663:
	// Setting char
	flag[244] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9763;
	
	else 
		goto LABEL9664;
	
	LABEL9664:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9665:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9666:
	// Checking char
	flag[213] = 'g';
	goto LABEL9665;
	
	LABEL9667:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9668:
	// Checking char
	flag[7] = 'Y';
	goto LABEL9568;
	
	LABEL9669:
	// Setting char
	flag[190] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9670;
	
	else 
		goto LABEL9668;
	
	LABEL9670:
	// Checking char
	flag[170] = ')';
	goto LABEL9770;
	
	LABEL9671:
	// Checking char
	flag[20] = '.';
	goto LABEL9771;
	
	LABEL9672:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9673:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9674:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9675:
	// Setting char
	flag[84] = '|';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9775;
	
	else 
		goto LABEL9674;
	
	LABEL9676:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9677:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9678:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9679:
	// Setting char
	flag[64] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9680;
	
	else 
		goto LABEL9678;
	
	LABEL9680:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9681:
	// Checking char
	flag[47] = '=';
	goto LABEL9781;
	
	LABEL9682:
	// Setting char
	flag[95] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9683;
	
	else 
		goto LABEL9681;
	
	LABEL9683:
	// Checking char
	flag[155] = ')';
	goto LABEL9684;
	
	LABEL9684:
	// Checking char
	flag[75] = 'K';
	goto LABEL9784;
	
	LABEL9685:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9686:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9687:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9688:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9689:
	// Checking char
	flag[148] = 'N';
	goto LABEL9789;
	
	LABEL9690:
	// Checking char
	flag[231] = 'C';
	goto LABEL9790;
	
	LABEL9691:
	// Checking char
	flag[77] = 'D';
	goto LABEL9791;
	
	LABEL9692:
	// Checking char
	flag[249] = 'J';
	goto LABEL9693;
	
	LABEL9693:
	// Setting char
	flag[185] = '(';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9593;
	
	else 
		goto LABEL9694;
	
	LABEL9694:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9695:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9696:
	// Setting char
	flag[131] = '_';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9796;
	
	else 
		goto LABEL9697;
	
	LABEL9697:
	// Setting char
	flag[115] = '~';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9597;
	
	else 
		goto LABEL9698;
	
	LABEL9698:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9699:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9700:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9701:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9702:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9703:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9704:
	// Checking char
	flag[185] = '6';
	goto LABEL9705;
	
	LABEL9705:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9706:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9707:
	// Checking char
	flag[99] = '<';
	goto LABEL9706;
	
	LABEL9708:
	// Setting char
	flag[193] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9808;
	
	else 
		goto LABEL9707;
	
	LABEL9709:
	// Checking char
	flag[53] = '|';
	goto LABEL9708;
	
	LABEL9710:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9711:
	// Checking char
	flag[235] = '%';
	goto LABEL9710;
	
	LABEL9712:
	// Checking char
	flag[215] = 'o';
	goto LABEL9812;
	
	LABEL9713:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9714:
	// Checking char
	flag[62] = 'w';
	goto LABEL9814;
	
	LABEL9715:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9716:
	// Setting char
	flag[194] = 'D';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9816;
	
	else 
		goto LABEL9715;
	
	LABEL9717:
	// Checking char
	flag[88] = '`';
	goto LABEL9716;
	
	LABEL9718:
	// Checking char
	flag[191] = 'V';
	goto LABEL9717;
	
	LABEL9719:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9720:
	// Setting char
	flag[97] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9820;
	
	else 
		goto LABEL9719;
	
	LABEL9721:
	// Setting char
	flag[219] = ':';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9621;
	
	else 
		goto LABEL9720;
	
	LABEL9722:
	// Checking char
	flag[216] = 'p';
	goto LABEL9721;
	
	LABEL9723:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9724:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9725:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9726:
	// Setting char
	flag[71] = '%';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9826;
	
	else if (r == 1)
		goto LABEL9727;
	
	else 
		goto LABEL9725;
	
	LABEL9727:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9728:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9729:
	// Checking char
	flag[61] = 'p';
	goto LABEL9829;
	
	LABEL9730:
	// Checking char
	flag[103] = '&';
	goto LABEL9729;
	
	LABEL9731:
	// Setting char
	flag[126] = 'F';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9831;
	
	else 
		goto LABEL9730;
	
	LABEL9732:
	// Setting char
	flag[153] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9832;
	
	else if (r == 1)
		goto LABEL9733;
	
	else 
		goto LABEL9731;
	
	LABEL9733:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9734:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9735:
	// Checking char
	flag[46] = 'G';
	goto LABEL9835;
	
	LABEL9736:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9737:
	// Setting char
	flag[36] = 'L';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9837;
	
	else 
		goto LABEL9736;
	
	LABEL9738:
	// Setting char
	flag[91] = '*';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9638;
	
	else 
		goto LABEL9737;
	
	LABEL9739:
	// Checking char
	flag[25] = '~';
	goto LABEL9738;
	
	LABEL9740:
	// Setting char
	flag[190] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9840;
	
	else 
		goto LABEL9739;
	
	LABEL9741:
	// Checking char
	flag[46] = 'h';
	goto LABEL9742;
	
	LABEL9742:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9743:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9744:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9745:
	// Checking char
	flag[235] = 's';
	goto LABEL9645;
	
	LABEL9746:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9747:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9748:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9749:
	// Setting char
	flag[47] = 'C';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9849;
	
	else if (r == 1)
		goto LABEL9750;
	
	else 
		goto LABEL9748;
	
	LABEL9750:
	// Checking char
	flag[21] = 'E';
	goto LABEL9850;
	
	LABEL9751:
	// Checking char
	flag[113] = '{';
	goto LABEL9851;
	
	LABEL9752:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9753:
	// Setting char
	flag[115] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9853;
	
	else 
		goto LABEL9752;
	
	LABEL9754:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9755:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9756:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9757:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9758:
	// Setting char
	flag[210] = 'k';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9858;
	
	else if (r == 1)
		goto LABEL9759;
	
	else 
		goto LABEL9757;
	
	LABEL9759:
	// Checking char
	flag[90] = 'k';
	goto LABEL9859;
	
	LABEL9760:
	// Setting char
	flag[108] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9860;
	
	else 
		goto LABEL9761;
	
	LABEL9761:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9762:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9763:
	// Checking char
	flag[193] = 'z';
	goto LABEL9764;
	
	LABEL9764:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9765:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9766:
	// Checking char
	flag[230] = 'H';
	goto LABEL9765;
	
	LABEL9767:
	// Setting char
	flag[180] = 'o';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9768;
	
	else 
		goto LABEL9766;
	
	LABEL9768:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9769:
	// Checking char
	flag[147] = ',';
	goto LABEL9869;
	
	LABEL9770:
	// Setting char
	flag[197] = 'c';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9870;
	
	else 
		goto LABEL9769;
	
	LABEL9771:
	// Checking char
	flag[30] = 'S';
	goto LABEL9871;
	
	LABEL9772:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9773:
	// Checking char
	flag[148] = 'B';
	goto LABEL9673;
	
	LABEL9774:
	// Setting char
	flag[109] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9874;
	
	else 
		goto LABEL9773;
	
	LABEL9775:
	// Setting char
	flag[183] = 'd';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9776;
	
	else 
		goto LABEL9774;
	
	LABEL9776:
	// Setting char
	flag[72] = 'U';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9876;
	
	else 
		goto LABEL9777;
	
	LABEL9777:
	// Setting char
	flag[22] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9677;
	
	else 
		goto LABEL9778;
	
	LABEL9778:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9779:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9780:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9781:
	// Setting char
	flag[144] = 'L';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9881;
	
	else if (r == 1)
		goto LABEL9782;
	
	else 
		goto LABEL9780;
	
	LABEL9782:
	// Checking char
	flag[55] = '6';
	goto LABEL9783;
	
	LABEL9783:
	// Checking char
	flag[160] = '[';
	goto LABEL9883;
	
	LABEL9784:
	// Checking char
	flag[177] = 'n';
	goto LABEL9884;
	
	LABEL9785:
	// Setting char
	flag[186] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9685;
	
	else 
		goto LABEL9885;
	
	LABEL9786:
	// Setting char
	flag[123] = '!';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9686;
	
	else if (r == 1)
		goto LABEL9886;
	
	else 
		goto LABEL9785;
	
	LABEL9787:
	// Setting char
	flag[159] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9687;
	
	else 
		goto LABEL9786;
	
	LABEL9788:
	// Checking char
	flag[73] = '1';
	goto LABEL9787;
	
	LABEL9789:
	// Checking char
	flag[133] = 'E';
	goto LABEL9788;
	
	LABEL9790:
	// Checking char
	flag[0] = 'l';
	goto LABEL9890;
	
	LABEL9791:
	// Checking char
	flag[193] = '#';
	goto LABEL9792;
	
	LABEL9792:
	// Checking char
	flag[123] = 'W';
	goto LABEL9892;
	
	LABEL9793:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9794:
	// Checking char
	flag[137] = 'N';
	goto LABEL9793;
	
	LABEL9795:
	// Checking char
	flag[188] = '$';
	goto LABEL9895;
	
	LABEL9796:
	// Setting char
	flag[235] = 't';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9797;
	
	else 
		goto LABEL9795;
	
	LABEL9797:
	// Checking char
	flag[175] = 'm';
	goto LABEL9798;
	
	LABEL9798:
	// Checking char
	flag[157] = '_';
	goto LABEL9898;
	
	LABEL9799:
	// Checking char
	flag[43] = 'r';
	goto LABEL9699;
	
	LABEL9800:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9801:
	// Setting char
	flag[52] = ']';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9701;
	
	else 
		goto LABEL9800;
	
	LABEL9802:
	// Setting char
	flag[106] = '<';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9902;
	
	else 
		goto LABEL9801;
	
	LABEL9803:
	// Setting char
	flag[212] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9903;
	
	else 
		goto LABEL9802;
	
	LABEL9804:
	// Setting char
	flag[216] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9704;
	
	else 
		goto LABEL9803;
	
	LABEL9805:
	// Setting char
	flag[89] = 'R';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9905;
	
	else 
		goto LABEL9804;
	
	LABEL9806:
	// Setting char
	flag[52] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9906;
	
	else 
		goto LABEL9805;
	
	LABEL9807:
	// Setting char
	flag[232] = 'P';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9907;
	
	else 
		goto LABEL9806;
	
	LABEL9808:
	// Setting char
	flag[96] = '8';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9809;
	
	else 
		goto LABEL9807;
	
	LABEL9809:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9810:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9811:
	// Setting char
	flag[220] = 'M';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9911;
	
	else 
		goto LABEL9810;
	
	LABEL9812:
	// Checking char
	flag[88] = '/';
	goto LABEL9811;
	
	LABEL9813:
	// Checking char
	flag[157] = '5';
	goto LABEL9713;
	
	LABEL9814:
	// Setting char
	flag[188] = '0';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9914;
	
	else 
		goto LABEL9813;
	
	LABEL9815:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9816:
	// Setting char
	flag[169] = '@';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9916;
	
	else 
		goto LABEL9815;
	
	LABEL9817:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9818:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9819:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9820:
	// Setting char
	flag[29] = 'N';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9920;
	
	else if (r == 1)
		goto LABEL9821;
	
	else 
		goto LABEL9819;
	
	LABEL9821:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9822:
	// Setting char
	flag[23] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9722;
	
	else 
		goto LABEL9922;
	
	LABEL9823:
	// Setting char
	flag[44] = 'c';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9723;
	
	else if (r == 1)
		goto LABEL9923;
	
	else 
		goto LABEL9822;
	
	LABEL9824:
	// Setting char
	flag[14] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9924;
	
	else 
		goto LABEL9823;
	
	LABEL9825:
	// Checking char
	flag[99] = 'Y';
	goto LABEL9824;
	
	LABEL9826:
	// Setting char
	flag[177] = 'Y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9827;
	
	else 
		goto LABEL9825;
	
	LABEL9827:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9828:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9829:
	// Setting char
	flag[55] = 'q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9929;
	
	else 
		goto LABEL9828;
	
	LABEL9830:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9831:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9832:
	// Setting char
	flag[136] = 'T';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9932;
	
	else 
		goto LABEL9833;
	
	LABEL9833:
	// Checking char
	flag[150] = '<';
	goto LABEL9933;
	
	LABEL9834:
	// Checking char
	flag[236] = ')';
	goto LABEL9934;
	
	LABEL9835:
	// Checking char
	flag[226] = 'v';
	goto LABEL9834;
	
	LABEL9836:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9837:
	// Setting char
	flag[42] = '=';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9937;
	
	else if (r == 1)
		goto LABEL9838;
	
	else 
		goto LABEL9836;
	
	LABEL9838:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9839:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9840:
	// Setting char
	flag[40] = '#';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9940;
	
	else 
		goto LABEL9841;
	
	LABEL9841:
	// Setting char
	flag[204] = 'd';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9741;
	
	else if (r == 1)
		goto LABEL9941;
	
	else 
		goto LABEL9842;
	
	LABEL9842:
	// Checking char
	flag[76] = '7';
	goto LABEL9942;
	
	LABEL9843:
	// Checking char
	flag[103] = '|';
	goto LABEL9943;
	
	LABEL9844:
	// Checking char
	flag[84] = '*';
	goto LABEL9843;
	
	LABEL9845:
	// Setting char
	flag[138] = '+';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9745;
	
	else if (r == 1)
		goto LABEL9945;
	
	else 
		goto LABEL9844;
	
	LABEL9846:
	// Setting char
	flag[72] = 'v';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9946;
	
	else 
		goto LABEL9845;
	
	LABEL9847:
	// Checking char
	flag[84] = '1';
	goto LABEL9846;
	
	LABEL9848:
	// Checking char
	flag[190] = 'c';
	goto LABEL9847;
	
	LABEL9849:
	// Checking char
	flag[91] = '(';
	goto LABEL9848;
	
	LABEL9850:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9851:
	// Checking char
	flag[67] = '4';
	goto LABEL9951;
	
	LABEL9852:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9853:
	// Checking char
	flag[80] = ',';
	goto LABEL9852;
	
	LABEL9854:
	// Checking char
	flag[22] = '6';
	goto LABEL9754;
	
	LABEL9855:
	// Checking char
	flag[46] = '{';
	goto LABEL9854;
	
	LABEL9856:
	// Checking char
	flag[102] = '*';
	goto LABEL9855;
	
	LABEL9857:
	// Checking char
	flag[246] = 's';
	goto LABEL9856;
	
	LABEL9858:
	// Checking char
	flag[144] = '-';
	goto LABEL9958;
	
	LABEL9859:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9860:
	// Checking char
	flag[111] = '8';
	goto LABEL9861;
	
	LABEL9861:
	// Checking char
	flag[143] = '%';
	goto LABEL9961;
	
	LABEL9862:
	// Checking char
	flag[234] = 'Y';
	goto LABEL9962;
	
	LABEL9863:
	// Checking char
	flag[49] = 'F';
	goto LABEL9862;
	
	LABEL9864:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9865:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9866:
	// Checking char
	flag[47] = '=';
	goto LABEL9865;
	
	LABEL9867:
	// Setting char
	flag[167] = 'u';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9767;
	
	else 
		goto LABEL9866;
	
	LABEL9868:
	// Setting char
	flag[114] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9968;
	
	else 
		goto LABEL9867;
	
	LABEL9869:
	// Checking char
	flag[174] = 'i';
	goto LABEL9868;
	
	LABEL9870:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9871:
	// Setting char
	flag[229] = 'Q';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9971;
	
	else 
		goto LABEL9872;
	
	LABEL9872:
	// Setting char
	flag[32] = ')';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9772;
	
	else 
		goto LABEL9873;
	
	LABEL9873:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9874:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9875:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9876:
	// Setting char
	flag[220] = 'E';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9976;
	
	else 
		goto LABEL9877;
	
	LABEL9877:
	// Checking char
	flag[96] = '0';
	goto LABEL9878;
	
	LABEL9878:
	// Checking char
	flag[70] = 'E';
	goto LABEL9879;
	
	LABEL9879:
	// Setting char
	flag[65] = '4';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9779;
	
	else 
		goto LABEL9880;
	
	LABEL9880:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9881:
	// Setting char
	flag[130] = 'a';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9981;
	
	else 
		goto LABEL9882;
	
	LABEL9882:
	// Checking char
	flag[216] = 'Q';
	goto LABEL9982;
	
	LABEL9883:
	// Checking char
	flag[18] = 'F';
	goto LABEL9983;
	
	LABEL9884:
	// Checking char
	flag[84] = 'L';
	goto LABEL9984;
	
	LABEL9885:
	// Checking char
	flag[176] = 'E';
	goto LABEL9985;
	
	LABEL9886:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9887:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9888:
	// Setting char
	flag[212] = 'j';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9988;
	
	else 
		goto LABEL9887;
	
	LABEL9889:
	// Setting char
	flag[101] = 'y';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9989;
	
	else 
		goto LABEL9888;
	
	LABEL9890:
	// Checking char
	flag[236] = ']';
	goto LABEL9889;
	
	LABEL9891:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9892:
	// Checking char
	flag[230] = 'L';
	goto LABEL9992;
	
	LABEL9893:
	// Checking char
	flag[137] = 'd';
	goto LABEL9993;
	
	LABEL9894:
	// Setting char
	flag[207] = '2';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9794;
	
	else 
		goto LABEL9893;
	
	LABEL9895:
	// Setting char
	flag[248] = '#';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9995;
	
	else if (r == 1)
		goto LABEL9896;
	
	else 
		goto LABEL9894;
	
	LABEL9896:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9897:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9898:
	// Setting char
	flag[207] = 'e';
	r = rand() % 3;

	
	if (r == 0)
		goto LABEL9998;
	
	else if (r == 1)
		goto LABEL9899;
	
	else 
		goto LABEL9897;
	
	LABEL9899:
	// Checking char
	flag[9] = '/';
	goto LABEL9799;
	
	LABEL9900:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9901:
	// Checking char
	flag[167] = 'Z';
	goto LABEL9900;
	
	LABEL9902:
	// Checking char
	flag[181] = '^';
	goto LABEL9901;
	
	LABEL9903:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9904:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9905:
	// Checking char
	flag[82] = 'd';
	goto LABEL9904;
	
	LABEL9906:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9907:
	// Checking char
	flag[161] = 'w';
	goto LABEL9908;
	
	LABEL9908:
	// Checking char
	flag[203] = '+';
	goto LABEL9909;
	
	LABEL9909:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9910:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9911:
	// Setting char
	flag[111] = 'Z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9912;
	
	else 
		goto LABEL9910;
	
	LABEL9912:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9913:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9914:
	// Setting char
	flag[25] = 'n';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9915;
	
	else 
		goto LABEL9913;
	
	LABEL9915:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9916:
	// Checking char
	flag[19] = '*';
	goto LABEL9917;
	
	LABEL9917:
	// Setting char
	flag[106] = 'S';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9817;
	
	else 
		goto LABEL9918;
	
	LABEL9918:
	// Setting char
	flag[84] = 'z';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9818;
	
	else 
		goto LABEL9919;
	
	LABEL9919:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9920:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9921:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9922:
	// Checking char
	flag[99] = 'z';
	goto LABEL9921;
	
	LABEL9923:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9924:
	// Checking char
	flag[65] = 'a';
	goto LABEL9925;
	
	LABEL9925:
	// Checking char
	flag[155] = '1';
	goto LABEL9926;
	
	LABEL9926:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9927:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9928:
	// Checking char
	flag[149] = '/';
	goto LABEL9927;
	
	LABEL9929:
	// Setting char
	flag[135] = '+';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9930;
	
	else 
		goto LABEL9928;
	
	LABEL9930:
	// Checking char
	flag[164] = ';';
	goto LABEL9830;
	
	LABEL9931:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9932:
	// Checking char
	flag[161] = 'h';
	goto LABEL9931;
	
	LABEL9933:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9934:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9935:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9936:
	// Checking char
	flag[75] = 'i';
	goto LABEL9935;
	
	LABEL9937:
	// Setting char
	flag[65] = 'g';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9938;
	
	else 
		goto LABEL9936;
	
	LABEL9938:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9939:
	// Checking char
	flag[207] = 'p';
	goto LABEL9839;
	
	LABEL9940:
	// Checking char
	flag[240] = '|';
	goto LABEL9939;
	
	LABEL9941:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9942:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9943:
	// Checking char
	flag[107] = '|';
	goto LABEL9944;
	
	LABEL9944:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9945:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9946:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9947:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9948:
	// Checking char
	flag[71] = '2';
	goto LABEL9947;
	
	LABEL9949:
	// Checking char
	flag[39] = 'E';
	goto LABEL9948;
	
	LABEL9950:
	// Checking char
	flag[11] = '0';
	goto LABEL9949;
	
	LABEL9951:
	// Setting char
	flag[80] = 's';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9952;
	
	else 
		goto LABEL9950;
	
	LABEL9952:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9953:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9954:
	// Checking char
	flag[36] = 'T';
	goto LABEL9953;
	
	LABEL9955:
	// Checking char
	flag[118] = 'u';
	goto LABEL9954;
	
	LABEL9956:
	// Checking char
	flag[121] = 't';
	goto LABEL9955;
	
	LABEL9957:
	// Setting char
	flag[117] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9857;
	
	else 
		goto LABEL9956;
	
	LABEL9958:
	// Setting char
	flag[159] = 'B';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9959;
	
	else 
		goto LABEL9957;
	
	LABEL9959:
	// Checking char
	flag[34] = '4';
	goto LABEL9960;
	
	LABEL9960:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9961:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9962:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9963:
	// Checking char
	flag[21] = 'Q';
	goto LABEL9863;
	
	LABEL9964:
	// Setting char
	flag[86] = 'b';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9864;
	
	else 
		goto LABEL9963;
	
	LABEL9965:
	// Checking char
	flag[199] = '~';
	goto LABEL9964;
	
	LABEL9966:
	// Checking char
	flag[224] = '/';
	goto LABEL9965;
	
	LABEL9967:
	// Checking char
	flag[136] = ']';
	goto LABEL9966;
	
	LABEL9968:
	// Checking char
	flag[57] = '&';
	goto LABEL9967;
	
	LABEL9969:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9970:
	// Checking char
	flag[161] = 'K';
	goto LABEL9969;
	
	LABEL9971:
	// Checking char
	flag[238] = 'S';
	goto LABEL9970;
	
	LABEL9972:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9973:
	// Checking char
	flag[200] = 'Q';
	goto LABEL9972;
	
	LABEL9974:
	// Checking char
	flag[47] = '"';
	goto LABEL9973;
	
	LABEL9975:
	// Setting char
	flag[62] = '!';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9875;
	
	else 
		goto LABEL9974;
	
	LABEL9976:
	// Checking char
	flag[46] = '?';
	goto LABEL9975;
	
	LABEL9977:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9978:
	// Checking char
	flag[76] = 'Y';
	goto LABEL9977;
	
	LABEL9979:
	// Checking char
	flag[43] = 'x';
	goto LABEL9978;
	
	LABEL9980:
	// Checking char
	flag[18] = 'W';
	goto LABEL9979;
	
	LABEL9981:
	// Checking char
	flag[151] = ')';
	goto LABEL9980;
	
	LABEL9982:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9983:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9984:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9985:
	// Checking char
	flag[161] = 'M';
	goto LABEL9986;
	
	LABEL9986:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9987:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9988:
	// Checking char
	flag[141] = '}';
	goto LABEL9987;
	
	LABEL9989:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9990:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9991:
	// Setting char
	flag[196] = 'i';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9891;
	
	else 
		goto LABEL9990;
	
	LABEL9992:
	// Checking char
	flag[67] = '$';
	goto LABEL9991;
	
	LABEL9993:
	// Checking char
	flag[138] = 'B';
	goto LABEL9994;
	
	LABEL9994:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9995:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9996:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	LABEL9997:
	// Checking char
	flag[237] = 'I';
	goto LABEL9996;
	
	LABEL9998:
	// Setting char
	flag[233] = 'A';
	r = rand() % 2;

	
	if (r == 0)
		goto LABEL9999;
	
	else 
		goto LABEL9997;
	
	LABEL9999:
	printf("I think I got the key!!\n");
	goto FINAL;
	
	FINAL:
	printf("The key might be::%s::?!?!\n", flag);
	sha256(flag, buffer);
	if (!strcmp(buffer, flagsha256)) {
		printf("Yep\n");
	} else {
		printf("Nope\n");
	}
	return 0;
	}
