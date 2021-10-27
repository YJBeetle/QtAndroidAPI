#include "./NoiseSuppressor.hpp"

namespace android::media::audiofx
{
	// Fields
	
	NoiseSuppressor::NoiseSuppressor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NoiseSuppressor::create(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.audiofx.NoiseSuppressor",
			"create",
			"(I)Landroid/media/audiofx/NoiseSuppressor;",
			arg0
		);
	}
	jboolean NoiseSuppressor::isAvailable()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.audiofx.NoiseSuppressor",
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::media::audiofx

