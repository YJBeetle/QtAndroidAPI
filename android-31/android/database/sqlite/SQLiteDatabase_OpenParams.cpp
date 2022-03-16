#include "../../../JString.hpp"
#include "./SQLiteDatabase_OpenParams.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject SQLiteDatabase_OpenParams::getCursorFactory() const
	{
		return callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	JObject SQLiteDatabase_OpenParams::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Landroid/database/DatabaseErrorHandler;"
		);
	}
	jlong SQLiteDatabase_OpenParams::getIdleConnectionTimeout() const
	{
		return callMethod<jlong>(
			"getIdleConnectionTimeout",
			"()J"
		);
	}
	JString SQLiteDatabase_OpenParams::getJournalMode() const
	{
		return callObjectMethod(
			"getJournalMode",
			"()Ljava/lang/String;"
		);
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotCount() const
	{
		return callMethod<jint>(
			"getLookasideSlotCount",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotSize() const
	{
		return callMethod<jint>(
			"getLookasideSlotSize",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getOpenFlags() const
	{
		return callMethod<jint>(
			"getOpenFlags",
			"()I"
		);
	}
	JString SQLiteDatabase_OpenParams::getSynchronousMode() const
	{
		return callObjectMethod(
			"getSynchronousMode",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

