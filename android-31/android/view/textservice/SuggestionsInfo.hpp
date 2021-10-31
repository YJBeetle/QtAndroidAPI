#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textservice
{
	class SuggestionsInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint RESULT_ATTR_DONT_SHOW_UI_FOR_SUGGESTIONS();
		static jint RESULT_ATTR_HAS_RECOMMENDED_SUGGESTIONS();
		static jint RESULT_ATTR_IN_THE_DICTIONARY();
		static jint RESULT_ATTR_LOOKS_LIKE_GRAMMAR_ERROR();
		static jint RESULT_ATTR_LOOKS_LIKE_TYPO();
		
		// QJniObject forward
		template<typename ...Ts> explicit SuggestionsInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SuggestionsInfo(QJniObject obj);
		
		// Constructors
		SuggestionsInfo(android::os::Parcel arg0);
		SuggestionsInfo(jint arg0, jarray arg1);
		SuggestionsInfo(jint arg0, jarray arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jint getCookie();
		jint getSequence();
		jstring getSuggestionAt(jint arg0);
		jint getSuggestionsAttributes();
		jint getSuggestionsCount();
		void setCookieAndSequence(jint arg0, jint arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

