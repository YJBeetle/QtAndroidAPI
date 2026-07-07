#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view::inputmethod
{
	class TextAppearanceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextAppearanceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextAppearanceInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getFontFeatureSettings() const;
		JString getFontVariationSettings() const;
		jint getHighlightTextColor() const;
		jint getHintTextColor() const;
		jfloat getLetterSpacing() const;
		jint getLineBreakStyle() const;
		jint getLineBreakWordStyle() const;
		jint getLinkTextColor() const;
		jint getShadowColor() const;
		jfloat getShadowDx() const;
		jfloat getShadowDy() const;
		jfloat getShadowRadius() const;
		JString getSystemFontFamilyName() const;
		jint getTextColor() const;
		jint getTextFontWeight() const;
		android::os::LocaleList getTextLocales() const;
		jfloat getTextScaleX() const;
		jfloat getTextSize() const;
		jint getTextStyle() const;
		jint hashCode() const;
		jboolean isAllCaps() const;
		jboolean isElegantTextHeight() const;
		jboolean isFallbackLineSpacing() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

