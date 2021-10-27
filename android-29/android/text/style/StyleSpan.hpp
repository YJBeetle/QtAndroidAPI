#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"

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
	class StyleSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		StyleSpan(QAndroidJniObject obj);
		// Constructors
		StyleSpan(android::os::Parcel &arg0);
		StyleSpan(jint &arg0);
		StyleSpan() = default;
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		jint getStyle();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

