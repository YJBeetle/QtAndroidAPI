#pragma once

#ifndef ANDROID_MEDIA_DENIEDBYSERVEREXCEPTION
#define ANDROID_MEDIA_DENIEDBYSERVEREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaDrmException.hpp"


namespace __jni_impl::android::media
{
	class DeniedByServerException : public __jni_impl::android::media::MediaDrmException
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
	void DeniedByServerException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DeniedByServerException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class DeniedByServerException : public __jni_impl::android::media::DeniedByServerException
	{
	public:
		DeniedByServerException(QAndroidJniObject obj) { __thiz = obj; }
		DeniedByServerException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_DENIEDBYSERVEREXCEPTION

