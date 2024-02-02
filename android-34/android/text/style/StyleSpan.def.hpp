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
class JString;

namespace android::text::style
{
	class StyleSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StyleSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		StyleSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		StyleSpan(android::os::Parcel arg0);
		StyleSpan(jint arg0);
		StyleSpan(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jint getFontWeightAdjustment() const;
		jint getSpanTypeId() const;
		jint getStyle() const;
		JString toString() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

