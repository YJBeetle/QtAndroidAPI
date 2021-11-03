#pragma once

#include "../../../JObject.hpp"
#include "./CameraMetadata.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest_Key;
}
namespace android::os
{
	class Parcel;
}

namespace android::hardware::camera2
{
	class CaptureRequest : public android::hardware::camera2::CameraMetadata
	{
	public:
		// Fields
		static android::hardware::camera2::CaptureRequest_Key BLACK_LEVEL_LOCK();
		static android::hardware::camera2::CaptureRequest_Key COLOR_CORRECTION_ABERRATION_MODE();
		static android::hardware::camera2::CaptureRequest_Key COLOR_CORRECTION_GAINS();
		static android::hardware::camera2::CaptureRequest_Key COLOR_CORRECTION_MODE();
		static android::hardware::camera2::CaptureRequest_Key COLOR_CORRECTION_TRANSFORM();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_ANTIBANDING_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_EXPOSURE_COMPENSATION();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_LOCK();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_PRECAPTURE_TRIGGER();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_REGIONS();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AE_TARGET_FPS_RANGE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AF_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AF_REGIONS();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AF_TRIGGER();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AWB_LOCK();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AWB_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_AWB_REGIONS();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_CAPTURE_INTENT();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_EFFECT_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_ENABLE_ZSL();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_POST_RAW_SENSITIVITY_BOOST();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_SCENE_MODE();
		static android::hardware::camera2::CaptureRequest_Key CONTROL_VIDEO_STABILIZATION_MODE();
		static JObject CREATOR();
		static android::hardware::camera2::CaptureRequest_Key DISTORTION_CORRECTION_MODE();
		static android::hardware::camera2::CaptureRequest_Key EDGE_MODE();
		static android::hardware::camera2::CaptureRequest_Key FLASH_MODE();
		static android::hardware::camera2::CaptureRequest_Key HOT_PIXEL_MODE();
		static android::hardware::camera2::CaptureRequest_Key JPEG_GPS_LOCATION();
		static android::hardware::camera2::CaptureRequest_Key JPEG_ORIENTATION();
		static android::hardware::camera2::CaptureRequest_Key JPEG_QUALITY();
		static android::hardware::camera2::CaptureRequest_Key JPEG_THUMBNAIL_QUALITY();
		static android::hardware::camera2::CaptureRequest_Key JPEG_THUMBNAIL_SIZE();
		static android::hardware::camera2::CaptureRequest_Key LENS_APERTURE();
		static android::hardware::camera2::CaptureRequest_Key LENS_FILTER_DENSITY();
		static android::hardware::camera2::CaptureRequest_Key LENS_FOCAL_LENGTH();
		static android::hardware::camera2::CaptureRequest_Key LENS_FOCUS_DISTANCE();
		static android::hardware::camera2::CaptureRequest_Key LENS_OPTICAL_STABILIZATION_MODE();
		static android::hardware::camera2::CaptureRequest_Key NOISE_REDUCTION_MODE();
		static android::hardware::camera2::CaptureRequest_Key REPROCESS_EFFECTIVE_EXPOSURE_FACTOR();
		static android::hardware::camera2::CaptureRequest_Key SCALER_CROP_REGION();
		static android::hardware::camera2::CaptureRequest_Key SENSOR_EXPOSURE_TIME();
		static android::hardware::camera2::CaptureRequest_Key SENSOR_FRAME_DURATION();
		static android::hardware::camera2::CaptureRequest_Key SENSOR_SENSITIVITY();
		static android::hardware::camera2::CaptureRequest_Key SENSOR_TEST_PATTERN_DATA();
		static android::hardware::camera2::CaptureRequest_Key SENSOR_TEST_PATTERN_MODE();
		static android::hardware::camera2::CaptureRequest_Key SHADING_MODE();
		static android::hardware::camera2::CaptureRequest_Key STATISTICS_FACE_DETECT_MODE();
		static android::hardware::camera2::CaptureRequest_Key STATISTICS_HOT_PIXEL_MAP_MODE();
		static android::hardware::camera2::CaptureRequest_Key STATISTICS_LENS_SHADING_MAP_MODE();
		static android::hardware::camera2::CaptureRequest_Key STATISTICS_OIS_DATA_MODE();
		static android::hardware::camera2::CaptureRequest_Key TONEMAP_CURVE();
		static android::hardware::camera2::CaptureRequest_Key TONEMAP_GAMMA();
		static android::hardware::camera2::CaptureRequest_Key TONEMAP_MODE();
		static android::hardware::camera2::CaptureRequest_Key TONEMAP_PRESET_CURVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaptureRequest(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraMetadata(className, sig, std::forward<Ts>(agv)...) {}
		CaptureRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jobject get(android::hardware::camera2::CaptureRequest_Key arg0);
		JObject getKeys();
		jobject getTag();
		jint hashCode();
		jboolean isReprocess();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::camera2

