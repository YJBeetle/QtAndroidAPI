#include "./CameraMetadata.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_FAST"
		);
	}
	jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_OFF"
		);
	}
	jint CameraMetadata::COLOR_CORRECTION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_FAST"
		);
	}
	jint CameraMetadata::COLOR_CORRECTION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::COLOR_CORRECTION_MODE_TRANSFORM_MATRIX()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_TRANSFORM_MATRIX"
		);
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_50HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_50HZ"
		);
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_60HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_60HZ"
		);
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_AUTO"
		);
	}
	jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_AE_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON"
		);
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_ALWAYS_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_ALWAYS_FLASH"
		);
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_AUTO_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_AUTO_FLASH"
		);
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE"
		);
	}
	jint CameraMetadata::CONTROL_AE_MODE_ON_EXTERNAL_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_EXTERNAL_FLASH"
		);
	}
	jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL"
		);
	}
	jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_IDLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_IDLE"
		);
	}
	jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_START()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_START"
		);
	}
	jint CameraMetadata::CONTROL_AE_STATE_CONVERGED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_CONVERGED"
		);
	}
	jint CameraMetadata::CONTROL_AE_STATE_FLASH_REQUIRED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_FLASH_REQUIRED"
		);
	}
	jint CameraMetadata::CONTROL_AE_STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_INACTIVE"
		);
	}
	jint CameraMetadata::CONTROL_AE_STATE_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_LOCKED"
		);
	}
	jint CameraMetadata::CONTROL_AE_STATE_PRECAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_PRECAPTURE"
		);
	}
	jint CameraMetadata::CONTROL_AE_STATE_SEARCHING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_SEARCHING"
		);
	}
	jint CameraMetadata::CONTROL_AF_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_AUTO"
		);
	}
	jint CameraMetadata::CONTROL_AF_MODE_CONTINUOUS_PICTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_CONTINUOUS_PICTURE"
		);
	}
	jint CameraMetadata::CONTROL_AF_MODE_CONTINUOUS_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_CONTINUOUS_VIDEO"
		);
	}
	jint CameraMetadata::CONTROL_AF_MODE_EDOF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_EDOF"
		);
	}
	jint CameraMetadata::CONTROL_AF_MODE_MACRO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_MACRO"
		);
	}
	jint CameraMetadata::CONTROL_AF_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_AF_SCENE_CHANGE_DETECTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_SCENE_CHANGE_DETECTED"
		);
	}
	jint CameraMetadata::CONTROL_AF_SCENE_CHANGE_NOT_DETECTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_SCENE_CHANGE_NOT_DETECTED"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_ACTIVE_SCAN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_ACTIVE_SCAN"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_FOCUSED_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_FOCUSED_LOCKED"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_INACTIVE"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_NOT_FOCUSED_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_NOT_FOCUSED_LOCKED"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_FOCUSED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_FOCUSED"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_SCAN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_SCAN"
		);
	}
	jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_UNFOCUSED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_UNFOCUSED"
		);
	}
	jint CameraMetadata::CONTROL_AF_TRIGGER_CANCEL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_CANCEL"
		);
	}
	jint CameraMetadata::CONTROL_AF_TRIGGER_IDLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_IDLE"
		);
	}
	jint CameraMetadata::CONTROL_AF_TRIGGER_START()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_START"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_AUTO"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_CLOUDY_DAYLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_CLOUDY_DAYLIGHT"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_DAYLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_DAYLIGHT"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_FLUORESCENT"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_INCANDESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_INCANDESCENT"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_SHADE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_SHADE"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_TWILIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_TWILIGHT"
		);
	}
	jint CameraMetadata::CONTROL_AWB_MODE_WARM_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_WARM_FLUORESCENT"
		);
	}
	jint CameraMetadata::CONTROL_AWB_STATE_CONVERGED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_CONVERGED"
		);
	}
	jint CameraMetadata::CONTROL_AWB_STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_INACTIVE"
		);
	}
	jint CameraMetadata::CONTROL_AWB_STATE_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_LOCKED"
		);
	}
	jint CameraMetadata::CONTROL_AWB_STATE_SEARCHING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_SEARCHING"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_CUSTOM()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_CUSTOM"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_MANUAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_MANUAL"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_MOTION_TRACKING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_MOTION_TRACKING"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_PREVIEW"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_STILL_CAPTURE"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_VIDEO_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_VIDEO_RECORD"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT"
		);
	}
	jint CameraMetadata::CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_AQUA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_AQUA"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_BLACKBOARD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_BLACKBOARD"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_MONO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_MONO"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_NEGATIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_NEGATIVE"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_POSTERIZE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_POSTERIZE"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_SEPIA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_SEPIA"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_SOLARIZE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_SOLARIZE"
		);
	}
	jint CameraMetadata::CONTROL_EFFECT_MODE_WHITEBOARD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_WHITEBOARD"
		);
	}
	jint CameraMetadata::CONTROL_EXTENDED_SCENE_MODE_BOKEH_CONTINUOUS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EXTENDED_SCENE_MODE_BOKEH_CONTINUOUS"
		);
	}
	jint CameraMetadata::CONTROL_EXTENDED_SCENE_MODE_BOKEH_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EXTENDED_SCENE_MODE_BOKEH_STILL_CAPTURE"
		);
	}
	jint CameraMetadata::CONTROL_EXTENDED_SCENE_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EXTENDED_SCENE_MODE_DISABLED"
		);
	}
	jint CameraMetadata::CONTROL_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_AUTO"
		);
	}
	jint CameraMetadata::CONTROL_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_MODE_OFF_KEEP_STATE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_OFF_KEEP_STATE"
		);
	}
	jint CameraMetadata::CONTROL_MODE_USE_EXTENDED_SCENE_MODE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_USE_EXTENDED_SCENE_MODE"
		);
	}
	jint CameraMetadata::CONTROL_MODE_USE_SCENE_MODE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_USE_SCENE_MODE"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_ACTION()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_ACTION"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_BARCODE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_BARCODE"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_BEACH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_BEACH"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_CANDLELIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_CANDLELIGHT"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_DISABLED"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_FACE_PRIORITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_FACE_PRIORITY"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_FIREWORKS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_FIREWORKS"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_HDR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_HDR"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_LANDSCAPE"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_NIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_NIGHT"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_NIGHT_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_NIGHT_PORTRAIT"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_PARTY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_PARTY"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_PORTRAIT"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_SNOW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SNOW"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_SPORTS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SPORTS"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_STEADYPHOTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_STEADYPHOTO"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_SUNSET()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SUNSET"
		);
	}
	jint CameraMetadata::CONTROL_SCENE_MODE_THEATRE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_THEATRE"
		);
	}
	jint CameraMetadata::CONTROL_VIDEO_STABILIZATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_VIDEO_STABILIZATION_MODE_OFF"
		);
	}
	jint CameraMetadata::CONTROL_VIDEO_STABILIZATION_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_VIDEO_STABILIZATION_MODE_ON"
		);
	}
	jint CameraMetadata::DISTORTION_CORRECTION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_FAST"
		);
	}
	jint CameraMetadata::DISTORTION_CORRECTION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::DISTORTION_CORRECTION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_OFF"
		);
	}
	jint CameraMetadata::EDGE_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_FAST"
		);
	}
	jint CameraMetadata::EDGE_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::EDGE_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_OFF"
		);
	}
	jint CameraMetadata::EDGE_MODE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_ZERO_SHUTTER_LAG"
		);
	}
	jint CameraMetadata::FLASH_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_OFF"
		);
	}
	jint CameraMetadata::FLASH_MODE_SINGLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_SINGLE"
		);
	}
	jint CameraMetadata::FLASH_MODE_TORCH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_TORCH"
		);
	}
	jint CameraMetadata::FLASH_STATE_CHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_CHARGING"
		);
	}
	jint CameraMetadata::FLASH_STATE_FIRED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_FIRED"
		);
	}
	jint CameraMetadata::FLASH_STATE_PARTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_PARTIAL"
		);
	}
	jint CameraMetadata::FLASH_STATE_READY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_READY"
		);
	}
	jint CameraMetadata::FLASH_STATE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_UNAVAILABLE"
		);
	}
	jint CameraMetadata::HOT_PIXEL_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_FAST"
		);
	}
	jint CameraMetadata::HOT_PIXEL_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::HOT_PIXEL_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_OFF"
		);
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_3()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_3"
		);
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL"
		);
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_FULL"
		);
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY"
		);
	}
	jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED"
		);
	}
	jint CameraMetadata::LENS_FACING_BACK()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_BACK"
		);
	}
	jint CameraMetadata::LENS_FACING_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_EXTERNAL"
		);
	}
	jint CameraMetadata::LENS_FACING_FRONT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_FRONT"
		);
	}
	jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE"
		);
	}
	jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED"
		);
	}
	jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED"
		);
	}
	jint CameraMetadata::LENS_OPTICAL_STABILIZATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_OPTICAL_STABILIZATION_MODE_OFF"
		);
	}
	jint CameraMetadata::LENS_OPTICAL_STABILIZATION_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_OPTICAL_STABILIZATION_MODE_ON"
		);
	}
	jint CameraMetadata::LENS_POSE_REFERENCE_GYROSCOPE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_GYROSCOPE"
		);
	}
	jint CameraMetadata::LENS_POSE_REFERENCE_PRIMARY_CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_PRIMARY_CAMERA"
		);
	}
	jint CameraMetadata::LENS_POSE_REFERENCE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_UNDEFINED"
		);
	}
	jint CameraMetadata::LENS_STATE_MOVING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_STATE_MOVING"
		);
	}
	jint CameraMetadata::LENS_STATE_STATIONARY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_STATE_STATIONARY"
		);
	}
	jint CameraMetadata::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE"
		);
	}
	jint CameraMetadata::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED"
		);
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_FAST"
		);
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_MINIMAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_MINIMAL"
		);
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_OFF"
		);
	}
	jint CameraMetadata::NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_OFFLINE_PROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_OFFLINE_PROCESSING"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_RAW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_RAW"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_SYSTEM_CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_SYSTEM_CAMERA"
		);
	}
	jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING"
		);
	}
	jint CameraMetadata::SCALER_CROPPING_TYPE_CENTER_ONLY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_CROPPING_TYPE_CENTER_ONLY"
		);
	}
	jint CameraMetadata::SCALER_CROPPING_TYPE_FREEFORM()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_CROPPING_TYPE_FREEFORM"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB"
		);
	}
	jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB"
		);
	}
	jint CameraMetadata::SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME"
		);
	}
	jint CameraMetadata::SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D50()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D50"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D55()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D55"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D65()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D65"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D75()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D75"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FLASH"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_SHADE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_SHADE"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN"
		);
	}
	jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT"
		);
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_COLOR_BARS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_COLOR_BARS"
		);
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY"
		);
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_CUSTOM1()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_CUSTOM1"
		);
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_OFF"
		);
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_PN9()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_PN9"
		);
	}
	jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_SOLID_COLOR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_SOLID_COLOR"
		);
	}
	jint CameraMetadata::SHADING_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_FAST"
		);
	}
	jint CameraMetadata::SHADING_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::SHADING_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_OFF"
		);
	}
	jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_FULL"
		);
	}
	jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_OFF"
		);
	}
	jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_SIMPLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_SIMPLE"
		);
	}
	jint CameraMetadata::STATISTICS_LENS_SHADING_MAP_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_LENS_SHADING_MAP_MODE_OFF"
		);
	}
	jint CameraMetadata::STATISTICS_LENS_SHADING_MAP_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_LENS_SHADING_MAP_MODE_ON"
		);
	}
	jint CameraMetadata::STATISTICS_OIS_DATA_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_OIS_DATA_MODE_OFF"
		);
	}
	jint CameraMetadata::STATISTICS_OIS_DATA_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_OIS_DATA_MODE_ON"
		);
	}
	jint CameraMetadata::STATISTICS_SCENE_FLICKER_50HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_50HZ"
		);
	}
	jint CameraMetadata::STATISTICS_SCENE_FLICKER_60HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_60HZ"
		);
	}
	jint CameraMetadata::STATISTICS_SCENE_FLICKER_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_NONE"
		);
	}
	jint CameraMetadata::SYNC_MAX_LATENCY_PER_FRAME_CONTROL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SYNC_MAX_LATENCY_PER_FRAME_CONTROL"
		);
	}
	jint CameraMetadata::SYNC_MAX_LATENCY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SYNC_MAX_LATENCY_UNKNOWN"
		);
	}
	jint CameraMetadata::TONEMAP_MODE_CONTRAST_CURVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_CONTRAST_CURVE"
		);
	}
	jint CameraMetadata::TONEMAP_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_FAST"
		);
	}
	jint CameraMetadata::TONEMAP_MODE_GAMMA_VALUE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_GAMMA_VALUE"
		);
	}
	jint CameraMetadata::TONEMAP_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_HIGH_QUALITY"
		);
	}
	jint CameraMetadata::TONEMAP_MODE_PRESET_CURVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_PRESET_CURVE"
		);
	}
	jint CameraMetadata::TONEMAP_PRESET_CURVE_REC709()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_PRESET_CURVE_REC709"
		);
	}
	jint CameraMetadata::TONEMAP_PRESET_CURVE_SRGB()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_PRESET_CURVE_SRGB"
		);
	}
	
	// QJniObject forward
	CameraMetadata::CameraMetadata(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject CameraMetadata::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
} // namespace android::hardware::camera2

