#pragma once

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
	class UnderlineSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnderlineSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		UnderlineSpan(QAndroidJniObject obj);
		
		// Constructors
		UnderlineSpan();
		UnderlineSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		jint getSpanTypeId() const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

