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
	class ScaleXSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		ScaleXSpan(QAndroidJniObject obj);
		// Constructors
		ScaleXSpan(android::os::Parcel &arg0);
		ScaleXSpan(jfloat &arg0);
		ScaleXSpan() = default;
		
		// Methods
		jint describeContents();
		jfloat getScaleX();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

