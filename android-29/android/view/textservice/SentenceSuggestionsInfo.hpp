#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SentenceSuggestionsInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		SentenceSuggestionsInfo(QAndroidJniObject obj);
		// Constructors
		SentenceSuggestionsInfo(android::os::Parcel arg0);
		SentenceSuggestionsInfo(jarray arg0, jintArray arg1, jintArray arg2);
		SentenceSuggestionsInfo() = default;
		
		// Methods
		jint describeContents();
		jint getLengthAt(jint arg0);
		jint getOffsetAt(jint arg0);
		jint getSuggestionsCount();
		QAndroidJniObject getSuggestionsInfoAt(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

