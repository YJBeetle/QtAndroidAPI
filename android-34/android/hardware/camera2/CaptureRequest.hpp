#pragma once

#include "./CaptureRequest_Key.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./CaptureRequest.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::BLACK_LEVEL_LOCK()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"BLACK_LEVEL_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::COLOR_CORRECTION_ABERRATION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_ABERRATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::COLOR_CORRECTION_GAINS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_GAINS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::COLOR_CORRECTION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::COLOR_CORRECTION_TRANSFORM()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_TRANSFORM",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_ANTIBANDING_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_ANTIBANDING_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_EXPOSURE_COMPENSATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_EXPOSURE_COMPENSATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_LOCK()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_PRECAPTURE_TRIGGER()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_PRECAPTURE_TRIGGER",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AE_TARGET_FPS_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_TARGET_FPS_RANGE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AF_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AF_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AF_TRIGGER()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_TRIGGER",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AUTOFRAMING()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AUTOFRAMING",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AWB_LOCK()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AWB_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_AWB_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_CAPTURE_INTENT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_CAPTURE_INTENT",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_EFFECT_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_EFFECT_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_ENABLE_ZSL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_ENABLE_ZSL",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_EXTENDED_SCENE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_EXTENDED_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_POST_RAW_SENSITIVITY_BOOST()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_SCENE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_SETTINGS_OVERRIDE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_SETTINGS_OVERRIDE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_VIDEO_STABILIZATION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_VIDEO_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::CONTROL_ZOOM_RATIO()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_ZOOM_RATIO",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline JObject CaptureRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::DISTORTION_CORRECTION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"DISTORTION_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::EDGE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"EDGE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::EXTENSION_STRENGTH()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"EXTENSION_STRENGTH",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::FLASH_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"FLASH_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::HOT_PIXEL_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"HOT_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::JPEG_GPS_LOCATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_GPS_LOCATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::JPEG_ORIENTATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_ORIENTATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::JPEG_QUALITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_QUALITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::JPEG_THUMBNAIL_QUALITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_THUMBNAIL_QUALITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::JPEG_THUMBNAIL_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_THUMBNAIL_SIZE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::LENS_APERTURE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_APERTURE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::LENS_FILTER_DENSITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FILTER_DENSITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::LENS_FOCAL_LENGTH()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FOCAL_LENGTH",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::LENS_FOCUS_DISTANCE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::LENS_OPTICAL_STABILIZATION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_OPTICAL_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::NOISE_REDUCTION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"NOISE_REDUCTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::REPROCESS_EFFECTIVE_EXPOSURE_FACTOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SCALER_CROP_REGION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SCALER_CROP_REGION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SCALER_ROTATE_AND_CROP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SCALER_ROTATE_AND_CROP",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SENSOR_EXPOSURE_TIME()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_EXPOSURE_TIME",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SENSOR_FRAME_DURATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_FRAME_DURATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SENSOR_PIXEL_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SENSOR_SENSITIVITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_SENSITIVITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SENSOR_TEST_PATTERN_DATA()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_TEST_PATTERN_DATA",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SENSOR_TEST_PATTERN_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_TEST_PATTERN_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::SHADING_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SHADING_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::STATISTICS_FACE_DETECT_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_FACE_DETECT_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::STATISTICS_HOT_PIXEL_MAP_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_HOT_PIXEL_MAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::STATISTICS_LENS_SHADING_MAP_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_LENS_SHADING_MAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::STATISTICS_OIS_DATA_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_OIS_DATA_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::TONEMAP_CURVE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_CURVE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::TONEMAP_GAMMA()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_GAMMA",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::TONEMAP_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Key CaptureRequest::TONEMAP_PRESET_CURVE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_PRESET_CURVE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CaptureRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CaptureRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CaptureRequest::get(android::hardware::camera2::CaptureRequest_Key arg0) const
	{
		return callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject CaptureRequest::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	inline JObject CaptureRequest::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	inline jint CaptureRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean CaptureRequest::isReprocess() const
	{
		return callMethod<jboolean>(
			"isReprocess",
			"()Z"
		);
	}
	inline void CaptureRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::camera2

// Base class headers
#include "./CameraMetadata.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
