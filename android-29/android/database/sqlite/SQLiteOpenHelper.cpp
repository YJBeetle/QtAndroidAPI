#include "../../content/Context.hpp"
#include "./SQLiteDatabase.hpp"
#include "./SQLiteDatabase_OpenParams.hpp"
#include "./SQLiteOpenHelper.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteOpenHelper::SQLiteOpenHelper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, jstring arg1, __JniBaseClass arg2, jint arg3)
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
	SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, jstring arg1, jint arg2, android::database::sqlite::SQLiteDatabase_OpenParams arg3)
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
	SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, jstring arg1, __JniBaseClass arg2, jint arg3, __JniBaseClass arg4)
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
	void SQLiteOpenHelper::onConfigure(android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onConfigure",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::onCreate(android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::onDowngrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onDowngrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void SQLiteOpenHelper::onOpen(android::database::sqlite::SQLiteDatabase arg0)
	{
		__thiz.callMethod<void>(
			"onOpen",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteOpenHelper::onUpgrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2)
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
	void SQLiteOpenHelper::setOpenParams(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
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
} // namespace android::database::sqlite

