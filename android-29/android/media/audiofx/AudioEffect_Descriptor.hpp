#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_AUDIOEFFECT_DESCRIPTOR
#define ANDROID_MEDIA_AUDIOFX_AUDIOEFFECT_DESCRIPTOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::media::audiofx
{
	class AudioEffect_Descriptor : public __JniBaseClass
	{
	public:
		// Fields
		jstring connectMode();
		jstring implementor();
		jstring name();
		QAndroidJniObject type();
		QAndroidJniObject uuid();
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::media::audiofx

#include "../../../java/util/UUID.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jstring AudioEffect_Descriptor::connectMode()
	{
		return __thiz.getObjectField(
			"connectMode",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect_Descriptor::implementor()
	{
		return __thiz.getObjectField(
			"implementor",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect_Descriptor::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AudioEffect_Descriptor::type()
	{
		return __thiz.getObjectField(
			"type",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect_Descriptor::uuid()
	{
		return __thiz.getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	// Constructors
	void AudioEffect_Descriptor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.AudioEffect$Descriptor",
			"()V");
	}
	void AudioEffect_Descriptor::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.AudioEffect$Descriptor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jboolean AudioEffect_Descriptor::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioEffect_Descriptor::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class AudioEffect_Descriptor : public __jni_impl::android::media::audiofx::AudioEffect_Descriptor
	{
	public:
		AudioEffect_Descriptor(QAndroidJniObject obj) { __thiz = obj; }
		AudioEffect_Descriptor()
		{
			__constructor();
		}
		AudioEffect_Descriptor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_AUDIOEFFECT_DESCRIPTOR

