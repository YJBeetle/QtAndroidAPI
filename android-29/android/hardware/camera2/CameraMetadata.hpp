#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA
#define ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CameraMetadata : public __JniBaseClass
	{
	public:
		// Fields
		static jint COLOR_CORRECTION_ABERRATION_MODE_FAST();
		static jint COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY();
		static jint COLOR_CORRECTION_ABERRATION_MODE_OFF();
		static jint COLOR_CORRECTION_MODE_FAST();
		static jint COLOR_CORRECTION_MODE_HIGH_QUALITY();
		static jint COLOR_CORRECTION_MODE_TRANSFORM_MATRIX();
		static jint CONTROL_AE_ANTIBANDING_MODE_50HZ();
		static jint CONTROL_AE_ANTIBANDING_MODE_60HZ();
		static jint CONTROL_AE_ANTIBANDING_MODE_AUTO();
		static jint CONTROL_AE_ANTIBANDING_MODE_OFF();
		static jint CONTROL_AE_MODE_OFF();
		static jint CONTROL_AE_MODE_ON();
		static jint CONTROL_AE_MODE_ON_ALWAYS_FLASH();
		static jint CONTROL_AE_MODE_ON_AUTO_FLASH();
		static jint CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE();
		static jint CONTROL_AE_MODE_ON_EXTERNAL_FLASH();
		static jint CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL();
		static jint CONTROL_AE_PRECAPTURE_TRIGGER_IDLE();
		static jint CONTROL_AE_PRECAPTURE_TRIGGER_START();
		static jint CONTROL_AE_STATE_CONVERGED();
		static jint CONTROL_AE_STATE_FLASH_REQUIRED();
		static jint CONTROL_AE_STATE_INACTIVE();
		static jint CONTROL_AE_STATE_LOCKED();
		static jint CONTROL_AE_STATE_PRECAPTURE();
		static jint CONTROL_AE_STATE_SEARCHING();
		static jint CONTROL_AF_MODE_AUTO();
		static jint CONTROL_AF_MODE_CONTINUOUS_PICTURE();
		static jint CONTROL_AF_MODE_CONTINUOUS_VIDEO();
		static jint CONTROL_AF_MODE_EDOF();
		static jint CONTROL_AF_MODE_MACRO();
		static jint CONTROL_AF_MODE_OFF();
		static jint CONTROL_AF_SCENE_CHANGE_DETECTED();
		static jint CONTROL_AF_SCENE_CHANGE_NOT_DETECTED();
		static jint CONTROL_AF_STATE_ACTIVE_SCAN();
		static jint CONTROL_AF_STATE_FOCUSED_LOCKED();
		static jint CONTROL_AF_STATE_INACTIVE();
		static jint CONTROL_AF_STATE_NOT_FOCUSED_LOCKED();
		static jint CONTROL_AF_STATE_PASSIVE_FOCUSED();
		static jint CONTROL_AF_STATE_PASSIVE_SCAN();
		static jint CONTROL_AF_STATE_PASSIVE_UNFOCUSED();
		static jint CONTROL_AF_TRIGGER_CANCEL();
		static jint CONTROL_AF_TRIGGER_IDLE();
		static jint CONTROL_AF_TRIGGER_START();
		static jint CONTROL_AWB_MODE_AUTO();
		static jint CONTROL_AWB_MODE_CLOUDY_DAYLIGHT();
		static jint CONTROL_AWB_MODE_DAYLIGHT();
		static jint CONTROL_AWB_MODE_FLUORESCENT();
		static jint CONTROL_AWB_MODE_INCANDESCENT();
		static jint CONTROL_AWB_MODE_OFF();
		static jint CONTROL_AWB_MODE_SHADE();
		static jint CONTROL_AWB_MODE_TWILIGHT();
		static jint CONTROL_AWB_MODE_WARM_FLUORESCENT();
		static jint CONTROL_AWB_STATE_CONVERGED();
		static jint CONTROL_AWB_STATE_INACTIVE();
		static jint CONTROL_AWB_STATE_LOCKED();
		static jint CONTROL_AWB_STATE_SEARCHING();
		static jint CONTROL_CAPTURE_INTENT_CUSTOM();
		static jint CONTROL_CAPTURE_INTENT_MANUAL();
		static jint CONTROL_CAPTURE_INTENT_MOTION_TRACKING();
		static jint CONTROL_CAPTURE_INTENT_PREVIEW();
		static jint CONTROL_CAPTURE_INTENT_STILL_CAPTURE();
		static jint CONTROL_CAPTURE_INTENT_VIDEO_RECORD();
		static jint CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT();
		static jint CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG();
		static jint CONTROL_EFFECT_MODE_AQUA();
		static jint CONTROL_EFFECT_MODE_BLACKBOARD();
		static jint CONTROL_EFFECT_MODE_MONO();
		static jint CONTROL_EFFECT_MODE_NEGATIVE();
		static jint CONTROL_EFFECT_MODE_OFF();
		static jint CONTROL_EFFECT_MODE_POSTERIZE();
		static jint CONTROL_EFFECT_MODE_SEPIA();
		static jint CONTROL_EFFECT_MODE_SOLARIZE();
		static jint CONTROL_EFFECT_MODE_WHITEBOARD();
		static jint CONTROL_MODE_AUTO();
		static jint CONTROL_MODE_OFF();
		static jint CONTROL_MODE_OFF_KEEP_STATE();
		static jint CONTROL_MODE_USE_SCENE_MODE();
		static jint CONTROL_SCENE_MODE_ACTION();
		static jint CONTROL_SCENE_MODE_BARCODE();
		static jint CONTROL_SCENE_MODE_BEACH();
		static jint CONTROL_SCENE_MODE_CANDLELIGHT();
		static jint CONTROL_SCENE_MODE_DISABLED();
		static jint CONTROL_SCENE_MODE_FACE_PRIORITY();
		static jint CONTROL_SCENE_MODE_FIREWORKS();
		static jint CONTROL_SCENE_MODE_HDR();
		static jint CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO();
		static jint CONTROL_SCENE_MODE_LANDSCAPE();
		static jint CONTROL_SCENE_MODE_NIGHT();
		static jint CONTROL_SCENE_MODE_NIGHT_PORTRAIT();
		static jint CONTROL_SCENE_MODE_PARTY();
		static jint CONTROL_SCENE_MODE_PORTRAIT();
		static jint CONTROL_SCENE_MODE_SNOW();
		static jint CONTROL_SCENE_MODE_SPORTS();
		static jint CONTROL_SCENE_MODE_STEADYPHOTO();
		static jint CONTROL_SCENE_MODE_SUNSET();
		static jint CONTROL_SCENE_MODE_THEATRE();
		static jint CONTROL_VIDEO_STABILIZATION_MODE_OFF();
		static jint CONTROL_VIDEO_STABILIZATION_MODE_ON();
		static jint DISTORTION_CORRECTION_MODE_FAST();
		static jint DISTORTION_CORRECTION_MODE_HIGH_QUALITY();
		static jint DISTORTION_CORRECTION_MODE_OFF();
		static jint EDGE_MODE_FAST();
		static jint EDGE_MODE_HIGH_QUALITY();
		static jint EDGE_MODE_OFF();
		static jint EDGE_MODE_ZERO_SHUTTER_LAG();
		static jint FLASH_MODE_OFF();
		static jint FLASH_MODE_SINGLE();
		static jint FLASH_MODE_TORCH();
		static jint FLASH_STATE_CHARGING();
		static jint FLASH_STATE_FIRED();
		static jint FLASH_STATE_PARTIAL();
		static jint FLASH_STATE_READY();
		static jint FLASH_STATE_UNAVAILABLE();
		static jint HOT_PIXEL_MODE_FAST();
		static jint HOT_PIXEL_MODE_HIGH_QUALITY();
		static jint HOT_PIXEL_MODE_OFF();
		static jint INFO_SUPPORTED_HARDWARE_LEVEL_3();
		static jint INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL();
		static jint INFO_SUPPORTED_HARDWARE_LEVEL_FULL();
		static jint INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY();
		static jint INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED();
		static jint LENS_FACING_BACK();
		static jint LENS_FACING_EXTERNAL();
		static jint LENS_FACING_FRONT();
		static jint LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE();
		static jint LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED();
		static jint LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED();
		static jint LENS_OPTICAL_STABILIZATION_MODE_OFF();
		static jint LENS_OPTICAL_STABILIZATION_MODE_ON();
		static jint LENS_POSE_REFERENCE_GYROSCOPE();
		static jint LENS_POSE_REFERENCE_PRIMARY_CAMERA();
		static jint LENS_STATE_MOVING();
		static jint LENS_STATE_STATIONARY();
		static jint LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE();
		static jint LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED();
		static jint NOISE_REDUCTION_MODE_FAST();
		static jint NOISE_REDUCTION_MODE_HIGH_QUALITY();
		static jint NOISE_REDUCTION_MODE_MINIMAL();
		static jint NOISE_REDUCTION_MODE_OFF();
		static jint NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG();
		static jint REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE();
		static jint REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE();
		static jint REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO();
		static jint REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT();
		static jint REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_RAW();
		static jint REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS();
		static jint REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA();
		static jint REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING();
		static jint SCALER_CROPPING_TYPE_CENTER_ONLY();
		static jint SCALER_CROPPING_TYPE_FREEFORM();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB();
		static jint SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME();
		static jint SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN();
		static jint SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER();
		static jint SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT();
		static jint SENSOR_REFERENCE_ILLUMINANT1_D50();
		static jint SENSOR_REFERENCE_ILLUMINANT1_D55();
		static jint SENSOR_REFERENCE_ILLUMINANT1_D65();
		static jint SENSOR_REFERENCE_ILLUMINANT1_D75();
		static jint SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT();
		static jint SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT();
		static jint SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT();
		static jint SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER();
		static jint SENSOR_REFERENCE_ILLUMINANT1_FLASH();
		static jint SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT();
		static jint SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN();
		static jint SENSOR_REFERENCE_ILLUMINANT1_SHADE();
		static jint SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A();
		static jint SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B();
		static jint SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C();
		static jint SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN();
		static jint SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT();
		static jint SENSOR_TEST_PATTERN_MODE_COLOR_BARS();
		static jint SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY();
		static jint SENSOR_TEST_PATTERN_MODE_CUSTOM1();
		static jint SENSOR_TEST_PATTERN_MODE_OFF();
		static jint SENSOR_TEST_PATTERN_MODE_PN9();
		static jint SENSOR_TEST_PATTERN_MODE_SOLID_COLOR();
		static jint SHADING_MODE_FAST();
		static jint SHADING_MODE_HIGH_QUALITY();
		static jint SHADING_MODE_OFF();
		static jint STATISTICS_FACE_DETECT_MODE_FULL();
		static jint STATISTICS_FACE_DETECT_MODE_OFF();
		static jint STATISTICS_FACE_DETECT_MODE_SIMPLE();
		static jint STATISTICS_LENS_SHADING_MAP_MODE_OFF();
		static jint STATISTICS_LENS_SHADING_MAP_MODE_ON();
		static jint STATISTICS_OIS_DATA_MODE_OFF();
		static jint STATISTICS_OIS_DATA_MODE_ON();
		static jint STATISTICS_SCENE_FLICKER_50HZ();
		static jint STATISTICS_SCENE_FLICKER_60HZ();
		static jint STATISTICS_SCENE_FLICKER_NONE();
		static jint SYNC_MAX_LATENCY_PER_FRAME_CONTROL();
		static jint SYNC_MAX_LATENCY_UNKNOWN();
		static jint TONEMAP_MODE_CONTRAST_CURVE();
		static jint TONEMAP_MODE_FAST();
		static jint TONEMAP_MODE_GAMMA_VALUE();
		static jint TONEMAP_MODE_HIGH_QUALITY();
		static jint TONEMAP_MODE_PRESET_CURVE();
		static jint TONEMAP_PRESET_CURVE_REC709();
		static jint TONEMAP_PRESET_CURVE_SRGB();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getKeys();
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_FAST");
	}
	jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_OFF");
	}
	jint CameraMetadata::COLOR_CORRECTION_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_FAST");
	}
	jint CameraMetadata::COLOR_CORRECTION_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::COLOR_CORRECTION_MODE_TRANSFORM_MATRIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_TRANSFORM_MATRIX");
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_50HZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_50HZ");
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_60HZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_60HZ");
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_AUTO");
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_AE_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON");
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_ALWAYS_FLASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_ALWAYS_FLASH");
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_AUTO_FLASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_AUTO_FLASH");
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE");
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_EXTERNAL_FLASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_EXTERNAL_FLASH");
	}
	jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL");
	}
	jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_IDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_IDLE");
	}
	jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_START");
	}
	jint CameraMetadata::CONTROL_AE_STATE_CONVERGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_CONVERGED");
	}
	jint CameraMetadata::CONTROL_AE_STATE_FLASH_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_FLASH_REQUIRED");
	}
	jint CameraMetadata::CONTROL_AE_STATE_INACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_INACTIVE");
	}
	jint CameraMetadata::CONTROL_AE_STATE_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_LOCKED");
	}
	jint CameraMetadata::CONTROL_AE_STATE_PRECAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_PRECAPTURE");
	}
	jint CameraMetadata::CONTROL_AE_STATE_SEARCHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_SEARCHING");
	}
	jint CameraMetadata::CONTROL_AF_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_AUTO");
	}
	jint CameraMetadata::CONTROL_AF_MODE_CONTINUOUS_PICTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_CONTINUOUS_PICTURE");
	}
	jint CameraMetadata::CONTROL_AF_MODE_CONTINUOUS_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_CONTINUOUS_VIDEO");
	}
	jint CameraMetadata::CONTROL_AF_MODE_EDOF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_EDOF");
	}
	jint CameraMetadata::CONTROL_AF_MODE_MACRO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_MACRO");
	}
	jint CameraMetadata::CONTROL_AF_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_AF_SCENE_CHANGE_DETECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_SCENE_CHANGE_DETECTED");
	}
	jint CameraMetadata::CONTROL_AF_SCENE_CHANGE_NOT_DETECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_SCENE_CHANGE_NOT_DETECTED");
	}
	jint CameraMetadata::CONTROL_AF_STATE_ACTIVE_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_ACTIVE_SCAN");
	}
	jint CameraMetadata::CONTROL_AF_STATE_FOCUSED_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_FOCUSED_LOCKED");
	}
	jint CameraMetadata::CONTROL_AF_STATE_INACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_INACTIVE");
	}
	jint CameraMetadata::CONTROL_AF_STATE_NOT_FOCUSED_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_NOT_FOCUSED_LOCKED");
	}
	jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_FOCUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_FOCUSED");
	}
	jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_SCAN");
	}
	jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_UNFOCUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_UNFOCUSED");
	}
	jint CameraMetadata::CONTROL_AF_TRIGGER_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_CANCEL");
	}
	jint CameraMetadata::CONTROL_AF_TRIGGER_IDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_IDLE");
	}
	jint CameraMetadata::CONTROL_AF_TRIGGER_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_START");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_AUTO");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_CLOUDY_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_CLOUDY_DAYLIGHT");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_DAYLIGHT");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_FLUORESCENT");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_INCANDESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_INCANDESCENT");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_SHADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_SHADE");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_TWILIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_TWILIGHT");
	}
	jint CameraMetadata::CONTROL_AWB_MODE_WARM_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_WARM_FLUORESCENT");
	}
	jint CameraMetadata::CONTROL_AWB_STATE_CONVERGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_CONVERGED");
	}
	jint CameraMetadata::CONTROL_AWB_STATE_INACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_INACTIVE");
	}
	jint CameraMetadata::CONTROL_AWB_STATE_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_LOCKED");
	}
	jint CameraMetadata::CONTROL_AWB_STATE_SEARCHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_SEARCHING");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_CUSTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_CUSTOM");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_MANUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_MANUAL");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_MOTION_TRACKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_MOTION_TRACKING");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_PREVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_PREVIEW");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_STILL_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_STILL_CAPTURE");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_VIDEO_RECORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_VIDEO_RECORD");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT");
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_AQUA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_AQUA");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_BLACKBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_BLACKBOARD");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_MONO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_MONO");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_NEGATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_NEGATIVE");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_POSTERIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_POSTERIZE");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_SEPIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_SEPIA");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_SOLARIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_SOLARIZE");
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_WHITEBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_WHITEBOARD");
	}
	jint CameraMetadata::CONTROL_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_AUTO");
	}
	jint CameraMetadata::CONTROL_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_MODE_OFF_KEEP_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_OFF_KEEP_STATE");
	}
	jint CameraMetadata::CONTROL_MODE_USE_SCENE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_USE_SCENE_MODE");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_ACTION");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_BARCODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_BARCODE");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_BEACH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_BEACH");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_CANDLELIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_CANDLELIGHT");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_DISABLED");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_FACE_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_FACE_PRIORITY");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_FIREWORKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_FIREWORKS");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_HDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_HDR");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_LANDSCAPE");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_NIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_NIGHT");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_NIGHT_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_NIGHT_PORTRAIT");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_PARTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_PARTY");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_PORTRAIT");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_SNOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SNOW");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_SPORTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SPORTS");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_STEADYPHOTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_STEADYPHOTO");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_SUNSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SUNSET");
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_THEATRE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_THEATRE");
	}
	jint CameraMetadata::CONTROL_VIDEO_STABILIZATION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_VIDEO_STABILIZATION_MODE_OFF");
	}
	jint CameraMetadata::CONTROL_VIDEO_STABILIZATION_MODE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_VIDEO_STABILIZATION_MODE_ON");
	}
	jint CameraMetadata::DISTORTION_CORRECTION_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_FAST");
	}
	jint CameraMetadata::DISTORTION_CORRECTION_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::DISTORTION_CORRECTION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_OFF");
	}
	jint CameraMetadata::EDGE_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_FAST");
	}
	jint CameraMetadata::EDGE_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::EDGE_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_OFF");
	}
	jint CameraMetadata::EDGE_MODE_ZERO_SHUTTER_LAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_ZERO_SHUTTER_LAG");
	}
	jint CameraMetadata::FLASH_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_OFF");
	}
	jint CameraMetadata::FLASH_MODE_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_SINGLE");
	}
	jint CameraMetadata::FLASH_MODE_TORCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_TORCH");
	}
	jint CameraMetadata::FLASH_STATE_CHARGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_CHARGING");
	}
	jint CameraMetadata::FLASH_STATE_FIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_FIRED");
	}
	jint CameraMetadata::FLASH_STATE_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_PARTIAL");
	}
	jint CameraMetadata::FLASH_STATE_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_READY");
	}
	jint CameraMetadata::FLASH_STATE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_UNAVAILABLE");
	}
	jint CameraMetadata::HOT_PIXEL_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_FAST");
	}
	jint CameraMetadata::HOT_PIXEL_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::HOT_PIXEL_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_OFF");
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_3");
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL");
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_FULL");
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY");
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED");
	}
	jint CameraMetadata::LENS_FACING_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_BACK");
	}
	jint CameraMetadata::LENS_FACING_EXTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_EXTERNAL");
	}
	jint CameraMetadata::LENS_FACING_FRONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_FRONT");
	}
	jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE");
	}
	jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED");
	}
	jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED");
	}
	jint CameraMetadata::LENS_OPTICAL_STABILIZATION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_OPTICAL_STABILIZATION_MODE_OFF");
	}
	jint CameraMetadata::LENS_OPTICAL_STABILIZATION_MODE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_OPTICAL_STABILIZATION_MODE_ON");
	}
	jint CameraMetadata::LENS_POSE_REFERENCE_GYROSCOPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_GYROSCOPE");
	}
	jint CameraMetadata::LENS_POSE_REFERENCE_PRIMARY_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_PRIMARY_CAMERA");
	}
	jint CameraMetadata::LENS_STATE_MOVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_STATE_MOVING");
	}
	jint CameraMetadata::LENS_STATE_STATIONARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_STATE_STATIONARY");
	}
	jint CameraMetadata::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE");
	}
	jint CameraMetadata::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED");
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_FAST");
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_MINIMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_MINIMAL");
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_OFF");
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_RAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_RAW");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA");
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING");
	}
	jint CameraMetadata::SCALER_CROPPING_TYPE_CENTER_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_CROPPING_TYPE_CENTER_ONLY");
	}
	jint CameraMetadata::SCALER_CROPPING_TYPE_FREEFORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_CROPPING_TYPE_FREEFORM");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB");
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB");
	}
	jint CameraMetadata::SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME");
	}
	jint CameraMetadata::SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D50()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D50");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D55()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D55");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D65()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D65");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D75()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D75");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FLASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FLASH");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_SHADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_SHADE");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN");
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT");
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_COLOR_BARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_COLOR_BARS");
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY");
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_CUSTOM1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_CUSTOM1");
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_OFF");
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_PN9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_PN9");
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_SOLID_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_SOLID_COLOR");
	}
	jint CameraMetadata::SHADING_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_FAST");
	}
	jint CameraMetadata::SHADING_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::SHADING_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_OFF");
	}
	jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_FULL");
	}
	jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_OFF");
	}
	jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_SIMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_SIMPLE");
	}
	jint CameraMetadata::STATISTICS_LENS_SHADING_MAP_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_LENS_SHADING_MAP_MODE_OFF");
	}
	jint CameraMetadata::STATISTICS_LENS_SHADING_MAP_MODE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_LENS_SHADING_MAP_MODE_ON");
	}
	jint CameraMetadata::STATISTICS_OIS_DATA_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_OIS_DATA_MODE_OFF");
	}
	jint CameraMetadata::STATISTICS_OIS_DATA_MODE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_OIS_DATA_MODE_ON");
	}
	jint CameraMetadata::STATISTICS_SCENE_FLICKER_50HZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_50HZ");
	}
	jint CameraMetadata::STATISTICS_SCENE_FLICKER_60HZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_60HZ");
	}
	jint CameraMetadata::STATISTICS_SCENE_FLICKER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_NONE");
	}
	jint CameraMetadata::SYNC_MAX_LATENCY_PER_FRAME_CONTROL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SYNC_MAX_LATENCY_PER_FRAME_CONTROL");
	}
	jint CameraMetadata::SYNC_MAX_LATENCY_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SYNC_MAX_LATENCY_UNKNOWN");
	}
	jint CameraMetadata::TONEMAP_MODE_CONTRAST_CURVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_CONTRAST_CURVE");
	}
	jint CameraMetadata::TONEMAP_MODE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_FAST");
	}
	jint CameraMetadata::TONEMAP_MODE_GAMMA_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_GAMMA_VALUE");
	}
	jint CameraMetadata::TONEMAP_MODE_HIGH_QUALITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_HIGH_QUALITY");
	}
	jint CameraMetadata::TONEMAP_MODE_PRESET_CURVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_PRESET_CURVE");
	}
	jint CameraMetadata::TONEMAP_PRESET_CURVE_REC709()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_PRESET_CURVE_REC709");
	}
	jint CameraMetadata::TONEMAP_PRESET_CURVE_SRGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_PRESET_CURVE_SRGB");
	}
	
	// Constructors
	void CameraMetadata::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraMetadata",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CameraMetadata::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraMetadata : public __jni_impl::android::hardware::camera2::CameraMetadata
	{
	public:
		CameraMetadata(QAndroidJniObject obj) { __thiz = obj; }
		CameraMetadata()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERAMETADATA

