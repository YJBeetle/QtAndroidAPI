#pragma once

#include "./MetricAffectingSpan.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextAppearanceSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		TextAppearanceSpan(QAndroidJniObject obj);
		
		// Constructors
		TextAppearanceSpan(android::os::Parcel arg0);
		TextAppearanceSpan(android::content::Context arg0, jint arg1);
		TextAppearanceSpan(android::content::Context arg0, jint arg1, jint arg2);
		TextAppearanceSpan(JString arg0, jint arg1, jint arg2, android::content::res::ColorStateList arg3, android::content::res::ColorStateList arg4);
		
		// Methods
		jint describeContents();
		JString getFamily();
		android::content::res::ColorStateList getLinkTextColor();
		jint getSpanTypeId();
		android::content::res::ColorStateList getTextColor();
		jint getTextSize();
		jint getTextStyle();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

