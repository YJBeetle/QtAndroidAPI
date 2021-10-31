#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CameraMetadata.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2
{
	class CaptureResult_Key;
}

namespace android::hardware::camera2
{
	class CaptureResult : public android::hardware::camera2::CameraMetadata
	{
	public:
		// Fields
		static android::hardware::camera2::CaptureResult_Key BLACK_LEVEL_LOCK();
		static android::hardware::camera2::CaptureResult_Key COLOR_CORRECTION_ABERRATION_MODE();
		static android::hardware::camera2::CaptureResult_Key COLOR_CORRECTION_GAINS();
		static android::hardware::camera2::CaptureResult_Key COLOR_CORRECTION_MODE();
		static android::hardware::camera2::CaptureResult_Key COLOR_CORRECTION_TRANSFORM();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_ANTIBANDING_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_EXPOSURE_COMPENSATION();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_LOCK();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_PRECAPTURE_TRIGGER();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_REGIONS();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_STATE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AE_TARGET_FPS_RANGE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AF_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AF_REGIONS();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AF_SCENE_CHANGE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AF_STATE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AF_TRIGGER();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AWB_LOCK();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AWB_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AWB_REGIONS();
		static android::hardware::camera2::CaptureResult_Key CONTROL_AWB_STATE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_CAPTURE_INTENT();
		static android::hardware::camera2::CaptureResult_Key CONTROL_EFFECT_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_ENABLE_ZSL();
		static android::hardware::camera2::CaptureResult_Key CONTROL_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_POST_RAW_SENSITIVITY_BOOST();
		static android::hardware::camera2::CaptureResult_Key CONTROL_SCENE_MODE();
		static android::hardware::camera2::CaptureResult_Key CONTROL_VIDEO_STABILIZATION_MODE();
		static android::hardware::camera2::CaptureResult_Key DISTORTION_CORRECTION_MODE();
		static android::hardware::camera2::CaptureResult_Key EDGE_MODE();
		static android::hardware::camera2::CaptureResult_Key FLASH_MODE();
		static android::hardware::camera2::CaptureResult_Key FLASH_STATE();
		static android::hardware::camera2::CaptureResult_Key HOT_PIXEL_MODE();
		static android::hardware::camera2::CaptureResult_Key JPEG_GPS_LOCATION();
		static android::hardware::camera2::CaptureResult_Key JPEG_ORIENTATION();
		static android::hardware::camera2::CaptureResult_Key JPEG_QUALITY();
		static android::hardware::camera2::CaptureResult_Key JPEG_THUMBNAIL_QUALITY();
		static android::hardware::camera2::CaptureResult_Key JPEG_THUMBNAIL_SIZE();
		static android::hardware::camera2::CaptureResult_Key LENS_APERTURE();
		static android::hardware::camera2::CaptureResult_Key LENS_DISTORTION();
		static android::hardware::camera2::CaptureResult_Key LENS_FILTER_DENSITY();
		static android::hardware::camera2::CaptureResult_Key LENS_FOCAL_LENGTH();
		static android::hardware::camera2::CaptureResult_Key LENS_FOCUS_DISTANCE();
		static android::hardware::camera2::CaptureResult_Key LENS_FOCUS_RANGE();
		static android::hardware::camera2::CaptureResult_Key LENS_INTRINSIC_CALIBRATION();
		static android::hardware::camera2::CaptureResult_Key LENS_OPTICAL_STABILIZATION_MODE();
		static android::hardware::camera2::CaptureResult_Key LENS_POSE_ROTATION();
		static android::hardware::camera2::CaptureResult_Key LENS_POSE_TRANSLATION();
		static android::hardware::camera2::CaptureResult_Key LENS_RADIAL_DISTORTION();
		static android::hardware::camera2::CaptureResult_Key LENS_STATE();
		static android::hardware::camera2::CaptureResult_Key NOISE_REDUCTION_MODE();
		static android::hardware::camera2::CaptureResult_Key REPROCESS_EFFECTIVE_EXPOSURE_FACTOR();
		static android::hardware::camera2::CaptureResult_Key REQUEST_PIPELINE_DEPTH();
		static android::hardware::camera2::CaptureResult_Key SCALER_CROP_REGION();
		static android::hardware::camera2::CaptureResult_Key SENSOR_DYNAMIC_BLACK_LEVEL();
		static android::hardware::camera2::CaptureResult_Key SENSOR_DYNAMIC_WHITE_LEVEL();
		static android::hardware::camera2::CaptureResult_Key SENSOR_EXPOSURE_TIME();
		static android::hardware::camera2::CaptureResult_Key SENSOR_FRAME_DURATION();
		static android::hardware::camera2::CaptureResult_Key SENSOR_GREEN_SPLIT();
		static android::hardware::camera2::CaptureResult_Key SENSOR_NEUTRAL_COLOR_POINT();
		static android::hardware::camera2::CaptureResult_Key SENSOR_NOISE_PROFILE();
		static android::hardware::camera2::CaptureResult_Key SENSOR_ROLLING_SHUTTER_SKEW();
		static android::hardware::camera2::CaptureResult_Key SENSOR_SENSITIVITY();
		static android::hardware::camera2::CaptureResult_Key SENSOR_TEST_PATTERN_DATA();
		static android::hardware::camera2::CaptureResult_Key SENSOR_TEST_PATTERN_MODE();
		static android::hardware::camera2::CaptureResult_Key SENSOR_TIMESTAMP();
		static android::hardware::camera2::CaptureResult_Key SHADING_MODE();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_FACES();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_FACE_DETECT_MODE();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_HOT_PIXEL_MAP();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_HOT_PIXEL_MAP_MODE();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_LENS_SHADING_CORRECTION_MAP();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_LENS_SHADING_MAP_MODE();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_OIS_DATA_MODE();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_OIS_SAMPLES();
		static android::hardware::camera2::CaptureResult_Key STATISTICS_SCENE_FLICKER();
		static android::hardware::camera2::CaptureResult_Key TONEMAP_CURVE();
		static android::hardware::camera2::CaptureResult_Key TONEMAP_GAMMA();
		static android::hardware::camera2::CaptureResult_Key TONEMAP_MODE();
		static android::hardware::camera2::CaptureResult_Key TONEMAP_PRESET_CURVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureResult(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraMetadata(className, sig, std::forward<Ts>(agv)...) {}
		CaptureResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		jobject get(android::hardware::camera2::CaptureResult_Key arg0);
		jlong getFrameNumber();
		__JniBaseClass getKeys();
		android::hardware::camera2::CaptureRequest getRequest();
		jint getSequenceId();
	};
} // namespace android::hardware::camera2

