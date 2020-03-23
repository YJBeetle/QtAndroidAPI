#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION

#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteAccessPermException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteAccessPermException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAccessPermException",
			"()V");
	}
	void SQLiteAccessPermException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAccessPermException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteAccessPermException : public __jni_impl::android::database::sqlite::SQLiteAccessPermException
	{
	public:
		SQLiteAccessPermException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteAccessPermException()
		{
			__constructor();
		}
		SQLiteAccessPermException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEACCESSPERMEXCEPTION

