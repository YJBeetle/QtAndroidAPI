#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

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
	class BackgroundColorSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackgroundColorSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		BackgroundColorSpan(QJniObject obj);
		
		// Constructors
		BackgroundColorSpan(android::os::Parcel arg0);
		BackgroundColorSpan(jint arg0);
		
		// Methods
		jint describeContents();
		jint getBackgroundColor();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

