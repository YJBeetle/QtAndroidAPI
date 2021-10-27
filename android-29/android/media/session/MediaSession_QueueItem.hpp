#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaDescription;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::session
{
	class MediaSession_QueueItem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint UNKNOWN_ID();
		
		MediaSession_QueueItem(QAndroidJniObject obj);
		// Constructors
		MediaSession_QueueItem(android::media::MediaDescription &arg0, jlong &arg1);
		MediaSession_QueueItem() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDescription();
		jlong getQueueId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

