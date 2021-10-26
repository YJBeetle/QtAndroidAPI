#pragma once

#ifndef ANDROID_MEDIA_MEDIAPLAYER_NODRMSCHEMEEXCEPTION
#define ANDROID_MEDIA_MEDIAPLAYER_NODRMSCHEMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaDrmException.hpp"


namespace __jni_impl::android::media
{
	class MediaPlayer_NoDrmSchemeException : public __jni_impl::android::media::MediaDrmException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaPlayer_NoDrmSchemeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaPlayer_NoDrmSchemeException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaPlayer_NoDrmSchemeException : public __jni_impl::android::media::MediaPlayer_NoDrmSchemeException
	{
	public:
		MediaPlayer_NoDrmSchemeException(QAndroidJniObject obj) { __thiz = obj; }
		MediaPlayer_NoDrmSchemeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAPLAYER_NODRMSCHEMEEXCEPTION

