#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::database
{
	class DatabaseUtils_InsertHelper;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::database::sqlite
{
	class SQLiteProgram;
}
namespace android::database::sqlite
{
	class SQLiteStatement;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class PrintStream;
}
namespace java::lang
{
	class Exception;
}
namespace java::lang
{
	class StringBuilder;
}

namespace android::database
{
	class DatabaseUtils : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATEMENT_ABORT();
		static jint STATEMENT_ATTACH();
		static jint STATEMENT_BEGIN();
		static jint STATEMENT_COMMIT();
		static jint STATEMENT_DDL();
		static jint STATEMENT_OTHER();
		static jint STATEMENT_PRAGMA();
		static jint STATEMENT_SELECT();
		static jint STATEMENT_UNPREPARED();
		static jint STATEMENT_UPDATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DatabaseUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DatabaseUtils(QJniObject obj);
		
		// Constructors
		DatabaseUtils();
		
		// Methods
		static void appendEscapedSQLString(java::lang::StringBuilder arg0, jstring arg1);
		static jarray appendSelectionArgs(jarray arg0, jarray arg1);
		static void appendValueToSql(java::lang::StringBuilder arg0, jobject arg1);
		static void bindObjectToProgram(android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2);
		static android::os::ParcelFileDescriptor blobFileDescriptorForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static android::os::ParcelFileDescriptor blobFileDescriptorForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static jstring concatenateWhere(jstring arg0, jstring arg1);
		static void createDbFromSqlStatements(android::content::Context arg0, jstring arg1, jint arg2, jstring arg3);
		static void cursorDoubleToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3);
		static void cursorDoubleToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2);
		static void cursorDoubleToCursorValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2);
		static void cursorFloatToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2);
		static void cursorIntToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2);
		static void cursorIntToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3);
		static void cursorIntToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2);
		static void cursorLongToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2);
		static void cursorLongToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3);
		static void cursorLongToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2);
		static void cursorRowToContentValues(__JniBaseClass arg0, android::content::ContentValues arg1);
		static void cursorShortToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2);
		static void cursorStringToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2);
		static void cursorStringToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3);
		static void cursorStringToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2);
		static void cursorStringToInsertHelper(__JniBaseClass arg0, jstring arg1, android::database::DatabaseUtils_InsertHelper arg2, jint arg3);
		static void dumpCurrentRow(__JniBaseClass arg0);
		static void dumpCurrentRow(__JniBaseClass arg0, java::io::PrintStream arg1);
		static void dumpCurrentRow(__JniBaseClass arg0, java::lang::StringBuilder arg1);
		static jstring dumpCurrentRowToString(__JniBaseClass arg0);
		static void dumpCursor(__JniBaseClass arg0);
		static void dumpCursor(__JniBaseClass arg0, java::io::PrintStream arg1);
		static void dumpCursor(__JniBaseClass arg0, java::lang::StringBuilder arg1);
		static jstring dumpCursorToString(__JniBaseClass arg0);
		static jstring getCollationKey(jstring arg0);
		static jstring getHexCollationKey(jstring arg0);
		static jint getSqlStatementType(jstring arg0);
		static jlong longForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static jlong longForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static jlong queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1);
		static jlong queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2);
		static jlong queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3);
		static void readExceptionFromParcel(android::os::Parcel arg0);
		static void readExceptionWithFileNotFoundExceptionFromParcel(android::os::Parcel arg0);
		static void readExceptionWithOperationApplicationExceptionFromParcel(android::os::Parcel arg0);
		static jstring sqlEscapeString(jstring arg0);
		static jstring stringForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static jstring stringForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static void writeExceptionToParcel(android::os::Parcel arg0, java::lang::Exception arg1);
	};
} // namespace android::database

