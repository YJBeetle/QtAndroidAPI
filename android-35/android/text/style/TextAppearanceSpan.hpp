#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../graphics/Typeface.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "./TextAppearanceSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TextAppearanceSpan::TextAppearanceSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline TextAppearanceSpan::TextAppearanceSpan(android::content::Context arg0, jint arg1)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	inline TextAppearanceSpan::TextAppearanceSpan(android::content::Context arg0, jint arg1, jint arg2)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline TextAppearanceSpan::TextAppearanceSpan(JString arg0, jint arg1, jint arg2, android::content::res::ColorStateList arg3, android::content::res::ColorStateList arg4)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TextAppearanceSpan",
			"(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	
	// Methods
	inline jint TextAppearanceSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TextAppearanceSpan::getFamily() const
	{
		return callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextAppearanceSpan::getFontFeatureSettings() const
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextAppearanceSpan::getFontVariationSettings() const
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat TextAppearanceSpan::getLetterSpacing() const
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	inline android::content::res::ColorStateList TextAppearanceSpan::getLinkTextColor() const
	{
		return callObjectMethod(
			"getLinkTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline jint TextAppearanceSpan::getShadowColor() const
	{
		return callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	inline jfloat TextAppearanceSpan::getShadowDx() const
	{
		return callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	inline jfloat TextAppearanceSpan::getShadowDy() const
	{
		return callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	inline jfloat TextAppearanceSpan::getShadowRadius() const
	{
		return callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	inline jint TextAppearanceSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline android::content::res::ColorStateList TextAppearanceSpan::getTextColor() const
	{
		return callObjectMethod(
			"getTextColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline jint TextAppearanceSpan::getTextFontWeight() const
	{
		return callMethod<jint>(
			"getTextFontWeight",
			"()I"
		);
	}
	inline android::os::LocaleList TextAppearanceSpan::getTextLocales() const
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint TextAppearanceSpan::getTextSize() const
	{
		return callMethod<jint>(
			"getTextSize",
			"()I"
		);
	}
	inline jint TextAppearanceSpan::getTextStyle() const
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	inline android::graphics::Typeface TextAppearanceSpan::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	inline jboolean TextAppearanceSpan::isElegantTextHeight() const
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	inline JString TextAppearanceSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextAppearanceSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void TextAppearanceSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void TextAppearanceSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
