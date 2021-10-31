#include "../../content/Context.hpp"
#include "./SQLiteDatabase.hpp"
#include "./SQLiteDatabase_OpenParams.hpp"
#include "./SQLiteOpenHelper.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteOpenHelper::SQLiteOpenHelper(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, jstring arg1, __JniBaseClass arg2, jint arg3)
		: __JniBaseClass(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, jstring arg1, jint arg2, android::database::sqlite::SQLiteDatabase_OpenParams arg3)
		: __JniBaseClass(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, jstring arg1, __JniBaseClass arg2, jint arg3, __JniBaseClass arg4)
		: __JniBaseClass(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		) {}
	
	// Methods
	void SQLiteOpenHelper::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring SQLiteOpenHelper::getDatabaseName()
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::database::sqlite::SQLiteDatabase SQLiteOpenHelper::getReadableDatabase()
	{
		return callObjectMethod(
			"getReadableDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteOpenHelper::getWritableDatabase()
	{
		return callObjectMethod(
			"getWritableDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	void SQLiteOpenHelper::onConfigure(android::database::sqlite::SQLiteDatabase arg0)
	{
		callMethod<void>(
			"onConfigure",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
	void SQLiteOpenHelper::onCreate(android::database::sqlite::SQLiteDatabase arg0)
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
	void SQLiteOpenHelper::onDowngrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onDowngrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void SQLiteOpenHelper::onOpen(android::database::sqlite::SQLiteDatabase arg0)
	{
		callMethod<void>(
			"onOpen",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
	void SQLiteOpenHelper::onUpgrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onUpgrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void SQLiteOpenHelper::setIdleConnectionTimeout(jlong arg0)
	{
		callMethod<void>(
			"setIdleConnectionTimeout",
			"(J)V",
			arg0
		);
	}
	void SQLiteOpenHelper::setLookasideConfig(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLookasideConfig",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SQLiteOpenHelper::setOpenParams(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		callMethod<void>(
			"setOpenParams",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.object()
		);
	}
	void SQLiteOpenHelper::setWriteAheadLoggingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setWriteAheadLoggingEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::database::sqlite

