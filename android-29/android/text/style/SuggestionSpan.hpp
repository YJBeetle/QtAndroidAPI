#pragma once

#include "./CharacterStyle.hpp"

class JArray;
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
class JClass;
class JObject;
class JString;
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
		static JString ACTION_SUGGESTION_PICKED();
		static JObject CREATOR();
		static jint FLAG_AUTO_CORRECTION();
		static jint FLAG_EASY_CORRECT();
		static jint FLAG_MISSPELLED();
		static jint SUGGESTIONS_MAX_SIZE();
		static JString SUGGESTION_SPAN_PICKED_AFTER();
		static JString SUGGESTION_SPAN_PICKED_BEFORE();
		static JString SUGGESTION_SPAN_PICKED_HASHCODE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SuggestionSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		SuggestionSpan(QAndroidJniObject obj);
		
		// Constructors
		SuggestionSpan(android::os::Parcel arg0);
		SuggestionSpan(android::content::Context arg0, JArray arg1, jint arg2);
		SuggestionSpan(java::util::Locale arg0, JArray arg1, jint arg2);
		SuggestionSpan(android::content::Context arg0, java::util::Locale arg1, JArray arg2, jint arg3, JClass arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getFlags();
		JString getLocale();
		java::util::Locale getLocaleObject();
		jint getSpanTypeId();
		JArray getSuggestions();
		jint getUnderlineColor();
		jint hashCode();
		void setFlags(jint arg0);
		void updateDrawState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

