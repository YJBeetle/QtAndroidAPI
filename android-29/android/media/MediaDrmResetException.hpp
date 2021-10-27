#pragma once

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
		void __constructor(const QString &arg0);
		
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
			arg0
		);
	}
	void MediaDrmResetException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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

