#include "../content/ContentValues.hpp"
#include "./sqlite/SQLiteDatabase.hpp"
#include "./DatabaseUtils_InsertHelper.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase arg0, jstring arg1)
		: JObject(
			"android.database.DatabaseUtils$InsertHelper",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void DatabaseUtils_InsertHelper::bind(jint arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"bind",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"bind",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jdouble arg1)
	{
		callMethod<void>(
			"bind",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"bind",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jint arg1)
	{
		callMethod<void>(
			"bind",
			"(II)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"bind",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"bind",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bindNull(jint arg0)
	{
		callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	void DatabaseUtils_InsertHelper::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::execute()
	{
		return callMethod<jlong>(
			"execute",
			"()J"
		);
	}
	jint DatabaseUtils_InsertHelper::getColumnIndex(jstring arg0)
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jlong DatabaseUtils_InsertHelper::insert(android::content::ContentValues arg0)
	{
		return callMethod<jlong>(
			"insert",
			"(Landroid/content/ContentValues;)J",
			arg0.object()
		);
	}
	void DatabaseUtils_InsertHelper::prepareForInsert()
	{
		callMethod<void>(
			"prepareForInsert",
			"()V"
		);
	}
	void DatabaseUtils_InsertHelper::prepareForReplace()
	{
		callMethod<void>(
			"prepareForReplace",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::replace(android::content::ContentValues arg0)
	{
		return callMethod<jlong>(
			"replace",
			"(Landroid/content/ContentValues;)J",
			arg0.object()
		);
	}
} // namespace android::database

