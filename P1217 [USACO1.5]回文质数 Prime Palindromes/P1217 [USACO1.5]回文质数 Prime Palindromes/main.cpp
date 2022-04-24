//原题链接 https://www.luogu.com.cn/problem/P1217

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int a, b, db[800] = { 0,2,3,5,7,11,101,131,151,181,
191,313,353,373,383,727,757,787,797,
919,929,10301,10501,10601,11311,11411,12421,12721,
12821,13331,13831,13931,14341,14741,15451,15551,16061,
16361,16561,16661,17471,17971,18181,18481,19391,19891,
19991,30103,30203,30403,30703,30803,31013,31513,32323,
32423,33533,34543,34843,35053,35153,35353,35753,36263,
36563,37273,37573,38083,38183,38783,39293,70207,70507,
70607,71317,71917,72227,72727,73037,73237,73637,74047,
74747,75557,76367,76667,77377,77477,77977,78487,78787,
78887,79397,79697,79997,90709,91019,93139,93239,93739,
94049,94349,94649,94849,94949,95959,96269,96469,96769,
97379,97579,97879,98389,98689,1003001,1008001,1022201,1028201,
1035301,1043401,1055501,1062601,1065601,1074701,1082801,1085801,1092901,
1093901,1114111,1117111,1120211,1123211,1126211,1129211,1134311,1145411,
1150511,1153511,1160611,1163611,1175711,1177711,1178711,1180811,1183811,
1186811,1190911,1193911,1196911,1201021,1208021,1212121,1215121,1218121,
1221221,1235321,1242421,1243421,1245421,1250521,1253521,1257521,1262621,
1268621,1273721,1276721,1278721,1280821,1281821,1286821,1287821,1300031,
1303031,1311131,1317131,1327231,1328231,1333331,1335331,1338331,1343431,
1360631,1362631,1363631,1371731,1374731,1390931,1407041,1409041,1411141,
1412141,1422241,1437341,1444441,1447441,1452541,1456541,1461641,1463641,
1464641,1469641,1486841,1489841,1490941,1496941,1508051,1513151,1520251,
1532351,1535351,1542451,1548451,1550551,1551551,1556551,1557551,1565651,
1572751,1579751,1580851,1583851,1589851,1594951,1597951,1598951,1600061,
1609061,1611161,1616161,1628261,1630361,1633361,1640461,1643461,1646461,
1654561,1657561,1658561,1660661,1670761,1684861,1685861,1688861,1695961,
1703071,1707071,1712171,1714171,1730371,1734371,1737371,1748471,1755571,
1761671,1764671,1777771,1793971,1802081,1805081,1820281,1823281,1824281,
1826281,1829281,1831381,1832381,1842481,1851581,1853581,1856581,1865681,
1876781,1878781,1879781,1880881,1881881,1883881,1884881,1895981,1903091,
1908091,1909091,1917191,1924291,1930391,1936391,1941491,1951591,1952591,
1957591,1958591,1963691,1968691,1969691,1970791,1976791,1981891,1982891,
1984891,1987891,1988891,1993991,1995991,1998991,3001003,3002003,3007003,
3016103,3026203,3064603,3065603,3072703,3073703,3075703,3083803,3089803,
3091903,3095903,3103013,3106013,3127213,3135313,3140413,3155513,3158513,
3160613,3166613,3181813,3187813,3193913,3196913,3198913,3211123,3212123,
3218123,3222223,3223223,3228223,3233323,3236323,3241423,3245423,3252523,
3256523,3258523,3260623,3267623,3272723,3283823,3285823,3286823,3288823,
3291923,3293923,3304033,3305033,3307033,3310133,3315133,3319133,3321233,
3329233,3331333,3337333,3343433,3353533,3362633,3364633,3365633,3368633,
3380833,3391933,3392933,3400043,3411143,3417143,3424243,3425243,3427243,
3439343,3441443,3443443,3444443,3447443,3449443,3452543,3460643,3466643,
3470743,3479743,3485843,3487843,3503053,3515153,3517153,3528253,3541453,
3553553,3558553,3563653,3569653,3586853,3589853,3590953,3591953,3594953,
3601063,3607063,3618163,3621263,3627263,3635363,3643463,3646463,3670763,
3673763,3680863,3689863,3698963,3708073,3709073,3716173,3717173,3721273,
3722273,3728273,3732373,3743473,3746473,3762673,3763673,3765673,3768673,
3769673,3773773,3774773,3781873,3784873,3792973,3793973,3799973,3804083,
3806083,3812183,3814183,3826283,3829283,3836383,3842483,3853583,3858583,
3863683,3864683,3867683,3869683,3871783,3878783,3893983,3899983,3913193,
3916193,3918193,3924293,3927293,3931393,3938393,3942493,3946493,3948493,
3964693,3970793,3983893,3991993,3994993,3997993,3998993,7014107,7035307,
7036307,7041407,7046407,7057507,7065607,7069607,7073707,7079707,7082807,
7084807,7087807,7093907,7096907,7100017,7114117,7115117,7118117,7129217,
7134317,7136317,7141417,7145417,7155517,7156517,7158517,7159517,7177717,
7190917,7194917,7215127,7226227,7246427,7249427,7250527,7256527,7257527,
7261627,7267627,7276727,7278727,7291927,7300037,7302037,7310137,7314137,
7324237,7327237,7347437,7352537,7354537,7362637,7365637,7381837,7388837,
7392937,7401047,7403047,7409047,7415147,7434347,7436347,7439347,7452547,
7461647,7466647,7472747,7475747,7485847,7486847,7489847,7493947,7507057,
7508057,7518157,7519157,7521257,7527257,7540457,7562657,7564657,7576757,
7586857,7592957,7594957,7600067,7611167,7619167,7622267,7630367,7632367,
7644467,7654567,7662667,7665667,7666667,7668667,7669667,7674767,7681867,
7690967,7693967,7696967,7715177,7718177,7722277,7729277,7733377,7742477,
7747477,7750577,7758577,7764677,7772777,7774777,7778777,7782877,7783877,
7791977,7794977,7807087,7819187,7820287,7821287,7831387,7832387,7838387,
7843487,7850587,7856587,7865687,7867687,7868687,7873787,7884887,7891987,
7897987,7913197,7916197,7930397,7933397,7935397,7938397,7941497,7943497,
7949497,7957597,7958597,7960697,7977797,7984897,7985897,7987897,7996997,
9002009,9015109,9024209,9037309,9042409,9043409,9045409,9046409,9049409,
9067609,9073709,9076709,9078709,9091909,9095909,9103019,9109019,9110119,
9127219,9128219,9136319,9149419,9169619,9173719,9174719,9179719,9185819,
9196919,9199919,9200029,9209029,9212129,9217129,9222229,9223229,9230329,
9231329,9255529,9269629,9271729,9277729,9280829,9286829,9289829,9318139,
9320239,9324239,9329239,9332339,9338339,9351539,9357539,9375739,9384839,
9397939,9400049,9414149,9419149,9433349,9439349,9440449,9446449,9451549,
9470749,9477749,9492949,9493949,9495949,9504059,9514159,9526259,9529259,
9547459,9556559,9558559,9561659,9577759,9583859,9585859,9586859,9601069,
9602069,9604069,9610169,9620269,9624269,9626269,9632369,9634369,9645469,
9650569,9657569,9670769,9686869,9700079,9709079,9711179,9714179,9724279,
9727279,9732379,9733379,9743479,9749479,9752579,9754579,9758579,9762679,
9770779,9776779,9779779,9781879,9782879,9787879,9788879,9795979,9801089,
9807089,9809089,9817189,9818189,9820289,9822289,9836389,9837389,9845489,
9852589,9871789,9888889,9889889,9896989,9902099,9907099,9908099,9916199,
9918199,9919199,9921299,9923299,9926299,9927299,9931399,9932399,9935399,
9938399,9957599,9965699,9978799,9980899,9981899,9989899,
781 };
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= 781; i++)
		if (db[i] >= a && db[i] <= b) printf("%d\n", db[i]);
	return 0;
}






/*
暴力算法 Time ERROR
#include<iostream>
using namespace std;

int Prime(long long n) {
	for (long long i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int Palindromes(long long n) {
	
//偶数位的回文数都能被11整除（11除外）

	long long num = n;
	long long y = 0;
	while (num) {//确定数的位数
		y = y * 10 + num % 10;
		num /= 10;
	}

	if (n == 11)
		return 1;

	if (y == n)
		return 1;
	else
		return 0;

	
}

int main() {
	long long a, b;
	cin >> a >> b;
	if (a % 2 == 0) a++;
	for (long long i = a; i <= b; i+=2) {
		if (i == 100000)
			i = 1000001;
		if (i == 10000000)
			break;
		if (Palindromes(i)&&Prime(i)) {
			cout << i << endl;
		}
	}

	return 0;
}
*/