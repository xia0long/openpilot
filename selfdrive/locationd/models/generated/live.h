#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_3(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_19(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_836308022275412879);
void live_err_fun(double *nom_x, double *delta_x, double *out_1571289195312687854);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_184082755728309110);
void live_H_mod_fun(double *state, double *out_4854537057722153224);
void live_f_fun(double *state, double dt, double *out_4940626048659078532);
void live_F_fun(double *state, double dt, double *out_5761133941066495134);
void live_h_3(double *state, double *unused, double *out_7369368113800535425);
void live_H_3(double *state, double *unused, double *out_6561569220354838668);
void live_h_4(double *state, double *unused, double *out_4713945342564898700);
void live_H_4(double *state, double *unused, double *out_3607640170208518667);
void live_h_9(double *state, double *unused, double *out_8141290725443752233);
void live_H_9(double *state, double *unused, double *out_7436219850068437443);
void live_h_10(double *state, double *unused, double *out_7277341644267400487);
void live_H_10(double *state, double *unused, double *out_6902721283066451046);
void live_h_12(double *state, double *unused, double *out_2320791187572656083);
void live_H_12(double *state, double *unused, double *out_3579000779151411826);
void live_h_31(double *state, double *unused, double *out_7117572724426488671);
void live_H_31(double *state, double *unused, double *out_4761958585052073103);
void live_h_32(double *state, double *unused, double *out_2597693144565176937);
void live_H_32(double *state, double *unused, double *out_6329975333973013);
void live_h_13(double *state, double *unused, double *out_179418410625562177);
void live_H_13(double *state, double *unused, double *out_5392151733436766905);
void live_h_14(double *state, double *unused, double *out_8141290725443752233);
void live_H_14(double *state, double *unused, double *out_7436219850068437443);
void live_h_19(double *state, double *unused, double *out_5395569669727781040);
void live_H_19(double *state, double *unused, double *out_8917775657750019935);
void live_h_33(double *state, double *unused, double *out_1068764956054423261);
void live_H_33(double *state, double *unused, double *out_9182958881545007227);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}