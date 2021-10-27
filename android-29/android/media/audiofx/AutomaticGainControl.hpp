#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"


namespace __jni_impl::android::media::audiofx
{
	class AutomaticGainControl : public __jni_impl::android::media::audiofx::AudioEffect
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
	void AutomaticGainControl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.AutomaticGainControl",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AutomaticGainControl::create(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.audiofx.AutomaticGainControl",
			"create",
			"(I)Landroid/media/audiofx/AutomaticGainControl;",
			arg0
		);
	}
	jboolean AutomaticGainControl::isAvailable()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.audiofx.AutomaticGainControl",
			"isAvailable",
			"()Z"
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class AutomaticGainControl : public __jni_impl::android::media::audiofx::AutomaticGainControl
	{
	public:
		AutomaticGainControl(QAndroidJniObject obj) { __thiz = obj; }
		AutomaticGainControl()
		{
			__constructor();
		}
	};
} // namespace android::media::audiofx

