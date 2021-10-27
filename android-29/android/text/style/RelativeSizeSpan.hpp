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
	class RelativeSizeSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		RelativeSizeSpan(QAndroidJniObject obj);
		// Constructors
		RelativeSizeSpan(android::os::Parcel &arg0);
		RelativeSizeSpan(jfloat &arg0);
		RelativeSizeSpan() = default;
		
		// Methods
		jint describeContents();
		jfloat getSizeChange();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

