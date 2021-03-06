#ifndef END_my_m_MT_R_2pao5pawn_B_1che2pawn
#define END_my_m_MT_R_2pao5pawn_B_1che2pawn
#include "..\\..\\chess.h"
#include "..\\..\\preGen.h"
 
#include "..\\..\\endgame\mat.h"
#include "2��5����1��2��.cpp"
#include "..\\..\\white.h"
#else
#include "..\\..\\black.h"
#endif 


//const int ADD_Che2Pawn_To_2PaoXPawn_ByPawn[3]       =  { 96, 64, 32};  //��2��,��2��X��
//const int ADD_2PaoXPawn_To_Che2Pawn_ByPawn[3]       =  { 96, 64, 32};  //��2��,��2��X��

void my_m_MT_R_2pao5pawn_B_1che2pawn(typePOS &POSITION, EvalInfo &ei){


	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_2PaoXPawn_To_Che2Pawn_ByPawn[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_Che2Pawn_To_2PaoXPawn_ByPawn[my_shi_num]);
}

