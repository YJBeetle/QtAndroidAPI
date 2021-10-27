#pragma once

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
		void __constructor(const QString &arg0);
		
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
			arg0
		);
	}
	void MediaDrmException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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

