#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/util/Locale.hpp"
#include "./Configuration.hpp"

namespace android::content::res
{
	// Fields
	jint Configuration::COLOR_MODE_HDR_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_MASK"
		);
	}
	jint Configuration::COLOR_MODE_HDR_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_NO"
		);
	}
	jint Configuration::COLOR_MODE_HDR_SHIFT()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_SHIFT"
		);
	}
	jint Configuration::COLOR_MODE_HDR_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_UNDEFINED"
		);
	}
	jint Configuration::COLOR_MODE_HDR_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_YES"
		);
	}
	jint Configuration::COLOR_MODE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_UNDEFINED"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_MASK"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_NO"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED"
		);
	}
	jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_YES"
		);
	}
	__JniBaseClass Configuration::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.Configuration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Configuration::DENSITY_DPI_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"DENSITY_DPI_UNDEFINED"
		);
	}
	jint Configuration::HARDKEYBOARDHIDDEN_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_NO"
		);
	}
	jint Configuration::HARDKEYBOARDHIDDEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_UNDEFINED"
		);
	}
	jint Configuration::HARDKEYBOARDHIDDEN_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_YES"
		);
	}
	jint Configuration::KEYBOARDHIDDEN_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_NO"
		);
	}
	jint Configuration::KEYBOARDHIDDEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_UNDEFINED"
		);
	}
	jint Configuration::KEYBOARDHIDDEN_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_YES"
		);
	}
	jint Configuration::KEYBOARD_12KEY()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_12KEY"
		);
	}
	jint Configuration::KEYBOARD_NOKEYS()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_NOKEYS"
		);
	}
	jint Configuration::KEYBOARD_QWERTY()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_QWERTY"
		);
	}
	jint Configuration::KEYBOARD_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_UNDEFINED"
		);
	}
	jint Configuration::MNC_ZERO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"MNC_ZERO"
		);
	}
	jint Configuration::NAVIGATIONHIDDEN_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_NO"
		);
	}
	jint Configuration::NAVIGATIONHIDDEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_UNDEFINED"
		);
	}
	jint Configuration::NAVIGATIONHIDDEN_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_YES"
		);
	}
	jint Configuration::NAVIGATION_DPAD()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_DPAD"
		);
	}
	jint Configuration::NAVIGATION_NONAV()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_NONAV"
		);
	}
	jint Configuration::NAVIGATION_TRACKBALL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_TRACKBALL"
		);
	}
	jint Configuration::NAVIGATION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_UNDEFINED"
		);
	}
	jint Configuration::NAVIGATION_WHEEL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_WHEEL"
		);
	}
	jint Configuration::ORIENTATION_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_LANDSCAPE"
		);
	}
	jint Configuration::ORIENTATION_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_PORTRAIT"
		);
	}
	jint Configuration::ORIENTATION_SQUARE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_SQUARE"
		);
	}
	jint Configuration::ORIENTATION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_LTR()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_LTR"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_RTL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_RTL"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_SHIFT()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_SHIFT"
		);
	}
	jint Configuration::SCREENLAYOUT_LAYOUTDIR_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_NO"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_LONG_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_YES"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_NO"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_ROUND_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_YES"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_LARGE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_LARGE"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_MASK"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_NORMAL"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_SMALL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_SMALL"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_UNDEFINED"
		);
	}
	jint Configuration::SCREENLAYOUT_SIZE_XLARGE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_XLARGE"
		);
	}
	jint Configuration::SCREENLAYOUT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_UNDEFINED"
		);
	}
	jint Configuration::SCREEN_HEIGHT_DP_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREEN_HEIGHT_DP_UNDEFINED"
		);
	}
	jint Configuration::SCREEN_WIDTH_DP_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREEN_WIDTH_DP_UNDEFINED"
		);
	}
	jint Configuration::SMALLEST_SCREEN_WIDTH_DP_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SMALLEST_SCREEN_WIDTH_DP_UNDEFINED"
		);
	}
	jint Configuration::TOUCHSCREEN_FINGER()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_FINGER"
		);
	}
	jint Configuration::TOUCHSCREEN_NOTOUCH()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_NOTOUCH"
		);
	}
	jint Configuration::TOUCHSCREEN_STYLUS()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_STYLUS"
		);
	}
	jint Configuration::TOUCHSCREEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_UNDEFINED"
		);
	}
	jint Configuration::UI_MODE_NIGHT_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_MASK"
		);
	}
	jint Configuration::UI_MODE_NIGHT_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_NO"
		);
	}
	jint Configuration::UI_MODE_NIGHT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_UNDEFINED"
		);
	}
	jint Configuration::UI_MODE_NIGHT_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_YES"
		);
	}
	jint Configuration::UI_MODE_TYPE_APPLIANCE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_APPLIANCE"
		);
	}
	jint Configuration::UI_MODE_TYPE_CAR()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_CAR"
		);
	}
	jint Configuration::UI_MODE_TYPE_DESK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_DESK"
		);
	}
	jint Configuration::UI_MODE_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_MASK"
		);
	}
	jint Configuration::UI_MODE_TYPE_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_NORMAL"
		);
	}
	jint Configuration::UI_MODE_TYPE_TELEVISION()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_TELEVISION"
		);
	}
	jint Configuration::UI_MODE_TYPE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_UNDEFINED"
		);
	}
	jint Configuration::UI_MODE_TYPE_VR_HEADSET()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_VR_HEADSET"
		);
	}
	jint Configuration::UI_MODE_TYPE_WATCH()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_WATCH"
		);
	}
	jint Configuration::colorMode()
	{
		return getField<jint>(
			"colorMode"
		);
	}
	jint Configuration::densityDpi()
	{
		return getField<jint>(
			"densityDpi"
		);
	}
	jfloat Configuration::fontScale()
	{
		return getField<jfloat>(
			"fontScale"
		);
	}
	jint Configuration::hardKeyboardHidden()
	{
		return getField<jint>(
			"hardKeyboardHidden"
		);
	}
	jint Configuration::keyboard()
	{
		return getField<jint>(
			"keyboard"
		);
	}
	jint Configuration::keyboardHidden()
	{
		return getField<jint>(
			"keyboardHidden"
		);
	}
	java::util::Locale Configuration::locale()
	{
		return getObjectField(
			"locale",
			"Ljava/util/Locale;"
		);
	}
	jint Configuration::mcc()
	{
		return getField<jint>(
			"mcc"
		);
	}
	jint Configuration::mnc()
	{
		return getField<jint>(
			"mnc"
		);
	}
	jint Configuration::navigation()
	{
		return getField<jint>(
			"navigation"
		);
	}
	jint Configuration::navigationHidden()
	{
		return getField<jint>(
			"navigationHidden"
		);
	}
	jint Configuration::orientation()
	{
		return getField<jint>(
			"orientation"
		);
	}
	jint Configuration::screenHeightDp()
	{
		return getField<jint>(
			"screenHeightDp"
		);
	}
	jint Configuration::screenLayout()
	{
		return getField<jint>(
			"screenLayout"
		);
	}
	jint Configuration::screenWidthDp()
	{
		return getField<jint>(
			"screenWidthDp"
		);
	}
	jint Configuration::smallestScreenWidthDp()
	{
		return getField<jint>(
			"smallestScreenWidthDp"
		);
	}
	jint Configuration::touchscreen()
	{
		return getField<jint>(
			"touchscreen"
		);
	}
	jint Configuration::uiMode()
	{
		return getField<jint>(
			"uiMode"
		);
	}
	
	// QJniObject forward
	Configuration::Configuration(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Configuration::Configuration()
		: __JniBaseClass(
			"android.content.res.Configuration",
			"()V"
		) {}
	Configuration::Configuration(android::content::res::Configuration &arg0)
		: __JniBaseClass(
			"android.content.res.Configuration",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Configuration::needNewResources(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.res.Configuration",
			"needNewResources",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint Configuration::compareTo(android::content::res::Configuration arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/content/res/Configuration;)I",
			arg0.object()
		);
	}
	jint Configuration::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Configuration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Configuration::diff(android::content::res::Configuration arg0)
	{
		return callMethod<jint>(
			"diff",
			"(Landroid/content/res/Configuration;)I",
			arg0.object()
		);
	}
	jboolean Configuration::equals(android::content::res::Configuration arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/content/res/Configuration;)Z",
			arg0.object()
		);
	}
	jboolean Configuration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Configuration::getLayoutDirection()
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	android::os::LocaleList Configuration::getLocales()
	{
		return callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint Configuration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Configuration::isLayoutSizeAtLeast(jint arg0)
	{
		return callMethod<jboolean>(
			"isLayoutSizeAtLeast",
			"(I)Z",
			arg0
		);
	}
	jboolean Configuration::isNightModeActive()
	{
		return callMethod<jboolean>(
			"isNightModeActive",
			"()Z"
		);
	}
	jboolean Configuration::isScreenHdr()
	{
		return callMethod<jboolean>(
			"isScreenHdr",
			"()Z"
		);
	}
	jboolean Configuration::isScreenRound()
	{
		return callMethod<jboolean>(
			"isScreenRound",
			"()Z"
		);
	}
	jboolean Configuration::isScreenWideColorGamut()
	{
		return callMethod<jboolean>(
			"isScreenWideColorGamut",
			"()Z"
		);
	}
	void Configuration::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Configuration::setLayoutDirection(java::util::Locale arg0)
	{
		callMethod<void>(
			"setLayoutDirection",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void Configuration::setLocale(java::util::Locale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void Configuration::setLocales(android::os::LocaleList arg0)
	{
		callMethod<void>(
			"setLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void Configuration::setTo(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"setTo",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void Configuration::setToDefaults()
	{
		callMethod<void>(
			"setToDefaults",
			"()V"
		);
	}
	jstring Configuration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Configuration::updateFrom(android::content::res::Configuration arg0)
	{
		return callMethod<jint>(
			"updateFrom",
			"(Landroid/content/res/Configuration;)I",
			arg0.object()
		);
	}
	void Configuration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

