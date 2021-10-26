#pragma once

#ifndef ANDROID_MEDIA_MEDIACRYPTOEXCEPTION
#define ANDROID_MEDIA_MEDIACRYPTOEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::media
{
	class MediaCryptoException : public __jni_impl::java::lang::Exception
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
	void MediaCryptoException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaCryptoException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCryptoException : public __jni_impl::android::media::MediaCryptoException
	{
	public:
		MediaCryptoException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCryptoException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACRYPTOEXCEPTION

