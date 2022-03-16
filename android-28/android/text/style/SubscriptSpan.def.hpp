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
	class SubscriptSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		SubscriptSpan();
		SubscriptSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

