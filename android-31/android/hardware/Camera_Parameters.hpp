#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Camera.def.hpp"
#include "./Camera_Size.def.hpp"
#include "../../JString.hpp"
#include "./Camera_Parameters.def.hpp"

namespace android::hardware
{
	// Fields
	inline JString Camera_Parameters::ANTIBANDING_50HZ()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_50HZ",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::ANTIBANDING_60HZ()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_60HZ",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::ANTIBANDING_AUTO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_AUTO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::ANTIBANDING_OFF()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_OFF",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_AQUA()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_AQUA",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_BLACKBOARD()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_BLACKBOARD",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_MONO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_MONO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_NEGATIVE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_NEGATIVE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_NONE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_NONE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_POSTERIZE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_POSTERIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_SEPIA()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_SEPIA",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_SOLARIZE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_SOLARIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::EFFECT_WHITEBOARD()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_WHITEBOARD",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FLASH_MODE_AUTO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_AUTO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FLASH_MODE_OFF()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_OFF",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FLASH_MODE_ON()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FLASH_MODE_RED_EYE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_RED_EYE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FLASH_MODE_TORCH()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_TORCH",
			"Ljava/lang/String;"
		);
	}
	inline jint Camera_Parameters::FOCUS_DISTANCE_FAR_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"FOCUS_DISTANCE_FAR_INDEX"
		);
	}
	inline jint Camera_Parameters::FOCUS_DISTANCE_NEAR_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"FOCUS_DISTANCE_NEAR_INDEX"
		);
	}
	inline jint Camera_Parameters::FOCUS_DISTANCE_OPTIMAL_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"FOCUS_DISTANCE_OPTIMAL_INDEX"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_AUTO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_AUTO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_CONTINUOUS_PICTURE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_CONTINUOUS_PICTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_CONTINUOUS_VIDEO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_CONTINUOUS_VIDEO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_EDOF()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_EDOF",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_FIXED()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_FIXED",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_INFINITY()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_INFINITY",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::FOCUS_MODE_MACRO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_MACRO",
			"Ljava/lang/String;"
		);
	}
	inline jint Camera_Parameters::PREVIEW_FPS_MAX_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"PREVIEW_FPS_MAX_INDEX"
		);
	}
	inline jint Camera_Parameters::PREVIEW_FPS_MIN_INDEX()
	{
		return getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"PREVIEW_FPS_MIN_INDEX"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_ACTION()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_AUTO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_AUTO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_BARCODE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_BARCODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_BEACH()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_BEACH",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_CANDLELIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_CANDLELIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_FIREWORKS()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_FIREWORKS",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_HDR()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_HDR",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_LANDSCAPE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_LANDSCAPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_NIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_NIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_NIGHT_PORTRAIT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_NIGHT_PORTRAIT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_PARTY()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_PARTY",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_PORTRAIT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_PORTRAIT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_SNOW()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_SNOW",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_SPORTS()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_SPORTS",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_STEADYPHOTO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_STEADYPHOTO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_SUNSET()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_SUNSET",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::SCENE_MODE_THEATRE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_THEATRE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_AUTO()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_AUTO",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_CLOUDY_DAYLIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_CLOUDY_DAYLIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_DAYLIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_DAYLIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_FLUORESCENT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_FLUORESCENT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_INCANDESCENT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_INCANDESCENT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_SHADE()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_SHADE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_TWILIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_TWILIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::WHITE_BALANCE_WARM_FLUORESCENT()
	{
		return getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_WARM_FLUORESCENT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Camera_Parameters::flatten() const
	{
		return callObjectMethod(
			"flatten",
			"()Ljava/lang/String;"
		);
	}
	inline JString Camera_Parameters::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Camera_Parameters::getAntibanding() const
	{
		return callObjectMethod(
			"getAntibanding",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Camera_Parameters::getAutoExposureLock() const
	{
		return callMethod<jboolean>(
			"getAutoExposureLock",
			"()Z"
		);
	}
	inline jboolean Camera_Parameters::getAutoWhiteBalanceLock() const
	{
		return callMethod<jboolean>(
			"getAutoWhiteBalanceLock",
			"()Z"
		);
	}
	inline JString Camera_Parameters::getColorEffect() const
	{
		return callObjectMethod(
			"getColorEffect",
			"()Ljava/lang/String;"
		);
	}
	inline jint Camera_Parameters::getExposureCompensation() const
	{
		return callMethod<jint>(
			"getExposureCompensation",
			"()I"
		);
	}
	inline jfloat Camera_Parameters::getExposureCompensationStep() const
	{
		return callMethod<jfloat>(
			"getExposureCompensationStep",
			"()F"
		);
	}
	inline JString Camera_Parameters::getFlashMode() const
	{
		return callObjectMethod(
			"getFlashMode",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat Camera_Parameters::getFocalLength() const
	{
		return callMethod<jfloat>(
			"getFocalLength",
			"()F"
		);
	}
	inline JObject Camera_Parameters::getFocusAreas() const
	{
		return callObjectMethod(
			"getFocusAreas",
			"()Ljava/util/List;"
		);
	}
	inline void Camera_Parameters::getFocusDistances(JFloatArray arg0) const
	{
		callMethod<void>(
			"getFocusDistances",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline JString Camera_Parameters::getFocusMode() const
	{
		return callObjectMethod(
			"getFocusMode",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat Camera_Parameters::getHorizontalViewAngle() const
	{
		return callMethod<jfloat>(
			"getHorizontalViewAngle",
			"()F"
		);
	}
	inline jint Camera_Parameters::getInt(JString arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Camera_Parameters::getJpegQuality() const
	{
		return callMethod<jint>(
			"getJpegQuality",
			"()I"
		);
	}
	inline jint Camera_Parameters::getJpegThumbnailQuality() const
	{
		return callMethod<jint>(
			"getJpegThumbnailQuality",
			"()I"
		);
	}
	inline android::hardware::Camera_Size Camera_Parameters::getJpegThumbnailSize() const
	{
		return callObjectMethod(
			"getJpegThumbnailSize",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	inline jint Camera_Parameters::getMaxExposureCompensation() const
	{
		return callMethod<jint>(
			"getMaxExposureCompensation",
			"()I"
		);
	}
	inline jint Camera_Parameters::getMaxNumDetectedFaces() const
	{
		return callMethod<jint>(
			"getMaxNumDetectedFaces",
			"()I"
		);
	}
	inline jint Camera_Parameters::getMaxNumFocusAreas() const
	{
		return callMethod<jint>(
			"getMaxNumFocusAreas",
			"()I"
		);
	}
	inline jint Camera_Parameters::getMaxNumMeteringAreas() const
	{
		return callMethod<jint>(
			"getMaxNumMeteringAreas",
			"()I"
		);
	}
	inline jint Camera_Parameters::getMaxZoom() const
	{
		return callMethod<jint>(
			"getMaxZoom",
			"()I"
		);
	}
	inline JObject Camera_Parameters::getMeteringAreas() const
	{
		return callObjectMethod(
			"getMeteringAreas",
			"()Ljava/util/List;"
		);
	}
	inline jint Camera_Parameters::getMinExposureCompensation() const
	{
		return callMethod<jint>(
			"getMinExposureCompensation",
			"()I"
		);
	}
	inline jint Camera_Parameters::getPictureFormat() const
	{
		return callMethod<jint>(
			"getPictureFormat",
			"()I"
		);
	}
	inline android::hardware::Camera_Size Camera_Parameters::getPictureSize() const
	{
		return callObjectMethod(
			"getPictureSize",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	inline android::hardware::Camera_Size Camera_Parameters::getPreferredPreviewSizeForVideo() const
	{
		return callObjectMethod(
			"getPreferredPreviewSizeForVideo",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	inline jint Camera_Parameters::getPreviewFormat() const
	{
		return callMethod<jint>(
			"getPreviewFormat",
			"()I"
		);
	}
	inline void Camera_Parameters::getPreviewFpsRange(JIntArray arg0) const
	{
		callMethod<void>(
			"getPreviewFpsRange",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline jint Camera_Parameters::getPreviewFrameRate() const
	{
		return callMethod<jint>(
			"getPreviewFrameRate",
			"()I"
		);
	}
	inline android::hardware::Camera_Size Camera_Parameters::getPreviewSize() const
	{
		return callObjectMethod(
			"getPreviewSize",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	inline JString Camera_Parameters::getSceneMode() const
	{
		return callObjectMethod(
			"getSceneMode",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Camera_Parameters::getSupportedAntibanding() const
	{
		return callObjectMethod(
			"getSupportedAntibanding",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedColorEffects() const
	{
		return callObjectMethod(
			"getSupportedColorEffects",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedFlashModes() const
	{
		return callObjectMethod(
			"getSupportedFlashModes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedFocusModes() const
	{
		return callObjectMethod(
			"getSupportedFocusModes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedJpegThumbnailSizes() const
	{
		return callObjectMethod(
			"getSupportedJpegThumbnailSizes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedPictureFormats() const
	{
		return callObjectMethod(
			"getSupportedPictureFormats",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedPictureSizes() const
	{
		return callObjectMethod(
			"getSupportedPictureSizes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedPreviewFormats() const
	{
		return callObjectMethod(
			"getSupportedPreviewFormats",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedPreviewFpsRange() const
	{
		return callObjectMethod(
			"getSupportedPreviewFpsRange",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedPreviewFrameRates() const
	{
		return callObjectMethod(
			"getSupportedPreviewFrameRates",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedPreviewSizes() const
	{
		return callObjectMethod(
			"getSupportedPreviewSizes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedSceneModes() const
	{
		return callObjectMethod(
			"getSupportedSceneModes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedVideoSizes() const
	{
		return callObjectMethod(
			"getSupportedVideoSizes",
			"()Ljava/util/List;"
		);
	}
	inline JObject Camera_Parameters::getSupportedWhiteBalance() const
	{
		return callObjectMethod(
			"getSupportedWhiteBalance",
			"()Ljava/util/List;"
		);
	}
	inline jfloat Camera_Parameters::getVerticalViewAngle() const
	{
		return callMethod<jfloat>(
			"getVerticalViewAngle",
			"()F"
		);
	}
	inline jboolean Camera_Parameters::getVideoStabilization() const
	{
		return callMethod<jboolean>(
			"getVideoStabilization",
			"()Z"
		);
	}
	inline JString Camera_Parameters::getWhiteBalance() const
	{
		return callObjectMethod(
			"getWhiteBalance",
			"()Ljava/lang/String;"
		);
	}
	inline jint Camera_Parameters::getZoom() const
	{
		return callMethod<jint>(
			"getZoom",
			"()I"
		);
	}
	inline JObject Camera_Parameters::getZoomRatios() const
	{
		return callObjectMethod(
			"getZoomRatios",
			"()Ljava/util/List;"
		);
	}
	inline jboolean Camera_Parameters::isAutoExposureLockSupported() const
	{
		return callMethod<jboolean>(
			"isAutoExposureLockSupported",
			"()Z"
		);
	}
	inline jboolean Camera_Parameters::isAutoWhiteBalanceLockSupported() const
	{
		return callMethod<jboolean>(
			"isAutoWhiteBalanceLockSupported",
			"()Z"
		);
	}
	inline jboolean Camera_Parameters::isSmoothZoomSupported() const
	{
		return callMethod<jboolean>(
			"isSmoothZoomSupported",
			"()Z"
		);
	}
	inline jboolean Camera_Parameters::isVideoSnapshotSupported() const
	{
		return callMethod<jboolean>(
			"isVideoSnapshotSupported",
			"()Z"
		);
	}
	inline jboolean Camera_Parameters::isVideoStabilizationSupported() const
	{
		return callMethod<jboolean>(
			"isVideoStabilizationSupported",
			"()Z"
		);
	}
	inline jboolean Camera_Parameters::isZoomSupported() const
	{
		return callMethod<jboolean>(
			"isZoomSupported",
			"()Z"
		);
	}
	inline void Camera_Parameters::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::removeGpsData() const
	{
		callMethod<void>(
			"removeGpsData",
			"()V"
		);
	}
	inline void Camera_Parameters::set(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Camera_Parameters::set(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Camera_Parameters::setAntibanding(JString arg0) const
	{
		callMethod<void>(
			"setAntibanding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setAutoExposureLock(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoExposureLock",
			"(Z)V",
			arg0
		);
	}
	inline void Camera_Parameters::setAutoWhiteBalanceLock(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoWhiteBalanceLock",
			"(Z)V",
			arg0
		);
	}
	inline void Camera_Parameters::setColorEffect(JString arg0) const
	{
		callMethod<void>(
			"setColorEffect",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setExposureCompensation(jint arg0) const
	{
		callMethod<void>(
			"setExposureCompensation",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setFlashMode(JString arg0) const
	{
		callMethod<void>(
			"setFlashMode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setFocusAreas(JObject arg0) const
	{
		callMethod<void>(
			"setFocusAreas",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Camera_Parameters::setFocusMode(JString arg0) const
	{
		callMethod<void>(
			"setFocusMode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setGpsAltitude(jdouble arg0) const
	{
		callMethod<void>(
			"setGpsAltitude",
			"(D)V",
			arg0
		);
	}
	inline void Camera_Parameters::setGpsLatitude(jdouble arg0) const
	{
		callMethod<void>(
			"setGpsLatitude",
			"(D)V",
			arg0
		);
	}
	inline void Camera_Parameters::setGpsLongitude(jdouble arg0) const
	{
		callMethod<void>(
			"setGpsLongitude",
			"(D)V",
			arg0
		);
	}
	inline void Camera_Parameters::setGpsProcessingMethod(JString arg0) const
	{
		callMethod<void>(
			"setGpsProcessingMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setGpsTimestamp(jlong arg0) const
	{
		callMethod<void>(
			"setGpsTimestamp",
			"(J)V",
			arg0
		);
	}
	inline void Camera_Parameters::setJpegQuality(jint arg0) const
	{
		callMethod<void>(
			"setJpegQuality",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setJpegThumbnailQuality(jint arg0) const
	{
		callMethod<void>(
			"setJpegThumbnailQuality",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setJpegThumbnailSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setJpegThumbnailSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Camera_Parameters::setMeteringAreas(JObject arg0) const
	{
		callMethod<void>(
			"setMeteringAreas",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Camera_Parameters::setPictureFormat(jint arg0) const
	{
		callMethod<void>(
			"setPictureFormat",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setPictureSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPictureSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Camera_Parameters::setPreviewFormat(jint arg0) const
	{
		callMethod<void>(
			"setPreviewFormat",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setPreviewFpsRange(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPreviewFpsRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Camera_Parameters::setPreviewFrameRate(jint arg0) const
	{
		callMethod<void>(
			"setPreviewFrameRate",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setPreviewSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPreviewSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Camera_Parameters::setRecordingHint(jboolean arg0) const
	{
		callMethod<void>(
			"setRecordingHint",
			"(Z)V",
			arg0
		);
	}
	inline void Camera_Parameters::setRotation(jint arg0) const
	{
		callMethod<void>(
			"setRotation",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::setSceneMode(JString arg0) const
	{
		callMethod<void>(
			"setSceneMode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setVideoStabilization(jboolean arg0) const
	{
		callMethod<void>(
			"setVideoStabilization",
			"(Z)V",
			arg0
		);
	}
	inline void Camera_Parameters::setWhiteBalance(JString arg0) const
	{
		callMethod<void>(
			"setWhiteBalance",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Camera_Parameters::setZoom(jint arg0) const
	{
		callMethod<void>(
			"setZoom",
			"(I)V",
			arg0
		);
	}
	inline void Camera_Parameters::unflatten(JString arg0) const
	{
		callMethod<void>(
			"unflatten",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
