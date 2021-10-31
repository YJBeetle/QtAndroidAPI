#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class AudioFormat;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class AudioRecordingConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioRecordingConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecordingConfiguration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::media::AudioDeviceInfo getAudioDevice();
		jint getAudioSource();
		jint getClientAudioSessionId();
		jint getClientAudioSource();
		__JniBaseClass getClientEffects();
		android::media::AudioFormat getClientFormat();
		__JniBaseClass getEffects();
		android::media::AudioFormat getFormat();
		jint hashCode();
		jboolean isClientSilenced();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

