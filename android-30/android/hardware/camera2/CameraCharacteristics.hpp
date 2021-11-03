#pragma once

#include "./CameraMetadata.hpp"

namespace android::hardware::camera2
{
	class CameraCharacteristics_Key;
}
namespace android::hardware::camera2::params
{
	class RecommendedStreamConfigurationMap;
}
class JObject;

namespace android::hardware::camera2
{
	class CameraCharacteristics : public android::hardware::camera2::CameraMetadata
	{
	public:
		// Fields
		static android::hardware::camera2::CameraCharacteristics_Key COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AE_AVAILABLE_ANTIBANDING_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AE_AVAILABLE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AE_COMPENSATION_RANGE();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AE_COMPENSATION_STEP();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AE_LOCK_AVAILABLE();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AF_AVAILABLE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AVAILABLE_EFFECTS();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_CAPABILITIES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AVAILABLE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AVAILABLE_SCENE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AWB_AVAILABLE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_AWB_LOCK_AVAILABLE();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_MAX_REGIONS_AE();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_MAX_REGIONS_AF();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_MAX_REGIONS_AWB();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE();
		static android::hardware::camera2::CameraCharacteristics_Key CONTROL_ZOOM_RATIO_RANGE();
		static android::hardware::camera2::CameraCharacteristics_Key DEPTH_DEPTH_IS_EXCLUSIVE();
		static android::hardware::camera2::CameraCharacteristics_Key DISTORTION_CORRECTION_AVAILABLE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key EDGE_AVAILABLE_EDGE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key FLASH_INFO_AVAILABLE();
		static android::hardware::camera2::CameraCharacteristics_Key HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key INFO_SUPPORTED_HARDWARE_LEVEL();
		static android::hardware::camera2::CameraCharacteristics_Key INFO_VERSION();
		static android::hardware::camera2::CameraCharacteristics_Key JPEG_AVAILABLE_THUMBNAIL_SIZES();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_DISTORTION();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_FACING();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_AVAILABLE_APERTURES();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_AVAILABLE_FILTER_DENSITIES();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_AVAILABLE_FOCAL_LENGTHS();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_FOCUS_DISTANCE_CALIBRATION();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_HYPERFOCAL_DISTANCE();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INFO_MINIMUM_FOCUS_DISTANCE();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_INTRINSIC_CALIBRATION();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_POSE_REFERENCE();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_POSE_ROTATION();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_POSE_TRANSLATION();
		static android::hardware::camera2::CameraCharacteristics_Key LENS_RADIAL_DISTORTION();
		static android::hardware::camera2::CameraCharacteristics_Key LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE();
		static android::hardware::camera2::CameraCharacteristics_Key NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key REPROCESS_MAX_CAPTURE_STALL();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_AVAILABLE_CAPABILITIES();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_MAX_NUM_INPUT_STREAMS();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_MAX_NUM_OUTPUT_PROC();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_MAX_NUM_OUTPUT_PROC_STALLING();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_MAX_NUM_OUTPUT_RAW();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_PARTIAL_RESULT_COUNT();
		static android::hardware::camera2::CameraCharacteristics_Key REQUEST_PIPELINE_MAX_DEPTH();
		static android::hardware::camera2::CameraCharacteristics_Key SCALER_AVAILABLE_MAX_DIGITAL_ZOOM();
		static android::hardware::camera2::CameraCharacteristics_Key SCALER_CROPPING_TYPE();
		static android::hardware::camera2::CameraCharacteristics_Key SCALER_MANDATORY_CONCURRENT_STREAM_COMBINATIONS();
		static android::hardware::camera2::CameraCharacteristics_Key SCALER_MANDATORY_STREAM_COMBINATIONS();
		static android::hardware::camera2::CameraCharacteristics_Key SCALER_STREAM_CONFIGURATION_MAP();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_AVAILABLE_TEST_PATTERN_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_BLACK_LEVEL_PATTERN();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_CALIBRATION_TRANSFORM1();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_CALIBRATION_TRANSFORM2();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_COLOR_TRANSFORM1();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_COLOR_TRANSFORM2();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_FORWARD_MATRIX1();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_FORWARD_MATRIX2();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_ACTIVE_ARRAY_SIZE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_COLOR_FILTER_ARRANGEMENT();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_EXPOSURE_TIME_RANGE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_LENS_SHADING_APPLIED();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_MAX_FRAME_DURATION();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_PHYSICAL_SIZE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_PIXEL_ARRAY_SIZE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_SENSITIVITY_RANGE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_TIMESTAMP_SOURCE();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_INFO_WHITE_LEVEL();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_MAX_ANALOG_SENSITIVITY();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_OPTICAL_BLACK_REGIONS();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_ORIENTATION();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_REFERENCE_ILLUMINANT1();
		static android::hardware::camera2::CameraCharacteristics_Key SENSOR_REFERENCE_ILLUMINANT2();
		static android::hardware::camera2::CameraCharacteristics_Key SHADING_AVAILABLE_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key STATISTICS_INFO_MAX_FACE_COUNT();
		static android::hardware::camera2::CameraCharacteristics_Key SYNC_MAX_LATENCY();
		static android::hardware::camera2::CameraCharacteristics_Key TONEMAP_AVAILABLE_TONE_MAP_MODES();
		static android::hardware::camera2::CameraCharacteristics_Key TONEMAP_MAX_CURVE_POINTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraCharacteristics(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraMetadata(className, sig, std::forward<Ts>(agv)...) {}
		CameraCharacteristics(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject get(android::hardware::camera2::CameraCharacteristics_Key arg0);
		JObject getAvailableCaptureRequestKeys();
		JObject getAvailableCaptureResultKeys();
		JObject getAvailablePhysicalCameraRequestKeys();
		JObject getAvailableSessionKeys();
		JObject getKeys();
		JObject getKeysNeedingPermission();
		JObject getPhysicalCameraIds();
		android::hardware::camera2::params::RecommendedStreamConfigurationMap getRecommendedStreamConfigurationMap(jint arg0);
	};
} // namespace android::hardware::camera2

