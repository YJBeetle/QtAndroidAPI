#include "../os/Parcel.hpp"
#include "./WindowManager_LayoutParams.hpp"

namespace android::view
{
	// Fields
	jint WindowManager_LayoutParams::ALPHA_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ALPHA_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::ANIMATION_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ANIMATION_CHANGED"
		);
	}
	jfloat WindowManager_LayoutParams::BRIGHTNESS_OVERRIDE_FULL()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.view.WindowManager$LayoutParams",
			"BRIGHTNESS_OVERRIDE_FULL"
		);
	}
	jfloat WindowManager_LayoutParams::BRIGHTNESS_OVERRIDE_NONE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.view.WindowManager$LayoutParams",
			"BRIGHTNESS_OVERRIDE_NONE"
		);
	}
	jfloat WindowManager_LayoutParams::BRIGHTNESS_OVERRIDE_OFF()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.view.WindowManager$LayoutParams",
			"BRIGHTNESS_OVERRIDE_OFF"
		);
	}
	QAndroidJniObject WindowManager_LayoutParams::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.WindowManager$LayoutParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WindowManager_LayoutParams::DIM_AMOUNT_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"DIM_AMOUNT_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::FIRST_APPLICATION_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FIRST_APPLICATION_WINDOW"
		);
	}
	jint WindowManager_LayoutParams::FIRST_SUB_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FIRST_SUB_WINDOW"
		);
	}
	jint WindowManager_LayoutParams::FIRST_SYSTEM_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FIRST_SYSTEM_WINDOW"
		);
	}
	jint WindowManager_LayoutParams::FLAGS_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAGS_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::FLAG_ALLOW_LOCK_WHILE_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_ALLOW_LOCK_WHILE_SCREEN_ON"
		);
	}
	jint WindowManager_LayoutParams::FLAG_ALT_FOCUSABLE_IM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_ALT_FOCUSABLE_IM"
		);
	}
	jint WindowManager_LayoutParams::FLAG_BLUR_BEHIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_BLUR_BEHIND"
		);
	}
	jint WindowManager_LayoutParams::FLAG_DIM_BEHIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DIM_BEHIND"
		);
	}
	jint WindowManager_LayoutParams::FLAG_DISMISS_KEYGUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DISMISS_KEYGUARD"
		);
	}
	jint WindowManager_LayoutParams::FLAG_DITHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DITHER"
		);
	}
	jint WindowManager_LayoutParams::FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS"
		);
	}
	jint WindowManager_LayoutParams::FLAG_FORCE_NOT_FULLSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_FORCE_NOT_FULLSCREEN"
		);
	}
	jint WindowManager_LayoutParams::FLAG_FULLSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_FULLSCREEN"
		);
	}
	jint WindowManager_LayoutParams::FLAG_HARDWARE_ACCELERATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	jint WindowManager_LayoutParams::FLAG_IGNORE_CHEEK_PRESSES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_IGNORE_CHEEK_PRESSES"
		);
	}
	jint WindowManager_LayoutParams::FLAG_KEEP_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_KEEP_SCREEN_ON"
		);
	}
	jint WindowManager_LayoutParams::FLAG_LAYOUT_ATTACHED_IN_DECOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_ATTACHED_IN_DECOR"
		);
	}
	jint WindowManager_LayoutParams::FLAG_LAYOUT_INSET_DECOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_INSET_DECOR"
		);
	}
	jint WindowManager_LayoutParams::FLAG_LAYOUT_IN_OVERSCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_IN_OVERSCAN"
		);
	}
	jint WindowManager_LayoutParams::FLAG_LAYOUT_IN_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_IN_SCREEN"
		);
	}
	jint WindowManager_LayoutParams::FLAG_LAYOUT_NO_LIMITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LAYOUT_NO_LIMITS"
		);
	}
	jint WindowManager_LayoutParams::FLAG_LOCAL_FOCUS_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_LOCAL_FOCUS_MODE"
		);
	}
	jint WindowManager_LayoutParams::FLAG_NOT_FOCUSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_NOT_FOCUSABLE"
		);
	}
	jint WindowManager_LayoutParams::FLAG_NOT_TOUCHABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_NOT_TOUCHABLE"
		);
	}
	jint WindowManager_LayoutParams::FLAG_NOT_TOUCH_MODAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_NOT_TOUCH_MODAL"
		);
	}
	jint WindowManager_LayoutParams::FLAG_SCALED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SCALED"
		);
	}
	jint WindowManager_LayoutParams::FLAG_SECURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SECURE"
		);
	}
	jint WindowManager_LayoutParams::FLAG_SHOW_WALLPAPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SHOW_WALLPAPER"
		);
	}
	jint WindowManager_LayoutParams::FLAG_SHOW_WHEN_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SHOW_WHEN_LOCKED"
		);
	}
	jint WindowManager_LayoutParams::FLAG_SPLIT_TOUCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_SPLIT_TOUCH"
		);
	}
	jint WindowManager_LayoutParams::FLAG_TOUCHABLE_WHEN_WAKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TOUCHABLE_WHEN_WAKING"
		);
	}
	jint WindowManager_LayoutParams::FLAG_TRANSLUCENT_NAVIGATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TRANSLUCENT_NAVIGATION"
		);
	}
	jint WindowManager_LayoutParams::FLAG_TRANSLUCENT_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TRANSLUCENT_STATUS"
		);
	}
	jint WindowManager_LayoutParams::FLAG_TURN_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_TURN_SCREEN_ON"
		);
	}
	jint WindowManager_LayoutParams::FLAG_WATCH_OUTSIDE_TOUCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FLAG_WATCH_OUTSIDE_TOUCH"
		);
	}
	jint WindowManager_LayoutParams::FORMAT_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"FORMAT_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::LAST_APPLICATION_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAST_APPLICATION_WINDOW"
		);
	}
	jint WindowManager_LayoutParams::LAST_SUB_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAST_SUB_WINDOW"
		);
	}
	jint WindowManager_LayoutParams::LAST_SYSTEM_WINDOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAST_SYSTEM_WINDOW"
		);
	}
	jint WindowManager_LayoutParams::LAYOUT_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT"
		);
	}
	jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER"
		);
	}
	jint WindowManager_LayoutParams::LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES"
		);
	}
	jint WindowManager_LayoutParams::MEMORY_TYPE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::MEMORY_TYPE_GPU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_GPU"
		);
	}
	jint WindowManager_LayoutParams::MEMORY_TYPE_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_HARDWARE"
		);
	}
	jint WindowManager_LayoutParams::MEMORY_TYPE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_NORMAL"
		);
	}
	jint WindowManager_LayoutParams::MEMORY_TYPE_PUSH_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"MEMORY_TYPE_PUSH_BUFFERS"
		);
	}
	jint WindowManager_LayoutParams::ROTATION_ANIMATION_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::ROTATION_ANIMATION_CROSSFADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_CROSSFADE"
		);
	}
	jint WindowManager_LayoutParams::ROTATION_ANIMATION_JUMPCUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_JUMPCUT"
		);
	}
	jint WindowManager_LayoutParams::ROTATION_ANIMATION_ROTATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_ROTATE"
		);
	}
	jint WindowManager_LayoutParams::ROTATION_ANIMATION_SEAMLESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"ROTATION_ANIMATION_SEAMLESS"
		);
	}
	jint WindowManager_LayoutParams::SCREEN_BRIGHTNESS_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SCREEN_BRIGHTNESS_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::SCREEN_ORIENTATION_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SCREEN_ORIENTATION_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_NOTHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_NOTHING"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_PAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_PAN"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_RESIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_RESIZE"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_ADJUST_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_ADJUST_UNSPECIFIED"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_IS_FORWARD_NAVIGATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_IS_FORWARD_NAVIGATION"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_MASK_ADJUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_MASK_ADJUST"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_MASK_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_MASK_STATE"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_MODE_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_STATE_ALWAYS_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_ALWAYS_HIDDEN"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_STATE_ALWAYS_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_ALWAYS_VISIBLE"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_STATE_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_HIDDEN"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_STATE_UNCHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_UNCHANGED"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_STATE_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_UNSPECIFIED"
		);
	}
	jint WindowManager_LayoutParams::SOFT_INPUT_STATE_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"SOFT_INPUT_STATE_VISIBLE"
		);
	}
	jint WindowManager_LayoutParams::TITLE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TITLE_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::TYPE_ACCESSIBILITY_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_ACCESSIBILITY_OVERLAY"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION_ATTACHED_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_ATTACHED_DIALOG"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION_MEDIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_MEDIA"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_OVERLAY"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION_PANEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_PANEL"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION_STARTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_STARTING"
		);
	}
	jint WindowManager_LayoutParams::TYPE_APPLICATION_SUB_PANEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_APPLICATION_SUB_PANEL"
		);
	}
	jint WindowManager_LayoutParams::TYPE_BASE_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_BASE_APPLICATION"
		);
	}
	jint WindowManager_LayoutParams::TYPE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_CHANGED"
		);
	}
	jint WindowManager_LayoutParams::TYPE_DRAWN_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_DRAWN_APPLICATION"
		);
	}
	jint WindowManager_LayoutParams::TYPE_INPUT_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_INPUT_METHOD"
		);
	}
	jint WindowManager_LayoutParams::TYPE_INPUT_METHOD_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_INPUT_METHOD_DIALOG"
		);
	}
	jint WindowManager_LayoutParams::TYPE_KEYGUARD_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_KEYGUARD_DIALOG"
		);
	}
	jint WindowManager_LayoutParams::TYPE_PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_PHONE"
		);
	}
	jint WindowManager_LayoutParams::TYPE_PRIORITY_PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_PRIORITY_PHONE"
		);
	}
	jint WindowManager_LayoutParams::TYPE_PRIVATE_PRESENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_PRIVATE_PRESENTATION"
		);
	}
	jint WindowManager_LayoutParams::TYPE_SEARCH_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SEARCH_BAR"
		);
	}
	jint WindowManager_LayoutParams::TYPE_STATUS_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_STATUS_BAR"
		);
	}
	jint WindowManager_LayoutParams::TYPE_STATUS_BAR_PANEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_STATUS_BAR_PANEL"
		);
	}
	jint WindowManager_LayoutParams::TYPE_SYSTEM_ALERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_ALERT"
		);
	}
	jint WindowManager_LayoutParams::TYPE_SYSTEM_DIALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_DIALOG"
		);
	}
	jint WindowManager_LayoutParams::TYPE_SYSTEM_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_ERROR"
		);
	}
	jint WindowManager_LayoutParams::TYPE_SYSTEM_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_SYSTEM_OVERLAY"
		);
	}
	jint WindowManager_LayoutParams::TYPE_TOAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_TOAST"
		);
	}
	jint WindowManager_LayoutParams::TYPE_WALLPAPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.WindowManager$LayoutParams",
			"TYPE_WALLPAPER"
		);
	}
	jfloat WindowManager_LayoutParams::alpha()
	{
		return getField<jfloat>(
			"alpha"
		);
	}
	jfloat WindowManager_LayoutParams::buttonBrightness()
	{
		return getField<jfloat>(
			"buttonBrightness"
		);
	}
	jfloat WindowManager_LayoutParams::dimAmount()
	{
		return getField<jfloat>(
			"dimAmount"
		);
	}
	jint WindowManager_LayoutParams::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint WindowManager_LayoutParams::format()
	{
		return getField<jint>(
			"format"
		);
	}
	jint WindowManager_LayoutParams::gravity()
	{
		return getField<jint>(
			"gravity"
		);
	}
	jfloat WindowManager_LayoutParams::horizontalMargin()
	{
		return getField<jfloat>(
			"horizontalMargin"
		);
	}
	jfloat WindowManager_LayoutParams::horizontalWeight()
	{
		return getField<jfloat>(
			"horizontalWeight"
		);
	}
	jint WindowManager_LayoutParams::layoutInDisplayCutoutMode()
	{
		return getField<jint>(
			"layoutInDisplayCutoutMode"
		);
	}
	jint WindowManager_LayoutParams::memoryType()
	{
		return getField<jint>(
			"memoryType"
		);
	}
	jstring WindowManager_LayoutParams::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WindowManager_LayoutParams::preferredDisplayModeId()
	{
		return getField<jint>(
			"preferredDisplayModeId"
		);
	}
	jfloat WindowManager_LayoutParams::preferredRefreshRate()
	{
		return getField<jfloat>(
			"preferredRefreshRate"
		);
	}
	jint WindowManager_LayoutParams::rotationAnimation()
	{
		return getField<jint>(
			"rotationAnimation"
		);
	}
	jfloat WindowManager_LayoutParams::screenBrightness()
	{
		return getField<jfloat>(
			"screenBrightness"
		);
	}
	jint WindowManager_LayoutParams::screenOrientation()
	{
		return getField<jint>(
			"screenOrientation"
		);
	}
	jint WindowManager_LayoutParams::softInputMode()
	{
		return getField<jint>(
			"softInputMode"
		);
	}
	jint WindowManager_LayoutParams::systemUiVisibility()
	{
		return getField<jint>(
			"systemUiVisibility"
		);
	}
	QAndroidJniObject WindowManager_LayoutParams::token()
	{
		return getObjectField(
			"token",
			"Landroid/os/IBinder;"
		);
	}
	jint WindowManager_LayoutParams::type()
	{
		return getField<jint>(
			"type"
		);
	}
	jfloat WindowManager_LayoutParams::verticalMargin()
	{
		return getField<jfloat>(
			"verticalMargin"
		);
	}
	jfloat WindowManager_LayoutParams::verticalWeight()
	{
		return getField<jfloat>(
			"verticalWeight"
		);
	}
	jint WindowManager_LayoutParams::windowAnimations()
	{
		return getField<jint>(
			"windowAnimations"
		);
	}
	jint WindowManager_LayoutParams::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint WindowManager_LayoutParams::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	WindowManager_LayoutParams::WindowManager_LayoutParams(QAndroidJniObject obj) : android::view::ViewGroup_LayoutParams(obj) {}
	
	// Constructors
	WindowManager_LayoutParams::WindowManager_LayoutParams()
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"()V"
		) {}
	WindowManager_LayoutParams::WindowManager_LayoutParams(android::os::Parcel arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(I)V",
			arg0
		) {}
	WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::view::ViewGroup_LayoutParams(
			"android.view.WindowManager$LayoutParams",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	WindowManager_LayoutParams::WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
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
	jboolean WindowManager_LayoutParams::mayUseInputMethod(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.WindowManager$LayoutParams",
			"mayUseInputMethod",
			"(I)Z",
			arg0
		);
	}
	jint WindowManager_LayoutParams::copyFrom(android::view::WindowManager_LayoutParams arg0)
	{
		return callMethod<jint>(
			"copyFrom",
			"(Landroid/view/WindowManager$LayoutParams;)I",
			arg0.object()
		);
	}
	jstring WindowManager_LayoutParams::debug(jstring arg0)
	{
		return callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint WindowManager_LayoutParams::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint WindowManager_LayoutParams::getColorMode()
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	jstring WindowManager_LayoutParams::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void WindowManager_LayoutParams::setColorMode(jint arg0)
	{
		callMethod<void>(
			"setColorMode",
			"(I)V",
			arg0
		);
	}
	void WindowManager_LayoutParams::setTitle(jstring arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring WindowManager_LayoutParams::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WindowManager_LayoutParams::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

