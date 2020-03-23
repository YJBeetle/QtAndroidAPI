#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITECANTOPENDATABASEEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITECANTOPENDATABASEEXCEPTION

#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteCantOpenDatabaseException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteCantOpenDatabaseException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"()V");
	}
	void SQLiteCantOpenDatabaseException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCantOpenDatabaseException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteCantOpenDatabaseException : public __jni_impl::android::database::sqlite::SQLiteCantOpenDatabaseException
	{
	public:
		SQLiteCantOpenDatabaseException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteCantOpenDatabaseException()
		{
			__constructor();
		}
		SQLiteCantOpenDatabaseException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITECANTOPENDATABASEEXCEPTION

