#pragma once

#ifndef ANDROID_DATABASE_SQLEXCEPTION
#define ANDROID_DATABASE_SQLEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::database
{
	class SQLException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void SQLException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"()V"
		);
	}
	void SQLException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SQLException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SQLException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database

namespace android::database
{
	class SQLException : public __jni_impl::android::database::SQLException
	{
	public:
		SQLException(QAndroidJniObject obj) { __thiz = obj; }
		SQLException()
		{
			__constructor();
		}
		SQLException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_SQLEXCEPTION

