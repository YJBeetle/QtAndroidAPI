#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteAbortException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteAbortException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAbortException",
			"()V");
	}
	void SQLiteAbortException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteAbortException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteAbortException : public __jni_impl::android::database::sqlite::SQLiteAbortException
	{
	public:
		SQLiteAbortException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteAbortException()
		{
			__constructor();
		}
		SQLiteAbortException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEABORTEXCEPTION

