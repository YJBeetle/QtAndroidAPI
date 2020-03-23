#pragma once

#ifndef ANDROID_DATABASE_DATABASEUTILS
#define ANDROID_DATABASE_DATABASEUTILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::lang
{
	class Exception;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteProgram;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::database
{
	class DatabaseUtils_InsertHelper;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteStatement;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::database
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static void writeExceptionToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::Exception arg1);
		static void readExceptionFromParcel(__jni_impl::android::os::Parcel arg0);
		static void readExceptionWithFileNotFoundExceptionFromParcel(__jni_impl::android::os::Parcel arg0);
		static void readExceptionWithOperationApplicationExceptionFromParcel(__jni_impl::android::os::Parcel arg0);
		static void bindObjectToProgram(__jni_impl::android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2);
		static void appendEscapedSQLString(__jni_impl::java::lang::StringBuilder arg0, jstring arg1);
		static QAndroidJniObject sqlEscapeString(jstring arg0);
		static void appendValueToSql(__jni_impl::java::lang::StringBuilder arg0, jobject arg1);
		static QAndroidJniObject concatenateWhere(jstring arg0, jstring arg1);
		static QAndroidJniObject getCollationKey(jstring arg0);
		static QAndroidJniObject getHexCollationKey(jstring arg0);
		static void dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1);
		static void dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1);
		static void dumpCursor(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject dumpCursorToString(__jni_impl::__JniBaseClass arg0);
		static void dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1);
		static void dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1);
		static void dumpCurrentRow(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject dumpCurrentRowToString(__jni_impl::__JniBaseClass arg0);
		static void cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorStringToInsertHelper(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::DatabaseUtils_InsertHelper arg2, jint arg3);
		static void cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorDoubleToCursorValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorDoubleToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorRowToContentValues(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1);
		static jlong longForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static jlong longForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject stringForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static QAndroidJniObject stringForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static QAndroidJniObject blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static void cursorStringToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorLongToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorShortToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorIntToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorFloatToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorDoubleToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void createDbFromSqlStatements(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jstring arg3);
		static jint getSqlStatementType(jstring arg0);
		static QAndroidJniObject appendSelectionArgs(jarray arg0, jarray arg1);
	};
} // namespace __jni_impl::android::database

#include "../os/Parcel.hpp"
#include "../../java/lang/Exception.hpp"
#include "sqlite/SQLiteProgram.hpp"
#include "../../java/lang/StringBuilder.hpp"
#include "../../java/io/PrintStream.hpp"
#include "../content/ContentValues.hpp"
#include "DatabaseUtils_InsertHelper.hpp"
#include "sqlite/SQLiteDatabase.hpp"
#include "sqlite/SQLiteStatement.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::database
{
	// Fields
	jint DatabaseUtils::STATEMENT_ABORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ABORT");
	}
	jint DatabaseUtils::STATEMENT_ATTACH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_ATTACH");
	}
	jint DatabaseUtils::STATEMENT_BEGIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_BEGIN");
	}
	jint DatabaseUtils::STATEMENT_COMMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_COMMIT");
	}
	jint DatabaseUtils::STATEMENT_DDL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_DDL");
	}
	jint DatabaseUtils::STATEMENT_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_OTHER");
	}
	jint DatabaseUtils::STATEMENT_PRAGMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_PRAGMA");
	}
	jint DatabaseUtils::STATEMENT_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_SELECT");
	}
	jint DatabaseUtils::STATEMENT_UNPREPARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UNPREPARED");
	}
	jint DatabaseUtils::STATEMENT_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.database.DatabaseUtils",
			"STATEMENT_UPDATE");
	}
	
	// Constructors
	void DatabaseUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils",
			"()V");
	}
	
	// Methods
	void DatabaseUtils::writeExceptionToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::Exception arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"writeExceptionToParcel",
			"(Landroid/os/Parcel;Ljava/lang/Exception;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DatabaseUtils::readExceptionFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithFileNotFoundExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithOperationApplicationExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void DatabaseUtils::bindObjectToProgram(__jni_impl::android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"bindObjectToProgram",
			"(Landroid/database/sqlite/SQLiteProgram;ILjava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void DatabaseUtils::appendEscapedSQLString(__jni_impl::java::lang::StringBuilder arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendEscapedSQLString",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DatabaseUtils::sqlEscapeString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"sqlEscapeString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void DatabaseUtils::appendValueToSql(__jni_impl::java::lang::StringBuilder arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendValueToSql",
			"(Ljava/lang/StringBuilder;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DatabaseUtils::concatenateWhere(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"concatenateWhere",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject DatabaseUtils::getCollationKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject DatabaseUtils::getHexCollationKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"getHexCollationKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void DatabaseUtils::dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DatabaseUtils::dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DatabaseUtils::dumpCursor(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DatabaseUtils::dumpCursorToString(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCursorToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	void DatabaseUtils::dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DatabaseUtils::dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DatabaseUtils::dumpCurrentRow(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DatabaseUtils::dumpCurrentRowToString(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCurrentRowToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	void DatabaseUtils::cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DatabaseUtils::cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void DatabaseUtils::cursorStringToInsertHelper(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToInsertHelper",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/database/DatabaseUtils$InsertHelper;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DatabaseUtils::cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DatabaseUtils::cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void DatabaseUtils::cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DatabaseUtils::cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void DatabaseUtils::cursorDoubleToCursorValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToCursorValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void DatabaseUtils::cursorDoubleToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValues",
			"(Landroid/database/Cursor;Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void DatabaseUtils::cursorRowToContentValues(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorRowToContentValues",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong DatabaseUtils::longForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong DatabaseUtils::longForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject DatabaseUtils::stringForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DatabaseUtils::stringForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void DatabaseUtils::cursorStringToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorStringToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DatabaseUtils::cursorLongToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorLongToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DatabaseUtils::cursorShortToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorShortToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DatabaseUtils::cursorIntToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorIntToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DatabaseUtils::cursorFloatToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorFloatToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DatabaseUtils::cursorDoubleToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorDoubleToContentValuesIfPresent",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void DatabaseUtils::createDbFromSqlStatements(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"createDbFromSqlStatements",
			"(Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	jint DatabaseUtils::getSqlStatementType(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.database.DatabaseUtils",
			"getSqlStatementType",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject DatabaseUtils::appendSelectionArgs(jarray arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"appendSelectionArgs",
			"([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class DatabaseUtils : public __jni_impl::android::database::DatabaseUtils
	{
	public:
		DatabaseUtils(QAndroidJniObject obj) { __thiz = obj; }
		DatabaseUtils()
		{
			__constructor();
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_DATABASEUTILS

