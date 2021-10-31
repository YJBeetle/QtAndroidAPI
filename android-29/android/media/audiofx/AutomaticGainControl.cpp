#include "./AutomaticGainControl.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	AutomaticGainControl::AutomaticGainControl(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	
	// Methods
	android::media::audiofx::AutomaticGainControl AutomaticGainControl::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.AutomaticGainControl",
			"create",
			"(I)Landroid/media/audiofx/AutomaticGainControl;",
			arg0
		);
	}
	jboolean AutomaticGainControl::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.AutomaticGainControl",
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::media::audiofx

