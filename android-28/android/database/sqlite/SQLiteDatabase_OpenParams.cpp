#include "../../../JString.hpp"
#include "./SQLiteDatabase_OpenParams.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteDatabase_OpenParams::SQLiteDatabase_OpenParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SQLiteDatabase_OpenParams::getCursorFactory()
	{
		return callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	JObject SQLiteDatabase_OpenParams::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Landroid/database/DatabaseErrorHandler;"
		);
	}
	jlong SQLiteDatabase_OpenParams::getIdleConnectionTimeout()
	{
		return callMethod<jlong>(
			"getIdleConnectionTimeout",
			"()J"
		);
	}
	JString SQLiteDatabase_OpenParams::getJournalMode()
	{
		return callObjectMethod(
			"getJournalMode",
			"()Ljava/lang/String;"
		);
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotCount()
	{
		return callMethod<jint>(
			"getLookasideSlotCount",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotSize()
	{
		return callMethod<jint>(
			"getLookasideSlotSize",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getOpenFlags()
	{
		return callMethod<jint>(
			"getOpenFlags",
			"()I"
		);
	}
	JString SQLiteDatabase_OpenParams::getSynchronousMode()
	{
		return callObjectMethod(
			"getSynchronousMode",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

