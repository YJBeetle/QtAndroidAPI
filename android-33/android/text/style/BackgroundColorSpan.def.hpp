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

namespace android::text::style
{
	class BackgroundColorSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackgroundColorSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		BackgroundColorSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
		
		// Constructors
		BackgroundColorSpan(android::os::Parcel arg0);
		BackgroundColorSpan(jint arg0);
		
		// Methods
		jint describeContents() const;
		jint getBackgroundColor() const;
		jint getSpanTypeId() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

