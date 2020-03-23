#pragma once

#ifndef ANDROID_MEDIA_MEDIACASEXCEPTION
#define ANDROID_MEDIA_MEDIACASEXCEPTION

#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::media
{
	class MediaCasException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCasException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCasException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCasException : public __jni_impl::android::media::MediaCasException
	{
	public:
		MediaCasException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCasException()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACASEXCEPTION

