#pragma once

#include "./CameraCharacteristics_Key.def.hpp"
#include "./params/RecommendedStreamConfigurationMap.def.hpp"
#include "../../../JObject.hpp"
#include "./CameraCharacteristics.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::AUTOMOTIVE_LENS_FACING()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"AUTOMOTIVE_LENS_FACING",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::AUTOMOTIVE_LOCATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"AUTOMOTIVE_LOCATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AE_AVAILABLE_ANTIBANDING_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_AVAILABLE_ANTIBANDING_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AE_AVAILABLE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AE_COMPENSATION_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_COMPENSATION_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AE_COMPENSATION_STEP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_COMPENSATION_STEP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AE_LOCK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AE_LOCK_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AF_AVAILABLE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AF_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AUTOFRAMING_AVAILABLE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AUTOFRAMING_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AVAILABLE_EFFECTS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_EFFECTS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_CAPABILITIES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_CAPABILITIES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AVAILABLE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AVAILABLE_SCENE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_SCENE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AVAILABLE_SETTINGS_OVERRIDES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_SETTINGS_OVERRIDES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AWB_AVAILABLE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AWB_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_AWB_LOCK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_AWB_LOCK_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_MAX_REGIONS_AE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_MAX_REGIONS_AE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_MAX_REGIONS_AF()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_MAX_REGIONS_AF",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_MAX_REGIONS_AWB()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_MAX_REGIONS_AWB",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::CONTROL_ZOOM_RATIO_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"CONTROL_ZOOM_RATIO_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::DEPTH_DEPTH_IS_EXCLUSIVE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"DEPTH_DEPTH_IS_EXCLUSIVE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::DISTORTION_CORRECTION_AVAILABLE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"DISTORTION_CORRECTION_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::EDGE_AVAILABLE_EDGE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"EDGE_AVAILABLE_EDGE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::FLASH_INFO_AVAILABLE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"FLASH_INFO_AVAILABLE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::FLASH_INFO_STRENGTH_DEFAULT_LEVEL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"FLASH_INFO_STRENGTH_DEFAULT_LEVEL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::FLASH_INFO_STRENGTH_MAXIMUM_LEVEL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"FLASH_INFO_STRENGTH_MAXIMUM_LEVEL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::INFO_DEVICE_STATE_SENSOR_ORIENTATION_MAP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"INFO_DEVICE_STATE_SENSOR_ORIENTATION_MAP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::INFO_SUPPORTED_HARDWARE_LEVEL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"INFO_SUPPORTED_HARDWARE_LEVEL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::INFO_VERSION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"INFO_VERSION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::JPEG_AVAILABLE_THUMBNAIL_SIZES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"JPEG_AVAILABLE_THUMBNAIL_SIZES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_DISTORTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_DISTORTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_DISTORTION_MAXIMUM_RESOLUTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_DISTORTION_MAXIMUM_RESOLUTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_FACING()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_FACING",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_AVAILABLE_APERTURES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_APERTURES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_AVAILABLE_FILTER_DENSITIES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_FILTER_DENSITIES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_AVAILABLE_FOCAL_LENGTHS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_FOCAL_LENGTHS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_FOCUS_DISTANCE_CALIBRATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_HYPERFOCAL_DISTANCE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_HYPERFOCAL_DISTANCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INFO_MINIMUM_FOCUS_DISTANCE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INFO_MINIMUM_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INTRINSIC_CALIBRATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INTRINSIC_CALIBRATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_INTRINSIC_CALIBRATION_MAXIMUM_RESOLUTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_INTRINSIC_CALIBRATION_MAXIMUM_RESOLUTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_POSE_REFERENCE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_POSE_REFERENCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_POSE_ROTATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_POSE_ROTATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_POSE_TRANSLATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_POSE_TRANSLATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LENS_RADIAL_DISTORTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LENS_RADIAL_DISTORTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REPROCESS_MAX_CAPTURE_STALL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REPROCESS_MAX_CAPTURE_STALL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_AVAILABLE_CAPABILITIES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_AVAILABLE_CAPABILITIES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_AVAILABLE_COLOR_SPACE_PROFILES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_AVAILABLE_COLOR_SPACE_PROFILES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_AVAILABLE_DYNAMIC_RANGE_PROFILES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_AVAILABLE_DYNAMIC_RANGE_PROFILES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_MAX_NUM_INPUT_STREAMS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_INPUT_STREAMS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_MAX_NUM_OUTPUT_PROC()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_OUTPUT_PROC",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_MAX_NUM_OUTPUT_PROC_STALLING()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_OUTPUT_PROC_STALLING",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_MAX_NUM_OUTPUT_RAW()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_MAX_NUM_OUTPUT_RAW",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_PARTIAL_RESULT_COUNT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_PARTIAL_RESULT_COUNT",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_PIPELINE_MAX_DEPTH()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_PIPELINE_MAX_DEPTH",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::REQUEST_RECOMMENDED_TEN_BIT_DYNAMIC_RANGE_PROFILE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"REQUEST_RECOMMENDED_TEN_BIT_DYNAMIC_RANGE_PROFILE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_AVAILABLE_MAX_DIGITAL_ZOOM()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_AVAILABLE_MAX_DIGITAL_ZOOM",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_AVAILABLE_ROTATE_AND_CROP_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_AVAILABLE_ROTATE_AND_CROP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_AVAILABLE_STREAM_USE_CASES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_AVAILABLE_STREAM_USE_CASES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_CROPPING_TYPE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_CROPPING_TYPE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_DEFAULT_SECURE_IMAGE_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_DEFAULT_SECURE_IMAGE_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MANDATORY_CONCURRENT_STREAM_COMBINATIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_CONCURRENT_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MANDATORY_MAXIMUM_RESOLUTION_STREAM_COMBINATIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_MAXIMUM_RESOLUTION_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MANDATORY_PREVIEW_STABILIZATION_OUTPUT_STREAM_COMBINATIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_PREVIEW_STABILIZATION_OUTPUT_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MANDATORY_STREAM_COMBINATIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MANDATORY_TEN_BIT_OUTPUT_STREAM_COMBINATIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_TEN_BIT_OUTPUT_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MANDATORY_USE_CASE_STREAM_COMBINATIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MANDATORY_USE_CASE_STREAM_COMBINATIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_MULTI_RESOLUTION_STREAM_CONFIGURATION_MAP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_MULTI_RESOLUTION_STREAM_CONFIGURATION_MAP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_STREAM_CONFIGURATION_MAP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_STREAM_CONFIGURATION_MAP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SCALER_STREAM_CONFIGURATION_MAP_MAXIMUM_RESOLUTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SCALER_STREAM_CONFIGURATION_MAP_MAXIMUM_RESOLUTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_AVAILABLE_TEST_PATTERN_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_AVAILABLE_TEST_PATTERN_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_BLACK_LEVEL_PATTERN()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_BLACK_LEVEL_PATTERN",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_CALIBRATION_TRANSFORM1()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_CALIBRATION_TRANSFORM1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_CALIBRATION_TRANSFORM2()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_CALIBRATION_TRANSFORM2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_COLOR_TRANSFORM1()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_COLOR_TRANSFORM1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_COLOR_TRANSFORM2()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_COLOR_TRANSFORM2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_FORWARD_MATRIX1()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_FORWARD_MATRIX1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_FORWARD_MATRIX2()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_FORWARD_MATRIX2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_ACTIVE_ARRAY_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_ACTIVE_ARRAY_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_BINNING_FACTOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_BINNING_FACTOR",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_EXPOSURE_TIME_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_EXPOSURE_TIME_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_LENS_SHADING_APPLIED()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_LENS_SHADING_APPLIED",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_MAX_FRAME_DURATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_MAX_FRAME_DURATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_PHYSICAL_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PHYSICAL_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_PIXEL_ARRAY_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PIXEL_ARRAY_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_PIXEL_ARRAY_SIZE_MAXIMUM_RESOLUTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PIXEL_ARRAY_SIZE_MAXIMUM_RESOLUTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_SENSITIVITY_RANGE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_SENSITIVITY_RANGE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_TIMESTAMP_SOURCE()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_TIMESTAMP_SOURCE",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_INFO_WHITE_LEVEL()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_INFO_WHITE_LEVEL",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_MAX_ANALOG_SENSITIVITY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_MAX_ANALOG_SENSITIVITY",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_OPTICAL_BLACK_REGIONS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_OPTICAL_BLACK_REGIONS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_ORIENTATION()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_ORIENTATION",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_READOUT_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_READOUT_TIMESTAMP",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_REFERENCE_ILLUMINANT1()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_REFERENCE_ILLUMINANT1",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SENSOR_REFERENCE_ILLUMINANT2()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SENSOR_REFERENCE_ILLUMINANT2",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SHADING_AVAILABLE_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SHADING_AVAILABLE_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::STATISTICS_INFO_MAX_FACE_COUNT()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"STATISTICS_INFO_MAX_FACE_COUNT",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::SYNC_MAX_LATENCY()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"SYNC_MAX_LATENCY",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::TONEMAP_AVAILABLE_TONE_MAP_MODES()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"TONEMAP_AVAILABLE_TONE_MAP_MODES",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics_Key CameraCharacteristics::TONEMAP_MAX_CURVE_POINTS()
	{
		return getStaticObjectField(
			"android.hardware.camera2.CameraCharacteristics",
			"TONEMAP_MAX_CURVE_POINTS",
			"Landroid/hardware/camera2/CameraCharacteristics$Key;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CameraCharacteristics::get(android::hardware::camera2::CameraCharacteristics_Key arg0) const
	{
		return callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CameraCharacteristics$Key;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject CameraCharacteristics::getAvailableCaptureRequestKeys() const
	{
		return callObjectMethod(
			"getAvailableCaptureRequestKeys",
			"()Ljava/util/List;"
		);
	}
	inline JObject CameraCharacteristics::getAvailableCaptureResultKeys() const
	{
		return callObjectMethod(
			"getAvailableCaptureResultKeys",
			"()Ljava/util/List;"
		);
	}
	inline JObject CameraCharacteristics::getAvailablePhysicalCameraRequestKeys() const
	{
		return callObjectMethod(
			"getAvailablePhysicalCameraRequestKeys",
			"()Ljava/util/List;"
		);
	}
	inline JObject CameraCharacteristics::getAvailableSessionKeys() const
	{
		return callObjectMethod(
			"getAvailableSessionKeys",
			"()Ljava/util/List;"
		);
	}
	inline JObject CameraCharacteristics::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	inline JObject CameraCharacteristics::getKeysNeedingPermission() const
	{
		return callObjectMethod(
			"getKeysNeedingPermission",
			"()Ljava/util/List;"
		);
	}
	inline JObject CameraCharacteristics::getPhysicalCameraIds() const
	{
		return callObjectMethod(
			"getPhysicalCameraIds",
			"()Ljava/util/Set;"
		);
	}
	inline android::hardware::camera2::params::RecommendedStreamConfigurationMap CameraCharacteristics::getRecommendedStreamConfigurationMap(jint arg0) const
	{
		return callObjectMethod(
			"getRecommendedStreamConfigurationMap",
			"(I)Landroid/hardware/camera2/params/RecommendedStreamConfigurationMap;",
			arg0
		);
	}
} // namespace android::hardware::camera2

// Base class headers
#include "./CameraMetadata.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
