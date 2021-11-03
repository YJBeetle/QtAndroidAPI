#pragma once

#include "../../../JObject.hpp"
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
	class AbsoluteSizeSpan : public android::text::style::MetricAffectingSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsoluteSizeSpan(const char *className, const char *sig, Ts...agv) : android::text::style::MetricAffectingSpan(className, sig, std::forward<Ts>(agv)...) {}
		AbsoluteSizeSpan(QJniObject obj);
		
		// Constructors
		AbsoluteSizeSpan(android::os::Parcel arg0);
		AbsoluteSizeSpan(jint arg0);
		AbsoluteSizeSpan(jint arg0, jboolean arg1);
		
		// Methods
		jint describeContents();
		jboolean getDip();
		jint getSize();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void updateMeasureState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

