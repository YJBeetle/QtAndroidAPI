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
		
		BackgroundColorSpan(QAndroidJniObject obj);
		// Constructors
		BackgroundColorSpan(android::os::Parcel arg0);
		BackgroundColorSpan(jint arg0);
		BackgroundColorSpan() = default;
		
		// Methods
		jint describeContents();
		jint getBackgroundColor();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

