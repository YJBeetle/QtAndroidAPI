#pragma once

#ifndef ANDROID_MEDIA_MEDIACASEXCEPTION_DENIEDBYSERVEREXCEPTION
#define ANDROID_MEDIA_MEDIACASEXCEPTION_DENIEDBYSERVEREXCEPTION

#include "MediaCasException.hpp"


namespace __jni_impl::android::media
{
	class MediaCasException_DeniedByServerException : public __jni_impl::android::media::MediaCasException
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
	void MediaCasException_DeniedByServerException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCasException$DeniedByServerException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCasException_DeniedByServerException : public __jni_impl::android::media::MediaCasException_DeniedByServerException
	{
	public:
		MediaCasException_DeniedByServerException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCasException_DeniedByServerException()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACASEXCEPTION_DENIEDBYSERVEREXCEPTION

