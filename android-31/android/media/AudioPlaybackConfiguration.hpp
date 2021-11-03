#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class AudioPlaybackConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPlaybackConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackConfiguration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::media::AudioAttributes getAudioAttributes();
		android::media::AudioDeviceInfo getAudioDeviceInfo();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

