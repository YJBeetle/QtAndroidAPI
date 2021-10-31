#include "./AcousticEchoCanceler.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	AcousticEchoCanceler::AcousticEchoCanceler(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	
	// Methods
	android::media::audiofx::AcousticEchoCanceler AcousticEchoCanceler::create(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.audiofx.AcousticEchoCanceler",
			"create",
			"(I)Landroid/media/audiofx/AcousticEchoCanceler;",
			arg0
		);
	}
	jboolean AcousticEchoCanceler::isAvailable()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.audiofx.AcousticEchoCanceler",
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::media::audiofx

