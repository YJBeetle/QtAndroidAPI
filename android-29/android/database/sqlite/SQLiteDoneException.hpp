#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEDONEEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEDONEEXCEPTION

#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteDoneException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteDoneException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDoneException",
			"()V");
	}
	void SQLiteDoneException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDoneException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDoneException : public __jni_impl::android::database::sqlite::SQLiteDoneException
	{
	public:
		SQLiteDoneException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDoneException()
		{
			__constructor();
		}
		SQLiteDoneException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEDONEEXCEPTION

