#pragma once

#ifndef ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION
#define ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaCasException.hpp"


namespace __jni_impl::android::media
{
	class MediaCasException_ResourceBusyException : public __jni_impl::android::media::MediaCasException
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
	void MediaCasException_ResourceBusyException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCasException$ResourceBusyException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCasException_ResourceBusyException : public __jni_impl::android::media::MediaCasException_ResourceBusyException
	{
	public:
		MediaCasException_ResourceBusyException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCasException_ResourceBusyException()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACASEXCEPTION_RESOURCEBUSYEXCEPTION

