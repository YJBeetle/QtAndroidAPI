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
	class SuggestionRangeSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SuggestionRangeSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		SuggestionRangeSpan(QAndroidJniObject obj) : android::text::style::CharacterStyle(obj) {}
		
		// Constructors
		SuggestionRangeSpan();
		
		// Methods
		jint describeContents() const;
		jint getBackgroundColor() const;
		jint getSpanTypeId() const;
		void setBackgroundColor(jint arg0) const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

