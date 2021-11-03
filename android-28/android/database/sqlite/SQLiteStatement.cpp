#include "../../../JObjectArray.hpp"
#include "./SQLiteDatabase.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../JString.hpp"
#include "./SQLiteStatement.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteStatement::SQLiteStatement(QAndroidJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
	
	// Constructors
	
	// Methods
	void SQLiteStatement::execute() const
	{
		callMethod<void>(
			"execute",
			"()V"
		);
	}
	jlong SQLiteStatement::executeInsert() const
	{
		return callMethod<jlong>(
			"executeInsert",
			"()J"
		);
	}
	jint SQLiteStatement::executeUpdateDelete() const
	{
		return callMethod<jint>(
			"executeUpdateDelete",
			"()I"
		);
	}
	android::os::ParcelFileDescriptor SQLiteStatement::simpleQueryForBlobFileDescriptor() const
	{
		return callObjectMethod(
			"simpleQueryForBlobFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong SQLiteStatement::simpleQueryForLong() const
	{
		return callMethod<jlong>(
			"simpleQueryForLong",
			"()J"
		);
	}
	JString SQLiteStatement::simpleQueryForString() const
	{
		return callObjectMethod(
			"simpleQueryForString",
			"()Ljava/lang/String;"
		);
	}
	JString SQLiteStatement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

