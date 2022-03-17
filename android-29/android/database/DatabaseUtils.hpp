#pragma once

#include "../../JArray.hpp"
#include "../content/ContentValues.def.hpp"
#include "../content/Context.def.hpp"
#include "./DatabaseUtils_InsertHelper.def.hpp"
#include "./sqlite/SQLiteDatabase.def.hpp"
#include "./sqlite/SQLiteProgram.def.hpp"
#include "./sqlite/SQLiteStatement.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../java/io/PrintStream.def.hpp"
#include "../../java/lang/Exception.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/lang/StringBuilder.def.hpp"
#include "./DatabaseUtils.def.hpp"

namespace android::database
{
	// Fields
	inline jint DatabaseUtils::STATEMENT_ABORT()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ABORT"
		);
	}
	inline jint DatabaseUtils::STATEMENT_ATTACH()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ATTACH"
		);
	}
	inline jint DatabaseUtils::STATEMENT_BEGIN()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_BEGIN"
		);
	}
	inline jint DatabaseUtils::STATEMENT_COMMIT()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_COMMIT"
		);
	}
	inline jint DatabaseUtils::STATEMENT_DDL()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_DDL"
		);
	}
	inline jint DatabaseUtils::STATEMENT_OTHER()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_OTHER"
		);
	}
	inline jint DatabaseUtils::STATEMENT_PRAGMA()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_PRAGMA"
		);
	}
	inline jint DatabaseUtils::STATEMENT_SELECT()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_SELECT"
		);
	}
	inline jint DatabaseUtils::STATEMENT_UNPREPARED()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UNPREPARED"
		);
	}
	inline jint DatabaseUtils::STATEMENT_UPDATE()
	{
		return getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UPDATE"
		);
	}
	
	// Constructors
	inline DatabaseUtils::DatabaseUtils()
		: JObject(
			"android.database.DatabaseUtils",
			"()V"
		) {}
	
	// Methods
	inline void DatabaseUtils::appendEscapedSQLString(java::lang::StringBuilder arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendEscapedSQLString",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JArray DatabaseUtils::appendSelectionArgs(JArray arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"appendSelectionArgs",
			"([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1.object<jarray>()
		);
	}
	inline void DatabaseUtils::appendValueToSql(java::lang::StringBuilder arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendValueToSql",
			"(Ljava/lang/StringBuilder;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void DatabaseUtils::bindObjectToProgram(android::database::sqlite::SQLiteProgram arg0, jint arg1, JObject arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"bindObjectToProgram",
			"(Landroid/database/sqlite/SQLiteProgram;ILjava/lang/Object;)V",
			arg0.object(),
			arg1,
			arg2.object<jobject>()
		);
	}
	inline android::os::ParcelFileDescriptor DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteStatement arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::os::ParcelFileDescriptor DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline JString DatabaseUtils::concatenateWhere(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"concatenateWhere",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void DatabaseUtils::createDbFromSqlStatements(android::content::Context arg0, JString arg1, jint arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"createDbFromSqlStatements",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorDoubleToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorDoubleToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorDoubleToCursorValues(JObject arg0, JString arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToCursorValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void DatabaseUtils::cursorFloatToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorFloatToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorIntToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void DatabaseUtils::cursorIntToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorIntToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorLongToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void DatabaseUtils::cursorLongToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorLongToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorRowToContentValues(JObject arg0, android::content::ContentValues arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorRowToContentValues",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DatabaseUtils::cursorShortToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorShortToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorStringToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void DatabaseUtils::cursorStringToContentValues(JObject arg0, JString arg1, android::content::ContentValues arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorStringToContentValuesIfPresent(JObject arg0, android::content::ContentValues arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void DatabaseUtils::cursorStringToInsertHelper(JObject arg0, JString arg1, android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToInsertHelper",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/database/DatabaseUtils$InsertHelper;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline void DatabaseUtils::dumpCurrentRow(JObject arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline void DatabaseUtils::dumpCurrentRow(JObject arg0, java::io::PrintStream arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DatabaseUtils::dumpCurrentRow(JObject arg0, java::lang::StringBuilder arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString DatabaseUtils::dumpCurrentRowToString(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCurrentRowToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline void DatabaseUtils::dumpCursor(JObject arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline void DatabaseUtils::dumpCursor(JObject arg0, java::io::PrintStream arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DatabaseUtils::dumpCursor(JObject arg0, java::lang::StringBuilder arg1)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString DatabaseUtils::dumpCursorToString(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCursorToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString DatabaseUtils::getCollationKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString DatabaseUtils::getHexCollationKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getHexCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint DatabaseUtils::getSqlStatementType(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.database.DatabaseUtils",
			"getSqlStatementType",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteStatement arg0, JArray arg1)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, JString arg1)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JString arg2)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JString arg2, JArray arg3)
	{
		return callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
	inline void DatabaseUtils::readExceptionFromParcel(android::os::Parcel arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(android::os::Parcel arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithFileNotFoundExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(android::os::Parcel arg0)
	{
		callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithOperationApplicationExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline JString DatabaseUtils::sqlEscapeString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"sqlEscapeString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteStatement arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline JString DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline void DatabaseUtils::writeExceptionToParcel(android::os::Parcel arg0, java::lang::Exception arg1)
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

// Base class headers

