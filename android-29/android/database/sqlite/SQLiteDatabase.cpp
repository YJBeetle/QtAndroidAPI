#include "../../content/ContentValues.hpp"
#include "./SQLiteDatabase_OpenParams.hpp"
#include "./SQLiteStatement.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/util/Locale.hpp"
#include "./SQLiteDatabase.hpp"

namespace android::database::sqlite
{
	// Fields
	jint SQLiteDatabase::CONFLICT_ABORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_ABORT"
		);
	}
	jint SQLiteDatabase::CONFLICT_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_FAIL"
		);
	}
	jint SQLiteDatabase::CONFLICT_IGNORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_IGNORE"
		);
	}
	jint SQLiteDatabase::CONFLICT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_NONE"
		);
	}
	jint SQLiteDatabase::CONFLICT_REPLACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_REPLACE"
		);
	}
	jint SQLiteDatabase::CONFLICT_ROLLBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CONFLICT_ROLLBACK"
		);
	}
	jint SQLiteDatabase::CREATE_IF_NECESSARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"CREATE_IF_NECESSARY"
		);
	}
	jint SQLiteDatabase::ENABLE_WRITE_AHEAD_LOGGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"ENABLE_WRITE_AHEAD_LOGGING"
		);
	}
	jint SQLiteDatabase::MAX_SQL_CACHE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"MAX_SQL_CACHE_SIZE"
		);
	}
	jint SQLiteDatabase::NO_LOCALIZED_COLLATORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"NO_LOCALIZED_COLLATORS"
		);
	}
	jint SQLiteDatabase::OPEN_READONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"OPEN_READONLY"
		);
	}
	jint SQLiteDatabase::OPEN_READWRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"OPEN_READWRITE"
		);
	}
	jint SQLiteDatabase::SQLITE_MAX_LIKE_PATTERN_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"SQLITE_MAX_LIKE_PATTERN_LENGTH"
		);
	}
	
	SQLiteDatabase::SQLiteDatabase(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SQLiteDatabase::create(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"create",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::createInMemory(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"createInMemory",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.__jniObject().object()
		);
	}
	jboolean SQLiteDatabase::deleteDatabase(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.database.sqlite.SQLiteDatabase",
			"deleteDatabase",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring SQLiteDatabase::findEditTable(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"findEditTable",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject SQLiteDatabase::openDatabase(java::io::File arg0, android::database::sqlite::SQLiteDatabase_OpenParams arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$OpenParams;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::openDatabase(jstring arg0, __JniBaseClass arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject SQLiteDatabase::openDatabase(jstring arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ILandroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::openOrCreateDatabase(java::io::File arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/io/File;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::openOrCreateDatabase(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::openOrCreateDatabase(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.sqlite.SQLiteDatabase",
			"openOrCreateDatabase",
			"(Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint SQLiteDatabase::releaseMemory()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.database.sqlite.SQLiteDatabase",
			"releaseMemory",
			"()I"
		);
	}
	void SQLiteDatabase::beginTransaction()
	{
		__thiz.callMethod<void>(
			"beginTransaction",
			"()V"
		);
	}
	void SQLiteDatabase::beginTransactionNonExclusive()
	{
		__thiz.callMethod<void>(
			"beginTransactionNonExclusive",
			"()V"
		);
	}
	void SQLiteDatabase::beginTransactionWithListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"beginTransactionWithListener",
			"(Landroid/database/sqlite/SQLiteTransactionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteDatabase::beginTransactionWithListenerNonExclusive(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"beginTransactionWithListenerNonExclusive",
			"(Landroid/database/sqlite/SQLiteTransactionListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::compileStatement(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"compileStatement",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteStatement;",
			arg0
		);
	}
	jint SQLiteDatabase::_delete(jstring arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void SQLiteDatabase::disableWriteAheadLogging()
	{
		__thiz.callMethod<void>(
			"disableWriteAheadLogging",
			"()V"
		);
	}
	jboolean SQLiteDatabase::enableWriteAheadLogging()
	{
		return __thiz.callMethod<jboolean>(
			"enableWriteAheadLogging",
			"()Z"
		);
	}
	void SQLiteDatabase::endTransaction()
	{
		__thiz.callMethod<void>(
			"endTransaction",
			"()V"
		);
	}
	void SQLiteDatabase::execSQL(jstring arg0)
	{
		__thiz.callMethod<void>(
			"execSQL",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteDatabase::execSQL(jstring arg0, jobjectArray arg1)
	{
		__thiz.callMethod<void>(
			"execSQL",
			"(Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SQLiteDatabase::getAttachedDbs()
	{
		return __thiz.callObjectMethod(
			"getAttachedDbs",
			"()Ljava/util/List;"
		);
	}
	jlong SQLiteDatabase::getMaximumSize()
	{
		return __thiz.callMethod<jlong>(
			"getMaximumSize",
			"()J"
		);
	}
	jlong SQLiteDatabase::getPageSize()
	{
		return __thiz.callMethod<jlong>(
			"getPageSize",
			"()J"
		);
	}
	jstring SQLiteDatabase::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SQLiteDatabase::getSyncedTables()
	{
		return __thiz.callObjectMethod(
			"getSyncedTables",
			"()Ljava/util/Map;"
		);
	}
	jint SQLiteDatabase::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean SQLiteDatabase::inTransaction()
	{
		return __thiz.callMethod<jboolean>(
			"inTransaction",
			"()Z"
		);
	}
	jlong SQLiteDatabase::insert(jstring arg0, jstring arg1, android::content::ContentValues arg2)
	{
		return __thiz.callMethod<jlong>(
			"insert",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong SQLiteDatabase::insertOrThrow(jstring arg0, jstring arg1, android::content::ContentValues arg2)
	{
		return __thiz.callMethod<jlong>(
			"insertOrThrow",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong SQLiteDatabase::insertWithOnConflict(jstring arg0, jstring arg1, android::content::ContentValues arg2, jint arg3)
	{
		return __thiz.callMethod<jlong>(
			"insertWithOnConflict",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;I)J",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean SQLiteDatabase::isDatabaseIntegrityOk()
	{
		return __thiz.callMethod<jboolean>(
			"isDatabaseIntegrityOk",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isDbLockedByCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isDbLockedByCurrentThread",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isDbLockedByOtherThreads()
	{
		return __thiz.callMethod<jboolean>(
			"isDbLockedByOtherThreads",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::isWriteAheadLoggingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteAheadLoggingEnabled",
			"()Z"
		);
	}
	void SQLiteDatabase::markTableSyncable(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"markTableSyncable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void SQLiteDatabase::markTableSyncable(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"markTableSyncable",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean SQLiteDatabase::needUpgrade(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"needUpgrade",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase::query(jstring arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	QAndroidJniObject SQLiteDatabase::query(jstring arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	QAndroidJniObject SQLiteDatabase::query(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5, jstring arg6, jstring arg7, jstring arg8)
	{
		return __thiz.callObjectMethod(
			"query",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		);
	}
	QAndroidJniObject SQLiteDatabase::query(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5, jstring arg6, jstring arg7, jstring arg8, android::os::CancellationSignal arg9)
	{
		return __thiz.callObjectMethod(
			"query",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::queryWithFactory(__JniBaseClass arg0, jboolean arg1, jstring arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6, jstring arg7, jstring arg8, jstring arg9)
	{
		return __thiz.callObjectMethod(
			"queryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	QAndroidJniObject SQLiteDatabase::queryWithFactory(__JniBaseClass arg0, jboolean arg1, jstring arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6, jstring arg7, jstring arg8, jstring arg9, android::os::CancellationSignal arg10)
	{
		return __thiz.callObjectMethod(
			"queryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::rawQuery(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"rawQuery",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SQLiteDatabase::rawQuery(jstring arg0, jarray arg1, android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"rawQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase::rawQueryWithFactory(__JniBaseClass arg0, jstring arg1, jarray arg2, jstring arg3)
	{
		return __thiz.callObjectMethod(
			"rawQueryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SQLiteDatabase::rawQueryWithFactory(__JniBaseClass arg0, jstring arg1, jarray arg2, jstring arg3, android::os::CancellationSignal arg4)
	{
		return __thiz.callObjectMethod(
			"rawQueryWithFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jlong SQLiteDatabase::replace(jstring arg0, jstring arg1, android::content::ContentValues arg2)
	{
		return __thiz.callMethod<jlong>(
			"replace",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong SQLiteDatabase::replaceOrThrow(jstring arg0, jstring arg1, android::content::ContentValues arg2)
	{
		return __thiz.callMethod<jlong>(
			"replaceOrThrow",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void SQLiteDatabase::setForeignKeyConstraintsEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setForeignKeyConstraintsEnabled",
			"(Z)V",
			arg0
		);
	}
	void SQLiteDatabase::setLocale(java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void SQLiteDatabase::setLockingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLockingEnabled",
			"(Z)V",
			arg0
		);
	}
	void SQLiteDatabase::setMaxSqlCacheSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxSqlCacheSize",
			"(I)V",
			arg0
		);
	}
	jlong SQLiteDatabase::setMaximumSize(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"setMaximumSize",
			"(J)J",
			arg0
		);
	}
	void SQLiteDatabase::setPageSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setPageSize",
			"(J)V",
			arg0
		);
	}
	void SQLiteDatabase::setTransactionSuccessful()
	{
		__thiz.callMethod<void>(
			"setTransactionSuccessful",
			"()V"
		);
	}
	void SQLiteDatabase::setVersion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	jstring SQLiteDatabase::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SQLiteDatabase::update(jstring arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint SQLiteDatabase::updateWithOnConflict(jstring arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3, jint arg4)
	{
		return __thiz.callMethod<jint>(
			"updateWithOnConflict",
			"(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;I)I",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void SQLiteDatabase::validateSql(jstring arg0, android::os::CancellationSignal arg1)
	{
		__thiz.callMethod<void>(
			"validateSql",
			"(Ljava/lang/String;Landroid/os/CancellationSignal;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean SQLiteDatabase::yieldIfContended()
	{
		return __thiz.callMethod<jboolean>(
			"yieldIfContended",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::yieldIfContendedSafely()
	{
		return __thiz.callMethod<jboolean>(
			"yieldIfContendedSafely",
			"()Z"
		);
	}
	jboolean SQLiteDatabase::yieldIfContendedSafely(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"yieldIfContendedSafely",
			"(J)Z",
			arg0
		);
	}
} // namespace android::database::sqlite

