#include "./SQLiteDatabase.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./SQLiteStatement.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteStatement::SQLiteStatement(QJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
	
	// Constructors
	
	// Methods
	void SQLiteStatement::execute()
	{
		callMethod<void>(
			"execute",
			"()V"
		);
	}
	jlong SQLiteStatement::executeInsert()
	{
		return callMethod<jlong>(
			"executeInsert",
			"()J"
		);
	}
	jint SQLiteStatement::executeUpdateDelete()
	{
		return callMethod<jint>(
			"executeUpdateDelete",
			"()I"
		);
	}
	android::os::ParcelFileDescriptor SQLiteStatement::simpleQueryForBlobFileDescriptor()
	{
		return callObjectMethod(
			"simpleQueryForBlobFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong SQLiteStatement::simpleQueryForLong()
	{
		return callMethod<jlong>(
			"simpleQueryForLong",
			"()J"
		);
	}
	jstring SQLiteStatement::simpleQueryForString()
	{
		return callObjectMethod(
			"simpleQueryForString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SQLiteStatement::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::database::sqlite

