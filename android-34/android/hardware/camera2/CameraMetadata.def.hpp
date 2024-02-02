#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraMetadata : public JObject
	{
	public:
		// Fields
		static jint AUTOMOTIVE_LENS_FACING_EXTERIOR_FRONT();
		static jint AUTOMOTIVE_LENS_FACING_EXTERIOR_LEFT();
		static jint AUTOMOTIVE_LENS_FACING_EXTERIOR_OTHER();
		static jint AUTOMOTIVE_LENS_FACING_EXTERIOR_REAR();
		static jint AUTOMOTIVE_LENS_FACING_EXTERIOR_RIGHT();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_OTHER();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_1_CENTER();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_1_LEFT();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_1_RIGHT();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_2_CENTER();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_2_LEFT();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_2_RIGHT();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_3_CENTER();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_3_LEFT();
		static jint AUTOMOTIVE_LENS_FACING_INTERIOR_SEAT_ROW_3_RIGHT();
		static jint AUTOMOTIVE_LOCATION_EXTERIOR_FRONT();
		static jint AUTOMOTIVE_LOCATION_EXTERIOR_LEFT();
		static jint AUTOMOTIVE_LOCATION_EXTERIOR_OTHER();
		static jint AUTOMOTIVE_LOCATION_EXTERIOR_REAR();
		static jint AUTOMOTIVE_LOCATION_EXTERIOR_RIGHT();
		static jint AUTOMOTIVE_LOCATION_EXTRA_FRONT();
		static jint AUTOMOTIVE_LOCATION_EXTRA_LEFT();
		static jint AUTOMOTIVE_LOCATION_EXTRA_OTHER();
		static jint AUTOMOTIVE_LOCATION_EXTRA_REAR();
		static jint AUTOMOTIVE_LOCATION_EXTRA_RIGHT();
		static jint AUTOMOTIVE_LOCATION_INTERIOR();
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
		static jint CONTROL_AUTOFRAMING_OFF();
		static jint CONTROL_AUTOFRAMING_ON();
		static jint CONTROL_AUTOFRAMING_STATE_CONVERGED();
		static jint CONTROL_AUTOFRAMING_STATE_FRAMING();
		static jint CONTROL_AUTOFRAMING_STATE_INACTIVE();
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
		static jint CONTROL_EXTENDED_SCENE_MODE_BOKEH_CONTINUOUS();
		static jint CONTROL_EXTENDED_SCENE_MODE_BOKEH_STILL_CAPTURE();
		static jint CONTROL_EXTENDED_SCENE_MODE_DISABLED();
		static jint CONTROL_MODE_AUTO();
		static jint CONTROL_MODE_OFF();
		static jint CONTROL_MODE_OFF_KEEP_STATE();
		static jint CONTROL_MODE_USE_EXTENDED_SCENE_MODE();
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
		static jint CONTROL_SETTINGS_OVERRIDE_OFF();
		static jint CONTROL_SETTINGS_OVERRIDE_ZOOM();
		static jint CONTROL_VIDEO_STABILIZATION_MODE_OFF();
		static jint CONTROL_VIDEO_STABILIZATION_MODE_ON();
		static jint CONTROL_VIDEO_STABILIZATION_MODE_PREVIEW_STABILIZATION();
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
		static jint LENS_POSE_REFERENCE_AUTOMOTIVE();
		static jint LENS_POSE_REFERENCE_GYROSCOPE();
		static jint LENS_POSE_REFERENCE_PRIMARY_CAMERA();
		static jint LENS_POSE_REFERENCE_UNDEFINED();
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
		static jint REQUEST_AVAILABLE_CAPABILITIES_COLOR_SPACE_PROFILES();
		static jint REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO();
		static jint REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT();
		static jint REQUEST_AVAILABLE_CAPABILITIES_DYNAMIC_RANGE_TEN_BIT();
		static jint REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME();
		static jint REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_OFFLINE_PROCESSING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_RAW();
		static jint REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS();
		static jint REQUEST_AVAILABLE_CAPABILITIES_REMOSAIC_REPROCESSING();
		static jint REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA();
		static jint REQUEST_AVAILABLE_CAPABILITIES_STREAM_USE_CASE();
		static jint REQUEST_AVAILABLE_CAPABILITIES_SYSTEM_CAMERA();
		static jint REQUEST_AVAILABLE_CAPABILITIES_ULTRA_HIGH_RESOLUTION_SENSOR();
		static jint REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_CROPPED_RAW();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_DEFAULT();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_PREVIEW();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_PREVIEW_VIDEO_STILL();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_STILL_CAPTURE();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_VIDEO_CALL();
		static jint SCALER_AVAILABLE_STREAM_USE_CASES_VIDEO_RECORD();
		static jint SCALER_CROPPING_TYPE_CENTER_ONLY();
		static jint SCALER_CROPPING_TYPE_FREEFORM();
		static jint SCALER_ROTATE_AND_CROP_180();
		static jint SCALER_ROTATE_AND_CROP_270();
		static jint SCALER_ROTATE_AND_CROP_90();
		static jint SCALER_ROTATE_AND_CROP_AUTO();
		static jint SCALER_ROTATE_AND_CROP_NONE();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB();
		static jint SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB();
		static jint SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME();
		static jint SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN();
		static jint SENSOR_PIXEL_MODE_DEFAULT();
		static jint SENSOR_PIXEL_MODE_MAXIMUM_RESOLUTION();
		static jint SENSOR_READOUT_TIMESTAMP_HARDWARE();
		static jint SENSOR_READOUT_TIMESTAMP_NOT_SUPPORTED();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraMetadata(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getKeys() const;
	};
} // namespace android::hardware::camera2

