#include "./SQLiteDatabase_OpenParams.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDatabase_OpenParams::SQLiteDatabase_OpenParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SQLiteDatabase_OpenParams::getCursorFactory()
	{
		return __thiz.callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Landroid/database/DatabaseErrorHandler;"
		);
	}
	jlong SQLiteDatabase_OpenParams::getIdleConnectionTimeout()
	{
		return __thiz.callMethod<jlong>(
			"getIdleConnectionTimeout",
			"()J"
		);
	}
	jstring SQLiteDatabase_OpenParams::getJournalMode()
	{
		return __thiz.callObjectMethod(
			"getJournalMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotCount()
	{
		return __thiz.callMethod<jint>(
			"getLookasideSlotCount",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getLookasideSlotSize()
	{
		return __thiz.callMethod<jint>(
			"getLookasideSlotSize",
			"()I"
		);
	}
	jint SQLiteDatabase_OpenParams::getOpenFlags()
	{
		return __thiz.callMethod<jint>(
			"getOpenFlags",
			"()I"
		);
	}
	jstring SQLiteDatabase_OpenParams::getSynchronousMode()
	{
		return __thiz.callObjectMethod(
			"getSynchronousMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::database::sqlite

