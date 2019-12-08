/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/experimental/micro/examples/micro_speech/micro_features/yes_micro_features_data.h"

/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="speech_commands_test_set_v0.02/yes/f2e59fea_nohash_1.wav" \
 * --output_c_file="yes_micro_features_data.cc" \
 */


/*  
const int g_yes_micro_f2e59fea_nohash_1_width = 40;
const int g_yes_micro_f2e59fea_nohash_1_height = 49;
const unsigned char g_yes_micro_f2e59fea_nohash_1_data[] = {
    244, 226, 245, 223, 234, 213, 228, 208, 194, 110, 95,  116, 102, 0,   137,
    161, 183, 173, 137, 116, 133, 157, 151, 156, 128, 110, 128, 0,   68,  78,
    78,  90,  68,  68,  78,  102, 95,  78,  95,  78,  210, 188, 209, 183, 204,
    188, 201, 191, 166, 119, 90,  107, 110, 107, 175, 157, 179, 168, 182, 145,
    152, 164, 171, 165, 136, 143, 122, 68,  0,   78,  90,  90,  110, 90,  102,
    99,  90,  68,  78,  68,  223, 186, 179, 123, 182, 110, 196, 171, 159, 110,
    102, 95,  90,  99,  160, 134, 125, 136, 153, 152, 164, 134, 164, 151, 141,
    136, 99,  90,  90,  90,  78,  78,  102, 119, 102, 90,  110, 90,  68,  51,
    177, 175, 211, 172, 183, 0,   95,  68,  129, 102, 68,  85,  114, 105, 110,
    85,  102, 95,  140, 51,  85,  51,  95,  90,  143, 116, 90,  78,  78,  51,
    107, 85,  68,  0,   68,  51,  90,  51,  68,  0,   164, 117, 193, 120, 156,
    0,   138, 51,  90,  0,   51,  0,   51,  85,  0,   0,   51,  0,   0,   0,
    0,   0,   114, 0,   85,  78,  90,  51,  0,   0,   51,  85,  99,  85,  107,
    68,  90,  85,  78,  0,   51,  0,   110, 0,   68,  0,   0,   0,   51,  0,
    51,  0,   0,   0,   68,  90,  107, 0,   68,  0,   0,   0,   68,  0,   51,
    68,  0,   78,  68,  0,   51,  0,   78,  68,  90,  68,  78,  51,  51,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   90,  0,   0,   0,   0,
    0,   51,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,  68,
    0,   0,   78,  0,   78,  0,   78,  0,   51,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   51,  0,   51,  0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,  0,   51,
    0,   51,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,
    0,   0,   0,   0,   51,  78,  0,   0,   51,  51,  0,   0,   0,   78,  0,
    213, 170, 192, 180, 196, 188, 173, 131, 173, 116, 137, 105, 159, 127, 0,
    0,   0,   0,   127, 164, 165, 161, 170, 164, 185, 197, 195, 167, 134, 138,
    159, 134, 136, 105, 51,  0,   99,  0,   51,  0,   228, 215, 229, 218, 237,
    215, 228, 210, 237, 222, 239, 211, 208, 211, 234, 218, 220, 209, 225, 219,
    235, 222, 245, 225, 245, 224, 243, 223, 241, 218, 237, 224, 234, 213, 221,
    193, 197, 164, 157, 128, 227, 188, 232, 196, 220, 220, 240, 219, 234, 213,
    234, 211, 231, 218, 233, 213, 239, 215, 228, 207, 229, 206, 224, 208, 226,
    207, 232, 210, 225, 208, 230, 199, 227, 206, 210, 205, 218, 174, 178, 141,
    235, 208, 220, 206, 225, 203, 233, 203, 225, 167, 205, 199, 208, 190, 221,
    204, 223, 207, 225, 188, 225, 197, 215, 188, 199, 183, 225, 195, 224, 200,
    216, 178, 208, 188, 215, 202, 214, 183, 176, 140, 198, 150, 211, 194, 203,
    120, 175, 188, 204, 189, 219, 192, 223, 202, 216, 186, 203, 185, 210, 182,
    214, 183, 204, 170, 204, 125, 184, 187, 206, 185, 198, 182, 210, 161, 202,
    198, 218, 173, 145, 120, 188, 183, 205, 168, 200, 170, 210, 177, 187, 190,
    209, 193, 193, 166, 210, 162, 175, 119, 174, 147, 182, 161, 181, 134, 176,
    143, 187, 165, 186, 149, 185, 141, 192, 181, 202, 123, 170, 143, 144, 78,
    149, 0,   208, 182, 170, 78,  170, 0,   117, 51,  156, 99,  195, 170, 200,
    130, 152, 68,  175, 141, 173, 134, 194, 132, 189, 164, 198, 134, 173, 117,
    171, 149, 183, 181, 185, 99,  153, 117, 125, 0,   166, 0,   173, 117, 144,
    0,   117, 102, 188, 120, 193, 166, 197, 68,  163, 119, 169, 99,  134, 0,
    162, 0,   164, 68,  171, 116, 126, 0,   120, 68,  68,  0,   105, 0,   159,
    95,  150, 51,  90,  85,  0,   0,   131, 0,   105, 0,   145, 51,  170, 51,
    120, 0,   107, 0,   145, 85,  160, 0,   85,  0,   0,   51,  149, 0,   78,
    0,   0,   0,   0,   0,   0,   0,   90,  0,   112, 0,   78,  102, 122, 0,
    0,   0,   0,   0,   105, 0,   0,   0,   0,   0,   0,   0,   0,   0,   112,
    0,   164, 120, 143, 0,   0,   0,   0,   0,   51,  0,   90,  0,   78,  0,
    0,   0,   0,   0,   110, 0,   139, 0,   112, 51,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   102, 0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   107,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   78,  0,   51,  0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   51,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   127, 110, 133, 0,   167, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   132, 0,   190,
    194, 202, 0,   197, 187, 161, 0,   0,   0,   0,   0,   0,   0,   0,   0,
    214, 213, 223, 203, 218, 189, 200, 122, 78,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   191, 210, 231, 197, 226, 217, 238, 216, 236, 207,
    199, 0,   0,   0,   0,   0,   107, 122, 155, 160, 214, 215, 236, 202, 235,
    203, 225, 191, 203, 188, 199, 194, 212, 127, 51,  0,   174, 188, 219, 196,
    228, 221, 240, 207, 235, 220, 241, 219, 237, 207, 212, 142, 95,  0,   139,
    78,  162, 177, 197, 183, 211, 199, 235, 208, 238, 215, 227, 207, 211, 201,
    224, 213, 226, 192, 213, 170, 223, 205, 234, 221, 245, 225, 242, 220, 245,
    221, 239, 221, 238, 213, 226, 180, 159, 112, 176, 159, 208, 202, 213, 191,
    205, 191, 225, 197, 238, 219, 224, 201, 227, 200, 221, 201, 225, 203, 212,
    195, 229, 210, 228, 210, 239, 216, 226, 212, 233, 205, 225, 200, 229, 207,
    222, 151, 147, 119, 179, 185, 230, 218, 223, 192, 202, 136, 205, 177, 223,
    204, 228, 215, 232, 209, 221, 189, 221, 205, 209, 200, 226, 209, 229, 205,
    235, 192, 209, 198, 228, 190, 206, 185, 207, 187, 214, 175, 177, 184, 220,
    195, 214, 207, 230, 184, 205, 159, 208, 184, 189, 169, 224, 213, 219, 199,
    229, 203, 216, 205, 222, 204, 224, 206, 231, 208, 231, 176, 197, 184, 216,
    193, 211, 139, 212, 195, 231, 164, 166, 195, 217, 182, 208, 190, 217, 179,
    205, 68,  182, 119, 195, 168, 182, 136, 204, 179, 193, 158, 182, 140, 188,
    154, 197, 169, 190, 99,  184, 0,   125, 0,   131, 0,   99,  68,  179, 85,
    190, 184, 213, 203, 223, 202, 212, 190, 209, 138, 178, 0,   159, 51,  128,
    51,  105, 0,   139, 51,  179, 125, 185, 114, 171, 128, 175, 132, 181, 174,
    155, 0,   0,   0,   90,  0,   125, 0,   176, 188, 227, 217, 244, 215, 234,
    221, 239, 192, 224, 210, 0,   0,   134, 0,   51,  0,   105, 0,   105, 0,
    143, 90,  192, 119, 175, 147, 141, 51,  184, 110, 85,  0,   0,   0,   0,
    0,   0,   0,   151, 139, 201, 203, 232, 203, 226, 208, 236, 206, 230, 212,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   169, 0,   119,
    0,   78,  0,   0,   0,   0,   0,   0,   0,   0,   0,   68,  0,   0,   133,
    200, 180, 220, 197, 228, 201, 221, 184, 213, 193, 110, 0,   0,   0,   0,
    0,   0,   0,   0,   0,   78,  0,   164, 0,   0,   0,   0,   0,   107, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   150, 164, 202, 182, 224,
    197, 211, 179, 212, 193, 134, 0,   0,   0,   0,   0,   0,   0,   0,   0,
    85,  0,   150, 0,   85,  0,   95,  0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   102, 90,  193, 160, 203, 164, 200, 178, 205, 174,
    116, 0,   0,   0,   0,   0,   0,   0,   0,   0,   120, 114, 123, 0,   114,
    0,   145, 68,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    102, 68,  199, 170, 195, 180, 208, 176, 200, 164, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   110, 0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   142, 102, 172, 110, 186,
    167, 185, 147, 189, 154, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   177, 0,   158, 136, 197, 155, 189, 166,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    85,  0,   155, 90,  175, 117, 175, 138, 202, 165, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   51,  0,   139,
    0,   120, 68,  51,  123, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   119, 0,   78,  0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
};

/*

// Stop word
//const int g_yes_micro_f2e59fea_nohash_1_width = 40;
//const int g_yes_micro_f2e59fea_nohash_1_height = 49;
//const unsigned char g_yes_micro_f2e59fea_nohash_1_data[] = {

//const int g_017c4098_nohash_4_width = 40;
//const int g_017c4098_nohash_4_height = 49;
/* 
//const unsigned char g_017c4098_nohash_4_data[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 1, 1, 1, 0, 0, 4, 1, 1, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 1, 1, 4, 
  0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  1, 14, 92, 126, 1, 3, 1, 4, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 4, 27, 255, 255, 81, 22, 20, 
  80, 10, 5, 2, 1, 1, 1, 0, 0, 1, 
  2, 0, 1, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 2, 17, 47, 255, 
  228, 75, 136, 169, 3, 1, 1, 2, 6, 3, 
  0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
  17, 45, 255, 255, 76, 105, 29, 6, 0, 2, 
  2, 12, 2, 1, 2, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 4, 19, 21, 173, 255, 255, 228, 16, 
  2, 0, 1, 1, 3, 2, 1, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 5, 12, 178, 252, 
  119, 151, 18, 1, 1, 0, 1, 3, 1, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 
  13, 162, 209, 162, 255, 7, 2, 0, 0, 0, 
  3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 1, 5, 6, 136, 68, 60, 69, 2, 0, 
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 2, 6, 47, 20, 4, 
  42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
  5, 9, 3, 10, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 
};

*/

 // Frog word
