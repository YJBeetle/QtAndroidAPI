#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEDATABASECORRUPTEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEDATABASECORRUPTEXCEPTION

#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabaseCorruptException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteDatabaseCorruptException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"()V");
	}
	void SQLiteDatabaseCorruptException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseCorruptException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDatabaseCorruptException : public __jni_impl::android::database::sqlite::SQLiteDatabaseCorruptException
	{
	public:
		SQLiteDatabaseCorruptException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDatabaseCorruptException()
		{
			__constructor();
		}
		SQLiteDatabaseCorruptException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEDATABASECORRUPTEXCEPTION

