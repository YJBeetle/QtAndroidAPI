#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "./DatabaseUtils_InsertHelper.hpp"
#include "./sqlite/SQLiteDatabase.hpp"
#include "./sqlite/SQLiteProgram.hpp"
#include "./sqlite/SQLiteStatement.hpp"
#include "../os/Parcel.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/PrintStream.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/StringBuilder.hpp"
#include "./DatabaseUtils.hpp"

namespace android::database
{
	// Fields
	jint DatabaseUtils::STATEMENT_ABORT()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ABORT"
		);
	}
	jint DatabaseUtils::STATEMENT_ATTACH()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ATTACH"
		);
	}
	jint DatabaseUtils::STATEMENT_BEGIN()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_BEGIN"
		);
	}
	jint DatabaseUtils::STATEMENT_COMMIT()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_COMMIT"
		);
	}
	jint DatabaseUtils::STATEMENT_DDL()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_DDL"
		);
	}
	jint DatabaseUtils::STATEMENT_OTHER()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_OTHER"
		);
	}
	jint DatabaseUtils::STATEMENT_PRAGMA()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_PRAGMA"
		);
	}
	jint DatabaseUtils::STATEMENT_SELECT()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_SELECT"
		);
	}
	jint DatabaseUtils::STATEMENT_UNPREPARED()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UNPREPARED"
		);
	}
	jint DatabaseUtils::STATEMENT_UPDATE()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UPDATE"
		);
	}
	
	// QJniObject forward
	DatabaseUtils::DatabaseUtils(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DatabaseUtils::DatabaseUtils()
		: JObject(
			"android.database.DatabaseUtils",
			"()V"
		) {}
	
	// Methods
	void DatabaseUtils::appendEscapedSQLString(java::lang::StringBuilder arg0, jstring arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendEscapedSQLString",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jarray DatabaseUtils::appendSelectionArgs(jarray arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"appendSelectionArgs",
			"([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	void DatabaseUtils::appendValueToSql(java::lang::StringBuilder arg0, jobject arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendValueToSql",
			"(Ljava/lang/StringBuilder;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
	void DatabaseUtils::bindObjectToProgram(android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"bindObjectToProgram",
			"(Landroid/database/sqlite/SQLiteProgram;ILjava/lang/Object;)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::os::ParcelFileDescriptor DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::os::ParcelFileDescriptor DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring DatabaseUtils::concatenateWhere(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"concatenateWhere",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	void DatabaseUtils::createDbFromSqlStatements(android::content::Context arg0, jstring arg1, jint arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"createDbFromSqlStatements",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void DatabaseUtils::cursorDoubleToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void DatabaseUtils::cursorDoubleToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DatabaseUtils::cursorDoubleToCursorValues(JObject arg0, jstring arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToCursorValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void DatabaseUtils::cursorFloatToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorFloatToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DatabaseUtils::cursorIntToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void DatabaseUtils::cursorIntToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void DatabaseUtils::cursorIntToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DatabaseUtils::cursorLongToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void DatabaseUtils::cursorLongToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void DatabaseUtils::cursorLongToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DatabaseUtils::cursorRowToContentValues(JObject arg0, android::content::ContentValues arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorRowToContentValues",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DatabaseUtils::cursorShortToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorShortToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DatabaseUtils::cursorStringToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void DatabaseUtils::cursorStringToContentValues(JObject arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void DatabaseUtils::cursorStringToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, jstring arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void DatabaseUtils::cursorStringToInsertHelper(JObject arg0, jstring arg1, android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToInsertHelper",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/database/DatabaseUtils$InsertHelper;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void DatabaseUtils::dumpCurrentRow(JObject arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void DatabaseUtils::dumpCurrentRow(JObject arg0, java::io::PrintStream arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DatabaseUtils::dumpCurrentRow(JObject arg0, java::lang::StringBuilder arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jstring DatabaseUtils::dumpCurrentRowToString(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCurrentRowToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	void DatabaseUtils::dumpCursor(JObject arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void DatabaseUtils::dumpCursor(JObject arg0, java::io::PrintStream arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DatabaseUtils::dumpCursor(JObject arg0, java::lang::StringBuilder arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jstring DatabaseUtils::dumpCursorToString(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCursorToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring DatabaseUtils::getCollationKey(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DatabaseUtils::getHexCollationKey(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getHexCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint DatabaseUtils::getSqlStatementType(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.database.DatabaseUtils",
			"getSqlStatementType",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)J",
			arg0.object(),
			arg1
		);
	}
	jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.object(),
			arg1
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)J",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void DatabaseUtils::readExceptionFromParcel(android::os::Parcel arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(android::os::Parcel arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithFileNotFoundExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(android::os::Parcel arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithOperationApplicationExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	jstring DatabaseUtils::sqlEscapeString(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"sqlEscapeString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jstring DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	void DatabaseUtils::writeExceptionToParcel(android::os::Parcel arg0, java::lang::Exception arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"writeExceptionToParcel",
			"(Landroid/os/Parcel;Ljava/lang/Exception;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::database

