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
void live_H(double *in_vec, double *out_4825294576655715541);
void live_err_fun(double *nom_x, double *delta_x, double *out_2610186950546888936);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_6865519976368844776);
void live_H_mod_fun(double *state, double *out_4614895369087947712);
void live_f_fun(double *state, double dt, double *out_3077041316862212539);
void live_F_fun(double *state, double dt, double *out_9123300832391183228);
void live_h_3(double *state, double *unused, double *out_6531221570901853148);
void live_H_3(double *state, double *unused, double *out_788689962272310297);
void live_h_4(double *state, double *unused, double *out_5295037678739908063);
void live_H_4(double *state, double *unused, double *out_3783303598474151775);
void live_h_9(double *state, double *unused, double *out_6710664735153244373);
void live_H_9(double *state, double *unused, double *out_7611883278334070551);
void live_h_10(double *state, double *unused, double *out_3151382189233329679);
void live_H_10(double *state, double *unused, double *out_2470793739672217926);
void live_h_12(double *state, double *unused, double *out_1998127323715008980);
void live_H_12(double *state, double *unused, double *out_643693175567323194);
void live_h_31(double *state, double *unused, double *out_6707087587176925979);
void live_H_31(double *state, double *unused, double *out_4937622013317706211);
void live_h_32(double *state, double *unused, double *out_8574735880055509487);
void live_H_32(double *state, double *unused, double *out_6361261330148676306);
void live_h_13(double *state, double *unused, double *out_321320085975352913);
void live_H_13(double *state, double *unused, double *out_1743310980024957049);
void live_h_14(double *state, double *unused, double *out_6710664735153244373);
void live_H_14(double *state, double *unused, double *out_7611883278334070551);
void live_h_19(double *state, double *unused, double *out_1129167057544041321);
void live_H_19(double *state, double *unused, double *out_4695081703031284915);
void live_h_33(double *state, double *unused, double *out_9162785854002290904);
void live_H_33(double *state, double *unused, double *out_5041091237445809369);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}