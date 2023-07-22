#pragma once

#include "./ViewGroup_LayoutParams.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view
{
	class WindowManager_LayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		static jint ALPHA_CHANGED();
		static jint ANIMATION_CHANGED();
		static jfloat BRIGHTNESS_OVERRIDE_FULL();
		static jfloat BRIGHTNESS_OVERRIDE_NONE();
		static jfloat BRIGHTNESS_OVERRIDE_OFF();
		static JObject CREATOR();
		static jint DIM_AMOUNT_CHANGED();
		static jint FIRST_APPLICATION_WINDOW();
		static jint FIRST_SUB_WINDOW();
		static jint FIRST_SYSTEM_WINDOW();
		static jint FLAGS_CHANGED();
		static jint FLAG_ALLOW_LOCK_WHILE_SCREEN_ON();
		static jint FLAG_ALT_FOCUSABLE_IM();
		static jint FLAG_BLUR_BEHIND();
		static jint FLAG_DIM_BEHIND();
		static jint FLAG_DISMISS_KEYGUARD();
		static jint FLAG_DITHER();
		static jint FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS();
		static jint FLAG_FORCE_NOT_FULLSCREEN();
		static jint FLAG_FULLSCREEN();
		static jint FLAG_HARDWARE_ACCELERATED();
		static jint FLAG_IGNORE_CHEEK_PRESSES();
		static jint FLAG_KEEP_SCREEN_ON();
		static jint FLAG_LAYOUT_ATTACHED_IN_DECOR();
		static jint FLAG_LAYOUT_INSET_DECOR();
		static jint FLAG_LAYOUT_IN_OVERSCAN();
		static jint FLAG_LAYOUT_IN_SCREEN();
		static jint FLAG_LAYOUT_NO_LIMITS();
		static jint FLAG_LOCAL_FOCUS_MODE();
		static jint FLAG_NOT_FOCUSABLE();
		static jint FLAG_NOT_TOUCHABLE();
		static jint FLAG_NOT_TOUCH_MODAL();
		static jint FLAG_SCALED();
		static jint FLAG_SECURE();
		static jint FLAG_SHOW_WALLPAPER();
		static jint FLAG_SHOW_WHEN_LOCKED();
		static jint FLAG_SPLIT_TOUCH();
		static jint FLAG_TOUCHABLE_WHEN_WAKING();
		static jint FLAG_TRANSLUCENT_NAVIGATION();
		static jint FLAG_TRANSLUCENT_STATUS();
		static jint FLAG_TURN_SCREEN_ON();
		static jint FLAG_WATCH_OUTSIDE_TOUCH();
		static jint FORMAT_CHANGED();
		static jint LAST_APPLICATION_WINDOW();
		static jint LAST_SUB_WINDOW();
		static jint LAST_SYSTEM_WINDOW();
		static jint LAYOUT_CHANGED();
		static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS();
		static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_DEFAULT();
		static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_NEVER();
		static jint LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES();
		static jint MEMORY_TYPE_CHANGED();
		static jint MEMORY_TYPE_GPU();
		static jint MEMORY_TYPE_HARDWARE();
		static jint MEMORY_TYPE_NORMAL();
		static jint MEMORY_TYPE_PUSH_BUFFERS();
		static jint ROTATION_ANIMATION_CHANGED();
		static jint ROTATION_ANIMATION_CROSSFADE();
		static jint ROTATION_ANIMATION_JUMPCUT();
		static jint ROTATION_ANIMATION_ROTATE();
		static jint ROTATION_ANIMATION_SEAMLESS();
		static jint SCREEN_BRIGHTNESS_CHANGED();
		static jint SCREEN_ORIENTATION_CHANGED();
		static jint SOFT_INPUT_ADJUST_NOTHING();
		static jint SOFT_INPUT_ADJUST_PAN();
		static jint SOFT_INPUT_ADJUST_RESIZE();
		static jint SOFT_INPUT_ADJUST_UNSPECIFIED();
		static jint SOFT_INPUT_IS_FORWARD_NAVIGATION();
		static jint SOFT_INPUT_MASK_ADJUST();
		static jint SOFT_INPUT_MASK_STATE();
		static jint SOFT_INPUT_MODE_CHANGED();
		static jint SOFT_INPUT_STATE_ALWAYS_HIDDEN();
		static jint SOFT_INPUT_STATE_ALWAYS_VISIBLE();
		static jint SOFT_INPUT_STATE_HIDDEN();
		static jint SOFT_INPUT_STATE_UNCHANGED();
		static jint SOFT_INPUT_STATE_UNSPECIFIED();
		static jint SOFT_INPUT_STATE_VISIBLE();
		static jint TITLE_CHANGED();
		static jint TYPE_ACCESSIBILITY_OVERLAY();
		static jint TYPE_APPLICATION();
		static jint TYPE_APPLICATION_ATTACHED_DIALOG();
		static jint TYPE_APPLICATION_MEDIA();
		static jint TYPE_APPLICATION_OVERLAY();
		static jint TYPE_APPLICATION_PANEL();
		static jint TYPE_APPLICATION_STARTING();
		static jint TYPE_APPLICATION_SUB_PANEL();
		static jint TYPE_BASE_APPLICATION();
		static jint TYPE_CHANGED();
		static jint TYPE_DRAWN_APPLICATION();
		static jint TYPE_INPUT_METHOD();
		static jint TYPE_INPUT_METHOD_DIALOG();
		static jint TYPE_KEYGUARD_DIALOG();
		static jint TYPE_PHONE();
		static jint TYPE_PRIORITY_PHONE();
		static jint TYPE_PRIVATE_PRESENTATION();
		static jint TYPE_SEARCH_BAR();
		static jint TYPE_STATUS_BAR();
		static jint TYPE_SYSTEM_ALERT();
		static jint TYPE_SYSTEM_DIALOG();
		static jint TYPE_SYSTEM_ERROR();
		static jint TYPE_SYSTEM_OVERLAY();
		static jint TYPE_TOAST();
		static jint TYPE_WALLPAPER();
		jfloat alpha();
		jfloat buttonBrightness();
		jfloat dimAmount();
		jint flags();
		jint format();
		jint gravity();
		jfloat horizontalMargin();
		jfloat horizontalWeight();
		jint layoutInDisplayCutoutMode();
		jint memoryType();
		JString packageName();
		jboolean preferMinimalPostProcessing();
		jint preferredDisplayModeId();
		jfloat preferredRefreshRate();
		jint rotationAnimation();
		jfloat screenBrightness();
		jint screenOrientation();
		jint softInputMode();
		jint systemUiVisibility();
		JObject token();
		jint type();
		jfloat verticalMargin();
		jfloat verticalWeight();
		jint windowAnimations();
		jint x();
		jint y();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowManager_LayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		WindowManager_LayoutParams(QJniObject obj) : android::view::ViewGroup_LayoutParams(obj) {}
		
		// Constructors
		WindowManager_LayoutParams();
		WindowManager_LayoutParams(android::os::Parcel arg0);
		WindowManager_LayoutParams(jint arg0);
		WindowManager_LayoutParams(jint arg0, jint arg1);
		WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2);
		WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		WindowManager_LayoutParams(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static jboolean mayUseInputMethod(jint arg0);
		jint copyFrom(android::view::WindowManager_LayoutParams arg0) const;
		JString debug(JString arg0) const;
		jint describeContents() const;
		jint getBlurBehindRadius() const;
		jint getColorMode() const;
		jint getFitInsetsSides() const;
		jint getFitInsetsTypes() const;
		JString getTitle() const;
		jboolean isFitInsetsIgnoringVisibility() const;
		void setBlurBehindRadius(jint arg0) const;
		void setColorMode(jint arg0) const;
		void setFitInsetsIgnoringVisibility(jboolean arg0) const;
		void setFitInsetsSides(jint arg0) const;
		void setFitInsetsTypes(jint arg0) const;
		void setTitle(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

