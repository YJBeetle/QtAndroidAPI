#pragma once

#include "./CharacterStyle.def.hpp"

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
	class StrikethroughSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StrikethroughSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		StrikethroughSpan(QJniObject obj) : android::text::style::CharacterStyle(obj) {}
		
		// Constructors
		StrikethroughSpan();
		StrikethroughSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		JString toString() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

