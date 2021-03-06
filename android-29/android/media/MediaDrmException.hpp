#pragma once

#ifndef ANDROID_MEDIA_MEDIADRMEXCEPTION
#define ANDROID_MEDIA_MEDIADRMEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::media
{
	class MediaDrmException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaDrmException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrmException : public __jni_impl::android::media::MediaDrmException
	{
	public:
		MediaDrmException(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrmException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRMEXCEPTION

