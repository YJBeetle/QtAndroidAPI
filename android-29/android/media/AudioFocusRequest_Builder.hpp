#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioFocusRequest;
}
namespace android::os
{
	class Handler;
}

namespace android::media
{
	class AudioFocusRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioFocusRequest_Builder(QAndroidJniObject obj);
		// Constructors
		AudioFocusRequest_Builder(android::media::AudioFocusRequest &arg0);
		AudioFocusRequest_Builder(jint &arg0);
		AudioFocusRequest_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAcceptsDelayedFocusGain(jboolean arg0);
		QAndroidJniObject setAudioAttributes(android::media::AudioAttributes arg0);
		QAndroidJniObject setFocusGain(jint arg0);
		QAndroidJniObject setForceDucking(jboolean arg0);
		QAndroidJniObject setOnAudioFocusChangeListener(__JniBaseClass arg0);
		QAndroidJniObject setOnAudioFocusChangeListener(__JniBaseClass arg0, android::os::Handler arg1);
		QAndroidJniObject setWillPauseWhenDucked(jboolean arg0);
	};
} // namespace android::media

