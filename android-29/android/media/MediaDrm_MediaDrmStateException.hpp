#pragma once

#ifndef ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION
#define ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace __jni_impl::android::media
{
	class MediaDrm_MediaDrmStateException : public __jni_impl::java::lang::IllegalStateException
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
	void MediaDrm_MediaDrmStateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$MediaDrmStateException",
			"(V)V");
	}
	
	// Methods
	jstring MediaDrm_MediaDrmStateException::getDiagnosticInfo()
	{
		return __thiz.callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_MediaDrmStateException : public __jni_impl::android::media::MediaDrm_MediaDrmStateException
	{
	public:
		MediaDrm_MediaDrmStateException(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_MediaDrmStateException()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRM_MEDIADRMSTATEEXCEPTION

