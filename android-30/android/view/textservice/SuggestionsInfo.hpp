#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view::textservice
{
	class SuggestionsInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESULT_ATTR_HAS_RECOMMENDED_SUGGESTIONS();
		static jint RESULT_ATTR_IN_THE_DICTIONARY();
		static jint RESULT_ATTR_LOOKS_LIKE_TYPO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SuggestionsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SuggestionsInfo(QAndroidJniObject obj);
		
		// Constructors
		SuggestionsInfo(android::os::Parcel arg0);
		SuggestionsInfo(jint arg0, JArray arg1);
		SuggestionsInfo(jint arg0, JArray arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jint getCookie();
		jint getSequence();
		JString getSuggestionAt(jint arg0);
		jint getSuggestionsAttributes();
		jint getSuggestionsCount();
		void setCookieAndSequence(jint arg0, jint arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

