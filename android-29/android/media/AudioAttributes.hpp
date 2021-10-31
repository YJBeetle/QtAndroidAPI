#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class AudioAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALLOW_CAPTURE_BY_ALL();
		static jint ALLOW_CAPTURE_BY_NONE();
		static jint ALLOW_CAPTURE_BY_SYSTEM();
		static jint CONTENT_TYPE_MOVIE();
		static jint CONTENT_TYPE_MUSIC();
		static jint CONTENT_TYPE_SONIFICATION();
		static jint CONTENT_TYPE_SPEECH();
		static jint CONTENT_TYPE_UNKNOWN();
		static __JniBaseClass CREATOR();
		static jint FLAG_AUDIBILITY_ENFORCED();
		static jint FLAG_HW_AV_SYNC();
		static jint FLAG_LOW_LATENCY();
		static jint USAGE_ALARM();
		static jint USAGE_ASSISTANCE_ACCESSIBILITY();
		static jint USAGE_ASSISTANCE_NAVIGATION_GUIDANCE();
		static jint USAGE_ASSISTANCE_SONIFICATION();
		static jint USAGE_ASSISTANT();
		static jint USAGE_GAME();
		static jint USAGE_MEDIA();
		static jint USAGE_NOTIFICATION();
		static jint USAGE_NOTIFICATION_COMMUNICATION_DELAYED();
		static jint USAGE_NOTIFICATION_COMMUNICATION_INSTANT();
		static jint USAGE_NOTIFICATION_COMMUNICATION_REQUEST();
		static jint USAGE_NOTIFICATION_EVENT();
		static jint USAGE_NOTIFICATION_RINGTONE();
		static jint USAGE_UNKNOWN();
		static jint USAGE_VOICE_COMMUNICATION();
		static jint USAGE_VOICE_COMMUNICATION_SIGNALLING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioAttributes(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioAttributes(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean areHapticChannelsMuted();
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAllowedCapturePolicy();
		jint getContentType();
		jint getFlags();
		jint getUsage();
		jint getVolumeControlStream();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

