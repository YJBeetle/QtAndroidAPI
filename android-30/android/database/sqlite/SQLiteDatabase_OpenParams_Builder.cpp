#include "./SQLiteDatabase_OpenParams.hpp"
#include "../../../JString.hpp"
#include "./SQLiteDatabase_OpenParams_Builder.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder()
		: JObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"()V"
		) {}
	SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
		: JObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.object()
		) {}
	
	// Methods
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::addOpenFlags(jint arg0)
	{
		return callObjectMethod(
			"addOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams SQLiteDatabase_OpenParams_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/database/sqlite/SQLiteDatabase$OpenParams;"
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::removeOpenFlags(jint arg0)
	{
		return callObjectMethod(
			"removeOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setCursorFactory(JObject arg0)
	{
		return callObjectMethod(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object()
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setErrorHandler(JObject arg0)
	{
		return callObjectMethod(
			"setErrorHandler",
			"(Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object()
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setIdleConnectionTimeout(jlong arg0)
	{
		return callObjectMethod(
			"setIdleConnectionTimeout",
			"(J)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setJournalMode(JString arg0)
	{
		return callObjectMethod(
			"setJournalMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object<jstring>()
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setLookasideConfig(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setLookasideConfig",
			"(II)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0,
			arg1
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setOpenFlags(jint arg0)
	{
		return callObjectMethod(
			"setOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	android::database::sqlite::SQLiteDatabase_OpenParams_Builder SQLiteDatabase_OpenParams_Builder::setSynchronousMode(JString arg0)
	{
		return callObjectMethod(
			"setSynchronousMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::database::sqlite

