#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Artists_Albums : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void MediaStore_Audio_Artists_Albums::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Artists$Albums",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Artists_Albums::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists$Albums",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Artists_Albums : public __jni_impl::android::provider::MediaStore_Audio_Artists_Albums
	{
	public:
		MediaStore_Audio_Artists_Albums(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Artists_Albums()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS_ALBUMS

