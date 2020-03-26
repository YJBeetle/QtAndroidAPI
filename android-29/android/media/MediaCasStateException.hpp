#pragma once

#ifndef ANDROID_MEDIA_MEDIACASSTATEEXCEPTION
#define ANDROID_MEDIA_MEDIACASSTATEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace __jni_impl::android::media
{
	class MediaCasStateException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getDiagnosticInfo();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCasStateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCasStateException",
			"(V)V");
	}
	
	// Methods
	jstring MediaCasStateException::getDiagnosticInfo()
	{
		return __thiz.callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCasStateException : public __jni_impl::android::media::MediaCasStateException
	{
	public:
		MediaCasStateException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCasStateException()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACASSTATEEXCEPTION

