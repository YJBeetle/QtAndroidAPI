#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEDATABASELOCKEDEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEDATABASELOCKEDEXCEPTION

#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabaseLockedException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteDatabaseLockedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"()V");
	}
	void SQLiteDatabaseLockedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabaseLockedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteDatabaseLockedException : public __jni_impl::android::database::sqlite::SQLiteDatabaseLockedException
	{
	public:
		SQLiteDatabaseLockedException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteDatabaseLockedException()
		{
			__constructor();
		}
		SQLiteDatabaseLockedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEDATABASELOCKEDEXCEPTION

