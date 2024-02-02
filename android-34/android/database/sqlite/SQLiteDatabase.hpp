#pragma once

#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../content/ContentValues.def.hpp"
#include "./SQLiteDatabase_OpenParams.def.hpp"
#include "./SQLiteStatement.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../java/io/File.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./SQLiteDatabase.def.hpp"

namespace android::database::sqlite
{
	// Fields
	inline jint SQLiteDatabase::CONFLICT_ABORT()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_ABORT"
		);
	}
	inline jint SQLiteDatabase::CONFLICT_FAIL()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_FAIL"
		);
	}
	inline jint SQLiteDatabase::CONFLICT_IGNORE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_IGNORE"
		);
	}
	inline jint SQLiteDatabase::CONFLICT_NONE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_NONE"
		);
	}
	inline jint SQLiteDatabase::CONFLICT_REPLACE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_REPLACE"
		);
	}
	inline jint SQLiteDatabase::CONFLICT_ROLLBACK()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_ROLLBACK"
		);
	}
	inline jint SQLiteDatabase::CREATE_IF_NECESSARY()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CREATE_IF_NECESSARY"
		);
	}
	inline jint SQLiteDatabase::ENABLE_WRITE_AHEAD_LOGGING()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"ENABLE_WRITE_AHEAD_LOGGING"
		);
	}
	inline JString SQLiteDatabase::JOURNAL_MODE_DELETE()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"JOURNAL_MODE_DELETE",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::JOURNAL_MODE_MEMORY()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"JOURNAL_MODE_MEMORY",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::JOURNAL_MODE_OFF()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"JOURNAL_MODE_OFF",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::JOURNAL_MODE_PERSIST()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"JOURNAL_MODE_PERSIST",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::JOURNAL_MODE_TRUNCATE()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"JOURNAL_MODE_TRUNCATE",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::JOURNAL_MODE_WAL()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"JOURNAL_MODE_WAL",
			"Ljava/lang/String;"
		);
	}
	inline jint SQLiteDatabase::MAX_SQL_CACHE_SIZE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"MAX_SQL_CACHE_SIZE"
		);
	}
	inline jint SQLiteDatabase::NO_LOCALIZED_COLLATORS()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"NO_LOCALIZED_COLLATORS"
		);
	}
	inline jint SQLiteDatabase::OPEN_READONLY()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"OPEN_READONLY"
		);
	}
	inline jint SQLiteDatabase::OPEN_READWRITE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"OPEN_READWRITE"
		);
	}
	inline jint SQLiteDatabase::SQLITE_MAX_LIKE_PATTERN_LENGTH()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"SQLITE_MAX_LIKE_PATTERN_LENGTH"
		);
	}
	inline JString SQLiteDatabase::SYNC_MODE_EXTRA()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"SYNC_MODE_EXTRA",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::SYNC_MODE_FULL()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"SYNC_MODE_FULL",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::SYNC_MODE_NORMAL()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"SYNC_MODE_NORMAL",
			"Ljava/lang/String;"
		);
	}
	inline JString SQLiteDatabase::SYNC_MODE_OFF()
	{
		return getStaticObjectField(
			"android.database.sqlite.SQLiteDatabase",
			"SYNC_MODE_OFF",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::create(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"create",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::createInMemory(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"createInMemory",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object()
		);
	}
	inline jboolean SQLiteDatabase::deleteDatabase(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.database.sqlite.SQLiteDatabase",
			"deleteDatabase",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline JString SQLiteDatabase::findEditTable(JString arg0)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"findEditTable",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::openDatabase(java::io::File arg0, android::database::sqlite::SQLiteDatabase_OpenParams arg1)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$OpenParams;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::openDatabase(JString arg0, JObject arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::openDatabase(JString arg0, JObject arg1, jint arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::openOrCreateDatabase(java::io::File arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::openOrCreateDatabase(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteDatabase::openOrCreateDatabase(JString arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint SQLiteDatabase::releaseMemory()
	{
		return callStaticMethod<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"releaseMemory",
			"()I"
		);
	}
	inline void SQLiteDatabase::beginTransaction() const
	{
		callMethod<void>(
			"beginTransaction",
			"()V"
		);
	}
	inline void SQLiteDatabase::beginTransactionNonExclusive() const
	{
		callMethod<void>(
			"beginTransactionNonExclusive",
			"()V"
		);
	}
	inline void SQLiteDatabase::beginTransactionWithListener(JObject arg0) const
	{
		callMethod<void>(
			"beginTransactionWithListener",
			"(Landroid/database/sqlite/SQLiteTransactionListener;)V",
			arg0.object()
		);
	}
	inline void SQLiteDatabase::beginTransactionWithListenerNonExclusive(JObject arg0) const
	{
		callMethod<void>(
			"beginTransactionWithListenerNonExclusive",
			"(Landroid/database/sqlite/SQLiteTransactionListener;)V",
			arg0.object()
		);
	}
	inline android::database::sqlite::SQLiteStatement SQLiteDatabase::compileStatement(JString arg0) const
	{
		return callObjectMethod(
			"compileStatement",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;",
			arg0.object<jstring>()
		);
	}
	inline jint SQLiteDatabase::delete_(JString arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline void SQLiteDatabase::disableWriteAheadLogging() const
	{
		callMethod<void>(
			"disableWriteAheadLogging",
			"()V"
		);
	}
	inline jboolean SQLiteDatabase::enableWriteAheadLogging() const
	{
		return callMethod<jboolean>(
			"enableWriteAheadLogging",
			"()Z"
		);
	}
	inline void SQLiteDatabase::endTransaction() const
	{
		callMethod<void>(
			"endTransaction",
			"()V"
		);
	}
	inline void SQLiteDatabase::execPerConnectionSQL(JString arg0, JObjectArray arg1) const
	{
		callMethod<void>(
			"execPerConnectionSQL",
			"(Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline void SQLiteDatabase::execSQL(JString arg0) const
	{
		callMethod<void>(
			"execSQL",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SQLiteDatabase::execSQL(JString arg0, JObjectArray arg1) const
	{
		callMethod<void>(
			"execSQL",
			"(Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline JObject SQLiteDatabase::getAttachedDbs() const
	{
		return callObjectMethod(
			"getAttachedDbs",
			"()Ljava/util/List;"
		);
	}
	inline jlong SQLiteDatabase::getMaximumSize() const
	{
		return callMethod<jlong>(
			"getMaximumSize",
			"()J"
		);
	}
	inline jlong SQLiteDatabase::getPageSize() const
	{
		return callMethod<jlong>(
			"getPageSize",
			"()J"
		);
	}
	inline JString SQLiteDatabase::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SQLiteDatabase::getSyncedTables() const
	{
		return callObjectMethod(
			"getSyncedTables",
			"()Ljava/util/Map;"
		);
	}
	inline jint SQLiteDatabase::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline jboolean SQLiteDatabase::inTransaction() const
	{
		return callMethod<jboolean>(
			"inTransaction",
			"()Z"
		);
	}
	inline jlong SQLiteDatabase::insert(JString arg0, JString arg1, android::content::ContentValues arg2) const
	{
		return callMethod<jlong>(
			"insert",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jlong SQLiteDatabase::insertOrThrow(JString arg0, JString arg1, android::content::ContentValues arg2) const
	{
		return callMethod<jlong>(
			"insertOrThrow",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jlong SQLiteDatabase::insertWithOnConflict(JString arg0, JString arg1, android::content::ContentValues arg2, jint arg3) const
	{
		return callMethod<jlong>(
			"insertWithOnConflict",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;I)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline jboolean SQLiteDatabase::isDatabaseIntegrityOk() const
	{
		return callMethod<jboolean>(
			"isDatabaseIntegrityOk",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::isDbLockedByCurrentThread() const
	{
		return callMethod<jboolean>(
			"isDbLockedByCurrentThread",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::isDbLockedByOtherThreads() const
	{
		return callMethod<jboolean>(
			"isDbLockedByOtherThreads",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::isWriteAheadLoggingEnabled() const
	{
		return callMethod<jboolean>(
			"isWriteAheadLoggingEnabled",
			"()Z"
		);
	}
	inline void SQLiteDatabase::markTableSyncable(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"markTableSyncable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void SQLiteDatabase::markTableSyncable(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"markTableSyncable",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jboolean SQLiteDatabase::needUpgrade(jint arg0) const
	{
		return callMethod<jboolean>(
			"needUpgrade",
			"(I)Z",
			arg0
		);
	}
	inline JObject SQLiteDatabase::query(JString arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>()
		);
	}
	inline JObject SQLiteDatabase::query(JString arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7) const
	{
		return callObjectMethod(
			"query",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>()
		);
	}
	inline JObject SQLiteDatabase::query(jboolean arg0, JString arg1, JArray arg2, JString arg3, JArray arg4, JString arg5, JString arg6, JString arg7, JString arg8) const
	{
		return callObjectMethod(
			"query",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jarray>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>(),
			arg8.object<jstring>()
		);
	}
	inline JObject SQLiteDatabase::query(jboolean arg0, JString arg1, JArray arg2, JString arg3, JArray arg4, JString arg5, JString arg6, JString arg7, JString arg8, android::os::CancellationSignal arg9) const
	{
		return callObjectMethod(
			"query",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jarray>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>(),
			arg8.object<jstring>(),
			arg9.object()
		);
	}
	inline JObject SQLiteDatabase::queryWithFactory(JObject arg0, jboolean arg1, JString arg2, JArray arg3, JString arg4, JArray arg5, JString arg6, JString arg7, JString arg8, JString arg9) const
	{
		return callObjectMethod(
			"queryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jarray>(),
			arg6.object<jstring>(),
			arg7.object<jstring>(),
			arg8.object<jstring>(),
			arg9.object<jstring>()
		);
	}
	inline JObject SQLiteDatabase::queryWithFactory(JObject arg0, jboolean arg1, JString arg2, JArray arg3, JString arg4, JArray arg5, JString arg6, JString arg7, JString arg8, JString arg9, android::os::CancellationSignal arg10) const
	{
		return callObjectMethod(
			"queryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jarray>(),
			arg6.object<jstring>(),
			arg7.object<jstring>(),
			arg8.object<jstring>(),
			arg9.object<jstring>(),
			arg10.object()
		);
	}
	inline JObject SQLiteDatabase::rawQuery(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"rawQuery",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline JObject SQLiteDatabase::rawQuery(JString arg0, JArray arg1, android::os::CancellationSignal arg2) const
	{
		return callObjectMethod(
			"rawQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	inline JObject SQLiteDatabase::rawQueryWithFactory(JObject arg0, JString arg1, JArray arg2, JString arg3) const
	{
		return callObjectMethod(
			"rawQueryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object<jstring>()
		);
	}
	inline JObject SQLiteDatabase::rawQueryWithFactory(JObject arg0, JString arg1, JArray arg2, JString arg3, android::os::CancellationSignal arg4) const
	{
		return callObjectMethod(
			"rawQueryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object()
		);
	}
	inline jlong SQLiteDatabase::replace(JString arg0, JString arg1, android::content::ContentValues arg2) const
	{
		return callMethod<jlong>(
			"replace",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jlong SQLiteDatabase::replaceOrThrow(JString arg0, JString arg1, android::content::ContentValues arg2) const
	{
		return callMethod<jlong>(
			"replaceOrThrow",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void SQLiteDatabase::setCustomAggregateFunction(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setCustomAggregateFunction",
			"(Ljava/lang/String;Ljava/util/function/BinaryOperator;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SQLiteDatabase::setCustomScalarFunction(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setCustomScalarFunction",
			"(Ljava/lang/String;Ljava/util/function/UnaryOperator;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void SQLiteDatabase::setForeignKeyConstraintsEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setForeignKeyConstraintsEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void SQLiteDatabase::setLocale(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	inline void SQLiteDatabase::setLockingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setLockingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void SQLiteDatabase::setMaxSqlCacheSize(jint arg0) const
	{
		callMethod<void>(
			"setMaxSqlCacheSize",
			"(I)V",
			arg0
		);
	}
	inline jlong SQLiteDatabase::setMaximumSize(jlong arg0) const
	{
		return callMethod<jlong>(
			"setMaximumSize",
			"(J)J",
			arg0
		);
	}
	inline void SQLiteDatabase::setPageSize(jlong arg0) const
	{
		callMethod<void>(
			"setPageSize",
			"(J)V",
			arg0
		);
	}
	inline void SQLiteDatabase::setTransactionSuccessful() const
	{
		callMethod<void>(
			"setTransactionSuccessful",
			"()V"
		);
	}
	inline void SQLiteDatabase::setVersion(jint arg0) const
	{
		callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	inline JString SQLiteDatabase::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jint SQLiteDatabase::update(JString arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
	{
		return callMethod<jint>(
			"update",
			"(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
	inline jint SQLiteDatabase::updateWithOnConflict(JString arg0, android::content::ContentValues arg1, JString arg2, JArray arg3, jint arg4) const
	{
		return callMethod<jint>(
			"updateWithOnConflict",
			"(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4
		);
	}
	inline void SQLiteDatabase::validateSql(JString arg0, android::os::CancellationSignal arg1) const
	{
		callMethod<void>(
			"validateSql",
			"(Ljava/lang/String;Landroid/os/CancellationSignal;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean SQLiteDatabase::yieldIfContended() const
	{
		return callMethod<jboolean>(
			"yieldIfContended",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::yieldIfContendedSafely() const
	{
		return callMethod<jboolean>(
			"yieldIfContendedSafely",
			"()Z"
		);
	}
	inline jboolean SQLiteDatabase::yieldIfContendedSafely(jlong arg0) const
	{
		return callMethod<jboolean>(
			"yieldIfContendedSafely",
			"(J)Z",
			arg0
		);
	}
} // namespace android::database::sqlite

// Base class headers
#include "./SQLiteClosable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
