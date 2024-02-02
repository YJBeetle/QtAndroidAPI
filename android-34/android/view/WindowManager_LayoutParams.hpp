#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./WindowManager_LayoutParams.def.hpp"

namespace android::view
{
	// Fields
	inline jint WindowManager_LayoutParams::ALPHA_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ALPHA_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::ANIMATION_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ANIMATION_CHANGED"
		);
	}
	inline jfloat WindowManager_LayoutParams::BRIGHTNESS_OVERRIDE_FULL()
	{
		return getStaticField<jfloat>(
			"android.view.WindowManager$LayoutParams",
			"BRIGHTNESS_OVERRIDE_FULL"
		);
	}
	inline jfloat WindowManager_LayoutParams::BRIGHTNESS_OVERRIDE_NONE()
	{
		return getStaticField<jfloat>(
			"android.view.WindowManager$LayoutParams",
			"BRIGHTNESS_OVERRIDE_NONE"
		);
	}
	inline jfloat WindowManager_LayoutParams::BRIGHTNESS_OVERRIDE_OFF()
	{
		return getStaticField<jfloat>(
			"android.view.WindowManager$LayoutParams",
			"BRIGHTNESS_OVERRIDE_OFF"
		);
	}
	inline JObject WindowManager_LayoutParams::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowManager$LayoutParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WindowManager_LayoutParams::DIM_AMOUNT_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"DIM_AMOUNT_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::DISPLAY_FLAG_DISABLE_HDR_CONVERSION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"DISPLAY_FLAG_DISABLE_HDR_CONVERSION"
		);
	}
	inline jint WindowManager_LayoutParams::FIRST_APPLICATION_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FIRST_APPLICATION_WINDOW"
		);
	}
	inline jint WindowManager_LayoutParams::FIRST_SUB_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FIRST_SUB_WINDOW"
		);
	}
	inline jint WindowManager_LayoutParams::FIRST_SYSTEM_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FIRST_SYSTEM_WINDOW"
		);
	}
	inline jint WindowManager_LayoutParams::FLAGS_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAGS_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_ALLOW_LOCK_WHILE_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_ALLOW_LOCK_WHILE_SCREEN_ON"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_ALT_FOCUSABLE_IM()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_ALT_FOCUSABLE_IM"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_BLUR_BEHIND()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_BLUR_BEHIND"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_DIM_BEHIND()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DIM_BEHIND"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_DISMISS_KEYGUARD()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DISMISS_KEYGUARD"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_DITHER()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DITHER"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_FORCE_NOT_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_FORCE_NOT_FULLSCREEN"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_FULLSCREEN"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_HARDWARE_ACCELERATED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_IGNORE_CHEEK_PRESSES()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_IGNORE_CHEEK_PRESSES"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_KEEP_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_KEEP_SCREEN_ON"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_LAYOUT_ATTACHED_IN_DECOR()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_ATTACHED_IN_DECOR"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_LAYOUT_INSET_DECOR()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_INSET_DECOR"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_LAYOUT_IN_OVERSCAN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_IN_OVERSCAN"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_LAYOUT_IN_SCREEN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_IN_SCREEN"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_LAYOUT_NO_LIMITS()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_NO_LIMITS"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_LOCAL_FOCUS_MODE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LOCAL_FOCUS_MODE"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_NOT_FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_NOT_FOCUSABLE"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_NOT_TOUCHABLE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_NOT_TOUCHABLE"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_NOT_TOUCH_MODAL()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_NOT_TOUCH_MODAL"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_SCALED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SCALED"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_SECURE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SECURE"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_SHOW_WALLPAPER()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SHOW_WALLPAPER"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_SHOW_WHEN_LOCKED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SHOW_WHEN_LOCKED"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_SPLIT_TOUCH()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SPLIT_TOUCH"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_TOUCHABLE_WHEN_WAKING()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TOUCHABLE_WHEN_WAKING"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_TRANSLUCENT_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TRANSLUCENT_NAVIGATION"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_TRANSLUCENT_STATUS()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TRANSLUCENT_STATUS"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_TURN_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TURN_SCREEN_ON"
		);
	}
	inline jint WindowManager_LayoutParams::FLAG_WATCH_OUTSIDE_TOUCH()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_WATCH_OUTSIDE_TOUCH"
		);
	}
	inline jint WindowManager_LayoutParams::FORMAT_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FORMAT_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::LAST_APPLICATION_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAST_APPLICATION_WINDOW"
		);
	}
	inline jint WindowManager_LayoutParams::LAST_SUB_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAST_SUB_WINDOW"
		);
	}
	inline jint WindowManager_LayoutParams::LAST_SYSTEM_WINDOW()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAST_SYSTEM_WINDOW"
		);
	}
	inline jint WindowManager_LayoutParams::LAYOUT_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS"
		);
	}
	inline jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT"
		);
	}
	inline jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER"
		);
	}
	inline jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES"
		);
	}
	inline jint WindowManager_LayoutParams::MEMORY_TYPE_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::MEMORY_TYPE_GPU()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_GPU"
		);
	}
	inline jint WindowManager_LayoutParams::MEMORY_TYPE_HARDWARE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_HARDWARE"
		);
	}
	inline jint WindowManager_LayoutParams::MEMORY_TYPE_NORMAL()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_NORMAL"
		);
	}
	inline jint WindowManager_LayoutParams::MEMORY_TYPE_PUSH_BUFFERS()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_PUSH_BUFFERS"
		);
	}
	inline jint WindowManager_LayoutParams::ROTATION_ANIMATION_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::ROTATION_ANIMATION_CROSSFADE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_CROSSFADE"
		);
	}
	inline jint WindowManager_LayoutParams::ROTATION_ANIMATION_JUMPCUT()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_JUMPCUT"
		);
	}
	inline jint WindowManager_LayoutParams::ROTATION_ANIMATION_ROTATE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_ROTATE"
		);
	}
	inline jint WindowManager_LayoutParams::ROTATION_ANIMATION_SEAMLESS()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_SEAMLESS"
		);
	}
	inline jint WindowManager_LayoutParams::SCREEN_BRIGHTNESS_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SCREEN_BRIGHTNESS_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::SCREEN_ORIENTATION_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SCREEN_ORIENTATION_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_NOTHING()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_NOTHING"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_PAN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_PAN"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_RESIZE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_RESIZE"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_UNSPECIFIED"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_IS_FORWARD_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_IS_FORWARD_NAVIGATION"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_MASK_ADJUST()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_MASK_ADJUST"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_MASK_STATE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_MASK_STATE"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_MODE_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_MODE_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_STATE_ALWAYS_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_ALWAYS_HIDDEN"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_STATE_ALWAYS_VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_ALWAYS_VISIBLE"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_STATE_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_HIDDEN"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_STATE_UNCHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_UNCHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_STATE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_UNSPECIFIED"
		);
	}
	inline jint WindowManager_LayoutParams::SOFT_INPUT_STATE_VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_VISIBLE"
		);
	}
	inline jint WindowManager_LayoutParams::TITLE_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TITLE_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_ACCESSIBILITY_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_ACCESSIBILITY_OVERLAY"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION_ATTACHED_DIALOG()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_ATTACHED_DIALOG"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION_MEDIA()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_MEDIA"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_OVERLAY"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION_PANEL()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_PANEL"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION_STARTING()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_STARTING"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_APPLICATION_SUB_PANEL()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_SUB_PANEL"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_BASE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_BASE_APPLICATION"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_CHANGED"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_DRAWN_APPLICATION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_DRAWN_APPLICATION"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_INPUT_METHOD()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_INPUT_METHOD"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_INPUT_METHOD_DIALOG()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_INPUT_METHOD_DIALOG"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_KEYGUARD_DIALOG()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_KEYGUARD_DIALOG"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_PHONE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_PHONE"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_PRIORITY_PHONE()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_PRIORITY_PHONE"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_PRIVATE_PRESENTATION()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_PRIVATE_PRESENTATION"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_SEARCH_BAR()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SEARCH_BAR"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_STATUS_BAR()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_STATUS_BAR"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_SYSTEM_ALERT()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_ALERT"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_SYSTEM_DIALOG()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_DIALOG"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_SYSTEM_ERROR()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_ERROR"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_SYSTEM_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_OVERLAY"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_TOAST()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_TOAST"
		);
	}
	inline jint WindowManager_LayoutParams::TYPE_WALLPAPER()
	{
		return getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_WALLPAPER"
		);
	}
	inline jfloat WindowManager_LayoutParams::alpha()
	{
		return getField<jfloat>(
			"alpha"
		);
	}
	inline jfloat WindowManager_LayoutParams::buttonBrightness()
	{
		return getField<jfloat>(
			"buttonBrightness"
		);
	}
	inline jfloat WindowManager_LayoutParams::dimAmount()
	{
		return getField<jfloat>(
			"dimAmount"
		);
	}
	inline jint WindowManager_LayoutParams::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jint WindowManager_LayoutParams::format()
	{
		return getField<jint>(
			"format"
		);
	}
	inline jint WindowManager_LayoutParams::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	inline jfloat WindowManager_LayoutParams::horizontalMargin()
	{
		return getField<jfloat>(
			"horizontalMargin"
		);
	}
	inline jfloat WindowManager_LayoutParams::horizontalWeight()
	{
		return getField<jfloat>(
			"horizontalWeight"
		);
	}
	inline jint WindowManager_LayoutParams::layoutInDisplayCutoutMode()
	{
		return getField<jint>(
			"layoutInDisplayCutoutMode"
		);
	}
	inline jint WindowManager_LayoutParams::memoryType()
	{
		return getField<jint>(
			"memoryType"
		);
	}
	inline JString WindowManager_LayoutParams::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline jboolean WindowManager_LayoutParams::preferMinimalPostProcessing()
	{
		return getField<jboolean>(
			"preferMinimalPostProcessing"
		);
	}
	inline jint WindowManager_LayoutParams::preferredDisplayModeId()
	{
		return getField<jint>(
			"preferredDisplayModeId"
		);
	}
	inline jfloat WindowManager_LayoutParams::preferredRefreshRate()
	{
		return getField<jfloat>(
			"preferredRefreshRate"
		);
	}
	inline jint WindowManager_LayoutParams::rotationAnimation()
	{
		return getField<jint>(
			"rotationAnimation"
		);
	}
	inline jfloat WindowManager_LayoutParams::screenBrightness()
	{
		return getField<jfloat>(
			"screenBrightness"
		);
	}
	inline jint WindowManager_LayoutParams::screenOrientation()
	{
		return getField<jint>(
			"screenOrientation"
		);
	}
	inline jint WindowManager_LayoutParams::softInputMode()
	{
		return getField<jint>(
			"softInputMode"
		);
	}
	inline jint WindowManager_LayoutParams::systemUiVisibility()
	{
		return getField<jint>(
			"systemUiVisibility"
		);
	}
	inline JObject WindowManager_LayoutParams::token()
	{
		return getObjectField(
			"token",
			"Landroid/os/IBinder;"
		);
	}
	inline jint WindowManager_LayoutParams::type()
	{
		return getField<jint>(
			"type"
		);
	}
	inline jfloat WindowManager_LayoutParams::verticalMargin()
	{
		return getField<jfloat>(
			"verticalMargin"
		);
	}
	inline jfloat WindowManager_LayoutParams::verticalWeight()
	{
		return getField<jfloat>(
			"verticalWeight"
		);
	}
	inline jint WindowManager_LayoutParams::windowAnimations()
	{
		return getField<jint>(
			"windowAnimations"
		);
	}
	inline jint WindowManager_LayoutParams::x()
	{
		return getField<jint>(
			"x"
		);
	}
	inline jint WindowManager_LayoutParams::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// Constructors
	inline WindowManager_LayoutParams::WindowManager_LayoutParams()
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"()V"
		) {}
	inline WindowManager_LayoutParams::WindowManager_LayoutParams(android::os::Parcel arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(I)V",
			arg0
		) {}
	inline WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	inline WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	inline jboolean WindowManager_LayoutParams::mayUseInputMethod(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.WindowManager$LayoutParams",
			"mayUseInputMethod",
			"(I)Z",
			arg0
		);
	}
	inline jboolean WindowManager_LayoutParams::areWallpaperTouchEventsEnabled() const
	{
		return callMethod<jboolean>(
			"areWallpaperTouchEventsEnabled",
			"()Z"
		);
	}
	inline jboolean WindowManager_LayoutParams::canPlayMoveAnimation() const
	{
		return callMethod<jboolean>(
			"canPlayMoveAnimation",
			"()Z"
		);
	}
	inline jint WindowManager_LayoutParams::copyFrom(android::view::WindowManager_LayoutParams arg0) const
	{
		return callMethod<jint>(
			"copyFrom",
			"(Landroid/view/WindowManager$LayoutParams;)I",
			arg0.object()
		);
	}
	inline JString WindowManager_LayoutParams::debug(JString arg0) const
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint WindowManager_LayoutParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WindowManager_LayoutParams::getBlurBehindRadius() const
	{
		return callMethod<jint>(
			"getBlurBehindRadius",
			"()I"
		);
	}
	inline jint WindowManager_LayoutParams::getColorMode() const
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	inline jint WindowManager_LayoutParams::getFitInsetsSides() const
	{
		return callMethod<jint>(
			"getFitInsetsSides",
			"()I"
		);
	}
	inline jint WindowManager_LayoutParams::getFitInsetsTypes() const
	{
		return callMethod<jint>(
			"getFitInsetsTypes",
			"()I"
		);
	}
	inline JString WindowManager_LayoutParams::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean WindowManager_LayoutParams::isFitInsetsIgnoringVisibility() const
	{
		return callMethod<jboolean>(
			"isFitInsetsIgnoringVisibility",
			"()Z"
		);
	}
	inline jboolean WindowManager_LayoutParams::isHdrConversionEnabled() const
	{
		return callMethod<jboolean>(
			"isHdrConversionEnabled",
			"()Z"
		);
	}
	inline void WindowManager_LayoutParams::setBlurBehindRadius(jint arg0) const
	{
		callMethod<void>(
			"setBlurBehindRadius",
			"(I)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setCanPlayMoveAnimation(jboolean arg0) const
	{
		callMethod<void>(
			"setCanPlayMoveAnimation",
			"(Z)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setColorMode(jint arg0) const
	{
		callMethod<void>(
			"setColorMode",
			"(I)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setFitInsetsIgnoringVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setFitInsetsIgnoringVisibility",
			"(Z)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setFitInsetsSides(jint arg0) const
	{
		callMethod<void>(
			"setFitInsetsSides",
			"(I)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setFitInsetsTypes(jint arg0) const
	{
		callMethod<void>(
			"setFitInsetsTypes",
			"(I)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setHdrConversionEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHdrConversionEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WindowManager_LayoutParams::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void WindowManager_LayoutParams::setWallpaperTouchEventsEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setWallpaperTouchEventsEnabled",
			"(Z)V",
			arg0
		);
	}
	inline JString WindowManager_LayoutParams::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WindowManager_LayoutParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers
#include "./ViewGroup_LayoutParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
