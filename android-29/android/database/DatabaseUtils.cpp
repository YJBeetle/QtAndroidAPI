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
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ABORT"
		);
	}
	jint DatabaseUtils::STATEMENT_ATTACH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ATTACH"
		);
	}
	jint DatabaseUtils::STATEMENT_BEGIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_BEGIN"
		);
	}
	jint DatabaseUtils::STATEMENT_COMMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_COMMIT"
		);
	}
	jint DatabaseUtils::STATEMENT_DDL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_DDL"
		);
	}
	jint DatabaseUtils::STATEMENT_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_OTHER"
		);
	}
	jint DatabaseUtils::STATEMENT_PRAGMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_PRAGMA"
		);
	}
	jint DatabaseUtils::STATEMENT_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_SELECT"
		);
	}
	jint DatabaseUtils::STATEMENT_UNPREPARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UNPREPARED"
		);
	}
	jint DatabaseUtils::STATEMENT_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UPDATE"
		);
	}
	
	DatabaseUtils::DatabaseUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DatabaseUtils::DatabaseUtils()
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils",
			"()V"
		);
	}
	
	// Methods
	void DatabaseUtils::appendEscapedSQLString(java::lang::StringBuilder arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendEscapedSQLString",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatabaseUtils::appendEscapedSQLString(java::lang::StringBuilder arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendEscapedSQLString",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jarray DatabaseUtils::appendSelectionArgs(jarray arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"appendSelectionArgs",
			"([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	void DatabaseUtils::appendValueToSql(java::lang::StringBuilder arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendValueToSql",
			"(Ljava/lang/StringBuilder;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatabaseUtils::bindObjectToProgram(android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"bindObjectToProgram",
			"(Landroid/database/sqlite/SQLiteProgram;ILjava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring DatabaseUtils::concatenateWhere(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"concatenateWhere",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DatabaseUtils::concatenateWhere(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"concatenateWhere",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	void DatabaseUtils::createDbFromSqlStatements(android::content::Context arg0, jstring arg1, jint arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"createDbFromSqlStatements",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void DatabaseUtils::createDbFromSqlStatements(android::content::Context arg0, const QString &arg1, jint arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"createDbFromSqlStatements",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void DatabaseUtils::cursorDoubleToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatabaseUtils::cursorDoubleToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void DatabaseUtils::cursorDoubleToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatabaseUtils::cursorDoubleToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DatabaseUtils::cursorDoubleToCursorValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToCursorValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorDoubleToCursorValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToCursorValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorFloatToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorFloatToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatabaseUtils::cursorFloatToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorFloatToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DatabaseUtils::cursorIntToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorIntToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorIntToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatabaseUtils::cursorIntToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void DatabaseUtils::cursorIntToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatabaseUtils::cursorIntToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DatabaseUtils::cursorLongToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorLongToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorLongToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatabaseUtils::cursorLongToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void DatabaseUtils::cursorLongToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatabaseUtils::cursorLongToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DatabaseUtils::cursorRowToContentValues(__JniBaseClass arg0, android::content::ContentValues arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorRowToContentValues",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorShortToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorShortToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatabaseUtils::cursorShortToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorShortToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DatabaseUtils::cursorStringToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorStringToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorStringToContentValues(__JniBaseClass arg0, jstring arg1, android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatabaseUtils::cursorStringToContentValues(__JniBaseClass arg0, const QString &arg1, android::content::ContentValues arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void DatabaseUtils::cursorStringToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DatabaseUtils::cursorStringToContentValuesIfPresent(__JniBaseClass arg0, android::content::ContentValues arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DatabaseUtils::cursorStringToInsertHelper(__JniBaseClass arg0, jstring arg1, android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToInsertHelper",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/database/DatabaseUtils$InsertHelper;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatabaseUtils::cursorStringToInsertHelper(__JniBaseClass arg0, const QString &arg1, android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToInsertHelper",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/database/DatabaseUtils$InsertHelper;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatabaseUtils::dumpCurrentRow(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCurrentRow(__JniBaseClass arg0, java::io::PrintStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCurrentRow(__JniBaseClass arg0, java::lang::StringBuilder arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DatabaseUtils::dumpCurrentRowToString(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCurrentRowToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void DatabaseUtils::dumpCursor(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCursor(__JniBaseClass arg0, java::io::PrintStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCursor(__JniBaseClass arg0, java::lang::StringBuilder arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DatabaseUtils::dumpCursorToString(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCursorToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring DatabaseUtils::getCollationKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DatabaseUtils::getCollationKey(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring DatabaseUtils::getHexCollationKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getHexCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DatabaseUtils::getHexCollationKey(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getHexCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint DatabaseUtils::getSqlStatementType(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.database.DatabaseUtils",
			"getSqlStatementType",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DatabaseUtils::getSqlStatementType(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.database.DatabaseUtils",
			"getSqlStatementType",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong DatabaseUtils::longForQuery(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jlong DatabaseUtils::queryNumEntries(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, const QString &arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	void DatabaseUtils::readExceptionFromParcel(android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithFileNotFoundExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithOperationApplicationExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	jstring DatabaseUtils::sqlEscapeString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"sqlEscapeString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DatabaseUtils::sqlEscapeString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"sqlEscapeString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring DatabaseUtils::stringForQuery(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		).object<jstring>();
	}
	void DatabaseUtils::writeExceptionToParcel(android::os::Parcel arg0, java::lang::Exception arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"writeExceptionToParcel",
			"(Landroid/os/Parcel;Ljava/lang/Exception;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::database

