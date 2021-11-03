#pragma once

#include "./SQLiteClosable.hpp"

class JObjectArray;
class JArray;
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
class JString;
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
		static JString findEditTable(JString arg0);
		static android::database::sqlite::SQLiteDatabase openDatabase(java::io::File arg0, android::database::sqlite::SQLiteDatabase_OpenParams arg1);
		static android::database::sqlite::SQLiteDatabase openDatabase(JString arg0, JObject arg1, jint arg2);
		static android::database::sqlite::SQLiteDatabase openDatabase(JString arg0, JObject arg1, jint arg2, JObject arg3);
		static android::database::sqlite::SQLiteDatabase openOrCreateDatabase(java::io::File arg0, JObject arg1);
		static android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, JObject arg1);
		static android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, JObject arg1, JObject arg2);
		static jint releaseMemory();
		void beginTransaction();
		void beginTransactionNonExclusive();
		void beginTransactionWithListener(JObject arg0);
		void beginTransactionWithListenerNonExclusive(JObject arg0);
		android::database::sqlite::SQLiteStatement compileStatement(JString arg0);
		jint _delete(JString arg0, JString arg1, JArray arg2);
		void disableWriteAheadLogging();
		jboolean enableWriteAheadLogging();
		void endTransaction();
		void execSQL(JString arg0);
		void execSQL(JString arg0, JObjectArray arg1);
		JObject getAttachedDbs();
		jlong getMaximumSize();
		jlong getPageSize();
		JString getPath();
		JObject getSyncedTables();
		jint getVersion();
		jboolean inTransaction();
		jlong insert(JString arg0, JString arg1, android::content::ContentValues arg2);
		jlong insertOrThrow(JString arg0, JString arg1, android::content::ContentValues arg2);
		jlong insertWithOnConflict(JString arg0, JString arg1, android::content::ContentValues arg2, jint arg3);
		jboolean isDatabaseIntegrityOk();
		jboolean isDbLockedByCurrentThread();
		jboolean isDbLockedByOtherThreads();
		jboolean isOpen();
		jboolean isReadOnly();
		jboolean isWriteAheadLoggingEnabled();
		void markTableSyncable(JString arg0, JString arg1);
		void markTableSyncable(JString arg0, JString arg1, JString arg2);
		jboolean needUpgrade(jint arg0);
		JObject query(JString arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6);
		JObject query(JString arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		JObject query(jboolean arg0, JString arg1, JArray arg2, JString arg3, JArray arg4, JString arg5, JString arg6, JString arg7, JString arg8);
		JObject query(jboolean arg0, JString arg1, JArray arg2, JString arg3, JArray arg4, JString arg5, JString arg6, JString arg7, JString arg8, android::os::CancellationSignal arg9);
		JObject queryWithFactory(JObject arg0, jboolean arg1, JString arg2, JArray arg3, JString arg4, JArray arg5, JString arg6, JString arg7, JString arg8, JString arg9);
		JObject queryWithFactory(JObject arg0, jboolean arg1, JString arg2, JArray arg3, JString arg4, JArray arg5, JString arg6, JString arg7, JString arg8, JString arg9, android::os::CancellationSignal arg10);
		JObject rawQuery(JString arg0, JArray arg1);
		JObject rawQuery(JString arg0, JArray arg1, android::os::CancellationSignal arg2);
		JObject rawQueryWithFactory(JObject arg0, JString arg1, JArray arg2, JString arg3);
		JObject rawQueryWithFactory(JObject arg0, JString arg1, JArray arg2, JString arg3, android::os::CancellationSignal arg4);
		jlong replace(JString arg0, JString arg1, android::content::ContentValues arg2);
		jlong replaceOrThrow(JString arg0, JString arg1, android::content::ContentValues arg2);
		void setForeignKeyConstraintsEnabled(jboolean arg0);
		void setLocale(java::util::Locale arg0);
		void setLockingEnabled(jboolean arg0);
		void setMaxSqlCacheSize(jint arg0);
		jlong setMaximumSize(jlong arg0);
		void setPageSize(jlong arg0);
		void setTransactionSuccessful();
		void setVersion(jint arg0);
		JString toString();
		jint update(JString arg0, android::content::ContentValues arg1, JString arg2, JArray arg3);
		jint updateWithOnConflict(JString arg0, android::content::ContentValues arg1, JString arg2, JArray arg3, jint arg4);
		void validateSql(JString arg0, android::os::CancellationSignal arg1);
		jboolean yieldIfContended();
		jboolean yieldIfContendedSafely();
		jboolean yieldIfContendedSafely(jlong arg0);
	};
} // namespace android::database::sqlite

