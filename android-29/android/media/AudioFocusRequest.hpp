#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::os
{
	class Handler;
}

namespace android::media
{
	class AudioFocusRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioFocusRequest(QAndroidJniObject obj);
		// Constructors
		AudioFocusRequest() = default;
		
		// Methods
		jboolean acceptsDelayedFocusGain();
		QAndroidJniObject getAudioAttributes();
		jint getFocusGain();
		jboolean willPauseWhenDucked();
	};
} // namespace android::media

