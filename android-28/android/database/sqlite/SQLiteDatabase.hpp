#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteDatabase(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteClosable(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabase(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::database::sqlite::SQLiteDatabase create(JObject arg0);
		static android::database::sqlite::SQLiteDatabase createInMemory(android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		static jboolean deleteDatabase(java::io::File arg0);
		static jstring findEditTable(jstring arg0);
		static android::database::sqlite::SQLiteDatabase openDatabase(java::io::File arg0, android::database::sqlite::SQLiteDatabase_OpenParams arg1);
		static android::database::sqlite::SQLiteDatabase openDatabase(jstring arg0, JObject arg1, jint arg2);
		static android::database::sqlite::SQLiteDatabase openDatabase(jstring arg0, JObject arg1, jint arg2, JObject arg3);
		static android::database::sqlite::SQLiteDatabase openOrCreateDatabase(java::io::File arg0, JObject arg1);
		static android::database::sqlite::SQLiteDatabase openOrCreateDatabase(jstring arg0, JObject arg1);
		static android::database::sqlite::SQLiteDatabase openOrCreateDatabase(jstring arg0, JObject arg1, JObject arg2);
		static jint releaseMemory();
		void beginTransaction();
		void beginTransactionNonExclusive();
		void beginTransactionWithListener(JObject arg0);
		void beginTransactionWithListenerNonExclusive(JObject arg0);
		android::database::sqlite::SQLiteStatement compileStatement(jstring arg0);
		jint _delete(jstring arg0, jstring arg1, jarray arg2);
		void disableWriteAheadLogging();
		jboolean enableWriteAheadLogging();
		void endTransaction();
		void execSQL(jstring arg0);
		void execSQL(jstring arg0, jobjectArray arg1);
		JObject getAttachedDbs();
		jlong getMaximumSize();
		jlong getPageSize();
		jstring getPath();
		JObject getSyncedTables();
		jint getVersion();
		jboolean inTransaction();
		jlong insert(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong insertOrThrow(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong insertWithOnConflict(jstring arg0, jstring arg1, android::content::ContentValues arg2, jint arg3);
		jboolean isDatabaseIntegrityOk();
		jboolean isDbLockedByCurrentThread();
		jboolean isDbLockedByOtherThreads();
		jboolean isOpen();
		jboolean isReadOnly();
		jboolean isWriteAheadLoggingEnabled();
		void markTableSyncable(jstring arg0, jstring arg1);
		void markTableSyncable(jstring arg0, jstring arg1, jstring arg2);
		jboolean needUpgrade(jint arg0);
		JObject query(jstring arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6);
		JObject query(jstring arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		JObject query(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5, jstring arg6, jstring arg7, jstring arg8);
		JObject query(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5, jstring arg6, jstring arg7, jstring arg8, android::os::CancellationSignal arg9);
		JObject queryWithFactory(JObject arg0, jboolean arg1, jstring arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6, jstring arg7, jstring arg8, jstring arg9);
		JObject queryWithFactory(JObject arg0, jboolean arg1, jstring arg2, jarray arg3, jstring arg4, jarray arg5, jstring arg6, jstring arg7, jstring arg8, jstring arg9, android::os::CancellationSignal arg10);
		JObject rawQuery(jstring arg0, jarray arg1);
		JObject rawQuery(jstring arg0, jarray arg1, android::os::CancellationSignal arg2);
		JObject rawQueryWithFactory(JObject arg0, jstring arg1, jarray arg2, jstring arg3);
		JObject rawQueryWithFactory(JObject arg0, jstring arg1, jarray arg2, jstring arg3, android::os::CancellationSignal arg4);
		jlong replace(jstring arg0, jstring arg1, android::content::ContentValues arg2);
		jlong replaceOrThrow(jstring arg0, jstring arg1, android::content::ContentValues arg2);
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
		jint updateWithOnConflict(jstring arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3, jint arg4);
		void validateSql(jstring arg0, android::os::CancellationSignal arg1);
		jboolean yieldIfContended();
		jboolean yieldIfContendedSafely();
		jboolean yieldIfContendedSafely(jlong arg0);
	};
} // namespace android::database::sqlite

