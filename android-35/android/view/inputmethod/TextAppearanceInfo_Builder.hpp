#pragma once

#include "../../os/LocaleList.def.hpp"
#include "./TextAppearanceInfo.def.hpp"
#include "../../../JString.hpp"
#include "./TextAppearanceInfo_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline TextAppearanceInfo_Builder::TextAppearanceInfo_Builder()
		: JObject(
			"android.view.inputmethod.TextAppearanceInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::TextAppearanceInfo TextAppearanceInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/TextAppearanceInfo;"
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setAllCaps(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllCaps",
			"(Z)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setElegantTextHeight(jboolean arg0) const
	{
		return callObjectMethod(
			"setElegantTextHeight",
			"(Z)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setFallbackLineSpacing(jboolean arg0) const
	{
		return callObjectMethod(
			"setFallbackLineSpacing",
			"(Z)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setFontFeatureSettings(JString arg0) const
	{
		return callObjectMethod(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setFontVariationSettings(JString arg0) const
	{
		return callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setHighlightTextColor(jint arg0) const
	{
		return callObjectMethod(
			"setHighlightTextColor",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setHintTextColor(jint arg0) const
	{
		return callObjectMethod(
			"setHintTextColor",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setLetterSpacing(jfloat arg0) const
	{
		return callObjectMethod(
			"setLetterSpacing",
			"(F)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setLineBreakStyle(jint arg0) const
	{
		return callObjectMethod(
			"setLineBreakStyle",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setLineBreakWordStyle(jint arg0) const
	{
		return callObjectMethod(
			"setLineBreakWordStyle",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setLinkTextColor(jint arg0) const
	{
		return callObjectMethod(
			"setLinkTextColor",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setShadowColor(jint arg0) const
	{
		return callObjectMethod(
			"setShadowColor",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setShadowDx(jfloat arg0) const
	{
		return callObjectMethod(
			"setShadowDx",
			"(F)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setShadowDy(jfloat arg0) const
	{
		return callObjectMethod(
			"setShadowDy",
			"(F)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setShadowRadius(jfloat arg0) const
	{
		return callObjectMethod(
			"setShadowRadius",
			"(F)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setSystemFontFamilyName(JString arg0) const
	{
		return callObjectMethod(
			"setSystemFontFamilyName",
			"(Ljava/lang/String;)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setTextColor(jint arg0) const
	{
		return callObjectMethod(
			"setTextColor",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setTextFontWeight(jint arg0) const
	{
		return callObjectMethod(
			"setTextFontWeight",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setTextLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setTextLocales",
			"(Landroid/os/LocaleList;)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setTextScaleX(jfloat arg0) const
	{
		return callObjectMethod(
			"setTextScaleX",
			"(F)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setTextSize(jfloat arg0) const
	{
		return callObjectMethod(
			"setTextSize",
			"(F)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo_Builder TextAppearanceInfo_Builder::setTextStyle(jint arg0) const
	{
		return callObjectMethod(
			"setTextStyle",
			"(I)Landroid/view/inputmethod/TextAppearanceInfo$Builder;",
			arg0
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
