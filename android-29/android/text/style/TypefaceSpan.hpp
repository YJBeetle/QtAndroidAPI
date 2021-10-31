#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		TypefaceSpan(QAndroidJniObject obj);
		// Constructors
		TypefaceSpan(android::graphics::Typeface arg0);
		TypefaceSpan(android::os::Parcel arg0);
		TypefaceSpan(jstring arg0);
		TypefaceSpan() = default;
		
		// Methods
		jint describeContents();
		jstring getFamily();
		jint getSpanTypeId();
		QAndroidJniObject getTypeface();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

