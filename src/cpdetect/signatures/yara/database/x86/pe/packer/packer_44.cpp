/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_44.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_44 =
R"x86_pe_packer(
rule rule_1219_Reg2Exe {
	meta:
		tool = "P"
		name = "Reg2Exe"
		version = "2.20, 2.21"
		pattern = "6A00E87D120000A3A0444000E8791200006A0A506A00FF35A0444000E80F00000050E869120000CCCCCCCCCCCCCCCCCC682C020000680000000068B0444000E83A12000083C40C8B442404A3B8444000680000000068A00F00006800000000E832120000A3B044400068F401000068BC444000FF35B8444000E81E120000B8BC44400089C18A304080FE5C750289C180FE0075F1C60100E8EC180000E828160000E84A1200006800FA00006808000000FF35B0444000E8E7110000A3B44440008B15D4464000E8650A0000BB00001000B801000000E8720A00007409C7000100000083C004A3D4464000FF35B4444000E8260500008D0DB84640005AE8CF0F0000FF35B4444000FF35B8464000E8EE0600008D0DB44640005AE8"
	strings:
		$1 = { 6A 00 E8 7D 12 00 00 A3 A0 44 40 00 E8 79 12 00 00 6A 0A 50 6A 00 FF 35 A0 44 40 00 E8 0F 00 00 00 50 E8 69 12 00 00 CC CC CC CC CC CC CC CC CC 68 2C 02 00 00 68 00 00 00 00 68 B0 44 40 00 E8 3A 12 00 00 83 C4 0C 8B 44 24 04 A3 B8 44 40 00 68 00 00 00 00 68 A0 0F 00 00 68 00 00 00 00 E8 32 12 00 00 A3 B0 44 40 00 68 F4 01 00 00 68 BC 44 40 00 FF 35 B8 44 40 00 E8 1E 12 00 00 B8 BC 44 40 00 89 C1 8A 30 40 80 FE 5C 75 02 89 C1 80 FE 00 75 F1 C6 01 00 E8 EC 18 00 00 E8 28 16 00 00 E8 4A 12 00 00 68 00 FA 00 00 68 08 00 00 00 FF 35 B0 44 40 00 E8 E7 11 00 00 A3 B4 44 40 00 8B 15 D4 46 40 00 E8 65 0A 00 00 BB 00 00 10 00 B8 01 00 00 00 E8 72 0A 00 00 74 09 C7 00 01 00 00 00 83 C0 04 A3 D4 46 40 00 FF 35 B4 44 40 00 E8 26 05 00 00 8D 0D B8 46 40 00 5A E8 CF 0F 00 00 FF 35 B4 44 40 00 FF 35 B8 46 40 00 E8 EE 06 00 00 8D 0D B4 46 40 00 5A E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1220_Reg2Exe {
	meta:
		tool = "P"
		name = "Reg2Exe"
		version = "2.22, 2.23"
		pattern = "6A00E82F1E0000A3C4354000E82B1E00006A0A506A00FF35C4354000E80700000050E81B1E0000CC6848000000680000000068C8354000E87616000083C40C8B442404A3CC354000680000000068A00F00006800000000E8EC1D0000A3C8354000E8621D0000E8921A0000E880160000E8131400006801000000680836400068000000008B1508364000E8713F0000B800001000BB01000000E8823F0000FF3548314000B800010000E80D1300008D0DEC3540005AE8F21300006800010000FF35EC354000E8841D0000A3F4354000FF3548314000FF35F4354000FF35EC354000E8"
	strings:
		$1 = { 6A 00 E8 2F 1E 00 00 A3 C4 35 40 00 E8 2B 1E 00 00 6A 0A 50 6A 00 FF 35 C4 35 40 00 E8 07 00 00 00 50 E8 1B 1E 00 00 CC 68 48 00 00 00 68 00 00 00 00 68 C8 35 40 00 E8 76 16 00 00 83 C4 0C 8B 44 24 04 A3 CC 35 40 00 68 00 00 00 00 68 A0 0F 00 00 68 00 00 00 00 E8 EC 1D 00 00 A3 C8 35 40 00 E8 62 1D 00 00 E8 92 1A 00 00 E8 80 16 00 00 E8 13 14 00 00 68 01 00 00 00 68 08 36 40 00 68 00 00 00 00 8B 15 08 36 40 00 E8 71 3F 00 00 B8 00 00 10 00 BB 01 00 00 00 E8 82 3F 00 00 FF 35 48 31 40 00 B8 00 01 00 00 E8 0D 13 00 00 8D 0D EC 35 40 00 5A E8 F2 13 00 00 68 00 01 00 00 FF 35 EC 35 40 00 E8 84 1D 00 00 A3 F4 35 40 00 FF 35 48 31 40 00 FF 35 F4 35 40 00 FF 35 EC 35 40 00 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1221_Reg2Exe {
	meta:
		tool = "P"
		name = "Reg2Exe"
		version = "2.24"
		pattern = "6A00E8CF200000A3F4454000E8CB2000006A0A506A00FF35F4454000E80700000050E8BB200000CC6848000000680000000068F8454000E80619000083C40C8B442404A3FC454000680000000068A00F00006800000000E88C200000A3F8454000E802200000E8321D0000E820190000E8A31600006801000000683846400068000000008B1538464000E8714F0000B800001000BB01000000E8824F0000FF3548414000B800010000E89D1500008D0D1C4640005AE8821600006800010000FF351C464000E824200000A324464000FF3548414000FF3524464000FF351C464000E8DC1000008D0D144640005AE84A16"
	strings:
		$1 = { 6A 00 E8 CF 20 00 00 A3 F4 45 40 00 E8 CB 20 00 00 6A 0A 50 6A 00 FF 35 F4 45 40 00 E8 07 00 00 00 50 E8 BB 20 00 00 CC 68 48 00 00 00 68 00 00 00 00 68 F8 45 40 00 E8 06 19 00 00 83 C4 0C 8B 44 24 04 A3 FC 45 40 00 68 00 00 00 00 68 A0 0F 00 00 68 00 00 00 00 E8 8C 20 00 00 A3 F8 45 40 00 E8 02 20 00 00 E8 32 1D 00 00 E8 20 19 00 00 E8 A3 16 00 00 68 01 00 00 00 68 38 46 40 00 68 00 00 00 00 8B 15 38 46 40 00 E8 71 4F 00 00 B8 00 00 10 00 BB 01 00 00 00 E8 82 4F 00 00 FF 35 48 41 40 00 B8 00 01 00 00 E8 9D 15 00 00 8D 0D 1C 46 40 00 5A E8 82 16 00 00 68 00 01 00 00 FF 35 1C 46 40 00 E8 24 20 00 00 A3 24 46 40 00 FF 35 48 41 40 00 FF 35 24 46 40 00 FF 35 1C 46 40 00 E8 DC 10 00 00 8D 0D 14 46 40 00 5A E8 4A 16 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1222_Reg2Exe {
	meta:
		tool = "P"
		name = "Reg2Exe"
		version = "2.25"
		pattern = "6868000000680000000068707D4000E8AE20000083C40C6800000000E8AF520000A3747D4000680000000068001000006800000000E89C520000A3707D4000E824500000E8E2480000E844340000E854280000E898270000E893200000680100000068D07D400068000000008B15D07D4000E8898F0000B8000010006801000000E89A8F0000FF35A47F40006800010000E83A2300008D0DA87D40005AE85E1F0000FF35A87D40006800010000E82A520000A3B47D4000FF35A47F4000FF35B47D4000FF35A87D4000E85C0C00008D0DA07D40005AE8261F0000FF35"
	strings:
		$1 = { 68 68 00 00 00 68 00 00 00 00 68 70 7D 40 00 E8 AE 20 00 00 83 C4 0C 68 00 00 00 00 E8 AF 52 00 00 A3 74 7D 40 00 68 00 00 00 00 68 00 10 00 00 68 00 00 00 00 E8 9C 52 00 00 A3 70 7D 40 00 E8 24 50 00 00 E8 E2 48 00 00 E8 44 34 00 00 E8 54 28 00 00 E8 98 27 00 00 E8 93 20 00 00 68 01 00 00 00 68 D0 7D 40 00 68 00 00 00 00 8B 15 D0 7D 40 00 E8 89 8F 00 00 B8 00 00 10 00 68 01 00 00 00 E8 9A 8F 00 00 FF 35 A4 7F 40 00 68 00 01 00 00 E8 3A 23 00 00 8D 0D A8 7D 40 00 5A E8 5E 1F 00 00 FF 35 A8 7D 40 00 68 00 01 00 00 E8 2A 52 00 00 A3 B4 7D 40 00 FF 35 A4 7F 40 00 FF 35 B4 7D 40 00 FF 35 A8 7D 40 00 E8 5C 0C 00 00 8D 0D A0 7D 40 00 5A E8 26 1F 00 00 FF 35 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1223_ResCrypt {
	meta:
		tool = "P"
		name = "ResCrypt"
		version = "1.02"
		pattern = "55E8????????5D81ED06??????BE?????????3F58BDEBA01??????33C9668B4E0C66034E0E85C9745483C6108B0683FA01751B25??????7F83F803740C83F80E740783F8107402EB0583C608EB2D8B460483C608A9??????80740E515625??????7F03C38BF042EBB25103C38B3803FD8B4804D20F300F47E2F959E2AF4A74045E59EBF78D85????????5DFFE?"
	strings:
		$1 = { 55 E8 ?? ?? ?? ?? 5D 81 ED 06 ?? ?? ?? BE ?? ?? ?? ?? ?3 F5 8B DE BA 01 ?? ?? ?? 33 C9 66 8B 4E 0C 66 03 4E 0E 85 C9 74 54 83 C6 10 8B 06 83 FA 01 75 1B 25 ?? ?? ?? 7F 83 F8 03 74 0C 83 F8 0E 74 07 83 F8 10 74 02 EB 05 83 C6 08 EB 2D 8B 46 04 83 C6 08 A9 ?? ?? ?? 80 74 0E 51 56 25 ?? ?? ?? 7F 03 C3 8B F0 42 EB B2 51 03 C3 8B 38 03 FD 8B 48 04 D2 0F 30 0F 47 E2 F9 59 E2 AF 4A 74 04 5E 59 EB F7 8D 85 ?? ?? ?? ?? 5D FF E? }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1224_ReversingLabsProtector {
	meta:
		tool = "P"
		name = "ReversingLabsProtector"
		version = "0.7.4b"
		pattern = "6800004100E801000000C3C3"
	strings:
		$1 = { 68 00 00 41 00 E8 01 00 00 00 C3 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1225_RJcrush {
	meta:
		tool = "P"
		name = "RJcrush"
		version = "1.00"
		pattern = "06FC8CC8BA????03D052BA????52BA????03C28BD805????8EDB8EC033F633FFB9"
	strings:
		$1 = { 06 FC 8C C8 BA ?? ?? 03 D0 52 BA ?? ?? 52 BA ?? ?? 03 C2 8B D8 05 ?? ?? 8E DB 8E C0 33 F6 33 FF B9 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1226_RJoiner {
	meta:
		tool = "P"
		name = "RJoiner"
		version = "1.2"
		pattern = "558BEC81EC0C0200008D85F4FDFFFF56506804010000FF1514104000908D85F4FDFFFF50FF151010400090BE0020400090833EFF0F8484000000535733FF8D46"
	strings:
		$1 = { 55 8B EC 81 EC 0C 02 00 00 8D 85 F4 FD FF FF 56 50 68 04 01 00 00 FF 15 14 10 40 00 90 8D 85 F4 FD FF FF 50 FF 15 10 10 40 00 90 BE 00 20 40 00 90 83 3E FF 0F 84 84 00 00 00 53 57 33 FF 8D 46 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1227_RJoiner {
	meta:
		tool = "P"
		name = "RJoiner"
		version = "1.2a"
		pattern = "558BEC81EC0C0100008D85F4FEFFFF56506804010000FF150C1040009490948D85F4FEFFFF50FF1508104000949094BE00204000949094833EFF747D535733DB8D7E049490945368800000006A02536A0168000000C057FF15041040008945F89490948B068D7406049490948D45FC53508D4604FF3650FF75F8FF1500104000949094FF75F8FF15101040009490948D85F4FEFFFF6A0A505357682010400053FF15181040009490948B068D740604949094833EFF75895F5B33C05EC9C21000CCCC2411"
	strings:
		$1 = { 55 8B EC 81 EC 0C 01 00 00 8D 85 F4 FE FF FF 56 50 68 04 01 00 00 FF 15 0C 10 40 00 94 90 94 8D 85 F4 FE FF FF 50 FF 15 08 10 40 00 94 90 94 BE 00 20 40 00 94 90 94 83 3E FF 74 7D 53 57 33 DB 8D 7E 04 94 90 94 53 68 80 00 00 00 6A 02 53 6A 01 68 00 00 00 C0 57 FF 15 04 10 40 00 89 45 F8 94 90 94 8B 06 8D 74 06 04 94 90 94 8D 45 FC 53 50 8D 46 04 FF 36 50 FF 75 F8 FF 15 00 10 40 00 94 90 94 FF 75 F8 FF 15 10 10 40 00 94 90 94 8D 85 F4 FE FF FF 6A 0A 50 53 57 68 20 10 40 00 53 FF 15 18 10 40 00 94 90 94 8B 06 8D 74 06 04 94 90 94 83 3E FF 75 89 5F 5B 33 C0 5E C9 C2 10 00 CC CC 24 11 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1228_RJoiner {
	meta:
		tool = "P"
		name = "RJoiner"
		pattern = "E803FDFFFF6A00E80C000000FF256C104000FF2570104000FF2574104000FF2578104000FF257C104000FF2580104000FF2584104000FF2588104000FF258C10"
	strings:
		$1 = { E8 03 FD FF FF 6A 00 E8 0C 00 00 00 FF 25 6C 10 40 00 FF 25 70 10 40 00 FF 25 74 10 40 00 FF 25 78 10 40 00 FF 25 7C 10 40 00 FF 25 80 10 40 00 FF 25 84 10 40 00 FF 25 88 10 40 00 FF 25 8C 10 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1229_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		pattern = "60E8000000008B2C2483C4048DB5????????8D9D????????33FFE8830100006A??68????????68????????6A??FF95????????8985????????EB14"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 8D B5 ?? ?? ?? ?? 8D 9D ?? ?? ?? ?? 33 FF E8 83 01 00 00 6A ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 6A ?? FF 95 ?? ?? ?? ?? 89 85 ?? ?? ?? ?? EB 14 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1230_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		pattern = "60E8000000008B2C2483C404EB03??????EB03??????8DB5CB2200008D9DF002000033FFE8????????EB03??????6A4068????????68????????6A00FF959B0A"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 EB 03 ?? ?? ?? EB 03 ?? ?? ?? 8D B5 CB 22 00 00 8D 9D F0 02 00 00 33 FF E8 ?? ?? ?? ?? EB 03 ?? ?? ?? 6A 40 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 6A 00 FF 95 9B 0A }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1231_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		pattern = "B800000000600BC07458E8000000005805430000008038E9750361EB35E800000000582500F0FFFF33FF66BB195A6683C33466391875120FB7503C03D0BBE944"
	strings:
		$1 = { B8 00 00 00 00 60 0B C0 74 58 E8 00 00 00 00 58 05 43 00 00 00 80 38 E9 75 03 61 EB 35 E8 00 00 00 00 58 25 00 F0 FF FF 33 FF 66 BB 19 5A 66 83 C3 34 66 39 18 75 12 0F B7 50 3C 03 D0 BB E9 44 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1232_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "0.7.3b"
		pattern = "2E726C700000000000500000????????????????????????000000000000000000000000200000E0"
	strings:
		$1 = { 2E 72 6C 70 00 00 00 00 00 50 00 00 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 00 00 00 00 00 00 00 00 00 00 00 00 20 00 00 E0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1233_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "0.7.3b"
		pattern = "608BDDE8000000005D9532C095899D80000000B842314000BB413040002BC303C533D28A1040B9????00008BF930108A10404975F864EF863D3000000FB9FF4B89525C4CBD77C20CCE884E2DE80000005D0DDB5E564187FC0FF3054081684B937140BB873C40408B8806757040408BBBB343C48F932BF34A88060730F5EA2A35F04B8AC307C1C602C434C074743202C4450B3C96BE0A82C3DE36A97E5A51A6BC63A866CB305820"
	strings:
		$1 = { 60 8B DD E8 00 00 00 00 5D 95 32 C0 95 89 9D 80 00 00 00 B8 42 31 40 00 BB 41 30 40 00 2B C3 03 C5 33 D2 8A 10 40 B9 ?? ?? 00 00 8B F9 30 10 8A 10 40 49 75 F8 64 EF 86 3D 30 00 00 0F B9 FF 4B 89 52 5C 4C BD 77 C2 0C CE 88 4E 2D E8 00 00 00 5D 0D DB 5E 56 41 87 FC 0F F3 05 40 81 68 4B 93 71 40 BB 87 3C 40 40 8B 88 06 75 70 40 40 8B BB B3 43 C4 8F 93 2B F3 4A 88 06 07 30 F5 EA 2A 35 F0 4B 8A C3 07 C1 C6 02 C4 34 C0 74 74 32 02 C4 45 0B 3C 96 BE 0A 82 C3 DE 36 A9 7E 5A 51 A6 BC 63 A8 66 CB 30 58 20 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1234_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.0b"
		pattern = "60E8000000008D6424048B6C24FC8DB54C0200008D9D1301000033FFEB0FFF743704FF3437FFD383C40883C708833C370075EB"
	strings:
		$1 = { 60 E8 00 00 00 00 8D 64 24 04 8B 6C 24 FC 8D B5 4C 02 00 00 8D 9D 13 01 00 00 33 FF EB 0F FF 74 37 04 FF 34 37 FF D3 83 C4 08 83 C7 08 83 3C 37 00 75 EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1235_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.11 - 1.14"
		pattern = "60E8000000008B2C2483C4048DB5????????8D9D????????33FFEB0FFF??????FF??????D383C4??83C7??833C370075EB"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 8D B5 ?? ?? ?? ?? 8D 9D ?? ?? ?? ?? 33 FF EB 0F FF ?? ?? ?? FF ?? ?? ?? D3 83 C4 ?? 83 C7 ?? 83 3C 37 00 75 EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1236_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.12 - 1.14 [LZMA 4.30]"
		pattern = "60E8000000008B2C2483C4048DB5????????8D9D????????33FF6A??68????????68????????6A??FF95????????8985????????EB??60"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 8D B5 ?? ?? ?? ?? 8D 9D ?? ?? ?? ?? 33 FF 6A ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 6A ?? FF 95 ?? ?? ?? ?? 89 85 ?? ?? ?? ?? EB ?? 60 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1237_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.15 - 1.18 [aPLib 0.43]"

		pattern = "60E8000000008B2C2483C4048DB5????????8D9D????????33FFE845010000EB0FFF743704FF3437FFD383C40883C708833C370075EB"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 8D B5 ?? ?? ?? ?? 8D 9D ?? ?? ?? ?? 33 FF E8 45 01 00 00 EB 0F FF 74 37 04 FF 34 37 FF D3 83 C4 08 83 C7 08 83 3C 37 00 75 EB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1238_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.15 - 1.18 DLL"
		pattern = "807C2408010F85????????60E8000000008B2C2483C4??8DB5????????8D9D????????33FFE8"
	strings:
		$1 = { 80 7C 24 08 01 0F 85 ?? ?? ?? ?? 60 E8 00 00 00 00 8B 2C 24 83 C4 ?? 8D B5 ?? ?? ?? ?? 8D 9D ?? ?? ?? ?? 33 FF E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1239_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.18 [aPLib 0.43]"
		pattern = "60E8000000008B2C2483C4??8DB51A0400008D9DC102000033FFE861010000EB0FFF743704FF3437FFD383C4??83C7??833C370075EB83BD0604000000740E83BD0A040000007405E8D70100008D743704536A??68????????68????????6A00FF95A70300008985160400005BFFB51604000056FFD383C4??8BB5160400008BC6EB01"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 ?? 8D B5 1A 04 00 00 8D 9D C1 02 00 00 33 FF E8 61 01 00 00 EB 0F FF 74 37 04 FF 34 37 FF D3 83 C4 ?? 83 C7 ?? 83 3C 37 00 75 EB 83 BD 06 04 00 00 00 74 0E 83 BD 0A 04 00 00 00 74 05 E8 D7 01 00 00 8D 74 37 04 53 6A ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 6A 00 FF 95 A7 03 00 00 89 85 16 04 00 00 5B FF B5 16 04 00 00 56 FF D3 83 C4 ?? 8B B5 16 04 00 00 8B C6 EB 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1240_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.18 [LZMA 4.30]"
		pattern = "60E8000000008B2C2483C4??8DB5210B00008D9DFF02000033FFE89F0100006A??68????????68????????6A00FF95AA0A00008985F90A0000EB1460FFB5F90A0000FF3437FF743704FFD36183C7??833C370075E683BD0D0B000000740E83BD110B0000007405E8F60100008D743704536A??68????????68????????6A00FF95AA0A000089851D0B00005B60FFB5F90A000056FFB51D0B0000FFD3618BB51D0B00008BC6EB01"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 ?? 8D B5 21 0B 00 00 8D 9D FF 02 00 00 33 FF E8 9F 01 00 00 6A ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 6A 00 FF 95 AA 0A 00 00 89 85 F9 0A 00 00 EB 14 60 FF B5 F9 0A 00 00 FF 34 37 FF 74 37 04 FF D3 61 83 C7 ?? 83 3C 37 00 75 E6 83 BD 0D 0B 00 00 00 74 0E 83 BD 11 0B 00 00 00 74 05 E8 F6 01 00 00 8D 74 37 04 53 6A ?? 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 6A 00 FF 95 AA 0A 00 00 89 85 1D 0B 00 00 5B 60 FF B5 F9 0A 00 00 56 FF B5 1D 0B 00 00 FF D3 61 8B B5 1D 0B 00 00 8B C6 EB 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";