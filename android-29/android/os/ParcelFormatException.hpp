#pragma once

#ifndef ANDROID_OS_PARCELFORMATEXCEPTION
#define ANDROID_OS_PARCELFORMATEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::os
{
	class ParcelFormatException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void ParcelFormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFormatException",
			"()V");
	}
	void ParcelFormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFormatException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class ParcelFormatException : public __jni_impl::android::os::ParcelFormatException
	{
	public:
		ParcelFormatException(QAndroidJniObject obj) { __thiz = obj; }
		ParcelFormatException()
		{
			__constructor();
		}
		ParcelFormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_PARCELFORMATEXCEPTION

