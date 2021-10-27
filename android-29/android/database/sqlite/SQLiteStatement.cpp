#include "./SQLiteDatabase.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./SQLiteStatement.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteStatement::SQLiteStatement(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SQLiteStatement::execute()
	{
		__thiz.callMethod<void>(
			"execute",
			"()V"
		);
	}
	jlong SQLiteStatement::executeInsert()
	{
		return __thiz.callMethod<jlong>(
			"executeInsert",
			"()J"
		);
	}
	jint SQLiteStatement::executeUpdateDelete()
	{
		return __thiz.callMethod<jint>(
			"executeUpdateDelete",
			"()I"
		);
	}
	QAndroidJniObject SQLiteStatement::simpleQueryForBlobFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"simpleQueryForBlobFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong SQLiteStatement::simpleQueryForLong()
	{
		return __thiz.callMethod<jlong>(
			"simpleQueryForLong",
			"()J"
		);
	}
	jstring SQLiteStatement::simpleQueryForString()
	{
		return __thiz.callObjectMethod(
			"simpleQueryForString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SQLiteStatement::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::database::sqlite

