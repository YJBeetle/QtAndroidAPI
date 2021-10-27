#pragma once

#include "../../../__JniBaseClass.hpp"
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
		static QAndroidJniObject BLACK_LEVEL_LOCK();
		static QAndroidJniObject COLOR_CORRECTION_ABERRATION_MODE();
		static QAndroidJniObject COLOR_CORRECTION_GAINS();
		static QAndroidJniObject COLOR_CORRECTION_MODE();
		static QAndroidJniObject COLOR_CORRECTION_TRANSFORM();
		static QAndroidJniObject CONTROL_AE_ANTIBANDING_MODE();
		static QAndroidJniObject CONTROL_AE_EXPOSURE_COMPENSATION();
		static QAndroidJniObject CONTROL_AE_LOCK();
		static QAndroidJniObject CONTROL_AE_MODE();
		static QAndroidJniObject CONTROL_AE_PRECAPTURE_TRIGGER();
		static QAndroidJniObject CONTROL_AE_REGIONS();
		static QAndroidJniObject CONTROL_AE_TARGET_FPS_RANGE();
		static QAndroidJniObject CONTROL_AF_MODE();
		static QAndroidJniObject CONTROL_AF_REGIONS();
		static QAndroidJniObject CONTROL_AF_TRIGGER();
		static QAndroidJniObject CONTROL_AWB_LOCK();
		static QAndroidJniObject CONTROL_AWB_MODE();
		static QAndroidJniObject CONTROL_AWB_REGIONS();
		static QAndroidJniObject CONTROL_CAPTURE_INTENT();
		static QAndroidJniObject CONTROL_EFFECT_MODE();
		static QAndroidJniObject CONTROL_ENABLE_ZSL();
		static QAndroidJniObject CONTROL_MODE();
		static QAndroidJniObject CONTROL_POST_RAW_SENSITIVITY_BOOST();
		static QAndroidJniObject CONTROL_SCENE_MODE();
		static QAndroidJniObject CONTROL_VIDEO_STABILIZATION_MODE();
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject DISTORTION_CORRECTION_MODE();
		static QAndroidJniObject EDGE_MODE();
		static QAndroidJniObject FLASH_MODE();
		static QAndroidJniObject HOT_PIXEL_MODE();
		static QAndroidJniObject JPEG_GPS_LOCATION();
		static QAndroidJniObject JPEG_ORIENTATION();
		static QAndroidJniObject JPEG_QUALITY();
		static QAndroidJniObject JPEG_THUMBNAIL_QUALITY();
		static QAndroidJniObject JPEG_THUMBNAIL_SIZE();
		static QAndroidJniObject LENS_APERTURE();
		static QAndroidJniObject LENS_FILTER_DENSITY();
		static QAndroidJniObject LENS_FOCAL_LENGTH();
		static QAndroidJniObject LENS_FOCUS_DISTANCE();
		static QAndroidJniObject LENS_OPTICAL_STABILIZATION_MODE();
		static QAndroidJniObject NOISE_REDUCTION_MODE();
		static QAndroidJniObject REPROCESS_EFFECTIVE_EXPOSURE_FACTOR();
		static QAndroidJniObject SCALER_CROP_REGION();
		static QAndroidJniObject SENSOR_EXPOSURE_TIME();
		static QAndroidJniObject SENSOR_FRAME_DURATION();
		static QAndroidJniObject SENSOR_SENSITIVITY();
		static QAndroidJniObject SENSOR_TEST_PATTERN_DATA();
		static QAndroidJniObject SENSOR_TEST_PATTERN_MODE();
		static QAndroidJniObject SHADING_MODE();
		static QAndroidJniObject STATISTICS_FACE_DETECT_MODE();
		static QAndroidJniObject STATISTICS_HOT_PIXEL_MAP_MODE();
		static QAndroidJniObject STATISTICS_LENS_SHADING_MAP_MODE();
		static QAndroidJniObject STATISTICS_OIS_DATA_MODE();
		static QAndroidJniObject TONEMAP_CURVE();
		static QAndroidJniObject TONEMAP_GAMMA();
		static QAndroidJniObject TONEMAP_MODE();
		static QAndroidJniObject TONEMAP_PRESET_CURVE();
		
		CaptureRequest(QAndroidJniObject obj);
		// Constructors
		CaptureRequest() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jobject get(android::hardware::camera2::CaptureRequest_Key arg0);
		QAndroidJniObject getKeys();
		jobject getTag();
		jint hashCode();
		jboolean isReprocess();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::camera2

