#ifndef END_my_m_MT_R_2ma4pawn_B_2ma
#define END_my_m_MT_R_2ma4pawn_B_2ma
#include "..\\..\\chess.h"
#include "..\\..\\preGen.h"
 
#include "..\\..\\endgame\mat.h"
#include "2��4����2��.cpp"
#include "..\\..\\white.h"
#else
#include "..\\..\\black.h"
#endif 




void my_m_MT_R_2ma4pawn_B_2ma(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	//
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_2MaXPawn_2Ma_ByPawnShi[your_shi_num]);
}

