#include "./CaptureRequest.hpp"
#include "./CaptureResult_Key.hpp"
#include "./CaptureResult.hpp"

namespace android::hardware::camera2
{
	// Fields
	android::hardware::camera2::CaptureResult_Key CaptureResult::BLACK_LEVEL_LOCK()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"BLACK_LEVEL_LOCK",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::COLOR_CORRECTION_ABERRATION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_ABERRATION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::COLOR_CORRECTION_GAINS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_GAINS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::COLOR_CORRECTION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::COLOR_CORRECTION_TRANSFORM()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"COLOR_CORRECTION_TRANSFORM",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_ANTIBANDING_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_ANTIBANDING_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_EXPOSURE_COMPENSATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_EXPOSURE_COMPENSATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_LOCK()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_LOCK",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_PRECAPTURE_TRIGGER()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_PRECAPTURE_TRIGGER",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_REGIONS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_STATE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AE_TARGET_FPS_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AE_TARGET_FPS_RANGE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AF_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AF_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_REGIONS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AF_SCENE_CHANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_SCENE_CHANGE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AF_STATE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AF_TRIGGER()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AF_TRIGGER",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AWB_LOCK()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_LOCK",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AWB_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AWB_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_REGIONS",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_AWB_STATE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_AWB_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_CAPTURE_INTENT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_CAPTURE_INTENT",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_EFFECT_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_EFFECT_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_ENABLE_ZSL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_ENABLE_ZSL",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_EXTENDED_SCENE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_EXTENDED_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_POST_RAW_SENSITIVITY_BOOST()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_SCENE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_VIDEO_STABILIZATION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_VIDEO_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::CONTROL_ZOOM_RATIO()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"CONTROL_ZOOM_RATIO",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::DISTORTION_CORRECTION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"DISTORTION_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::EDGE_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"EDGE_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::FLASH_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"FLASH_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::FLASH_STATE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"FLASH_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::HOT_PIXEL_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"HOT_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::JPEG_GPS_LOCATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_GPS_LOCATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::JPEG_ORIENTATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_ORIENTATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::JPEG_QUALITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_QUALITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::JPEG_THUMBNAIL_QUALITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_THUMBNAIL_QUALITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::JPEG_THUMBNAIL_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"JPEG_THUMBNAIL_SIZE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_APERTURE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_APERTURE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_DISTORTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_DISTORTION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_FILTER_DENSITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FILTER_DENSITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_FOCAL_LENGTH()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FOCAL_LENGTH",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_FOCUS_DISTANCE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_FOCUS_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_FOCUS_RANGE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_INTRINSIC_CALIBRATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_INTRINSIC_CALIBRATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_OPTICAL_STABILIZATION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_OPTICAL_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_POSE_ROTATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_POSE_ROTATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_POSE_TRANSLATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_POSE_TRANSLATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_RADIAL_DISTORTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_RADIAL_DISTORTION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LENS_STATE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LENS_STATE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::LOGICAL_MULTI_CAMERA_ACTIVE_PHYSICAL_ID()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"LOGICAL_MULTI_CAMERA_ACTIVE_PHYSICAL_ID",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::NOISE_REDUCTION_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"NOISE_REDUCTION_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::REPROCESS_EFFECTIVE_EXPOSURE_FACTOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::REQUEST_PIPELINE_DEPTH()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"REQUEST_PIPELINE_DEPTH",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SCALER_CROP_REGION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SCALER_CROP_REGION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SCALER_ROTATE_AND_CROP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SCALER_ROTATE_AND_CROP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_DYNAMIC_BLACK_LEVEL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_DYNAMIC_BLACK_LEVEL",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_DYNAMIC_WHITE_LEVEL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_DYNAMIC_WHITE_LEVEL",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_EXPOSURE_TIME()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_EXPOSURE_TIME",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_FRAME_DURATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_FRAME_DURATION",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_GREEN_SPLIT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_GREEN_SPLIT",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_NEUTRAL_COLOR_POINT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_NEUTRAL_COLOR_POINT",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_NOISE_PROFILE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_NOISE_PROFILE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_PIXEL_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_RAW_BINNING_FACTOR_USED()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_RAW_BINNING_FACTOR_USED",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_ROLLING_SHUTTER_SKEW()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_ROLLING_SHUTTER_SKEW",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_SENSITIVITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_SENSITIVITY",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_TEST_PATTERN_DATA()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_TEST_PATTERN_DATA",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_TEST_PATTERN_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_TEST_PATTERN_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SENSOR_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SENSOR_TIMESTAMP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::SHADING_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"SHADING_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_FACES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_FACES",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_FACE_DETECT_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_FACE_DETECT_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_HOT_PIXEL_MAP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_HOT_PIXEL_MAP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_HOT_PIXEL_MAP_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_HOT_PIXEL_MAP_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_LENS_SHADING_CORRECTION_MAP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_LENS_SHADING_CORRECTION_MAP",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_LENS_SHADING_MAP_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_LENS_SHADING_MAP_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_OIS_DATA_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_OIS_DATA_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_OIS_SAMPLES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_OIS_SAMPLES",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::STATISTICS_SCENE_FLICKER()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"STATISTICS_SCENE_FLICKER",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::TONEMAP_CURVE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_CURVE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::TONEMAP_GAMMA()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_GAMMA",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::TONEMAP_MODE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_MODE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	android::hardware::camera2::CaptureResult_Key CaptureResult::TONEMAP_PRESET_CURVE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CaptureResult",
			"TONEMAP_PRESET_CURVE",
			"Landroid/hardware/camera2/CaptureResult$Key;"
		);
	}
	
	// QJniObject forward
	CaptureResult::CaptureResult(QJniObject obj) : android::hardware::camera2::CameraMetadata(obj) {}
	
	// Constructors
	
	// Methods
	jobject CaptureResult::get(android::hardware::camera2::CaptureResult_Key arg0)
	{
		return callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureResult$Key;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jstring CaptureResult::getCameraId()
	{
		return callObjectMethod(
			"getCameraId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong CaptureResult::getFrameNumber()
	{
		return callMethod<jlong>(
			"getFrameNumber",
			"()J"
		);
	}
	JObject CaptureResult::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	android::hardware::camera2::CaptureRequest CaptureResult::getRequest()
	{
		return callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint CaptureResult::getSequenceId()
	{
		return callMethod<jint>(
			"getSequenceId",
			"()I"
		);
	}
} // namespace android::hardware::camera2

