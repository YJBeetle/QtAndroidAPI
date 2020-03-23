#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class MediaStore_Audio : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject keyFor(jstring arg0);
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void MediaStore_Audio::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio::keyFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio : public __jni_impl::android::provider::MediaStore_Audio
	{
	public:
		MediaStore_Audio(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO

