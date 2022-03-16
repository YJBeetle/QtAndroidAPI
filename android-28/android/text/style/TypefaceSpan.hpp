#pragma once

#include "./MetricAffectingSpan.hpp"

namespace android::graphics
{
	class Typeface;
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
	class TypefaceSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TypefaceSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		TypefaceSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		TypefaceSpan(android::graphics::Typeface arg0);
		TypefaceSpan(android::os::Parcel arg0);
		TypefaceSpan(JString arg0);
		
		// Methods
		jint describeContents() const;
		JString getFamily() const;
		jint getSpanTypeId() const;
		android::graphics::Typeface getTypeface() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

