#pragma once

#include "../../../JObject.hpp"

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
		SentenceSuggestionsInfo(QAndroidJniObject obj);
		
		// Constructors
		SentenceSuggestionsInfo(android::os::Parcel arg0);
		SentenceSuggestionsInfo(jarray arg0, jintArray arg1, jintArray arg2);
		
		// Methods
		jint describeContents();
		jint getLengthAt(jint arg0);
		jint getOffsetAt(jint arg0);
		jint getSuggestionsCount();
		android::view::textservice::SuggestionsInfo getSuggestionsInfoAt(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

