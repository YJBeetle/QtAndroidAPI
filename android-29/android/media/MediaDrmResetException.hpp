#pragma once

#ifndef ANDROID_MEDIA_MEDIADRMRESETEXCEPTION
#define ANDROID_MEDIA_MEDIADRMRESETEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace __jni_impl::android::media
{
	class MediaDrmResetException : public __jni_impl::java::lang::IllegalStateException
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
	void MediaDrmResetException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrmResetException : public __jni_impl::android::media::MediaDrmResetException
	{
	public:
		MediaDrmResetException(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrmResetException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRMRESETEXCEPTION

