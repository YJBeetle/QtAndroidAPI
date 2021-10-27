#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::usage
{
	class NetworkStats_Bucket : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT_NETWORK_ALL();
		static jint DEFAULT_NETWORK_NO();
		static jint DEFAULT_NETWORK_YES();
		static jint METERED_ALL();
		static jint METERED_NO();
		static jint METERED_YES();
		static jint ROAMING_ALL();
		static jint ROAMING_NO();
		static jint ROAMING_YES();
		static jint STATE_ALL();
		static jint STATE_DEFAULT();
		static jint STATE_FOREGROUND();
		static jint TAG_NONE();
		static jint UID_ALL();
		static jint UID_REMOVED();
		static jint UID_TETHERING();
		
		NetworkStats_Bucket(QAndroidJniObject obj);
		// Constructors
		NetworkStats_Bucket();
		
		// Methods
		jint getDefaultNetworkStatus();
		jlong getEndTimeStamp();
		jint getMetered();
		jint getRoaming();
		jlong getRxBytes();
		jlong getRxPackets();
		jlong getStartTimeStamp();
		jint getState();
		jint getTag();
		jlong getTxBytes();
		jlong getTxPackets();
		jint getUid();
	};
} // namespace android::app::usage

