#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../content/ContentValues.hpp"
#include "./SQLiteDatabase_OpenParams.hpp"
#include "./SQLiteStatement.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../java/io/File.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SQLiteDatabase.hpp"

namespace android::database::sqlite
{
	// Fields
	jint SQLiteDatabase::CONFLICT_ABORT()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_ABORT"
		);
	}
	jint SQLiteDatabase::CONFLICT_FAIL()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_FAIL"
		);
	}
	jint SQLiteDatabase::CONFLICT_IGNORE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_IGNORE"
		);
	}
	jint SQLiteDatabase::CONFLICT_NONE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_NONE"
		);
	}
	jint SQLiteDatabase::CONFLICT_REPLACE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_REPLACE"
		);
	}
	jint SQLiteDatabase::CONFLICT_ROLLBACK()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_ROLLBACK"
		);
	}
	jint SQLiteDatabase::CREATE_IF_NECESSARY()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CREATE_IF_NECESSARY"
		);
	}
	jint SQLiteDatabase::ENABLE_WRITE_AHEAD_LOGGING()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"ENABLE_WRITE_AHEAD_LOGGING"
		);
	}
	jint SQLiteDatabase::MAX_SQL_CACHE_SIZE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"MAX_SQL_CACHE_SIZE"
		);
	}
	jint SQLiteDatabase::NO_LOCALIZED_COLLATORS()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"NO_LOCALIZED_COLLATORS"
		);
	}
	jint SQLiteDatabase::OPEN_READONLY()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"OPEN_READONLY"
		);
	}
	jint SQLiteDatabase::OPEN_READWRITE()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"OPEN_READWRITE"
		);
	}
	jint SQLiteDatabase::SQLITE_MAX_LIKE_PATTERN_LENGTH()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"SQLITE_MAX_LIKE_PATTERN_LENGTH"
		);
	}
	
	// QJniObject forward
	SQLiteDatabase::SQLiteDatabase(QJniObject obj) : android::database::sqlite::SQLiteClosable(obj) {}
	
	// Constructors
	
	// Methods
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::create(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"create",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object()
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::createInMemory(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"createInMemory",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object()
		);
	}
	jboolean SQLiteDatabase::deleteDatabase(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.database.sqlite.SQLiteDatabase",
			"deleteDatabase",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	JString SQLiteDatabase::findEditTable(JString arg0)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"findEditTable",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::openDatabase(java::io::File arg0, android::database::sqlite::SQLiteDatabase_OpenParams arg1)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$OpenParams;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object(),
			arg1.object()
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::openDatabase(JString arg0, JObject arg1, jint arg2)
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
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::openDatabase(JString arg0, JObject arg1, jint arg2, JObject arg3)
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
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::openOrCreateDatabase(java::io::File arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object(),
			arg1.object()
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::openOrCreateDatabase(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteDatabase::openOrCreateDatabase(JString arg0, JObject arg1, JObject arg2)
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
	jint SQLiteDatabase::releaseMemory()
	{
		return callStaticMethod<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"releaseMemory",
			"()I"
		);
	}
	void SQLiteDatabase::beginTransaction()
	{
		callMethod<void>(
			"beginTransaction",
			"()V"
		);
	}
	void SQLiteDatabase::beginTransactionNonExclusive()
	{
		callMethod<void>(
			"beginTransactionNonExclusive",
			"()V"
		);
	}
	void SQLiteDatabase::beginTransactionWithListener(JObject arg0)
	{
		callMethod<void>(
			"beginTransactionWithListener",
			"(Landroid/database/sqlite/SQLiteTransactionListener;)V",
			arg0.object()
		);
	}
	void SQLiteDatabase::beginTransactionWithListenerNonExclusive(JObject arg0)
	{
		callMethod<void>(
			"beginTransactionWithListenerNonExclusive",
			"(Landroid/database/sqlite/SQLiteTransactionListener;)V",
			arg0.object()
		);
	}
	android::database::sqlite::SQLiteStatement SQLiteDatabase::compileStatement(JString arg0)
	{
		return callObjectMethod(
			"compileStatement",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;",
			arg0.object<jstring>()
		);
	}
	jint SQLiteDatabase::_delete(JString arg0, JString arg1, JArray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	void SQLiteDatabase::disableWriteAheadLogging()
	{
		callMethod<void>(
			"disableWriteAheadLogging",
			"()V"
		);
	}
	jboolean SQLiteDatabase::enableWriteAheadLogging()
	{
		return callMethod<jboolean>(
			"enableWriteAheadLogging",
			"()Z"
		);
	}
	void SQLiteDatabase::endTransaction()
	{
		callMethod<void>(
			"endTransaction",
			"()V"
		);
	}
	void SQLiteDatabase::execPerConnectionSQL(JString arg0, JObjectArray arg1)
	{
		callMethod<void>(
			"execPerConnectionSQL",
			"(Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	void SQLiteDatabase::execSQL(JString arg0)
	{
		callMethod<void>(
			"execSQL",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SQLiteDatabase::execSQL(JString arg0, JObjectArray arg1)
	{
		callMethod<void>(
			"execSQL",
			"(Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	JObject SQLiteDatabase::getAttachedDbs()
	{
		return callObjectMethod(
			"getAttachedDbs",
			"()Ljava/util/List;"
		);
	}
	jlong SQLiteDatabase::getMaximumSize()
	{
		return callMethod<jlong>(
			"getMaximumSize",
			"()J"
		);
	}
	jlong SQLiteDatabase::getPageSize()
	{
		return callMethod<jlong>(
			"getPageSize",
			"()J"
		);
	}
	JString SQLiteDatabase::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	JObject SQLiteDatabase::getSyncedTables()
	{
		return callObjectMethod(
			"getSyncedTables",
			"()Ljava/util/Map;"
		);
	}
	jint SQLiteDatabase::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean SQLiteDatabase::inTransaction()
	{
		return callMethod<jboolean>(
			"inTransaction",
			"()Z"
		);
	}
	jlong SQLiteDatabase::insert(JString arg0, JString arg1, android::content::ContentValues arg2)
	{
		return callMethod<jlong>(
			"insert",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	jlong SQLiteDatabase::insertOrThrow(JString arg0, JString arg1, android::content::ContentValues arg2)
	{
		return callMethod<jlong>(
			"insertOrThrow",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	jlong SQLiteDatabase::insertWithOnConflict(JString arg0, JString arg1, android::content::ContentValues arg2, jint arg3)
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
	jboolean SQLiteDatabase::isDatabaseIntegrityOk()
	{
		return callMethod<jboolean>(
			"isDatabaseIntegrityOk",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isDbLockedByCurrentThread()
	{
		return callMethod<jboolean>(
			"isDbLockedByCurrentThread",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isDbLockedByOtherThreads()
	{
		return callMethod<jboolean>(
			"isDbLockedByOtherThreads",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isWriteAheadLoggingEnabled()
	{
		return callMethod<jboolean>(
			"isWriteAheadLoggingEnabled",
			"()Z"
		);
	}
	void SQLiteDatabase::markTableSyncable(JString arg0, JString arg1)
	{
		callMethod<void>(
			"markTableSyncable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void SQLiteDatabase::markTableSyncable(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"markTableSyncable",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	jboolean SQLiteDatabase::needUpgrade(jint arg0)
	{
		return callMethod<jboolean>(
			"needUpgrade",
			"(I)Z",
			arg0
		);
	}
	JObject SQLiteDatabase::query(JString arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6)
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
	JObject SQLiteDatabase::query(JString arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7)
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
	JObject SQLiteDatabase::query(jboolean arg0, JString arg1, JArray arg2, JString arg3, JArray arg4, JString arg5, JString arg6, JString arg7, JString arg8)
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
	JObject SQLiteDatabase::query(jboolean arg0, JString arg1, JArray arg2, JString arg3, JArray arg4, JString arg5, JString arg6, JString arg7, JString arg8, android::os::CancellationSignal arg9)
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
	JObject SQLiteDatabase::queryWithFactory(JObject arg0, jboolean arg1, JString arg2, JArray arg3, JString arg4, JArray arg5, JString arg6, JString arg7, JString arg8, JString arg9)
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
	JObject SQLiteDatabase::queryWithFactory(JObject arg0, jboolean arg1, JString arg2, JArray arg3, JString arg4, JArray arg5, JString arg6, JString arg7, JString arg8, JString arg9, android::os::CancellationSignal arg10)
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
	JObject SQLiteDatabase::rawQuery(JString arg0, JArray arg1)
	{
		return callObjectMethod(
			"rawQuery",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	JObject SQLiteDatabase::rawQuery(JString arg0, JArray arg1, android::os::CancellationSignal arg2)
	{
		return callObjectMethod(
			"rawQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	JObject SQLiteDatabase::rawQueryWithFactory(JObject arg0, JString arg1, JArray arg2, JString arg3)
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
	JObject SQLiteDatabase::rawQueryWithFactory(JObject arg0, JString arg1, JArray arg2, JString arg3, android::os::CancellationSignal arg4)
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
	jlong SQLiteDatabase::replace(JString arg0, JString arg1, android::content::ContentValues arg2)
	{
		return callMethod<jlong>(
			"replace",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	jlong SQLiteDatabase::replaceOrThrow(JString arg0, JString arg1, android::content::ContentValues arg2)
	{
		return callMethod<jlong>(
			"replaceOrThrow",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void SQLiteDatabase::setCustomAggregateFunction(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"setCustomAggregateFunction",
			"(Ljava/lang/String;Ljava/util/function/BinaryOperator;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SQLiteDatabase::setCustomScalarFunction(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"setCustomScalarFunction",
			"(Ljava/lang/String;Ljava/util/function/UnaryOperator;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void SQLiteDatabase::setForeignKeyConstraintsEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setForeignKeyConstraintsEnabled",
			"(Z)V",
			arg0
		);
	}
	void SQLiteDatabase::setLocale(java::util::Locale arg0)
	{
		callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void SQLiteDatabase::setLockingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setLockingEnabled",
			"(Z)V",
			arg0
		);
	}
	void SQLiteDatabase::setMaxSqlCacheSize(jint arg0)
	{
		callMethod<void>(
			"setMaxSqlCacheSize",
			"(I)V",
			arg0
		);
	}
	jlong SQLiteDatabase::setMaximumSize(jlong arg0)
	{
		return callMethod<jlong>(
			"setMaximumSize",
			"(J)J",
			arg0
		);
	}
	void SQLiteDatabase::setPageSize(jlong arg0)
	{
		callMethod<void>(
			"setPageSize",
			"(J)V",
			arg0
		);
	}
	void SQLiteDatabase::setTransactionSuccessful()
	{
		callMethod<void>(
			"setTransactionSuccessful",
			"()V"
		);
	}
	void SQLiteDatabase::setVersion(jint arg0)
	{
		callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	JString SQLiteDatabase::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jint SQLiteDatabase::update(JString arg0, android::content::ContentValues arg1, JString arg2, JArray arg3)
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
	jint SQLiteDatabase::updateWithOnConflict(JString arg0, android::content::ContentValues arg1, JString arg2, JArray arg3, jint arg4)
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
	void SQLiteDatabase::validateSql(JString arg0, android::os::CancellationSignal arg1)
	{
		callMethod<void>(
			"validateSql",
			"(Ljava/lang/String;Landroid/os/CancellationSignal;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean SQLiteDatabase::yieldIfContended()
	{
		return callMethod<jboolean>(
			"yieldIfContended",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::yieldIfContendedSafely()
	{
		return callMethod<jboolean>(
			"yieldIfContendedSafely",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::yieldIfContendedSafely(jlong arg0)
	{
		return callMethod<jboolean>(
			"yieldIfContendedSafely",
			"(J)Z",
			arg0
		);
	}
} // namespace android::database::sqlite

