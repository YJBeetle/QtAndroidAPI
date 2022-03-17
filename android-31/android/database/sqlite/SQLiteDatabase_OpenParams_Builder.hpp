#pragma once

#include "./SQLiteDatabase_OpenParams.def.hpp"
#include "../../../JString.hpp"
#include "./SQLiteDatabase_OpenParams_Builder.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder()
		: JObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"()V"
		) {}
	inline SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
		: JObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::addOpenFlags(jint arg0) const
	{
		return callObjectMethod(
			"addOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams SQLiteDatabase_OpenParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/database/sqlite/SQLiteDatabase$OpenParams;"
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::removeOpenFlags(jint arg0) const
	{
		return callObjectMethod(
			"removeOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setCursorFactory(JObject arg0) const
	{
		return callObjectMethod(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setErrorHandler(JObject arg0) const
	{
		return callObjectMethod(
			"setErrorHandler",
			"(Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setIdleConnectionTimeout(jlong arg0) const
	{
		return callObjectMethod(
			"setIdleConnectionTimeout",
			"(J)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setJournalMode(JString arg0) const
	{
		return callObjectMethod(
			"setJournalMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setLookasideConfig(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLookasideConfig",
			"(II)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0,
			arg1
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setOpenFlags(jint arg0) const
	{
		return callObjectMethod(
			"setOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	inline android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setSynchronousMode(JString arg0) const
	{
		return callObjectMethod(
			"setSynchronousMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::database::sqlite

// Base class headers

