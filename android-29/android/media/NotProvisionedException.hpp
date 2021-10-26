#pragma once

#ifndef ANDROID_MEDIA_NOTPROVISIONEDEXCEPTION
#define ANDROID_MEDIA_NOTPROVISIONEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaDrmException.hpp"


namespace __jni_impl::android::media
{
	class NotProvisionedException : public __jni_impl::android::media::MediaDrmException
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
	void NotProvisionedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotProvisionedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class NotProvisionedException : public __jni_impl::android::media::NotProvisionedException
	{
	public:
		NotProvisionedException(QAndroidJniObject obj) { __thiz = obj; }
		NotProvisionedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_NOTPROVISIONEDEXCEPTION

