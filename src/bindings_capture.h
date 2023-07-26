#ifndef BINDINGS_CAPTURE_H
#define BINDINGS_CAPTURE_H

#include "enums.h"
#include "common.h"
#include "capture.h"

#ifdef __cplusplus
extern "C" {
#endif

FFI_PLUGIN_EXPORT void listCaptureDevices(CaptureDevice **devices, int *n_devices);

FFI_PLUGIN_EXPORT enum CaptureErrors initCapture(int deviceID);

FFI_PLUGIN_EXPORT int isCaptureInited();

FFI_PLUGIN_EXPORT void disposeCapture();

FFI_PLUGIN_EXPORT enum CaptureErrors startCapture();

FFI_PLUGIN_EXPORT enum CaptureErrors stopCapture();

FFI_PLUGIN_EXPORT void getCaptureAudioTexture(float* samples);

FFI_PLUGIN_EXPORT enum CaptureErrors setCaptureFftSmoothing(float smooth);

#ifdef __cplusplus
}
#endif

#endif // BINDINGS_CAPTURE_H