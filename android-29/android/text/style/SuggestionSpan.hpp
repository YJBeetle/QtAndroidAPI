#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class TextPaint;
}
namespace java::util
{
	class Locale;
}

namespace android::text::style
{
	class SuggestionSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		static jstring ACTION_SUGGESTION_PICKED();
		static QAndroidJniObject CREATOR();
		static jint FLAG_AUTO_CORRECTION();
		static jint FLAG_EASY_CORRECT();
		static jint FLAG_MISSPELLED();
		static jint SUGGESTIONS_MAX_SIZE();
		static jstring SUGGESTION_SPAN_PICKED_AFTER();
		static jstring SUGGESTION_SPAN_PICKED_BEFORE();
		static jstring SUGGESTION_SPAN_PICKED_HASHCODE();
		
		SuggestionSpan(QAndroidJniObject obj);
		// Constructors
		SuggestionSpan(android::os::Parcel &arg0);
		SuggestionSpan(android::content::Context &arg0, jarray &arg1, jint &arg2);
		SuggestionSpan(java::util::Locale &arg0, jarray &arg1, jint &arg2);
		SuggestionSpan(android::content::Context &arg0, java::util::Locale &arg1, jarray &arg2, jint &arg3, jclass &arg4);
		SuggestionSpan() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		jstring getLocale();
		QAndroidJniObject getLocaleObject();
		jint getSpanTypeId();
		jarray getSuggestions();
		jint getUnderlineColor();
		jint hashCode();
		void setFlags(jint arg0);
		void updateDrawState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

