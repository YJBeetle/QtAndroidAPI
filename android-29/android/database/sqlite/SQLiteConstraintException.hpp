#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITECONSTRAINTEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITECONSTRAINTEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteConstraintException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteConstraintException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteConstraintException",
			"()V");
	}
	void SQLiteConstraintException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteConstraintException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteConstraintException : public __jni_impl::android::database::sqlite::SQLiteConstraintException
	{
	public:
		SQLiteConstraintException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteConstraintException()
		{
			__constructor();
		}
		SQLiteConstraintException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITECONSTRAINTEXCEPTION

