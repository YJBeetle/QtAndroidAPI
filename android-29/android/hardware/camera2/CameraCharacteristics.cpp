#include "./CameraCharacteristics_Key.hpp"
#include "./params/RecommendedStreamConfigurationMap.hpp"
#include "./CameraCharacteristics.hpp"

namespace android::hardware::camera2
{
	// Fields
	QAndroidJniObject CameraCharacteristics::COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AE_AVAILABLE_ANTIBANDING_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_AVAILABLE_ANTIBANDING_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AE_AVAILABLE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AE_COMPENSATION_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_COMPENSATION_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AE_COMPENSATION_STEP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_COMPENSATION_STEP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AE_LOCK_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_LOCK_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AF_AVAILABLE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AF_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AVAILABLE_EFFECTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_EFFECTS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AVAILABLE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AVAILABLE_SCENE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_SCENE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AWB_AVAILABLE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AWB_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_AWB_LOCK_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AWB_LOCK_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_MAX_REGIONS_AE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_MAX_REGIONS_AE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_MAX_REGIONS_AF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_MAX_REGIONS_AF",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_MAX_REGIONS_AWB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_MAX_REGIONS_AWB",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::DEPTH_DEPTH_IS_EXCLUSIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"DEPTH_DEPTH_IS_EXCLUSIVE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::DISTORTION_CORRECTION_AVAILABLE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"DISTORTION_CORRECTION_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::EDGE_AVAILABLE_EDGE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"EDGE_AVAILABLE_EDGE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::FLASH_INFO_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"FLASH_INFO_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::INFO_SUPPORTED_HARDWARE_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"INFO_SUPPORTED_HARDWARE_LEVEL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::INFO_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"INFO_VERSION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::JPEG_AVAILABLE_THUMBNAIL_SIZES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"JPEG_AVAILABLE_THUMBNAIL_SIZES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_DISTORTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_DISTORTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_FACING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_FACING",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_AVAILABLE_APERTURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_APERTURES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_AVAILABLE_FILTER_DENSITIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_FILTER_DENSITIES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_AVAILABLE_FOCAL_LENGTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_FOCAL_LENGTHS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_FOCUS_DISTANCE_CALIBRATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_HYPERFOCAL_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_HYPERFOCAL_DISTANCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INFO_MINIMUM_FOCUS_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_MINIMUM_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_INTRINSIC_CALIBRATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INTRINSIC_CALIBRATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_POSE_REFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_POSE_REFERENCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_POSE_ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_POSE_ROTATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_POSE_TRANSLATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_POSE_TRANSLATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LENS_RADIAL_DISTORTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_RADIAL_DISTORTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REPROCESS_MAX_CAPTURE_STALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REPROCESS_MAX_CAPTURE_STALL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_AVAILABLE_CAPABILITIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_AVAILABLE_CAPABILITIES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_MAX_NUM_INPUT_STREAMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_INPUT_STREAMS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_MAX_NUM_OUTPUT_PROC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_OUTPUT_PROC",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_MAX_NUM_OUTPUT_PROC_STALLING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_OUTPUT_PROC_STALLING",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_MAX_NUM_OUTPUT_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_OUTPUT_RAW",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_PARTIAL_RESULT_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_PARTIAL_RESULT_COUNT",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::REQUEST_PIPELINE_MAX_DEPTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_PIPELINE_MAX_DEPTH",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SCALER_AVAILABLE_MAX_DIGITAL_ZOOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_AVAILABLE_MAX_DIGITAL_ZOOM",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SCALER_CROPPING_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_CROPPING_TYPE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SCALER_MANDATORY_STREAM_COMBINATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SCALER_STREAM_CONFIGURATION_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_STREAM_CONFIGURATION_MAP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_AVAILABLE_TEST_PATTERN_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_AVAILABLE_TEST_PATTERN_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_BLACK_LEVEL_PATTERN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_BLACK_LEVEL_PATTERN",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_CALIBRATION_TRANSFORM1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_CALIBRATION_TRANSFORM1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_CALIBRATION_TRANSFORM2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_CALIBRATION_TRANSFORM2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_COLOR_TRANSFORM1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_COLOR_TRANSFORM1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_COLOR_TRANSFORM2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_COLOR_TRANSFORM2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_FORWARD_MATRIX1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_FORWARD_MATRIX1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_FORWARD_MATRIX2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_FORWARD_MATRIX2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_ACTIVE_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_ACTIVE_ARRAY_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_EXPOSURE_TIME_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_EXPOSURE_TIME_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_LENS_SHADING_APPLIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_LENS_SHADING_APPLIED",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_MAX_FRAME_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_MAX_FRAME_DURATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_PHYSICAL_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PHYSICAL_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_PIXEL_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PIXEL_ARRAY_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_SENSITIVITY_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_SENSITIVITY_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_TIMESTAMP_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_TIMESTAMP_SOURCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_INFO_WHITE_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_WHITE_LEVEL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_MAX_ANALOG_SENSITIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_MAX_ANALOG_SENSITIVITY",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_OPTICAL_BLACK_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_OPTICAL_BLACK_REGIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_ORIENTATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_REFERENCE_ILLUMINANT1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_REFERENCE_ILLUMINANT1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SENSOR_REFERENCE_ILLUMINANT2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_REFERENCE_ILLUMINANT2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SHADING_AVAILABLE_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SHADING_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::STATISTICS_INFO_MAX_FACE_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_MAX_FACE_COUNT",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::SYNC_MAX_LATENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SYNC_MAX_LATENCY",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::TONEMAP_AVAILABLE_TONE_MAP_MODES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"TONEMAP_AVAILABLE_TONE_MAP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	QAndroidJniObject CameraCharacteristics::TONEMAP_MAX_CURVE_POINTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"TONEMAP_MAX_CURVE_POINTS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	
	CameraCharacteristics::CameraCharacteristics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject CameraCharacteristics::get(android::hardware::camera2::CameraCharacteristics_Key arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CameraCharacteristics$Key;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject CameraCharacteristics::getAvailableCaptureRequestKeys()
	{
		return __thiz.callObjectMethod(
			"getAvailableCaptureRequestKeys",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getAvailableCaptureResultKeys()
	{
		return __thiz.callObjectMethod(
			"getAvailableCaptureResultKeys",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getAvailablePhysicalCameraRequestKeys()
	{
		return __thiz.callObjectMethod(
			"getAvailablePhysicalCameraRequestKeys",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getAvailableSessionKeys()
	{
		return __thiz.callObjectMethod(
			"getAvailableSessionKeys",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getKeysNeedingPermission()
	{
		return __thiz.callObjectMethod(
			"getKeysNeedingPermission",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getPhysicalCameraIds()
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraIds",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject CameraCharacteristics::getRecommendedStreamConfigurationMap(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRecommendedStreamConfigurationMap",
			"(I)Landroid/hardware/camera2/params/RecommendedStreamConfigurationMap;",
			arg0
		);
	}
} // namespace android::hardware::camera2

