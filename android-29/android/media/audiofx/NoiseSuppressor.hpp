#pragma once

#include "../../../__JniBaseClass.hpp"
#include "AudioEffect.hpp"


namespace __jni_impl::android::media::audiofx
{
	class NoiseSuppressor : public __jni_impl::android::media::audiofx::AudioEffect
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
	void NoiseSuppressor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.NoiseSuppressor",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class NoiseSuppressor : public __jni_impl::android::media::audiofx::NoiseSuppressor
	{
	public:
		NoiseSuppressor(QAndroidJniObject obj) { __thiz = obj; }
		NoiseSuppressor()
		{
			__constructor();
		}
	};
} // namespace android::media::audiofx

