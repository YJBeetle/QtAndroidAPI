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
	class SuperscriptSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SuperscriptSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		SuperscriptSpan(QJniObject obj) : android::text::style::MetricAffectingSpan(obj) {}
		
		// Constructors
		SuperscriptSpan();
		SuperscriptSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		JString toString() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void updateMeasureState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

