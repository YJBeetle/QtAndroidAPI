#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::os
{
	class FileUriExposedException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void FileUriExposedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileUriExposedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FileUriExposedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.FileUriExposedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class FileUriExposedException : public __jni_impl::android::os::FileUriExposedException
	{
	public:
		FileUriExposedException(QAndroidJniObject obj) { __thiz = obj; }
		FileUriExposedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

