#pragma once

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
	class SubscriptSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptSpan(QJniObject obj);
		
		// Constructors
		SubscriptSpan();
		SubscriptSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

