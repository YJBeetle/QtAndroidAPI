#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteException : public __jni_impl::android::database::SQLException
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
} // namespace __jni_impl::android::database::sqlite


namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"()V"
		);
	}
	void SQLiteException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SQLiteException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SQLiteException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteException : public __jni_impl::android::database::sqlite::SQLiteException
	{
	public:
		SQLiteException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteException()
		{
			__constructor();
		}
		SQLiteException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SQLiteException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::database::sqlite

