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
	class SuperscriptSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SuperscriptSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		SuperscriptSpan(QJniObject obj);
		
		// Constructors
		SuperscriptSpan();
		SuperscriptSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

