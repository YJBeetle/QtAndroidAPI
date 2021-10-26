#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION
#define ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "SQLiteException.hpp"


namespace __jni_impl::android::database::sqlite
{
	class SQLiteTableLockedException : public __jni_impl::android::database::sqlite::SQLiteException
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
	void SQLiteTableLockedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"()V"
		);
	}
	void SQLiteTableLockedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteTableLockedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteTableLockedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteTableLockedException : public __jni_impl::android::database::sqlite::SQLiteTableLockedException
	{
	public:
		SQLiteTableLockedException(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteTableLockedException()
		{
			__constructor();
		}
		SQLiteTableLockedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITETABLELOCKEDEXCEPTION

