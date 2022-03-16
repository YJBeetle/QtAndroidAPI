#pragma once

#include "./CameraMetadata.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_FAST"
		);
	}
	inline jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::COLOR_CORRECTION_ABERRATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_ABERRATION_MODE_OFF"
		);
	}
	inline jint CameraMetadata::COLOR_CORRECTION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_FAST"
		);
	}
	inline jint CameraMetadata::COLOR_CORRECTION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::COLOR_CORRECTION_MODE_TRANSFORM_MATRIX()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"COLOR_CORRECTION_MODE_TRANSFORM_MATRIX"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_50HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_50HZ"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_60HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_60HZ"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_AUTO"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_ANTIBANDING_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_ANTIBANDING_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_MODE_ON_ALWAYS_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_ALWAYS_FLASH"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_MODE_ON_AUTO_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_AUTO_FLASH"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_AUTO_FLASH_REDEYE"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_MODE_ON_EXTERNAL_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_MODE_ON_EXTERNAL_FLASH"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_CANCEL"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_IDLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_IDLE"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_PRECAPTURE_TRIGGER_START()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_PRECAPTURE_TRIGGER_START"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_STATE_CONVERGED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_CONVERGED"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_STATE_FLASH_REQUIRED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_FLASH_REQUIRED"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_INACTIVE"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_STATE_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_LOCKED"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_STATE_PRECAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_PRECAPTURE"
		);
	}
	inline jint CameraMetadata::CONTROL_AE_STATE_SEARCHING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AE_STATE_SEARCHING"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_AUTO"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_MODE_CONTINUOUS_PICTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_CONTINUOUS_PICTURE"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_MODE_CONTINUOUS_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_CONTINUOUS_VIDEO"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_MODE_EDOF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_EDOF"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_MODE_MACRO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_MACRO"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_SCENE_CHANGE_DETECTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_SCENE_CHANGE_DETECTED"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_SCENE_CHANGE_NOT_DETECTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_SCENE_CHANGE_NOT_DETECTED"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_ACTIVE_SCAN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_ACTIVE_SCAN"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_FOCUSED_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_FOCUSED_LOCKED"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_INACTIVE"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_NOT_FOCUSED_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_NOT_FOCUSED_LOCKED"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_FOCUSED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_FOCUSED"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_SCAN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_SCAN"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_STATE_PASSIVE_UNFOCUSED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_STATE_PASSIVE_UNFOCUSED"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_TRIGGER_CANCEL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_CANCEL"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_TRIGGER_IDLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_IDLE"
		);
	}
	inline jint CameraMetadata::CONTROL_AF_TRIGGER_START()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AF_TRIGGER_START"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_AUTO"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_CLOUDY_DAYLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_CLOUDY_DAYLIGHT"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_DAYLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_DAYLIGHT"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_INCANDESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_INCANDESCENT"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_SHADE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_SHADE"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_TWILIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_TWILIGHT"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_MODE_WARM_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_MODE_WARM_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_STATE_CONVERGED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_CONVERGED"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_STATE_INACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_INACTIVE"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_STATE_LOCKED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_LOCKED"
		);
	}
	inline jint CameraMetadata::CONTROL_AWB_STATE_SEARCHING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_AWB_STATE_SEARCHING"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_CUSTOM()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_CUSTOM"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_MANUAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_MANUAL"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_MOTION_TRACKING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_MOTION_TRACKING"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_PREVIEW"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_STILL_CAPTURE"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_VIDEO_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_VIDEO_RECORD"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_VIDEO_SNAPSHOT"
		);
	}
	inline jint CameraMetadata::CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_CAPTURE_INTENT_ZERO_SHUTTER_LAG"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_AQUA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_AQUA"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_BLACKBOARD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_BLACKBOARD"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_MONO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_MONO"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_NEGATIVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_NEGATIVE"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_POSTERIZE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_POSTERIZE"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_SEPIA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_SEPIA"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_SOLARIZE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_SOLARIZE"
		);
	}
	inline jint CameraMetadata::CONTROL_EFFECT_MODE_WHITEBOARD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EFFECT_MODE_WHITEBOARD"
		);
	}
	inline jint CameraMetadata::CONTROL_EXTENDED_SCENE_MODE_BOKEH_CONTINUOUS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EXTENDED_SCENE_MODE_BOKEH_CONTINUOUS"
		);
	}
	inline jint CameraMetadata::CONTROL_EXTENDED_SCENE_MODE_BOKEH_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EXTENDED_SCENE_MODE_BOKEH_STILL_CAPTURE"
		);
	}
	inline jint CameraMetadata::CONTROL_EXTENDED_SCENE_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_EXTENDED_SCENE_MODE_DISABLED"
		);
	}
	inline jint CameraMetadata::CONTROL_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_AUTO"
		);
	}
	inline jint CameraMetadata::CONTROL_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_MODE_OFF_KEEP_STATE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_OFF_KEEP_STATE"
		);
	}
	inline jint CameraMetadata::CONTROL_MODE_USE_EXTENDED_SCENE_MODE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_USE_EXTENDED_SCENE_MODE"
		);
	}
	inline jint CameraMetadata::CONTROL_MODE_USE_SCENE_MODE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_MODE_USE_SCENE_MODE"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_ACTION()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_ACTION"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_BARCODE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_BARCODE"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_BEACH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_BEACH"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_CANDLELIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_CANDLELIGHT"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_DISABLED"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_FACE_PRIORITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_FACE_PRIORITY"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_FIREWORKS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_FIREWORKS"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_HDR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_HDR"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_HIGH_SPEED_VIDEO"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_LANDSCAPE"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_NIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_NIGHT"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_NIGHT_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_NIGHT_PORTRAIT"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_PARTY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_PARTY"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_PORTRAIT"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_SNOW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SNOW"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_SPORTS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SPORTS"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_STEADYPHOTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_STEADYPHOTO"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_SUNSET()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_SUNSET"
		);
	}
	inline jint CameraMetadata::CONTROL_SCENE_MODE_THEATRE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_SCENE_MODE_THEATRE"
		);
	}
	inline jint CameraMetadata::CONTROL_VIDEO_STABILIZATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_VIDEO_STABILIZATION_MODE_OFF"
		);
	}
	inline jint CameraMetadata::CONTROL_VIDEO_STABILIZATION_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"CONTROL_VIDEO_STABILIZATION_MODE_ON"
		);
	}
	inline jint CameraMetadata::DISTORTION_CORRECTION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_FAST"
		);
	}
	inline jint CameraMetadata::DISTORTION_CORRECTION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::DISTORTION_CORRECTION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"DISTORTION_CORRECTION_MODE_OFF"
		);
	}
	inline jint CameraMetadata::EDGE_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_FAST"
		);
	}
	inline jint CameraMetadata::EDGE_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::EDGE_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_OFF"
		);
	}
	inline jint CameraMetadata::EDGE_MODE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"EDGE_MODE_ZERO_SHUTTER_LAG"
		);
	}
	inline jint CameraMetadata::FLASH_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_OFF"
		);
	}
	inline jint CameraMetadata::FLASH_MODE_SINGLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_SINGLE"
		);
	}
	inline jint CameraMetadata::FLASH_MODE_TORCH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_MODE_TORCH"
		);
	}
	inline jint CameraMetadata::FLASH_STATE_CHARGING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_CHARGING"
		);
	}
	inline jint CameraMetadata::FLASH_STATE_FIRED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_FIRED"
		);
	}
	inline jint CameraMetadata::FLASH_STATE_PARTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_PARTIAL"
		);
	}
	inline jint CameraMetadata::FLASH_STATE_READY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_READY"
		);
	}
	inline jint CameraMetadata::FLASH_STATE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"FLASH_STATE_UNAVAILABLE"
		);
	}
	inline jint CameraMetadata::HOT_PIXEL_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_FAST"
		);
	}
	inline jint CameraMetadata::HOT_PIXEL_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::HOT_PIXEL_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"HOT_PIXEL_MODE_OFF"
		);
	}
	inline jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_3()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_3"
		);
	}
	inline jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_EXTERNAL"
		);
	}
	inline jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_FULL"
		);
	}
	inline jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY"
		);
	}
	inline jint CameraMetadata::INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"INFO_SUPPORTED_HARDWARE_LEVEL_LIMITED"
		);
	}
	inline jint CameraMetadata::LENS_FACING_BACK()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_BACK"
		);
	}
	inline jint CameraMetadata::LENS_FACING_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_EXTERNAL"
		);
	}
	inline jint CameraMetadata::LENS_FACING_FRONT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_FACING_FRONT"
		);
	}
	inline jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_APPROXIMATE"
		);
	}
	inline jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_CALIBRATED"
		);
	}
	inline jint CameraMetadata::LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_INFO_FOCUS_DISTANCE_CALIBRATION_UNCALIBRATED"
		);
	}
	inline jint CameraMetadata::LENS_OPTICAL_STABILIZATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_OPTICAL_STABILIZATION_MODE_OFF"
		);
	}
	inline jint CameraMetadata::LENS_OPTICAL_STABILIZATION_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_OPTICAL_STABILIZATION_MODE_ON"
		);
	}
	inline jint CameraMetadata::LENS_POSE_REFERENCE_GYROSCOPE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_GYROSCOPE"
		);
	}
	inline jint CameraMetadata::LENS_POSE_REFERENCE_PRIMARY_CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_PRIMARY_CAMERA"
		);
	}
	inline jint CameraMetadata::LENS_POSE_REFERENCE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_POSE_REFERENCE_UNDEFINED"
		);
	}
	inline jint CameraMetadata::LENS_STATE_MOVING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_STATE_MOVING"
		);
	}
	inline jint CameraMetadata::LENS_STATE_STATIONARY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LENS_STATE_STATIONARY"
		);
	}
	inline jint CameraMetadata::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_APPROXIMATE"
		);
	}
	inline jint CameraMetadata::LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"LOGICAL_MULTI_CAMERA_SENSOR_SYNC_TYPE_CALIBRATED"
		);
	}
	inline jint CameraMetadata::NOISE_REDUCTION_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_FAST"
		);
	}
	inline jint CameraMetadata::NOISE_REDUCTION_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::NOISE_REDUCTION_MODE_MINIMAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_MINIMAL"
		);
	}
	inline jint CameraMetadata::NOISE_REDUCTION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_OFF"
		);
	}
	inline jint CameraMetadata::NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"NOISE_REDUCTION_MODE_ZERO_SHUTTER_LAG"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_BACKWARD_COMPATIBLE"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_BURST_CAPTURE"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_CONSTRAINED_HIGH_SPEED_VIDEO"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_DEPTH_OUTPUT"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_LOGICAL_MULTI_CAMERA"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_POST_PROCESSING"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MANUAL_SENSOR"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MONOCHROME"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_MOTION_TRACKING"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_OFFLINE_PROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_OFFLINE_PROCESSING"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_PRIVATE_REPROCESSING"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_RAW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_RAW"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_READ_SENSOR_SETTINGS"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_REMOSAIC_REPROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_REMOSAIC_REPROCESSING"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_SECURE_IMAGE_DATA"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_SYSTEM_CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_SYSTEM_CAMERA"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_ULTRA_HIGH_RESOLUTION_SENSOR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_ULTRA_HIGH_RESOLUTION_SENSOR"
		);
	}
	inline jint CameraMetadata::REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"REQUEST_AVAILABLE_CAPABILITIES_YUV_REPROCESSING"
		);
	}
	inline jint CameraMetadata::SCALER_CROPPING_TYPE_CENTER_ONLY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_CROPPING_TYPE_CENTER_ONLY"
		);
	}
	inline jint CameraMetadata::SCALER_CROPPING_TYPE_FREEFORM()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_CROPPING_TYPE_FREEFORM"
		);
	}
	inline jint CameraMetadata::SCALER_ROTATE_AND_CROP_180()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_ROTATE_AND_CROP_180"
		);
	}
	inline jint CameraMetadata::SCALER_ROTATE_AND_CROP_270()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_ROTATE_AND_CROP_270"
		);
	}
	inline jint CameraMetadata::SCALER_ROTATE_AND_CROP_90()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_ROTATE_AND_CROP_90"
		);
	}
	inline jint CameraMetadata::SCALER_ROTATE_AND_CROP_AUTO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_ROTATE_AND_CROP_AUTO"
		);
	}
	inline jint CameraMetadata::SCALER_ROTATE_AND_CROP_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SCALER_ROTATE_AND_CROP_NONE"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_BGGR"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GBRG"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_GRBG"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_MONO"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_NIR"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGB"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_COLOR_FILTER_ARRANGEMENT_RGGB"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_TIMESTAMP_SOURCE_REALTIME"
		);
	}
	inline jint CameraMetadata::SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_INFO_TIMESTAMP_SOURCE_UNKNOWN"
		);
	}
	inline jint CameraMetadata::SENSOR_PIXEL_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_PIXEL_MODE_DEFAULT"
		);
	}
	inline jint CameraMetadata::SENSOR_PIXEL_MODE_MAXIMUM_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_PIXEL_MODE_MAXIMUM_RESOLUTION"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_CLOUDY_WEATHER"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_COOL_WHITE_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D50()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D50"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D55()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D55"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D65()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D65"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_D75()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_D75"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAYLIGHT_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_DAY_WHITE_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FINE_WEATHER"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FLASH()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FLASH"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_ISO_STUDIO_TUNGSTEN"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_SHADE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_SHADE"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_A"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_B"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_STANDARD_C"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_TUNGSTEN"
		);
	}
	inline jint CameraMetadata::SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_REFERENCE_ILLUMINANT1_WHITE_FLUORESCENT"
		);
	}
	inline jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_COLOR_BARS()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_COLOR_BARS"
		);
	}
	inline jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_COLOR_BARS_FADE_TO_GRAY"
		);
	}
	inline jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_CUSTOM1()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_CUSTOM1"
		);
	}
	inline jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_OFF"
		);
	}
	inline jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_PN9()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_PN9"
		);
	}
	inline jint CameraMetadata::SENSOR_TEST_PATTERN_MODE_SOLID_COLOR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SENSOR_TEST_PATTERN_MODE_SOLID_COLOR"
		);
	}
	inline jint CameraMetadata::SHADING_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_FAST"
		);
	}
	inline jint CameraMetadata::SHADING_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::SHADING_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SHADING_MODE_OFF"
		);
	}
	inline jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_FULL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_FULL"
		);
	}
	inline jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_OFF"
		);
	}
	inline jint CameraMetadata::STATISTICS_FACE_DETECT_MODE_SIMPLE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_FACE_DETECT_MODE_SIMPLE"
		);
	}
	inline jint CameraMetadata::STATISTICS_LENS_SHADING_MAP_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_LENS_SHADING_MAP_MODE_OFF"
		);
	}
	inline jint CameraMetadata::STATISTICS_LENS_SHADING_MAP_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_LENS_SHADING_MAP_MODE_ON"
		);
	}
	inline jint CameraMetadata::STATISTICS_OIS_DATA_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_OIS_DATA_MODE_OFF"
		);
	}
	inline jint CameraMetadata::STATISTICS_OIS_DATA_MODE_ON()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_OIS_DATA_MODE_ON"
		);
	}
	inline jint CameraMetadata::STATISTICS_SCENE_FLICKER_50HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_50HZ"
		);
	}
	inline jint CameraMetadata::STATISTICS_SCENE_FLICKER_60HZ()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_60HZ"
		);
	}
	inline jint CameraMetadata::STATISTICS_SCENE_FLICKER_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"STATISTICS_SCENE_FLICKER_NONE"
		);
	}
	inline jint CameraMetadata::SYNC_MAX_LATENCY_PER_FRAME_CONTROL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SYNC_MAX_LATENCY_PER_FRAME_CONTROL"
		);
	}
	inline jint CameraMetadata::SYNC_MAX_LATENCY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"SYNC_MAX_LATENCY_UNKNOWN"
		);
	}
	inline jint CameraMetadata::TONEMAP_MODE_CONTRAST_CURVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_CONTRAST_CURVE"
		);
	}
	inline jint CameraMetadata::TONEMAP_MODE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_FAST"
		);
	}
	inline jint CameraMetadata::TONEMAP_MODE_GAMMA_VALUE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_GAMMA_VALUE"
		);
	}
	inline jint CameraMetadata::TONEMAP_MODE_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_HIGH_QUALITY"
		);
	}
	inline jint CameraMetadata::TONEMAP_MODE_PRESET_CURVE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_MODE_PRESET_CURVE"
		);
	}
	inline jint CameraMetadata::TONEMAP_PRESET_CURVE_REC709()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_PRESET_CURVE_REC709"
		);
	}
	inline jint CameraMetadata::TONEMAP_PRESET_CURVE_SRGB()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraMetadata",
			"TONEMAP_PRESET_CURVE_SRGB"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject CameraMetadata::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
} // namespace android::hardware::camera2

// Base class headers

