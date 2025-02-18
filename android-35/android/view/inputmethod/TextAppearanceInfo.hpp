#pragma once

#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TextAppearanceInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject TextAppearanceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.TextAppearanceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextAppearanceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TextAppearanceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString TextAppearanceInfo::getFontFeatureSettings() const
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextAppearanceInfo::getFontVariationSettings() const
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		);
	}
	inline jint TextAppearanceInfo::getHighlightTextColor() const
	{
		return callMethod<jint>(
			"getHighlightTextColor",
			"()I"
		);
	}
	inline jint TextAppearanceInfo::getHintTextColor() const
	{
		return callMethod<jint>(
			"getHintTextColor",
			"()I"
		);
	}
	inline jfloat TextAppearanceInfo::getLetterSpacing() const
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	inline jint TextAppearanceInfo::getLineBreakStyle() const
	{
		return callMethod<jint>(
			"getLineBreakStyle",
			"()I"
		);
	}
	inline jint TextAppearanceInfo::getLineBreakWordStyle() const
	{
		return callMethod<jint>(
			"getLineBreakWordStyle",
			"()I"
		);
	}
	inline jint TextAppearanceInfo::getLinkTextColor() const
	{
		return callMethod<jint>(
			"getLinkTextColor",
			"()I"
		);
	}
	inline jint TextAppearanceInfo::getShadowColor() const
	{
		return callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	inline jfloat TextAppearanceInfo::getShadowDx() const
	{
		return callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	inline jfloat TextAppearanceInfo::getShadowDy() const
	{
		return callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	inline jfloat TextAppearanceInfo::getShadowRadius() const
	{
		return callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	inline JString TextAppearanceInfo::getSystemFontFamilyName() const
	{
		return callObjectMethod(
			"getSystemFontFamilyName",
			"()Ljava/lang/String;"
		);
	}
	inline jint TextAppearanceInfo::getTextColor() const
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	inline jint TextAppearanceInfo::getTextFontWeight() const
	{
		return callMethod<jint>(
			"getTextFontWeight",
			"()I"
		);
	}
	inline android::os::LocaleList TextAppearanceInfo::getTextLocales() const
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jfloat TextAppearanceInfo::getTextScaleX() const
	{
		return callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	inline jfloat TextAppearanceInfo::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	inline jint TextAppearanceInfo::getTextStyle() const
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	inline jint TextAppearanceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean TextAppearanceInfo::isAllCaps() const
	{
		return callMethod<jboolean>(
			"isAllCaps",
			"()Z"
		);
	}
	inline jboolean TextAppearanceInfo::isElegantTextHeight() const
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	inline jboolean TextAppearanceInfo::isFallbackLineSpacing() const
	{
		return callMethod<jboolean>(
			"isFallbackLineSpacing",
			"()Z"
		);
	}
	inline JString TextAppearanceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextAppearanceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
