#pragma once

#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./Configuration.def.hpp"

namespace android::content::res
{
	// Fields
	inline jint Configuration::COLOR_MODE_HDR_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_MASK"
		);
	}
	inline jint Configuration::COLOR_MODE_HDR_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_NO"
		);
	}
	inline jint Configuration::COLOR_MODE_HDR_SHIFT()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_SHIFT"
		);
	}
	inline jint Configuration::COLOR_MODE_HDR_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_UNDEFINED"
		);
	}
	inline jint Configuration::COLOR_MODE_HDR_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_HDR_YES"
		);
	}
	inline jint Configuration::COLOR_MODE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_UNDEFINED"
		);
	}
	inline jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_MASK"
		);
	}
	inline jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_NO"
		);
	}
	inline jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED"
		);
	}
	inline jint Configuration::COLOR_MODE_WIDE_COLOR_GAMUT_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"COLOR_MODE_WIDE_COLOR_GAMUT_YES"
		);
	}
	inline JObject Configuration::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.Configuration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Configuration::DENSITY_DPI_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"DENSITY_DPI_UNDEFINED"
		);
	}
	inline jint Configuration::FONT_WEIGHT_ADJUSTMENT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"FONT_WEIGHT_ADJUSTMENT_UNDEFINED"
		);
	}
	inline jint Configuration::GRAMMATICAL_GENDER_FEMININE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"GRAMMATICAL_GENDER_FEMININE"
		);
	}
	inline jint Configuration::GRAMMATICAL_GENDER_MASCULINE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"GRAMMATICAL_GENDER_MASCULINE"
		);
	}
	inline jint Configuration::GRAMMATICAL_GENDER_NEUTRAL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"GRAMMATICAL_GENDER_NEUTRAL"
		);
	}
	inline jint Configuration::GRAMMATICAL_GENDER_NOT_SPECIFIED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"GRAMMATICAL_GENDER_NOT_SPECIFIED"
		);
	}
	inline jint Configuration::HARDKEYBOARDHIDDEN_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_NO"
		);
	}
	inline jint Configuration::HARDKEYBOARDHIDDEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_UNDEFINED"
		);
	}
	inline jint Configuration::HARDKEYBOARDHIDDEN_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"HARDKEYBOARDHIDDEN_YES"
		);
	}
	inline jint Configuration::KEYBOARDHIDDEN_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_NO"
		);
	}
	inline jint Configuration::KEYBOARDHIDDEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_UNDEFINED"
		);
	}
	inline jint Configuration::KEYBOARDHIDDEN_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARDHIDDEN_YES"
		);
	}
	inline jint Configuration::KEYBOARD_12KEY()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_12KEY"
		);
	}
	inline jint Configuration::KEYBOARD_NOKEYS()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_NOKEYS"
		);
	}
	inline jint Configuration::KEYBOARD_QWERTY()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_QWERTY"
		);
	}
	inline jint Configuration::KEYBOARD_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"KEYBOARD_UNDEFINED"
		);
	}
	inline jint Configuration::MNC_ZERO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"MNC_ZERO"
		);
	}
	inline jint Configuration::NAVIGATIONHIDDEN_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_NO"
		);
	}
	inline jint Configuration::NAVIGATIONHIDDEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_UNDEFINED"
		);
	}
	inline jint Configuration::NAVIGATIONHIDDEN_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATIONHIDDEN_YES"
		);
	}
	inline jint Configuration::NAVIGATION_DPAD()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_DPAD"
		);
	}
	inline jint Configuration::NAVIGATION_NONAV()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_NONAV"
		);
	}
	inline jint Configuration::NAVIGATION_TRACKBALL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_TRACKBALL"
		);
	}
	inline jint Configuration::NAVIGATION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_UNDEFINED"
		);
	}
	inline jint Configuration::NAVIGATION_WHEEL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"NAVIGATION_WHEEL"
		);
	}
	inline jint Configuration::ORIENTATION_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_LANDSCAPE"
		);
	}
	inline jint Configuration::ORIENTATION_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_PORTRAIT"
		);
	}
	inline jint Configuration::ORIENTATION_SQUARE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_SQUARE"
		);
	}
	inline jint Configuration::ORIENTATION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"ORIENTATION_UNDEFINED"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LAYOUTDIR_LTR()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_LTR"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LAYOUTDIR_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_MASK"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LAYOUTDIR_RTL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_RTL"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LAYOUTDIR_SHIFT()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_SHIFT"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LAYOUTDIR_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LAYOUTDIR_UNDEFINED"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LONG_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_MASK"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LONG_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_NO"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LONG_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_UNDEFINED"
		);
	}
	inline jint Configuration::SCREENLAYOUT_LONG_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_LONG_YES"
		);
	}
	inline jint Configuration::SCREENLAYOUT_ROUND_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_MASK"
		);
	}
	inline jint Configuration::SCREENLAYOUT_ROUND_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_NO"
		);
	}
	inline jint Configuration::SCREENLAYOUT_ROUND_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_UNDEFINED"
		);
	}
	inline jint Configuration::SCREENLAYOUT_ROUND_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_ROUND_YES"
		);
	}
	inline jint Configuration::SCREENLAYOUT_SIZE_LARGE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_LARGE"
		);
	}
	inline jint Configuration::SCREENLAYOUT_SIZE_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_MASK"
		);
	}
	inline jint Configuration::SCREENLAYOUT_SIZE_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_NORMAL"
		);
	}
	inline jint Configuration::SCREENLAYOUT_SIZE_SMALL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_SMALL"
		);
	}
	inline jint Configuration::SCREENLAYOUT_SIZE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_UNDEFINED"
		);
	}
	inline jint Configuration::SCREENLAYOUT_SIZE_XLARGE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_SIZE_XLARGE"
		);
	}
	inline jint Configuration::SCREENLAYOUT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREENLAYOUT_UNDEFINED"
		);
	}
	inline jint Configuration::SCREEN_HEIGHT_DP_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREEN_HEIGHT_DP_UNDEFINED"
		);
	}
	inline jint Configuration::SCREEN_WIDTH_DP_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SCREEN_WIDTH_DP_UNDEFINED"
		);
	}
	inline jint Configuration::SMALLEST_SCREEN_WIDTH_DP_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"SMALLEST_SCREEN_WIDTH_DP_UNDEFINED"
		);
	}
	inline jint Configuration::TOUCHSCREEN_FINGER()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_FINGER"
		);
	}
	inline jint Configuration::TOUCHSCREEN_NOTOUCH()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_NOTOUCH"
		);
	}
	inline jint Configuration::TOUCHSCREEN_STYLUS()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_STYLUS"
		);
	}
	inline jint Configuration::TOUCHSCREEN_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"TOUCHSCREEN_UNDEFINED"
		);
	}
	inline jint Configuration::UI_MODE_NIGHT_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_MASK"
		);
	}
	inline jint Configuration::UI_MODE_NIGHT_NO()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_NO"
		);
	}
	inline jint Configuration::UI_MODE_NIGHT_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_UNDEFINED"
		);
	}
	inline jint Configuration::UI_MODE_NIGHT_YES()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_NIGHT_YES"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_APPLIANCE()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_APPLIANCE"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_CAR()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_CAR"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_DESK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_DESK"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_MASK"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_NORMAL"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_TELEVISION()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_TELEVISION"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_UNDEFINED"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_VR_HEADSET()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_VR_HEADSET"
		);
	}
	inline jint Configuration::UI_MODE_TYPE_WATCH()
	{
		return getStaticField<jint>(
			"android.content.res.Configuration",
			"UI_MODE_TYPE_WATCH"
		);
	}
	inline jint Configuration::colorMode()
	{
		return getField<jint>(
			"colorMode"
		);
	}
	inline jint Configuration::densityDpi()
	{
		return getField<jint>(
			"densityDpi"
		);
	}
	inline jfloat Configuration::fontScale()
	{
		return getField<jfloat>(
			"fontScale"
		);
	}
	inline jint Configuration::fontWeightAdjustment()
	{
		return getField<jint>(
			"fontWeightAdjustment"
		);
	}
	inline jint Configuration::hardKeyboardHidden()
	{
		return getField<jint>(
			"hardKeyboardHidden"
		);
	}
	inline jint Configuration::keyboard()
	{
		return getField<jint>(
			"keyboard"
		);
	}
	inline jint Configuration::keyboardHidden()
	{
		return getField<jint>(
			"keyboardHidden"
		);
	}
	inline java::util::Locale Configuration::locale()
	{
		return getObjectField(
			"locale",
			"Ljava/util/Locale;"
		);
	}
	inline jint Configuration::mcc()
	{
		return getField<jint>(
			"mcc"
		);
	}
	inline jint Configuration::mnc()
	{
		return getField<jint>(
			"mnc"
		);
	}
	inline jint Configuration::navigation()
	{
		return getField<jint>(
			"navigation"
		);
	}
	inline jint Configuration::navigationHidden()
	{
		return getField<jint>(
			"navigationHidden"
		);
	}
	inline jint Configuration::orientation()
	{
		return getField<jint>(
			"orientation"
		);
	}
	inline jint Configuration::screenHeightDp()
	{
		return getField<jint>(
			"screenHeightDp"
		);
	}
	inline jint Configuration::screenLayout()
	{
		return getField<jint>(
			"screenLayout"
		);
	}
	inline jint Configuration::screenWidthDp()
	{
		return getField<jint>(
			"screenWidthDp"
		);
	}
	inline jint Configuration::smallestScreenWidthDp()
	{
		return getField<jint>(
			"smallestScreenWidthDp"
		);
	}
	inline jint Configuration::touchscreen()
	{
		return getField<jint>(
			"touchscreen"
		);
	}
	inline jint Configuration::uiMode()
	{
		return getField<jint>(
			"uiMode"
		);
	}
	
	// Constructors
	inline Configuration::Configuration()
		: JObject(
			"android.content.res.Configuration",
			"()V"
		) {}
	inline Configuration::Configuration(android::content::res::Configuration &arg0)
		: JObject(
			"android.content.res.Configuration",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::content::res::Configuration Configuration::generateDelta(android::content::res::Configuration arg0, android::content::res::Configuration arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.Configuration",
			"generateDelta",
			"(Landroid/content/res/Configuration;Landroid/content/res/Configuration;)Landroid/content/res/Configuration;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Configuration::needNewResources(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.content.res.Configuration",
			"needNewResources",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jint Configuration::compareTo(android::content::res::Configuration arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/content/res/Configuration;)I",
			arg0.object()
		);
	}
	inline jint Configuration::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Configuration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Configuration::diff(android::content::res::Configuration arg0) const
	{
		return callMethod<jint>(
			"diff",
			"(Landroid/content/res/Configuration;)I",
			arg0.object()
		);
	}
	inline jboolean Configuration::equals(android::content::res::Configuration arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/content/res/Configuration;)Z",
			arg0.object()
		);
	}
	inline jboolean Configuration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Configuration::getGrammaticalGender() const
	{
		return callMethod<jint>(
			"getGrammaticalGender",
			"()I"
		);
	}
	inline jint Configuration::getLayoutDirection() const
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	inline android::os::LocaleList Configuration::getLocales() const
	{
		return callObjectMethod(
			"getLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint Configuration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Configuration::isLayoutSizeAtLeast(jint arg0) const
	{
		return callMethod<jboolean>(
			"isLayoutSizeAtLeast",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Configuration::isNightModeActive() const
	{
		return callMethod<jboolean>(
			"isNightModeActive",
			"()Z"
		);
	}
	inline jboolean Configuration::isScreenHdr() const
	{
		return callMethod<jboolean>(
			"isScreenHdr",
			"()Z"
		);
	}
	inline jboolean Configuration::isScreenRound() const
	{
		return callMethod<jboolean>(
			"isScreenRound",
			"()Z"
		);
	}
	inline jboolean Configuration::isScreenWideColorGamut() const
	{
		return callMethod<jboolean>(
			"isScreenWideColorGamut",
			"()Z"
		);
	}
	inline void Configuration::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void Configuration::setLayoutDirection(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setLayoutDirection",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	inline void Configuration::setLocale(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	inline void Configuration::setLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	inline void Configuration::setTo(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"setTo",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void Configuration::setToDefaults() const
	{
		callMethod<void>(
			"setToDefaults",
			"()V"
		);
	}
	inline JString Configuration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jint Configuration::updateFrom(android::content::res::Configuration arg0) const
	{
		return callMethod<jint>(
			"updateFrom",
			"(Landroid/content/res/Configuration;)I",
			arg0.object()
		);
	}
	inline void Configuration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
