#include "./CaptureRequest.hpp"
#include "./CaptureResult_Key.hpp"
#include "./CaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	QAndroidJniObject CaptureResult::BLACK_LEVEL_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"BLACK_LEVEL_LOCK",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::COLOR_CORRECTION_ABERRATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_ABERRATION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::COLOR_CORRECTION_GAINS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_GAINS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::COLOR_CORRECTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::COLOR_CORRECTION_TRANSFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_TRANSFORM",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_ANTIBANDING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_ANTIBANDING_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_EXPOSURE_COMPENSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_EXPOSURE_COMPENSATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_LOCK",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_PRECAPTURE_TRIGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_PRECAPTURE_TRIGGER",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_REGIONS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AE_TARGET_FPS_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_TARGET_FPS_RANGE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AF_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AF_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_REGIONS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AF_SCENE_CHANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_SCENE_CHANGE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AF_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AF_TRIGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_TRIGGER",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AWB_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_LOCK",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AWB_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AWB_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_REGIONS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_AWB_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_CAPTURE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_CAPTURE_INTENT",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_EFFECT_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_EFFECT_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_ENABLE_ZSL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_ENABLE_ZSL",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_POST_RAW_SENSITIVITY_BOOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_SCENE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::CONTROL_VIDEO_STABILIZATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_VIDEO_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::DISTORTION_CORRECTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"DISTORTION_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::EDGE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"EDGE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::FLASH_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"FLASH_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::FLASH_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"FLASH_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::HOT_PIXEL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"HOT_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::JPEG_GPS_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_GPS_LOCATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::JPEG_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_ORIENTATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::JPEG_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_QUALITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::JPEG_THUMBNAIL_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_THUMBNAIL_QUALITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::JPEG_THUMBNAIL_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_THUMBNAIL_SIZE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_APERTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_APERTURE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_DISTORTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_DISTORTION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_FILTER_DENSITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FILTER_DENSITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_FOCAL_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FOCAL_LENGTH",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_FOCUS_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_FOCUS_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FOCUS_RANGE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_INTRINSIC_CALIBRATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_INTRINSIC_CALIBRATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_OPTICAL_STABILIZATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_OPTICAL_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_POSE_ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_POSE_ROTATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_POSE_TRANSLATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_POSE_TRANSLATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_RADIAL_DISTORTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_RADIAL_DISTORTION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LENS_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::LOGICAL_MULTI_CAMERA_ACTIVE_PHYSICAL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LOGICAL_MULTI_CAMERA_ACTIVE_PHYSICAL_ID",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::NOISE_REDUCTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"NOISE_REDUCTION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::REPROCESS_EFFECTIVE_EXPOSURE_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::REQUEST_PIPELINE_DEPTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"REQUEST_PIPELINE_DEPTH",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SCALER_CROP_REGION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SCALER_CROP_REGION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_DYNAMIC_BLACK_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_DYNAMIC_BLACK_LEVEL",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_DYNAMIC_WHITE_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_DYNAMIC_WHITE_LEVEL",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_EXPOSURE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_EXPOSURE_TIME",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_FRAME_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_FRAME_DURATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_GREEN_SPLIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_GREEN_SPLIT",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_NEUTRAL_COLOR_POINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_NEUTRAL_COLOR_POINT",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_NOISE_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_NOISE_PROFILE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_ROLLING_SHUTTER_SKEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_ROLLING_SHUTTER_SKEW",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_SENSITIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_SENSITIVITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_TEST_PATTERN_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_TEST_PATTERN_DATA",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_TEST_PATTERN_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_TEST_PATTERN_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SENSOR_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_TIMESTAMP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::SHADING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SHADING_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_FACES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_FACES",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_FACE_DETECT_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_FACE_DETECT_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_HOT_PIXEL_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_HOT_PIXEL_MAP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_HOT_PIXEL_MAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_HOT_PIXEL_MAP_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_LENS_SHADING_CORRECTION_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_LENS_SHADING_CORRECTION_MAP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_LENS_SHADING_MAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_LENS_SHADING_MAP_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_OIS_DATA_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_OIS_DATA_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_OIS_SAMPLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_OIS_SAMPLES",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::STATISTICS_SCENE_FLICKER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_SCENE_FLICKER",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::TONEMAP_CURVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_CURVE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::TONEMAP_GAMMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_GAMMA",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::TONEMAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	QAndroidJniObject CaptureResult::TONEMAP_PRESET_CURVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_PRESET_CURVE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	
	CaptureResult::CaptureResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject CaptureResult::get(android::hardware::camera2::CaptureResult_Key arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureResult$Key;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jlong CaptureResult::getFrameNumber()
	{
		return __thiz.callMethod<jlong>(
			"getFrameNumber",
			"()J"
		);
	}
	QAndroidJniObject CaptureResult::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CaptureResult::getRequest()
	{
		return __thiz.callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint CaptureResult::getSequenceId()
	{
		return __thiz.callMethod<jint>(
			"getSequenceId",
			"()I"
		);
	}
} // namespace android::hardware::camera2

