#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SQLiteClosable.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams;
}
namespace android::database::sqlite
{
	class SQLiteStatement;
}
namespace android::os
{
	class CancellationSignal;
}
namespace java::io
{
	class File;
}
namespace java::util
{
	class Locale;
}

namespace android::database::sqlite
{
	class SQLiteDatabase : public android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		static jint CONFLICT_ABORT();
		static jint CONFLICT_FAIL();
		static jint CONFLICT_IGNORE();
		static jint CONFLICT_NONE();
		static jint CONFLICT_REPLACE();
		static jint CONFLICT_ROLLBACK();
		static jint CREATE_IF_NECESSARY();
		static jint ENABLE_WRITE_AHEAD_LOGGING();
		static jint MAX_SQL_CACHE_SIZE();
		static jint NO_LOCALIZED_COLLATORS();
		static jint OPEN_READONLY();
		static jint OPEN_READWRITE();
		static jint SQLITE_MAX_LIKE_PATTERN_LENGTH();
		
		SQLiteDatabase(QAndroidJniObject obj);
		// Constructors
		SQLiteDatabase() = default;
		
		// Methods
		static QAndroidJniObject create(__JniBaseClass arg0);
		static QAndroidJniObject createInMemory(android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		static jboolean deleteDatabase(java::io::File arg0);
		static jstring findEditTable(jstring arg0);
		static jstring findEditTable(const QString &arg0);
		static QAndroidJniObject openDatabase(java::io::File arg0, android::database::sqlite::SQLiteDatabase_OpenParams arg1);
		static QAndroidJniObject openDatabase(jstring arg0, __JniBaseClass arg1, jint arg2);
		static QAndroidJniObject openDatabase(const QString &arg0, __JniBaseClass arg1, jint arg2);
		static QAndroidJniObject openDatabase(jstring arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		static QAndroidJniObject openDatabase(const QString &arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		static QAndroidJniObject openOrCreateDatabase(java::io::File arg0, __JniBaseClass arg1);
		static QAndroidJniObject openOrCreateDatabase(jstring arg0, __JniBaseClass arg1);
		static QAndroidJniObject openOrCreateDatabase(const QString &arg0, __JniBaseClass arg1);
		static QAndroidJniObject openOrCreateDatabase(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject openOrCreateDatabase(const QString &arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static jint releaseMemory();
		void beginTransaction();
		void beginTransactionNonExclusive();
		void beginTransactionWithListener(__JniBaseClass arg0);
		void beginTransactionWithListenerNonExclusive(__JniBaseClass arg0);
		QAndroidJniObject compileStatement(jstring arg0);
		QAndroidJniObject compileStatement(const QString &arg0);
		jint _delete(jstring arg0, jstring arg1, jarray arg2);
		jint _delete(const QString &arg0, const QString &arg1, jarray arg2);
		void disableWriteAheadLogging();
		jboolean enableWriteAheadLogging();
		void endTransaction();
		void execSQL(jstring arg0);
		void execSQL(const QString &arg0);
		void execSQL(jstring arg0, jobjectArray arg1);
		void execSQL(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject getAttachedDbs();
		jlong getMaximumSize();
		jlong getPageSize();
		jstring getPath();
		QAndroidJniObject getSyncedTables();
		jint getVersion();
		jboolean inTransaction();
		jlong insert(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong insert(const QString &arg0, const QString &arg1, android::content::ContentValues arg2);
		jlong insertOrThrow(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong insertOrThrow(const QString &arg0, const QString &arg1, android::content::ContentValues arg2);
		jlong insertWithOnConflict(jstring arg0, jstring arg1, android::content::ContentValues arg2, jint arg3);
		jlong insertWithOnConflict(const QString &arg0, const QString &arg1, android::content::ContentValues arg2, jint arg3);
		jboolean isDatabaseIntegrityOk();
		jboolean isDbLockedByCurrentThread();
		jboolean isDbLockedByOtherThreads();
		jboolean isOpen();
		jboolean isReadOnly();
		jboolean isWriteAheadLoggingEnabled();
		void markTableSyncable(jstring arg0, jstring arg1);
		void markTableSyncable(const QString &arg0, const QString &arg1);
		void markTableSyncable(jstring arg0, jstring arg1, jstring arg2);
		void markTableSyncable(const QString &arg0, const QString &arg1, const QString &arg2);
		jboolean needUpgrade(jint arg0);
		QAndroidJniObject query(jstring arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6);
		QAndroidJniObject query(const QString &arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6);
		QAndroidJniObject query(jstring arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		QAndroidJniObject query(const QString &arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		QAndroidJniObject query(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5, jstring arg6, jstring arg7, jstring arg8);
		QAndroidJniObject query(jboolean arg0, const QString &arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5, const QString &arg6, const QString &arg7, const QString &arg8);
		QAndroidJniObject query(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5, jstring arg6, jstring arg7, jstring arg8, android::os::CancellationSignal arg9);
		QAndroidJniObject query(jboolean arg0, const QString &arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5, const QString &arg6, const QString &arg7, const QString &arg8, android::os::CancellationSignal arg9);
		QAndroidJniObject queryWithFactory(__JniBaseClass arg0, jboolean arg1, jstring arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6, jstring arg7, jstring arg8, jstring arg9);
		QAndroidJniObject queryWithFactory(__JniBaseClass arg0, jboolean arg1, const QString &arg2, jarray arg3, const QString &arg4, jarray arg5, const QString &arg6, const QString &arg7, const QString &arg8, const QString &arg9);
		QAndroidJniObject queryWithFactory(__JniBaseClass arg0, jboolean arg1, jstring arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6, jstring arg7, jstring arg8, jstring arg9, android::os::CancellationSignal arg10);
		QAndroidJniObject queryWithFactory(__JniBaseClass arg0, jboolean arg1, const QString &arg2, jarray arg3, const QString &arg4, jarray arg5, const QString &arg6, const QString &arg7, const QString &arg8, const QString &arg9, android::os::CancellationSignal arg10);
		QAndroidJniObject rawQuery(jstring arg0, jarray arg1);
		QAndroidJniObject rawQuery(const QString &arg0, jarray arg1);
		QAndroidJniObject rawQuery(jstring arg0, jarray arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject rawQuery(const QString &arg0, jarray arg1, android::os::CancellationSignal arg2);
		QAndroidJniObject rawQueryWithFactory(__JniBaseClass arg0, jstring arg1, jarray arg2, jstring arg3);
		QAndroidJniObject rawQueryWithFactory(__JniBaseClass arg0, const QString &arg1, jarray arg2, const QString &arg3);
		QAndroidJniObject rawQueryWithFactory(__JniBaseClass arg0, jstring arg1, jarray arg2, jstring arg3, android::os::CancellationSignal arg4);
		QAndroidJniObject rawQueryWithFactory(__JniBaseClass arg0, const QString &arg1, jarray arg2, const QString &arg3, android::os::CancellationSignal arg4);
		jlong replace(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong replace(const QString &arg0, const QString &arg1, android::content::ContentValues arg2);
		jlong replaceOrThrow(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong replaceOrThrow(const QString &arg0, const QString &arg1, android::content::ContentValues arg2);
		void setForeignKeyConstraintsEnabled(jboolean arg0);
		void setLocale(java::util::Locale arg0);
		void setLockingEnabled(jboolean arg0);
		void setMaxSqlCacheSize(jint arg0);
		jlong setMaximumSize(jlong arg0);
		void setPageSize(jlong arg0);
		void setTransactionSuccessful();
		void setVersion(jint arg0);
		jstring toString();
		jint update(jstring arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(const QString &arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3);
		jint updateWithOnConflict(jstring arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3, jint arg4);
		jint updateWithOnConflict(const QString &arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3, jint arg4);
		void validateSql(jstring arg0, android::os::CancellationSignal arg1);
		void validateSql(const QString &arg0, android::os::CancellationSignal arg1);
		jboolean yieldIfContended();
		jboolean yieldIfContendedSafely();
		jboolean yieldIfContendedSafely(jlong arg0);
	};
} // namespace android::database::sqlite

