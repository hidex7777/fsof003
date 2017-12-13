#include "ColorScheme.h"

ColorScheme::ColorScheme() {

}
ofColor ColorScheme::getColor(string cname) {
	transform(cname.begin(), cname.end(), cname.begin(), ::tolower);
	if (cname == "w") {
		return ofColor(255, 255, 255);
	}
	if (cname == "ltgy") {
		return ofColor(191, 191, 191);
	}
	if (cname == "mgy") {
		return ofColor(127, 127, 127);
	}
	if (cname == "dkgy") {
		return ofColor(63, 63, 63);
	}
	if ((cname == "gy-9.5") || (cname == "gy9.5")) {
		return ofColor(241, 241, 241);
	}
	if ((cname == "gy-8.5") || (cname == "gy8.5")) {
		return ofColor(214, 214, 214);
	}
	if ((cname == "gy-7.5") || (cname == "gy7.5")) {
		return ofColor(187, 187, 187);
	}
	if ((cname == "gy-6.5") || (cname == "gy6.5")) {
		return ofColor(161, 161, 161);
	}
	if ((cname == "gy-5.5") || (cname == "gy5.5")) {
		return ofColor(135, 135, 135);
	}
	if ((cname == "gy-4.5") || (cname == "gy4.5")) {
		return ofColor(109, 109, 109);
	}
	if ((cname == "gy-3.5") || (cname == "gy3.5")) {
		return ofColor(84, 84, 84);
	}
	if ((cname == "gy-2.5") || (cname == "gy2.5")) {
		return ofColor(60, 60, 60);
	}
	if ((cname == "gy-1.5") || (cname == "gy1.5")) {
		return ofColor(39, 39, 39);
	}
	if (cname == "bk") {
		return ofColor(0, 0, 0);
	}
	if (cname == "v1") {
		return ofColor(185, 31, 87);
	}
	if (cname == "v2") {
		return ofColor(208, 47, 72);
	}
	if (cname == "v3") {
		return ofColor(221, 68, 59);
	}
	if (cname == "v4") {
		return ofColor(233, 91, 35);
	}
	if (cname == "v5") {
		return ofColor(230, 120, 0);
	}
	if (cname == "v6") {
		return ofColor(244, 157, 0);
	}
	if (cname == "v7") {
		return ofColor(241, 181, 0);
	}
	if (cname == "v8") {
		return ofColor(238, 201, 0);
	}
	if (cname == "v9") {
		return ofColor(210, 193, 0);
	}
	if (cname == "v10") {
		return ofColor(168, 187, 0);
	}
	if (cname == "v11") {
		return ofColor(88, 169, 29);
	}
	if (cname == "v12") {
		return ofColor(0, 161, 90);
	}
	if (cname == "v13") {
		return ofColor(0, 146, 110);
	}
	if (cname == "v14") {
		return ofColor(0, 133, 127);
	}
	if (cname == "v15") {
		return ofColor(0, 116, 136);
	}
	if (cname == "v16") {
		return ofColor(0, 112, 155);
	}
	if (cname == "v17") {
		return ofColor(0, 96, 156);
	}
	if (cname == "v18") {
		return ofColor(0, 91, 165);
	}
	if (cname == "v19") {
		return ofColor(26, 84, 165);
	}
	if (cname == "v20") {
		return ofColor(83, 74, 160);
	}
	if (cname == "v21") {
		return ofColor(112, 63, 150);
	}
	if (cname == "v22") {
		return ofColor(129, 55, 138);
	}
	if (cname == "v23") {
		return ofColor(143, 46, 124);
	}
	if (cname == "v24") {
		return ofColor(173, 46, 108);
	}
	if (cname == "b2") {
		return ofColor(239, 108, 112);
	}
	if (cname == "b4") {
		return ofColor(250, 129, 85);
	}
	if (cname == "b6") {
		return ofColor(255, 173, 54);
	}
	if (cname == "b8") {
		return ofColor(250, 216, 49);
	}
	if (cname == "b10") {
		return ofColor(183, 200, 43);
	}
	if (cname == "b12") {
		return ofColor(65, 184, 121);
	}
	if (cname == "b14") {
		return ofColor(0, 170, 159);
	}
	if (cname == "b16") {
		return ofColor(0, 152, 185);
	}
	if (cname == "b18") {
		return ofColor(41, 129, 192);
	}
	if (cname == "b20") {
		return ofColor(117, 116, 188);
	}
	if (cname == "b22") {
		return ofColor(161, 101, 168);
	}
	if (cname == "b24") {
		return ofColor(208, 103, 142);
	}
	if (cname == "s2") {
		return ofColor(197, 63, 77);
	}
	if (cname == "s4") {
		return ofColor(204, 87, 46);
	}
	if (cname == "s6") {
		return ofColor(225, 146, 21);
	}
	if (cname == "s8") {
		return ofColor(222, 188, 3);
	}
	if (cname == "s10") {
		return ofColor(156, 173, 0);
	}
	if (cname == "s12") {
		return ofColor(0, 143, 86);
	}
	if (cname == "s14") {
		return ofColor(0, 130, 124);
	}
	if (cname == "s16") {
		return ofColor(0, 111, 146);
	}
	if (cname == "s18") {
		return ofColor(0, 91, 155);
	}
	if (cname == "s20") {
		return ofColor(83, 76, 152);
	}
	if (cname == "s22") {
		return ofColor(124, 61, 132);
	}
	if (cname == "s24") {
		return ofColor(163, 60, 106);
	}
	if (cname == "dp2") {
		return ofColor(166, 29, 57);
	}
	if (cname == "dp4") {
		return ofColor(171, 61, 29);
	}
	if (cname == "dp6") {
		return ofColor(177, 108, 0);
	}
	if (cname == "dp8") {
		return ofColor(179, 147, 0);
	}
	if (cname == "dp10") {
		return ofColor(116, 132, 0);
	}
	if (cname == "dp12") {
		return ofColor(0, 114, 67);
	}
	if (cname == "dp14") {
		return ofColor(0, 102, 100);
	}
	if (cname == "dp16") {
		return ofColor(0, 84, 118);
	}
	if (cname == "dp18") {
		return ofColor(0, 66, 128);
	}
	if (cname == "dp20") {
		return ofColor(62, 51, 123);
	}
	if (cname == "dp22") {
		return ofColor(97, 36, 105);
	}
	if (cname == "dp24") {
		return ofColor(134, 29, 85);
	}
	if (cname == "lt+2") {
		return ofColor(241, 152, 150);
	}
	if (cname == "lt+4") {
		return ofColor(255, 167, 135);
	}
	if (cname == "lt+6") {
		return ofColor(255, 190, 113);
	}
	if (cname == "lt+8") {
		return ofColor(242, 217, 110);
	}
	if (cname == "lt+10") {
		return ofColor(199, 211, 109);
	}
	if (cname == "lt+12") {
		return ofColor(133, 206, 158);
	}
	if (cname == "lt+14") {
		return ofColor(98, 192, 181);
	}
	if (cname == "lt+16") {
		return ofColor(91, 175, 196);
	}
	if (cname == "lt+18") {
		return ofColor(108, 154, 197);
	}
	if (cname == "lt+20") {
		return ofColor(144, 145, 195);
	}
	if (cname == "lt+22") {
		return ofColor(176, 136, 181);
	}
	if (cname == "lt+24") {
		return ofColor(217, 142, 165);
	}
	if (cname == "lt2") {
		return ofColor(246, 171, 165);
	}
	if (cname == "lt4") {
		return ofColor(255, 185, 158);
	}
	if (cname == "lt6") {
		return ofColor(255, 206, 144);
	}
	if (cname == "lt8") {
		return ofColor(251, 230, 143);
	}
	if (cname == "lt10") {
		return ofColor(216, 223, 146);
	}
	if (cname == "lt12") {
		return ofColor(156, 217, 172);
	}
	if (cname == "lt14") {
		return ofColor(126, 204, 193);
	}
	if (cname == "lt16") {
		return ofColor(121, 186, 202);
	}
	if (cname == "lt18") {
		return ofColor(131, 167, 200);
	}
	if (cname == "lt20") {
		return ofColor(162, 159, 199);
	}
	if (cname == "lt22") {
		return ofColor(184, 154, 184);
	}
	if (cname == "lt24") {
		return ofColor(218, 160, 179);
	}
	if (cname == "sf2") {
		return ofColor(202, 130, 129);
	}
	if (cname == "sf4") {
		return ofColor(218, 146, 122);
	}
	if (cname == "sf6") {
		return ofColor(219, 166, 107);
	}
	if (cname == "sf8") {
		return ofColor(211, 189, 108);
	}
	if (cname == "sf10") {
		return ofColor(173, 182, 107);
	}
	if (cname == "sf12") {
		return ofColor(118, 177, 138);
	}
	if (cname == "sf14") {
		return ofColor(84, 163, 155);
	}
	if (cname == "sf16") {
		return ofColor(81, 146, 164);
	}
	if (cname == "sf18") {
		return ofColor(93, 126, 160);
	}
	if (cname == "sf20") {
		return ofColor(120, 120, 160);
	}
	if (cname == "sf22") {
		return ofColor(144, 113, 148);
	}
	if (cname == "sf24") {
		return ofColor(180, 120, 139);
	}
	if (cname == "d2") {
		return ofColor(163, 90, 92);
	}
	if (cname == "d4") {
		return ofColor(175, 105, 84);
	}
	if (cname == "d6") {
		return ofColor(179, 127, 70);
	}
	if (cname == "d8") {
		return ofColor(171, 148, 70);
	}
	if (cname == "d10") {
		return ofColor(133, 143, 70);
	}
	if (cname == "d12") {
		return ofColor(79, 135, 102);
	}
	if (cname == "d14") {
		return ofColor(42, 123, 118);
	}
	if (cname == "d16") {
		return ofColor(36, 106, 125);
	}
	if (cname == "d18") {
		return ofColor(52, 89, 125);
	}
	if (cname == "d20") {
		return ofColor(84, 82, 124);
	}
	if (cname == "d22") {
		return ofColor(108, 74, 113);
	}
	if (cname == "d24") {
		return ofColor(139, 79, 101);
	}
	if (cname == "dk2") {
		return ofColor(105, 41, 52);
	}
	if (cname == "dk4") {
		return ofColor(117, 54, 42);
	}
	if (cname == "dk6") {
		return ofColor(121, 77, 28);
	}
	if (cname == "dk8") {
		return ofColor(116, 96, 31);
	}
	if (cname == "dk10") {
		return ofColor(82, 91, 32);
	}
	if (cname == "dk12") {
		return ofColor(35, 82, 58);
	}
	if (cname == "dk14") {
		return ofColor(0, 71, 70);
	}
	if (cname == "dk16") {
		return ofColor(0, 69, 88);
	}
	if (cname == "dk18") {
		return ofColor(18, 52, 82);
	}
	if (cname == "dk20") {
		return ofColor(50, 45, 81);
	}
	if (cname == "dk22") {
		return ofColor(67, 40, 72);
	}
	if (cname == "dk24") {
		return ofColor(97, 45, 70);
	}
	if (cname == "p+2") {
		return ofColor(232, 194, 191);
	}
	if (cname == "p+4") {
		return ofColor(235, 194, 181);
	}
	if (cname == "p+6") {
		return ofColor(244, 212, 176);
	}
	if (cname == "p+8") {
		return ofColor(242, 230, 184);
	}
	if (cname == "p+10") {
		return ofColor(216, 221, 173);
	}
	if (cname == "p+12") {
		return ofColor(174, 212, 185);
	}
	if (cname == "p+14") {
		return ofColor(166, 212, 204);
	}
	if (cname == "p+16") {
		return ofColor(173, 209, 218);
	}
	if (cname == "p+18") {
		return ofColor(175, 192, 209);
	}
	if (cname == "p+20") {
		return ofColor(187, 189, 208);
	}
	if (cname == "p+22") {
		return ofColor(200, 185, 201);
	}
	if (cname == "p+24") {
		return ofColor(222, 196, 202);
	}
	if (cname == "p2") {
		return ofColor(231, 213, 212);
	}
	if (cname == "p4") {
		return ofColor(233, 213, 207);
	}
	if (cname == "p6") {
		return ofColor(246, 227, 206);
	}
	if (cname == "p8") {
		return ofColor(239, 230, 198);
	}
	if (cname == "p10") {
		return ofColor(230, 233, 198);
	}
	if (cname == "p12") {
		return ofColor(196, 224, 203);
	}
	if (cname == "p14") {
		return ofColor(191, 224, 217);
	}
	if (cname == "p16") {
		return ofColor(198, 221, 226);
	}
	if (cname == "p18") {
		return ofColor(194, 204, 213);
	}
	if (cname == "p20") {
		return ofColor(201, 202, 213);
	}
	if (cname == "p22") {
		return ofColor(208, 200, 209);
	}
	if (cname == "p24") {
		return ofColor(228, 213, 217);
	}
	if (cname == "ltg2") {
		return ofColor(192, 171, 170);
	}
	if (cname == "ltg4") {
		return ofColor(193, 171, 165);
	}
	if (cname == "ltg6") {
		return ofColor(206, 187, 168);
	}
	if (cname == "ltg8") {
		return ofColor(198, 190, 161);
	}
	if (cname == "ltg10") {
		return ofColor(189, 193, 162);
	}
	if (cname == "ltg12") {
		return ofColor(157, 182, 165);
	}
	if (cname == "ltg14") {
		return ofColor(152, 182, 177);
	}
	if (cname == "ltg16") {
		return ofColor(158, 180, 185);
	}
	if (cname == "ltg18") {
		return ofColor(155, 165, 175);
	}
	if (cname == "ltg20") {
		return ofColor(162, 162, 175);
	}
	if (cname == "ltg22") {
		return ofColor(171, 160, 171);
	}
	if (cname == "ltg24") {
		return ofColor(189, 172, 176);
	}
	if (cname == "g2") {
		return ofColor(116, 92, 92);
	}
	if (cname == "g4") {
		return ofColor(117, 92, 87);
	}
	if (cname == "g6") {
		return ofColor(128, 108, 92);
	}
	if (cname == "g8") {
		return ofColor(120, 111, 87);
	}
	if (cname == "g10") {
		return ofColor(110, 114, 90);
	}
	if (cname == "g12") {
		return ofColor(83, 102, 90);
	}
	if (cname == "g14") {
		return ofColor(78, 103, 100);
	}
	if (cname == "g16") {
		return ofColor(79, 101, 108);
	}
	if (cname == "g18") {
		return ofColor(76, 87, 101);
	}
	if (cname == "g20") {
		return ofColor(86, 85, 102);
	}
	if (cname == "g22") {
		return ofColor(96, 82, 98);
	}
	if (cname == "g24") {
		return ofColor(114, 92, 99);
	}
	if (cname == "dkg2") {
		return ofColor(62, 45, 48);
	}
	if (cname == "dkg4") {
		return ofColor(63, 46, 44);
	}
	if (cname == "dkg6") {
		return ofColor(74, 60, 50);
	}
	if (cname == "dkg8") {
		return ofColor(68, 62, 48);
	}
	if (cname == "dkg10") {
		return ofColor(61, 64, 51);
	}
	if (cname == "dkg12") {
		return ofColor(42, 52, 46);
	}
	if (cname == "dkg14") {
		return ofColor(39, 52, 52);
	}
	if (cname == "dkg16") {
		return ofColor(39, 52, 57);
	}
	if (cname == "dkg18") {
		return ofColor(34, 41, 51);
	}
	if (cname == "dkg20") {
		return ofColor(41, 39, 52);
	}
	if (cname == "dkg22") {
		return ofColor(48, 37, 49);
	}
	if (cname == "dkg24") {
		return ofColor(61, 46, 52);
	}
	return ofColor(0, 0, 0);
}