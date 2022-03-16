#include "./AcousticEchoCanceler.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// Constructors
	
	// Methods
	android::media::audiofx::AcousticEchoCanceler AcousticEchoCanceler::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.AcousticEchoCanceler",
			"create",
			"(I)Landroid/media/audiofx/AcousticEchoCanceler;",
			arg0
		);
	}
	jboolean AcousticEchoCanceler::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.AcousticEchoCanceler",
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::media::audiofx

