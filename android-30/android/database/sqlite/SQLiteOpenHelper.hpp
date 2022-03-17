#pragma once

#include "../../content/Context.def.hpp"
#include "./SQLiteDatabase.def.hpp"
#include "./SQLiteDatabase_OpenParams.def.hpp"
#include "../../../JString.hpp"
#include "./SQLiteOpenHelper.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, JString arg1, JObject arg2, jint arg3)
		: JObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		) {}
	inline SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, JString arg1, jint arg2, android::database::sqlite::SQLiteDatabase_OpenParams arg3)
		: JObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		) {}
	inline SQLiteOpenHelper::SQLiteOpenHelper(android::content::Context arg0, JString arg1, JObject arg2, jint arg3, JObject arg4)
		: JObject(
			"android.database.sqlite.SQLiteOpenHelper",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4.object()
		) {}
	
	// Methods
	inline void SQLiteOpenHelper::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JString SQLiteOpenHelper::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteOpenHelper::getReadableDatabase() const
	{
		return callObjectMethod(
			"getReadableDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteOpenHelper::getWritableDatabase() const
	{
		return callObjectMethod(
			"getWritableDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	inline void SQLiteOpenHelper::onConfigure(android::database::sqlite::SQLiteDatabase arg0) const
	{
		callMethod<void>(
			"onConfigure",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
	inline void SQLiteOpenHelper::onCreate(android::database::sqlite::SQLiteDatabase arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
	inline void SQLiteOpenHelper::onDowngrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onDowngrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void SQLiteOpenHelper::onOpen(android::database::sqlite::SQLiteDatabase arg0) const
	{
		callMethod<void>(
			"onOpen",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
	inline void SQLiteOpenHelper::onUpgrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onUpgrade",
			"(Landroid/database/sqlite/SQLiteDatabase;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void SQLiteOpenHelper::setIdleConnectionTimeout(jlong arg0) const
	{
		callMethod<void>(
			"setIdleConnectionTimeout",
			"(J)V",
			arg0
		);
	}
	inline void SQLiteOpenHelper::setLookasideConfig(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLookasideConfig",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SQLiteOpenHelper::setOpenParams(android::database::sqlite::SQLiteDatabase_OpenParams arg0) const
	{
		callMethod<void>(
			"setOpenParams",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.object()
		);
	}
	inline void SQLiteOpenHelper::setWriteAheadLoggingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setWriteAheadLoggingEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::database::sqlite

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
