#include "./CaptureRequest_Key.hpp"
#include "../../os/Parcel.hpp"
#include "./CaptureRequest.hpp"

namespace android::hardware::camera2
{
	// Fields
	QAndroidJniObject CaptureRequest::BLACK_LEVEL_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"BLACK_LEVEL_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_ABERRATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_ABERRATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_GAINS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_GAINS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_TRANSFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_TRANSFORM",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_ANTIBANDING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_ANTIBANDING_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_EXPOSURE_COMPENSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_EXPOSURE_COMPENSATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_PRECAPTURE_TRIGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_PRECAPTURE_TRIGGER",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_TARGET_FPS_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_TARGET_FPS_RANGE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AF_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AF_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AF_TRIGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_TRIGGER",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AWB_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AWB_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_AWB_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_CAPTURE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_CAPTURE_INTENT",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_EFFECT_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_EFFECT_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_ENABLE_ZSL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_ENABLE_ZSL",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_POST_RAW_SENSITIVITY_BOOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_SCENE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CONTROL_VIDEO_STABILIZATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_VIDEO_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject CaptureRequest::DISTORTION_CORRECTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"DISTORTION_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::EDGE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"EDGE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::FLASH_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"FLASH_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::HOT_PIXEL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"HOT_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::JPEG_GPS_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_GPS_LOCATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::JPEG_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_ORIENTATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::JPEG_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_QUALITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::JPEG_THUMBNAIL_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_THUMBNAIL_QUALITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::JPEG_THUMBNAIL_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_THUMBNAIL_SIZE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::LENS_APERTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_APERTURE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::LENS_FILTER_DENSITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FILTER_DENSITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::LENS_FOCAL_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FOCAL_LENGTH",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::LENS_FOCUS_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::LENS_OPTICAL_STABILIZATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_OPTICAL_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::NOISE_REDUCTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"NOISE_REDUCTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::REPROCESS_EFFECTIVE_EXPOSURE_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SCALER_CROP_REGION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SCALER_CROP_REGION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SENSOR_EXPOSURE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_EXPOSURE_TIME",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SENSOR_FRAME_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_FRAME_DURATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SENSOR_SENSITIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_SENSITIVITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SENSOR_TEST_PATTERN_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_TEST_PATTERN_DATA",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SENSOR_TEST_PATTERN_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_TEST_PATTERN_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::SHADING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SHADING_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::STATISTICS_FACE_DETECT_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_FACE_DETECT_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::STATISTICS_HOT_PIXEL_MAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_HOT_PIXEL_MAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::STATISTICS_LENS_SHADING_MAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_LENS_SHADING_MAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::STATISTICS_OIS_DATA_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_OIS_DATA_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::TONEMAP_CURVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_CURVE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::TONEMAP_GAMMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_GAMMA",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::TONEMAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	QAndroidJniObject CaptureRequest::TONEMAP_PRESET_CURVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_PRESET_CURVE",
			"Landroid/hardware/camera2/CaptureRequest$Key;"
		);
	}
	
	// QAndroidJniObject forward
	CaptureRequest::CaptureRequest(QAndroidJniObject obj) : android::hardware::camera2::CameraMetadata(obj) {}
	
	// Constructors
	
	// Methods
	jint CaptureRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CaptureRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject CaptureRequest::get(android::hardware::camera2::CaptureRequest_Key arg0)
	{
		return callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject CaptureRequest::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	jobject CaptureRequest::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint CaptureRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CaptureRequest::isReprocess()
	{
		return callMethod<jboolean>(
			"isReprocess",
			"()Z"
		);
	}
	void CaptureRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::camera2

