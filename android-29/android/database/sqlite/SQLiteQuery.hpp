#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEQUERY
#define ANDROID_DATABASE_SQLITE_SQLITEQUERY

#include "SQLiteProgram.hpp"

namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteQuery : public __jni_impl::android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::database::sqlite

#include "SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteQuery::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteQuery",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SQLiteQuery::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteQuery : public __jni_impl::android::database::sqlite::SQLiteQuery
	{
	public:
		SQLiteQuery(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteQuery()
		{
			__constructor();
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEQUERY
