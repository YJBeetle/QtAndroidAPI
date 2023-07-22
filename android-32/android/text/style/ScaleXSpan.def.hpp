#pragma once

#include "./MetricAffectingSpan.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScaleXSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		ScaleXSpan(QAndroidJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		ScaleXSpan(android::os::Parcel arg0);
		ScaleXSpan(jfloat arg0);
		
		// Methods
		jint describeContents() const;
		jfloat getScaleX() const;
		jint getSpanTypeId() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