const int g_yes_micro_f2e59fea_nohash_1_width = 51;
const int g_yes_micro_f2e59fea_nohash_1_height = 10;
const unsigned char g_yes_micro_f2e59fea_nohash_1_data[] = {
69,  6,  174,  120,  122,  152,  199,  158,  248,  222,  
208,  143,  119,  196,  141,  33,  157,  58,  40,  189,  
162,  65,  81,  229,  147,  46,  111,  63,  28,  53,  
149,  108,  18,  43,  97,  55,  162,  112,  38,  45,  129,  
120,  191,  36,  163,  80,  107,  25,  238,  95,  50,  72,  
111,  160,  157,  182,  169,  169,  149,  143,  141,  140,  
167,  137,  90,  83,  115,  53,  11,  8,  74,  101,  9,  
255,  45,  83,  22,  1,  49,  107,  53,  14,  50,  77,  88,  
245,  243,  16,  40,  233,  242,  10,  83,  2,  254,  34,  
67,  71,  5,  23,  75,  78,  171,  151,  183,  213,  212,  
214,  195,  208,  150,  146,  156,  186,  186,  164,  207,  
243,  241,  193,  186,  202,  207,  208,  197,  216,  226,  
220,  195,  194,  167,  194,  165,  175,  156,  175,  193,  
193,  223,  237,  209,  206,  217,  244,  224,  192,  226,  
234,  237,  186,  201,  232,  244,  18,  15,  255,  16,  
237,  242,  221,  252,  239,  253,  5,  1,  37,  65,  76,  
58,  62,  57,  55,  36,  23,  55,  50,  58,  44,  42,  35,  
13,  234,  7,  8,  6,  9,  251,  44,  49,  77,  63,  49,  
52,  84,  62,  67,  52,  60,  79,  53,  52,  55,  74,  60,  
20,  0,  251,  231,  220,  217,  213,  234,  222,  244,  
253,  3,  249,  0,  3,  3,  250,  245,  251,  233,  243,  
248,  248,  244,  231,  235,  247,  229,  220,  0,  255,  
254,  0,  5,  7,  2,  15,  250,  1,  4,  17,  227,  12,  
2,  4,  0,  4,  6,  10,  254,  251,  255,  1,  9,  249,  
4,  0,  25,  34,  34,  31,  43,  30,  8,  16,  11,  0,  
241,  244,  246,  3,  23,  238,  229,  237,  255,  240,  
231,  244,  22,  12,  241,  251,  12,  252,  226,  224,  
2,  5,  242,  245,  4,  253,  0,  245,  242,  4,  251,  
244,  241,  253,  9,  243,  239,  249,  250,  0,  247,  
254,  254,  241,  223,  235,  239,  0,  251,  0,  3,  245,  
4,  11,  27,  16,  13,  14,  18,  5,  31,  29,  37,  9,  
17,  7,  3,  239,  253,  33,  32,  46,  30,  20,  29,  26,  
18,  20,  20,  4,  12,  3,  9,  9,  254,  23,  243,  233,  
231,  249,  247,  254,  22,  19,  22,  249,  2,  252,  10,  
13,  15,  6,  10,  9,  4,  10,  240,  1,  255,  2,  249,  
13,  251,  254,  254,  234,  233,  231,  242,  231,  245,  
243,  0,  243,  254,  1,  4,  248,  11,  8,  249,  244,  
243,  0,  1,  253,  11,  24,  18,  23,  16,  12,  255,  
243,  237,  226,  234,  254,  8,  22,  25,  21,  15,  9,  
1,  1,  247,  245,  7,  2,  3,  3,  8,  5,  245,  240,  245,  
249,  253,  9,  3,  2,  6,  10,  18,  13,  16,  6,  16,  22,  
15,  5,  2,  8,  15,  15,  5,  0,  230,  233,  245,  235,  
240,  254,  0,  1,  5,  8,  13,  5,  246,  252,  249,  246,  
12,  250,  247,  242,  240,  255,  240,  249,  252,  243,  
243,  243,  250,  0,  252,  251,  0,  255,  1,  250,  245,  
255,  248,  250,  244,  240,  248,  247,  236,  235,  240,  
237,  237,  230,  243, 
};
 

