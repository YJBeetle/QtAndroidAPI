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
		static QAndroidJniObject CREATOR();
		
		AudioRecordingConfiguration(QAndroidJniObject obj);
		// Constructors
		AudioRecordingConfiguration() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAudioDevice();
		jint getAudioSource();
		jint getClientAudioSessionId();
		jint getClientAudioSource();
		QAndroidJniObject getClientEffects();
		QAndroidJniObject getClientFormat();
		QAndroidJniObject getEffects();
		QAndroidJniObject getFormat();
		jint hashCode();
		jboolean isClientSilenced();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

