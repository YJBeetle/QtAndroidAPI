#pragma once

#include "../../../JObject.hpp"
#include "./CharacterStyle.hpp"
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

namespace android::text::style
{
	class TypefaceSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TypefaceSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		TypefaceSpan(QJniObject obj);
		
		// Constructors
		TypefaceSpan(android::graphics::Typeface arg0);
		TypefaceSpan(android::os::Parcel arg0);
		TypefaceSpan(jstring arg0);
		
		// Methods
		jint describeContents();
		jstring getFamily();
		jint getSpanTypeId();
		android::graphics::Typeface getTypeface();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