/* 
// crow word
const int g_yes_micro_f2e59fea_nohash_1_width = 51;
const int g_yes_micro_f2e59fea_nohash_1_height = 10;
const unsigned char g_yes_micro_f2e59fea_nohash_1_data[]
{
83,  69,  91,  79,  82,  88,  85,  80,  80,  85,  
86,  85,  84,  90,  90,  90,  83,  78,  94,  103,  
95,  96,  92,  115,  97,  113,  158,  177,  185,  
198,  197,  190,  197,  200,  191,  199,  187,  
182,  197,  193,  194,  181,  186,  181,  188,  
188,  184,  171,  153,  144,  139,  100,  106,  
113,  107,  105,  118,  102,  110,  106,  109,  
106,  99,  106,  105,  109,  106,  105,  102,  
97,  109,  106,  110,  101,  112,  109,  91,  
85,  64,  49,  52,  50,  50,  54,  61,  52,  64,  
52,  55,  59,  55,  55,  44,  49,  45,  53,  51,  
60,  48,  60,  71,  90,  243,  233,  224,  222,  
217,  219,  214,  219,  219,  213,  214,  211,  
223,  208,  213,  207,  219,  214,  200,  218,  
216,  211,  211,  206,  222,  189,  184,  173,  
170,  177,  175,  170,  171,  178,  172,  173,  
173,  180,  167,  172,  172,  177,  168,  173,  
179,  174,  178,  165,  175,  173,  208,  212,  
205,  206,  207,  203,  211,  206,  206,  197,  
196,  202,  213,  200,  213,  217,  207,  221,  
206,  219,  206,  219,  220,  224,  220,  219,  
218,  226,  229,  227,  220,  223,  226,  232,  
231,  238,  231,  233,  235,  227,  224,  235,  
232,  225,  240,  233,  237,  232,  224,  227,  
226,  254,  230,  211,  211,  206,  213,  209,  
214,  216,  211,  206,  209,  211,  206,  214,  
216,  210,  223,  207,  212,  207,  219,  215,  
219,  220,  211,  228,  242,  246,  238,  233,  
240,  250,  242,  237,  245,  236,  235,  229,  
241,  229,  238,  232,  220,  228,  228,  235,  
229,  228,  229,  233,  250,  235,  233,  240,  
228,  229,  230,  236,  234,  237,  232,  227,  
222,  226,  226,  230,  218,  229,  224,  220,  
221,  228,  216,  218,  224,  222,  223,  226,  
222,  222,  198,  205,  207,  210,  209,  216,  
211,  204,  206,  212,  208,  207,  203,  195,  
198,  201,  206,  202,  204,  213,  211,  234,  
242,  224,  235,  221,  219,  233,  224,  232,  
228,  220,  214,  216,  215,  229,  235,  225,  
218,  225,  231,  223,  230,  225,  235,  239,  
225,  223,  227,  215,  222,  215,  218,  225,  
226,  227,  226,  221,  217,  225,  222,  221,  
217,  217,  213,  210,  216,  218,  216,  211,  
220,  214,  239,  251,  242,  238,  238,  232,  
247,  235,  241,  243,  236,  230,  231,  229,  
232,  244,  242,  235,  237,  245,  235,  241,  
237,  253,  244,  244,  241,  225,  224,  229,  
239,  246,  246,  243,  242,  243,  242,  231,  
227,  233,  235,  232,  230,  244,  229,  233,  
234,  234,  224,  232,  238,  13,  255,  233,  
218,  229,  228,  230,  221,  222,  231,  231,  
228,  223,  232,  223,  227,  226,  232,  222,  
221,  221,  226,  230,  227,  222,  221,  234,  
228,  226,  241,  247,  251,  248,  245,  4,  
244,  253,  250,  246,  239,  243,  251,  237,  
249,  247,  237,  238,  234,  233,  229,  230,  
245,  7,  244,  240,  230,  231,  241,  237,  236,  
232,  238,  244,  234,  237,  234,  238,  244,  
237,  238,  243,  234,  242,  241,  247,  240,  
237,  1,  249,  241,  250,  248,  235,  239,  
239,  252,  239,  248,  245,  254,  247,  246,  
254,  246,  249,  252,  250,  250,  255,  255,  
246,  246,  253, 
};
*/

