#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::content
{
	class Context;
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
	class SQLiteProgram;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteStatement;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::lang
{
	class Exception;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
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
		static void appendEscapedSQLString(__jni_impl::java::lang::StringBuilder arg0, jstring arg1);
		static void appendEscapedSQLString(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1);
		static jarray appendSelectionArgs(jarray arg0, jarray arg1);
		static void appendValueToSql(__jni_impl::java::lang::StringBuilder arg0, jobject arg1);
		static void bindObjectToProgram(__jni_impl::android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2);
		static QAndroidJniObject blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static QAndroidJniObject blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2);
		static jstring concatenateWhere(jstring arg0, jstring arg1);
		static jstring concatenateWhere(const QString &arg0, const QString &arg1);
		static void createDbFromSqlStatements(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jstring arg3);
		static void createDbFromSqlStatements(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, const QString &arg3);
		static void cursorDoubleToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorDoubleToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3);
		static void cursorDoubleToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorDoubleToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2);
		static void cursorDoubleToCursorValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorDoubleToCursorValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorFloatToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorFloatToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2);
		static void cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3);
		static void cursorIntToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorIntToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2);
		static void cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3);
		static void cursorLongToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorLongToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2);
		static void cursorRowToContentValues(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1);
		static void cursorShortToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorShortToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2);
		static void cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2);
		static void cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3);
		static void cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3);
		static void cursorStringToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2);
		static void cursorStringToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2);
		static void cursorStringToInsertHelper(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::DatabaseUtils_InsertHelper arg2, jint arg3);
		static void cursorStringToInsertHelper(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::database::DatabaseUtils_InsertHelper arg2, jint arg3);
		static void dumpCurrentRow(__jni_impl::__JniBaseClass arg0);
		static void dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1);
		static void dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1);
		static jstring dumpCurrentRowToString(__jni_impl::__JniBaseClass arg0);
		static void dumpCursor(__jni_impl::__JniBaseClass arg0);
		static void dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1);
		static void dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1);
		static jstring dumpCursorToString(__jni_impl::__JniBaseClass arg0);
		static jstring getCollationKey(jstring arg0);
		static jstring getCollationKey(const QString &arg0);
		static jstring getHexCollationKey(jstring arg0);
		static jstring getHexCollationKey(const QString &arg0);
		static jint getSqlStatementType(jstring arg0);
		static jint getSqlStatementType(const QString &arg0);
		static jlong longForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static jlong longForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static jlong longForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, const QString &arg2);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3);
		static jlong queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, const QString &arg2, jarray arg3);
		static void readExceptionFromParcel(__jni_impl::android::os::Parcel arg0);
		static void readExceptionWithFileNotFoundExceptionFromParcel(__jni_impl::android::os::Parcel arg0);
		static void readExceptionWithOperationApplicationExceptionFromParcel(__jni_impl::android::os::Parcel arg0);
		static jstring sqlEscapeString(jstring arg0);
		static jstring sqlEscapeString(const QString &arg0);
		static jstring stringForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1);
		static jstring stringForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		static jstring stringForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2);
		static void writeExceptionToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::Exception arg1);
	};
} // namespace __jni_impl::android::database

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

namespace __jni_impl::android::database
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
	
	// Constructors
	void DatabaseUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils",
			"()V"
		);
	}
	
	// Methods
	void DatabaseUtils::appendEscapedSQLString(__jni_impl::java::lang::StringBuilder arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendEscapedSQLString",
			"(Ljava/lang/StringBuilder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatabaseUtils::appendEscapedSQLString(__jni_impl::java::lang::StringBuilder arg0, const QString &arg1)
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
	void DatabaseUtils::appendValueToSql(__jni_impl::java::lang::StringBuilder arg0, jobject arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"appendValueToSql",
			"(Ljava/lang/StringBuilder;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DatabaseUtils::bindObjectToProgram(__jni_impl::android::database::sqlite::SQLiteProgram arg0, jint arg1, jobject arg2)
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
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"blobFileDescriptorForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
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
	QAndroidJniObject DatabaseUtils::blobFileDescriptorForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
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
	void DatabaseUtils::createDbFromSqlStatements(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2, jstring arg3)
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
	void DatabaseUtils::createDbFromSqlStatements(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2, const QString &arg3)
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
	void DatabaseUtils::cursorDoubleToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
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
	void DatabaseUtils::cursorDoubleToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3)
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
	void DatabaseUtils::cursorDoubleToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
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
	void DatabaseUtils::cursorDoubleToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2)
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
	void DatabaseUtils::cursorDoubleToCursorValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorDoubleToCursorValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorFloatToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
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
	void DatabaseUtils::cursorFloatToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2)
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
	void DatabaseUtils::cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
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
	void DatabaseUtils::cursorIntToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3)
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
	void DatabaseUtils::cursorIntToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
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
	void DatabaseUtils::cursorIntToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2)
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
	void DatabaseUtils::cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
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
	void DatabaseUtils::cursorLongToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3)
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
	void DatabaseUtils::cursorLongToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
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
	void DatabaseUtils::cursorLongToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2)
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
	void DatabaseUtils::cursorRowToContentValues(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"cursorRowToContentValues",
			"(Landroid/database/Cursor;Landroid/content/ContentValues;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatabaseUtils::cursorShortToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
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
	void DatabaseUtils::cursorShortToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2)
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
	void DatabaseUtils::cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2)
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
	void DatabaseUtils::cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::content::ContentValues arg2, jstring arg3)
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
	void DatabaseUtils::cursorStringToContentValues(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::content::ContentValues arg2, const QString &arg3)
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
	void DatabaseUtils::cursorStringToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2)
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
	void DatabaseUtils::cursorStringToContentValuesIfPresent(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2)
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
	void DatabaseUtils::cursorStringToInsertHelper(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
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
	void DatabaseUtils::cursorStringToInsertHelper(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::android::database::DatabaseUtils_InsertHelper arg2, jint arg3)
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
	void DatabaseUtils::dumpCurrentRow(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCurrentRow(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCurrentRow",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DatabaseUtils::dumpCurrentRowToString(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"dumpCurrentRowToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void DatabaseUtils::dumpCursor(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::PrintStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/io/PrintStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DatabaseUtils::dumpCursor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuilder arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"dumpCursor",
			"(Landroid/database/Cursor;Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring DatabaseUtils::dumpCursorToString(__jni_impl::__JniBaseClass arg0)
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
	jlong DatabaseUtils::longForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"longForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong DatabaseUtils::longForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
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
	jlong DatabaseUtils::longForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
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
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.database.DatabaseUtils",
			"queryNumEntries",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2)
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
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, const QString &arg2)
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
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jstring arg2, jarray arg3)
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
	jlong DatabaseUtils::queryNumEntries(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, const QString &arg2, jarray arg3)
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
	void DatabaseUtils::readExceptionFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::readExceptionWithFileNotFoundExceptionFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"readExceptionWithFileNotFoundExceptionFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils::readExceptionWithOperationApplicationExceptionFromParcel(__jni_impl::android::os::Parcel arg0)
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
	jstring DatabaseUtils::stringForQuery(__jni_impl::android::database::sqlite::SQLiteStatement arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.DatabaseUtils",
			"stringForQuery",
			"(Landroid/database/sqlite/SQLiteStatement;[Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring DatabaseUtils::stringForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
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
	jstring DatabaseUtils::stringForQuery(__jni_impl::android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2)
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
	void DatabaseUtils::writeExceptionToParcel(__jni_impl::android::os::Parcel arg0, __jni_impl::java::lang::Exception arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.database.DatabaseUtils",
			"writeExceptionToParcel",
			"(Landroid/os/Parcel;Ljava/lang/Exception;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
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

