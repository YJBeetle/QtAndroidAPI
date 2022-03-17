#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::os
{
	class Parcel;
}
namespace android::view::textservice
{
	class SuggestionsInfo;
}

namespace android::view::textservice
{
	class SentenceSuggestionsInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SentenceSuggestionsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SentenceSuggestionsInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SentenceSuggestionsInfo(android::os::Parcel arg0);
		SentenceSuggestionsInfo(JArray arg0, JIntArray arg1, JIntArray arg2);
		
		// Methods
		jint describeContents() const;
		jint getLengthAt(jint arg0) const;
		jint getOffsetAt(jint arg0) const;
		jint getSuggestionsCount() const;
		android::view::textservice::SuggestionsInfo getSuggestionsInfoAt(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textservice

