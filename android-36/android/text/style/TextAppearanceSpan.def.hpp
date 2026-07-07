#pragma once

#include "./MetricAffectingSpan.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class TextPaint;
}
class JString;

namespace android::text::style
{
	class TextAppearanceSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextAppearanceSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		TextAppearanceSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		TextAppearanceSpan(android::os::Parcel arg0);
		TextAppearanceSpan(android::content::Context arg0, jint arg1);
		TextAppearanceSpan(android::content::Context arg0, jint arg1, jint arg2);
		TextAppearanceSpan(JString arg0, jint arg1, jint arg2, android::content::res::ColorStateList arg3, android::content::res::ColorStateList arg4);
		
		// Methods
		jint describeContents() const;
		JString getFamily() const;
		JString getFontFeatureSettings() const;
		JString getFontVariationSettings() const;
		jfloat getLetterSpacing() const;
		android::content::res::ColorStateList getLinkTextColor() const;
		jint getShadowColor() const;
		jfloat getShadowDx() const;
		jfloat getShadowDy() const;
		jfloat getShadowRadius() const;
		jint getSpanTypeId() const;
		android::content::res::ColorStateList getTextColor() const;
		jint getTextFontWeight() const;
		android::os::LocaleList getTextLocales() const;
		jint getTextSize() const;
		jint getTextStyle() const;
		android::graphics::Typeface getTypeface() const;
		jboolean isElegantTextHeight() const;
		JString toString() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

