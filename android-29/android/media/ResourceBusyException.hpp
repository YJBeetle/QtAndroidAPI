#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace __jni_impl::android::media
{
	class ResourceBusyException : public __jni_impl::android::media::MediaDrmException
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
	void ResourceBusyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ResourceBusyException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class ResourceBusyException : public __jni_impl::android::media::ResourceBusyException
	{
	public:
		ResourceBusyException(QAndroidJniObject obj) { __thiz = obj; }
		ResourceBusyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

