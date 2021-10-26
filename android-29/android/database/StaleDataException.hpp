#pragma once

#ifndef ANDROID_DATABASE_STALEDATAEXCEPTION
#define ANDROID_DATABASE_STALEDATAEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::database
{
	class StaleDataException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void StaleDataException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.StaleDataException",
			"()V"
		);
	}
	void StaleDataException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StaleDataException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database

namespace android::database
{
	class StaleDataException : public __jni_impl::android::database::StaleDataException
	{
	public:
		StaleDataException(QAndroidJniObject obj) { __thiz = obj; }
		StaleDataException()
		{
			__constructor();
		}
		StaleDataException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_STALEDATAEXCEPTION

