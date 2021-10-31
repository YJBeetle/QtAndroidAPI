#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CameraMetadata.hpp"

namespace android::hardware::camera2
{
	class CameraCharacteristics_Key;
}
namespace android::hardware::camera2::params
{
	class RecommendedStreamConfigurationMap;
}

namespace android::hardware::camera2
{
	class CameraCharacteristics : public android::hardware::camera2::CameraMetadata
	{
	public:
		// Fields
		static QAndroidJniObject COLOR_CORRECTION_AVAILABLE_ABERRATION_MODES();
		static QAndroidJniObject CONTROL_AE_AVAILABLE_ANTIBANDING_MODES();
		static QAndroidJniObject CONTROL_AE_AVAILABLE_MODES();
		static QAndroidJniObject CONTROL_AE_AVAILABLE_TARGET_FPS_RANGES();
		static QAndroidJniObject CONTROL_AE_COMPENSATION_RANGE();
		static QAndroidJniObject CONTROL_AE_COMPENSATION_STEP();
		static QAndroidJniObject CONTROL_AE_LOCK_AVAILABLE();
		static QAndroidJniObject CONTROL_AF_AVAILABLE_MODES();
		static QAndroidJniObject CONTROL_AVAILABLE_EFFECTS();
		static QAndroidJniObject CONTROL_AVAILABLE_MODES();
		static QAndroidJniObject CONTROL_AVAILABLE_SCENE_MODES();
		static QAndroidJniObject CONTROL_AVAILABLE_VIDEO_STABILIZATION_MODES();
		static QAndroidJniObject CONTROL_AWB_AVAILABLE_MODES();
		static QAndroidJniObject CONTROL_AWB_LOCK_AVAILABLE();
		static QAndroidJniObject CONTROL_MAX_REGIONS_AE();
		static QAndroidJniObject CONTROL_MAX_REGIONS_AF();
		static QAndroidJniObject CONTROL_MAX_REGIONS_AWB();
		static QAndroidJniObject CONTROL_POST_RAW_SENSITIVITY_BOOST_RANGE();
		static QAndroidJniObject DEPTH_DEPTH_IS_EXCLUSIVE();
		static QAndroidJniObject DISTORTION_CORRECTION_AVAILABLE_MODES();
		static QAndroidJniObject EDGE_AVAILABLE_EDGE_MODES();
		static QAndroidJniObject FLASH_INFO_AVAILABLE();
		static QAndroidJniObject HOT_PIXEL_AVAILABLE_HOT_PIXEL_MODES();
		static QAndroidJniObject INFO_SUPPORTED_HARDWARE_LEVEL();
		static QAndroidJniObject INFO_VERSION();
		static QAndroidJniObject JPEG_AVAILABLE_THUMBNAIL_SIZES();
		static QAndroidJniObject LENS_DISTORTION();
		static QAndroidJniObject LENS_FACING();
		static QAndroidJniObject LENS_INFO_AVAILABLE_APERTURES();
		static QAndroidJniObject LENS_INFO_AVAILABLE_FILTER_DENSITIES();
		static QAndroidJniObject LENS_INFO_AVAILABLE_FOCAL_LENGTHS();
		static QAndroidJniObject LENS_INFO_AVAILABLE_OPTICAL_STABILIZATION();
		static QAndroidJniObject LENS_INFO_FOCUS_DISTANCE_CALIBRATION();
		static QAndroidJniObject LENS_INFO_HYPERFOCAL_DISTANCE();
		static QAndroidJniObject LENS_INFO_MINIMUM_FOCUS_DISTANCE();
		static QAndroidJniObject LENS_INTRINSIC_CALIBRATION();
		static QAndroidJniObject LENS_POSE_REFERENCE();
		static QAndroidJniObject LENS_POSE_ROTATION();
		static QAndroidJniObject LENS_POSE_TRANSLATION();
		static QAndroidJniObject LENS_RADIAL_DISTORTION();
		static QAndroidJniObject LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE();
		static QAndroidJniObject NOISE_REDUCTION_AVAILABLE_NOISE_REDUCTION_MODES();
		static QAndroidJniObject REPROCESS_MAX_CAPTURE_STALL();
		static QAndroidJniObject REQUEST_AVAILABLE_CAPABILITIES();
		static QAndroidJniObject REQUEST_MAX_NUM_INPUT_STREAMS();
		static QAndroidJniObject REQUEST_MAX_NUM_OUTPUT_PROC();
		static QAndroidJniObject REQUEST_MAX_NUM_OUTPUT_PROC_STALLING();
		static QAndroidJniObject REQUEST_MAX_NUM_OUTPUT_RAW();
		static QAndroidJniObject REQUEST_PARTIAL_RESULT_COUNT();
		static QAndroidJniObject REQUEST_PIPELINE_MAX_DEPTH();
		static QAndroidJniObject SCALER_AVAILABLE_MAX_DIGITAL_ZOOM();
		static QAndroidJniObject SCALER_CROPPING_TYPE();
		static QAndroidJniObject SCALER_MANDATORY_STREAM_COMBINATIONS();
		static QAndroidJniObject SCALER_STREAM_CONFIGURATION_MAP();
		static QAndroidJniObject SENSOR_AVAILABLE_TEST_PATTERN_MODES();
		static QAndroidJniObject SENSOR_BLACK_LEVEL_PATTERN();
		static QAndroidJniObject SENSOR_CALIBRATION_TRANSFORM1();
		static QAndroidJniObject SENSOR_CALIBRATION_TRANSFORM2();
		static QAndroidJniObject SENSOR_COLOR_TRANSFORM1();
		static QAndroidJniObject SENSOR_COLOR_TRANSFORM2();
		static QAndroidJniObject SENSOR_FORWARD_MATRIX1();
		static QAndroidJniObject SENSOR_FORWARD_MATRIX2();
		static QAndroidJniObject SENSOR_INFO_ACTIVE_ARRAY_SIZE();
		static QAndroidJniObject SENSOR_INFO_COLOR_FILTER_ARRANGEMENT();
		static QAndroidJniObject SENSOR_INFO_EXPOSURE_TIME_RANGE();
		static QAndroidJniObject SENSOR_INFO_LENS_SHADING_APPLIED();
		static QAndroidJniObject SENSOR_INFO_MAX_FRAME_DURATION();
		static QAndroidJniObject SENSOR_INFO_PHYSICAL_SIZE();
		static QAndroidJniObject SENSOR_INFO_PIXEL_ARRAY_SIZE();
		static QAndroidJniObject SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE();
		static QAndroidJniObject SENSOR_INFO_SENSITIVITY_RANGE();
		static QAndroidJniObject SENSOR_INFO_TIMESTAMP_SOURCE();
		static QAndroidJniObject SENSOR_INFO_WHITE_LEVEL();
		static QAndroidJniObject SENSOR_MAX_ANALOG_SENSITIVITY();
		static QAndroidJniObject SENSOR_OPTICAL_BLACK_REGIONS();
		static QAndroidJniObject SENSOR_ORIENTATION();
		static QAndroidJniObject SENSOR_REFERENCE_ILLUMINANT1();
		static QAndroidJniObject SENSOR_REFERENCE_ILLUMINANT2();
		static QAndroidJniObject SHADING_AVAILABLE_MODES();
		static QAndroidJniObject STATISTICS_INFO_AVAILABLE_FACE_DETECT_MODES();
		static QAndroidJniObject STATISTICS_INFO_AVAILABLE_HOT_PIXEL_MAP_MODES();
		static QAndroidJniObject STATISTICS_INFO_AVAILABLE_LENS_SHADING_MAP_MODES();
		static QAndroidJniObject STATISTICS_INFO_AVAILABLE_OIS_DATA_MODES();
		static QAndroidJniObject STATISTICS_INFO_MAX_FACE_COUNT();
		static QAndroidJniObject SYNC_MAX_LATENCY();
		static QAndroidJniObject TONEMAP_AVAILABLE_TONE_MAP_MODES();
		static QAndroidJniObject TONEMAP_MAX_CURVE_POINTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraCharacteristics(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraMetadata(className, sig, std::forward<Ts>(agv)...) {}
		CameraCharacteristics(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject get(android::hardware::camera2::CameraCharacteristics_Key arg0);
		QAndroidJniObject getAvailableCaptureRequestKeys();
		QAndroidJniObject getAvailableCaptureResultKeys();
		QAndroidJniObject getAvailablePhysicalCameraRequestKeys();
		QAndroidJniObject getAvailableSessionKeys();
		QAndroidJniObject getKeys();
		QAndroidJniObject getKeysNeedingPermission();
		QAndroidJniObject getPhysicalCameraIds();
		QAndroidJniObject getRecommendedStreamConfigurationMap(jint arg0);
	};
} // namespace android::hardware::camera2

