#if defined(ESP32)
/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

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

#include "elq/tfl/esp32/tensorflow/lite/kernels/internal/reference/ceil.h"

#include "elq/tfl/esp32/tensorflow/lite/c/c_api_internal.h"
#include "elq/tfl/esp32/tensorflow/lite/kernels/internal/tensor_ctypes.h"
#include "elq/tfl/esp32/tensorflow/lite/kernels/kernel_util.h"

namespace tflite {
namespace ops {
namespace micro {
namespace ceil {

constexpr int kInputTensor = 0;
constexpr int kOutputTensor = 0;

TfLiteStatus Prepare(TfLiteContext* context, TfLiteNode* node) {
  const TfLiteTensor* input = GetInput(context, node, kInputTensor);
  TfLiteTensor* output = GetOutput(context, node, kOutputTensor);
  TF_LITE_ENSURE_EQ(context, NumInputs(node), 1);
  TF_LITE_ENSURE_EQ(context, NumOutputs(node), 1);
  TF_LITE_ENSURE_EQ(context, input->type, kTfLiteFloat32);
  TF_LITE_ENSURE_EQ(context, output->type, input->type);
  TF_LITE_ENSURE_EQ(context, output->bytes, input->bytes);
  TF_LITE_ENSURE_EQ(context, output->dims->size, input->dims->size);
  for (int i = 0; i < output->dims->size; ++i) {
    TF_LITE_ENSURE_EQ(context, output->dims->data[i], input->dims->data[i]);
  }
  return kTfLiteOk;
}

TfLiteStatus Eval(TfLiteContext* context, TfLiteNode* node) {
  const TfLiteTensor* input = GetInput(context, node, kInputTensor);
  TfLiteTensor* output = GetOutput(context, node, kOutputTensor);

  reference_ops::Ceil(GetTensorShape(input), GetTensorData<float>(input),
                      GetTensorShape(output), GetTensorData<float>(output));

  return kTfLiteOk;
}
}  // namespace ceil

TfLiteRegistration* Register_CEIL() {
  static TfLiteRegistration r = {/*init=*/nullptr,
                                 /*free=*/nullptr, ceil::Prepare, ceil::Eval};
  return &r;
}

}  // namespace micro
}  // namespace ops
}  // namespace tflite

#endif // end of #if defined(ESP32)