#pragma once

#include "../../../JObject.hpp"

namespace android::media
{
	class MediaDescription;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::session
{
	class MediaSession_QueueItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint UNKNOWN_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession_QueueItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession_QueueItem(QJniObject obj);
		
		// Constructors
		MediaSession_QueueItem(android::media::MediaDescription arg0, jlong arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::media::MediaDescription getDescription();
		jlong getQueueId();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::session

