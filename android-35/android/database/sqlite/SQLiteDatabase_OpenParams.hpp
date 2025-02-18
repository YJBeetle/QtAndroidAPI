#pragma once

#include "../../../JString.hpp"
#include "./SQLiteDatabase_OpenParams.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SQLiteDatabase_OpenParams::getCursorFactory() const
	{
		return callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	inline JObject SQLiteDatabase_OpenParams::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Landroid/database/DatabaseErrorHandler;"
		);
	}
	inline jlong SQLiteDatabase_OpenParams::getIdleConnectionTimeout() const
	{
		return callMethod<jlong>(
			"getIdleConnectionTimeout",
			"()J"
		);
	}
	inline JString SQLiteDatabase_OpenParams::getJournalMode() const
	{
		return callObjectMethod(
			"getJournalMode",
			"()Ljava/lang/String;"
		);
	}
	inline jint SQLiteDatabase_OpenParams::getLookasideSlotCount() const
	{
		return callMethod<jint>(
			"getLookasideSlotCount",
			"()I"
		);
	}
	inline jint SQLiteDatabase_OpenParams::getLookasideSlotSize() const
	{
		return callMethod<jint>(
			"getLookasideSlotSize",
			"()I"
		);
	}
	inline jint SQLiteDatabase_OpenParams::getOpenFlags() const
	{
		return callMethod<jint>(
			"getOpenFlags",
			"()I"
		);
	}
	inline JString SQLiteDatabase_OpenParams::getSynchronousMode() const
	{
		return callObjectMethod(
			"getSynchronousMode",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
