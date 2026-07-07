#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::view::inputmethod
{
	class TextAppearanceInfo;
}
class JString;

namespace android::view::inputmethod
{
	class TextAppearanceInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextAppearanceInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextAppearanceInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextAppearanceInfo_Builder();
		
		// Methods
		android::view::inputmethod::TextAppearanceInfo build() const;
		android::view::inputmethod::TextAppearanceInfo_Builder setAllCaps(jboolean arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setElegantTextHeight(jboolean arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setFallbackLineSpacing(jboolean arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setFontFeatureSettings(JString arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setFontVariationSettings(JString arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setHighlightTextColor(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setHintTextColor(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setLetterSpacing(jfloat arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setLineBreakStyle(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setLineBreakWordStyle(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setLinkTextColor(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setShadowColor(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setShadowDx(jfloat arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setShadowDy(jfloat arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setShadowRadius(jfloat arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setSystemFontFamilyName(JString arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setTextColor(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setTextFontWeight(jint arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setTextLocales(android::os::LocaleList arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setTextScaleX(jfloat arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setTextSize(jfloat arg0) const;
		android::view::inputmethod::TextAppearanceInfo_Builder setTextStyle(jint arg0) const;
	};
} // namespace android::view::inputmethod

