#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace android::database
{
	class DatabaseUtils : public JObject
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
		template<typename ...Ts> explicit DatabaseUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatabaseUtils(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DatabaseUtils();
		
		// Methods
		static void appendEscapedSQLString(java::lang::StringBuilder arg0, JString arg1);
		static JArray appendSelectionArgs(JArray arg0, JArray arg1);
		static void appendValueToSql(java::lang::StringBuilder arg0, JObject arg1);
		static void bindObjectToProgram(android::database::sqlite::SQLiteProgram arg0, jint arg1, JObject arg2);
		static android::os::ParcelFileDescriptor blobFileDescriptorForQuery(android::database::sqlite::SQLiteStatement arg0, JArray arg1);
		static android::os::ParcelFileDescriptor blobFileDescriptorForQuery(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2);
		static JString concatenateWhere(JString arg0, JString arg1);
		static void createDbFromSqlStatements(android::content::Context arg0, JString arg1, jint arg2, JString arg3);
		static void cursorDoubleToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3);
		static void cursorDoubleToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2);
		static void cursorDoubleToCursorValues(JObject arg0, JString arg1, android::content::ContentValues arg2);
		static void cursorFloatToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2);
		static void cursorIntToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2);
		static void cursorIntToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3);
		static void cursorIntToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2);
		static void cursorLongToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2);
		static void cursorLongToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3);
		static void cursorLongToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2);
		static void cursorRowToContentValues(JObject arg0, android::content::ContentValues arg1);
		static void cursorShortToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2);
		static void cursorStringToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2);
		static void cursorStringToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3);
		static void cursorStringToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2);
		static void cursorStringToInsertHelper(JObject arg0, JString arg1, android::database::DatabaseUtils_InsertHelper arg2, jint arg3);
		static void dumpCurrentRow(JObject arg0);
		static void dumpCurrentRow(JObject arg0, java::io::PrintStream arg1);
		static void dumpCurrentRow(JObject arg0, java::lang::StringBuilder arg1);
		static JString dumpCurrentRowToString(JObject arg0);
		static void dumpCursor(JObject arg0);
		static void dumpCursor(JObject arg0, java::io::PrintStream arg1);
		static void dumpCursor(JObject arg0, java::lang::StringBuilder arg1);
		static JString dumpCursorToString(JObject arg0);
		static JString getCollationKey(JString arg0);
		static JString getHexCollationKey(JString arg0);
		static jint getSqlStatementType(JString arg0);
		static jlong longForQuery(android::database::sqlite::SQLiteStatement arg0, JArray arg1);
		static jlong longForQuery(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2);
		static jlong queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, JString arg1);
		static jlong queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JString arg2);
		static jlong queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JString arg2, JArray arg3);
		static void readExceptionFromParcel(android::os::Parcel arg0);
		static void readExceptionWithFileNotFoundExceptionFromParcel(android::os::Parcel arg0);
		static void readExceptionWithOperationApplicationExceptionFromParcel(android::os::Parcel arg0);
		static JString sqlEscapeString(JString arg0);
		static JString stringForQuery(android::database::sqlite::SQLiteStatement arg0, JArray arg1);
		static JString stringForQuery(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2);
		static void writeExceptionToParcel(android::os::Parcel arg0, java::lang::Exception arg1);
	};
} // namespace android::database

