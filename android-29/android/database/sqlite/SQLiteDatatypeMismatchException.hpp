#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEDATATYPEMISMATCHEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEDATATYPEMISMATCHEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatatypeMismatchException : public __jni_impl::android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::database::sqlite


namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteDatatypeMismatchException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"()V");
	}
	void SQLiteDatatypeMismatchException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatatypeMismatchException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDatatypeMismatchException : public __jni_impl::android::database::sqlite::SQLiteDatatypeMismatchException
	{
	public:
		SQLiteDatatypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDatatypeMismatchException()
		{
			__constructor();
		}
		SQLiteDatatypeMismatchException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEDATATYPEMISMATCHEXCEPTION

