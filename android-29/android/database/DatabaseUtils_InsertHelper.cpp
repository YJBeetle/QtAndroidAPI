#include "../content/ContentValues.hpp"
#include "./sqlite/SQLiteDatabase.hpp"
#include "./DatabaseUtils_InsertHelper.hpp"

namespace android::database
{
	// Fields
	
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils$InsertHelper",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.DatabaseUtils$InsertHelper",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	void DatabaseUtils_InsertHelper::bind(jint arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(II)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"bind",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bindNull(jint arg0)
	{
		__thiz.callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	void DatabaseUtils_InsertHelper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::execute()
	{
		return __thiz.callMethod<jlong>(
			"execute",
			"()J"
		);
	}
	jint DatabaseUtils_InsertHelper::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint DatabaseUtils_InsertHelper::getColumnIndex(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong DatabaseUtils_InsertHelper::insert(android::content::ContentValues arg0)
	{
		return __thiz.callMethod<jlong>(
			"insert",
			"(Landroid/content/ContentValues;)J",
			arg0.__jniObject().object()
		);
	}
	void DatabaseUtils_InsertHelper::prepareForInsert()
	{
		__thiz.callMethod<void>(
			"prepareForInsert",
			"()V"
		);
	}
	void DatabaseUtils_InsertHelper::prepareForReplace()
	{
		__thiz.callMethod<void>(
			"prepareForReplace",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::replace(android::content::ContentValues arg0)
	{
		return __thiz.callMethod<jlong>(
			"replace",
			"(Landroid/content/ContentValues;)J",
			arg0.__jniObject().object()
		);
	}
} // namespace android::database

