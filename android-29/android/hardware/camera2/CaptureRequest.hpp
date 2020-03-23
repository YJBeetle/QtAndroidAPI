#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST
#define ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST

#include "CameraMetadata.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest_Key;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest : public __jni_impl::android::hardware::camera2::CameraMetadata
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
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getTag();
		QAndroidJniObject getKeys();
		jboolean isReprocess();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CaptureRequest_Key.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	QAndroidJniObject CaptureRequest::BLACK_LEVEL_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"BLACK_LEVEL_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_ABERRATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_ABERRATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_GAINS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_GAINS",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::COLOR_CORRECTION_TRANSFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"COLOR_CORRECTION_TRANSFORM",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_ANTIBANDING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_ANTIBANDING_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_EXPOSURE_COMPENSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_EXPOSURE_COMPENSATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_PRECAPTURE_TRIGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_PRECAPTURE_TRIGGER",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AE_TARGET_FPS_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AE_TARGET_FPS_RANGE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AF_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AF_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AF_TRIGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AF_TRIGGER",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AWB_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_LOCK",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AWB_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_AWB_REGIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_AWB_REGIONS",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_CAPTURE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_CAPTURE_INTENT",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_EFFECT_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_EFFECT_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_ENABLE_ZSL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_ENABLE_ZSL",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_POST_RAW_SENSITIVITY_BOOST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_POST_RAW_SENSITIVITY_BOOST",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_SCENE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_SCENE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CONTROL_VIDEO_STABILIZATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CONTROL_VIDEO_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject CaptureRequest::DISTORTION_CORRECTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"DISTORTION_CORRECTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::EDGE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"EDGE_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::FLASH_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"FLASH_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::HOT_PIXEL_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"HOT_PIXEL_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::JPEG_GPS_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_GPS_LOCATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::JPEG_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_ORIENTATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::JPEG_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_QUALITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::JPEG_THUMBNAIL_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_THUMBNAIL_QUALITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::JPEG_THUMBNAIL_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"JPEG_THUMBNAIL_SIZE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::LENS_APERTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_APERTURE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::LENS_FILTER_DENSITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FILTER_DENSITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::LENS_FOCAL_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FOCAL_LENGTH",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::LENS_FOCUS_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_FOCUS_DISTANCE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::LENS_OPTICAL_STABILIZATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"LENS_OPTICAL_STABILIZATION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::NOISE_REDUCTION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"NOISE_REDUCTION_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::REPROCESS_EFFECTIVE_EXPOSURE_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"REPROCESS_EFFECTIVE_EXPOSURE_FACTOR",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SCALER_CROP_REGION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SCALER_CROP_REGION",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SENSOR_EXPOSURE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_EXPOSURE_TIME",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SENSOR_FRAME_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_FRAME_DURATION",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SENSOR_SENSITIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_SENSITIVITY",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SENSOR_TEST_PATTERN_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_TEST_PATTERN_DATA",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SENSOR_TEST_PATTERN_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SENSOR_TEST_PATTERN_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::SHADING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"SHADING_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::STATISTICS_FACE_DETECT_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_FACE_DETECT_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::STATISTICS_HOT_PIXEL_MAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_HOT_PIXEL_MAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::STATISTICS_LENS_SHADING_MAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_LENS_SHADING_MAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::STATISTICS_OIS_DATA_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"STATISTICS_OIS_DATA_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::TONEMAP_CURVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_CURVE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::TONEMAP_GAMMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_GAMMA",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::TONEMAP_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_MODE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	QAndroidJniObject CaptureRequest::TONEMAP_PRESET_CURVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.CaptureRequest",
			"TONEMAP_PRESET_CURVE",
			"Landroid/hardware/camera2/CaptureRequest$Key;");
	}
	
	// Constructors
	void CaptureRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CaptureRequest::get(__jni_impl::android::hardware::camera2::CaptureRequest_Key arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Landroid/hardware/camera2/CaptureRequest$Key;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	jboolean CaptureRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint CaptureRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CaptureRequest::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject CaptureRequest::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/List;");
	}
	jboolean CaptureRequest::isReprocess()
	{
		return __thiz.callMethod<jboolean>(
			"isReprocess",
			"()Z");
	}
	jint CaptureRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CaptureRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CaptureRequest : public __jni_impl::android::hardware::camera2::CaptureRequest
	{
	public:
		CaptureRequest(QAndroidJniObject obj) { __thiz = obj; }
		CaptureRequest()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAPTUREREQUEST

