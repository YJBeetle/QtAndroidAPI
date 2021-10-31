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
		static __JniBaseClass CREATOR();
		static jint UNKNOWN_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession_QueueItem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession_QueueItem(QAndroidJniObject obj);
		
		// Constructors
		MediaSession_QueueItem(android::media::MediaDescription arg0, jlong arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::media::MediaDescription getDescription();
		jlong getQueueId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

