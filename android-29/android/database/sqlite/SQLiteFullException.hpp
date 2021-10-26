#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteFullException : public __jni_impl::android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::database::sqlite


namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteFullException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteFullException",
			"()V"
		);
	}
	void SQLiteFullException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteFullException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteFullException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteFullException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteFullException : public __jni_impl::android::database::sqlite::SQLiteFullException
	{
	public:
		SQLiteFullException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteFullException()
		{
			__constructor();
		}
		SQLiteFullException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEFULLEXCEPTION

