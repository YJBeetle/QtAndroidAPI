#pragma once

#ifndef ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER
#define ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase_OpenParams;
}

namespace __jni_impl::android::database::sqlite
{
	class SQLiteOpenHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg3);
		void __constructor(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg3);
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void __constructor(__jni_impl::android::content::Context arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		
		// Methods
		void close();
		jstring getDatabaseName();
		QAndroidJniObject getReadableDatabase();
		QAndroidJniObject getWritableDatabase();
		void onConfigure(__jni_impl::android::database::sqlite::SQLiteDatabase arg0);
		void onCreate(__jni_impl::android::database::sqlite::SQLiteDatabase arg0);
		void onDowngrade(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2);
		void onOpen(__jni_impl::android::database::sqlite::SQLiteDatabase arg0);
		void onUpgrade(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2);
		void setIdleConnectionTimeout(jlong arg0);
		void setLookasideConfig(jint arg0, jint arg1);
		void setOpenParams(__jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		void setWriteAheadLoggingEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::database::sqlite

#include "../../content/Context.hpp"
#include "SQLiteDatabase.hpp"
#include "SQLiteDatabase_OpenParams.hpp"

namespace __jni_impl::android::database::sqlite
{
	// Fields
	
	// Constructors
	void SQLiteOpenHelper::__constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void SQLiteOpenHelper::__constructor(__jni_impl::android::content::Context arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void SQLiteOpenHelper::__constructor(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::__constructor(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::__constructor(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::__constructor(__jni_impl::android::content::Context arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	void SQLiteOpenHelper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring SQLiteOpenHelper::getDatabaseName()
	{
		return __thiz.callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SQLiteOpenHelper::getReadableDatabase()
	{
		return __thiz.callObjectMethod(
			"getReadableDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	QAndroidJniObject SQLiteOpenHelper::getWritableDatabase()
	{
		return __thiz.callObjectMethod(
			"getWritableDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	void SQLiteOpenHelper::onConfigure(__jni_impl::android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onConfigure",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::onCreate(__jni_impl::android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::onDowngrade(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onDowngrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SQLiteOpenHelper::onOpen(__jni_impl::android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onOpen",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::onUpgrade(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onUpgrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SQLiteOpenHelper::setIdleConnectionTimeout(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setIdleConnectionTimeout",
			"(J)V",
			arg0
		);
	}
	void SQLiteOpenHelper::setLookasideConfig(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLookasideConfig",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SQLiteOpenHelper::setOpenParams(__jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		__thiz.callMethod<void>(
			"setOpenParams",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::setWriteAheadLoggingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWriteAheadLoggingEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::database::sqlite

namespace android::database::sqlite
{
	class SQLiteOpenHelper : public __jni_impl::android::database::sqlite::SQLiteOpenHelper
	{
	public:
		SQLiteOpenHelper(QAndroidJniObject obj) { __thiz = obj; }
		SQLiteOpenHelper(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLiteOpenHelper(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, __jni_impl::android::database::sqlite::SQLiteDatabase_OpenParams arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SQLiteOpenHelper(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::database::sqlite

#endif // ANDROID_DATABASE_SQLITE_SQLITEOPENHELPER

