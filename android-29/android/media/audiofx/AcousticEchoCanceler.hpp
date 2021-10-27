#pragma once

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"


namespace __jni_impl::android::media::audiofx
{
	class AcousticEchoCanceler : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void AcousticEchoCanceler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.AcousticEchoCanceler",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AcousticEchoCanceler::create(jint arg0)
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
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class AcousticEchoCanceler : public __jni_impl::android::media::audiofx::AcousticEchoCanceler
	{
	public:
		AcousticEchoCanceler(QAndroidJniObject obj) { __thiz = obj; }
		AcousticEchoCanceler()
		{
			__constructor();
		}
	};
} // namespace android::media::audiofx

