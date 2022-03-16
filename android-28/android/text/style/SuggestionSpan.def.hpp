#pragma once

#include "./CharacterStyle.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit SuggestionSpan(const char *className, const char *sig, Ts...agv) : android::text::style::CharacterStyle(className, sig, std::forward<Ts>(agv)...) {}
		SuggestionSpan(QJniObject obj) : android::text::style::CharacterStyle(obj) {}
		
		// Constructors
		SuggestionSpan(android::os::Parcel arg0);
		SuggestionSpan(android::content::Context arg0, JArray arg1, jint arg2);
		SuggestionSpan(java::util::Locale arg0, JArray arg1, jint arg2);
		SuggestionSpan(android::content::Context arg0, java::util::Locale arg1, JArray arg2, jint arg3, JClass arg4);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getFlags() const;
		JString getLocale() const;
		java::util::Locale getLocaleObject() const;
		jint getSpanTypeId() const;
		JArray getSuggestions() const;
		jint hashCode() const;
		void setFlags(jint arg0) const;
		void updateDrawState(android::text::TextPaint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

