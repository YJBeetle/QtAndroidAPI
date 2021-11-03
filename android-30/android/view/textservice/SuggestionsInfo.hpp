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
		
		// QJniObject forward
		template<typename ...Ts> explicit SuggestionsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SuggestionsInfo(QJniObject obj);
		
		// Constructors
		SuggestionsInfo(android::os::Parcel arg0);
		SuggestionsInfo(jint arg0, JArray arg1);
		SuggestionsInfo(jint arg0, JArray arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents() const;
		jint getCookie() const;
		jint getSequence() const;
		JString getSuggestionAt(jint arg0) const;
		jint getSuggestionsAttributes() const;
		jint getSuggestionsCount() const;
		void setCookieAndSequence(jint arg0, jint arg1) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textservice