/* 
const int g_yes_micro_f2e59fea_nohash_1_width = 51;
const int g_yes_micro_f2e59fea_nohash_1_height = 10;
const unsigned char g_yes_micro_f2e59fea_nohash_1_data[]
{
231,  249,  253,  250,  3,  236,  239,  242,  1,  246,  
8,  232,  233,  227,  6,  237,  254,  239,  238,  241,  
9,  233,  1,  242,  230,  233,  4,  246,  253,  234,  240,  
234,  254,  244,  0,  233,  240,  226,  242,  250,  3,  243,  
225,  224,  253,  251,  251,  251,  225,  221,  215,  28,  
34,  19,  30,  21,  41,  29,  29,  24,  31,  25,  30,  28,  
22,  15,  16,  19,  30,  40,  18,  22,  17,  17,  28,  27,  
17,  22,  28,  16,  31,  31,  30,  15,  30,  11,  23,  27,  
35,  20,  20,  19,  24,  17,  31,  32,  14,  19,  16,  36,  
36,  15,  48,  48,  54,  55,  40,  36,  50,  43,  49,  55,  
52,  41,  39,  41,  49,  46,  38,  55,  44,  34,  46,  40,  
42,  38,  34,  35,  47,  46,  46,  48,  58,  40,  47,  44,  
52,  49,  43,  45,  44,  40,  53,  47,  30,  33,  47,  47,  
45,  34,  37,  45,  54,  0,  10,  10,  8,  254,  1,  9,  
15,  8,  12,  9,  14,  5,  6,  3,  0,  0,  13,  4,  255,  
255,  6,  3,  0,  244,  250,  4,  0,  254,  1,  21,  9,  
9,  2,  11,  11,  0,  11,  2,  5,  4,  6,  0,  3,  5,  6,  
1,  3,  8,  2,  13,  16,  25,  25,  25,  18,  15,  19,  
36,  33,  25,  24,  23,  31,  20,  24,  11,  31,  22,  
16,  29,  29,  27,  26,  22,  7,  19,  25,  23,  24,  21,  
26,  25,  30,  24,  41,  29,  12,  23,  19,  29,  31,  24,  
12,  32,  27,  27,  26,  35,  26,  15,  27,  5,  1,  2,  2,  
3,  5,  252,  4,  5,  1,  254,  0,  0,  0,  0,  249,  255,  
0,  0,  7,  7,  10,  252,  9,  254,  16,  252,  250,  251,  
7,  1,  2,  2,  9,  18,  9,  0,  4,  7,  4,  14,  2,  3,  
21,  5,  2,  0,  3,  14,  9,  0,  21,  12,  11,  18,  6,  
14,  11,  10,  14,  14,  9,  8,  7,  15,  14,  3,  11,  
11,  10,  11,  14,  14,  15,  7,  12,  11,  7,  18,  12,  
10,  3,  15,  18,  20,  22,  12,  10,  10,  15,  17,  21,  
12,  8,  25,  18,  17,  7,  14,  16,  22,  18,  13,  2,  
17,  11,  16,  1,  11,  7,  8,  6,  11,  11,  21,  7,  17,  
7,  13,  11,  7,  10,  7,  11,  20,  13,  9,  17,  8,  12,  
8,  5,  13,  16,  9,  9,  0,  6,  16,  11,  4,  18,  15,  
21,  12,  7,  4,  15,  8,  23,  10,  15,  9,  5,  6,  14,  
3,  12,  250,  0,  14,  1,  7,  8,  7,  8,  9,  3,  10,  
4,  1,  12,  5,  1,  6,  9,  8,  8,  21,  7,  8,  7,  0,  
9,  10,  8,  7,  7,  1,  7,  9,  5,  8,  2,  9,  3,  0,  
2,  4,  4,  10,  0,  15,  32,  14,  8,  15,  5,  13,  13,  
13,  11,  16,  15,  15,  13,  23,  13,  11,  12,  14,  10,  
15,  12,  17,  8,  14,  13,  13,  15,  18,  10,  13,  16,  
11,  7,  14,  20,  21,  11,  22,  4,  14,  19,  23,  5,  13,  3,  3,  7,  12,  20,  9,  15,  28, 
};  */