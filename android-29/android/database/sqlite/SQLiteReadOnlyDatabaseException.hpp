#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEREADONLYDATABASEEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEREADONLYDATABASEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteReadOnlyDatabaseException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteReadOnlyDatabaseException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"()V"
		);
	}
	void SQLiteReadOnlyDatabaseException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteReadOnlyDatabaseException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteReadOnlyDatabaseException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteReadOnlyDatabaseException : public __jni_impl::android::database::sqlite::SQLiteReadOnlyDatabaseException
	{
	public:
		SQLiteReadOnlyDatabaseException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteReadOnlyDatabaseException()
		{
			__constructor();
		}
		SQLiteReadOnlyDatabaseException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEREADONLYDATABASEEXCEPTION

