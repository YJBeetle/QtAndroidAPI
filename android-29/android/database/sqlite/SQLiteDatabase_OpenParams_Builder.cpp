#include "./SQLiteDatabase_OpenParams.hpp"
#include "./SQLiteDatabase_OpenParams_Builder.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"()V"
		);
	}
	SQLiteDatabase_OpenParams_Builder::SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteDatabase$OpenParams$Builder",
			"(Landroid/database/sqlite/SQLiteDatabase$OpenParams;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::addOpenFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/database/sqlite/SQLiteDatabase$OpenParams;"
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::removeOpenFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setCursorFactory(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setErrorHandler(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setErrorHandler",
			"(Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setIdleConnectionTimeout(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setIdleConnectionTimeout",
			"(J)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setJournalMode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setJournalMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setLookasideConfig(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setLookasideConfig",
			"(II)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setOpenFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setOpenFlags",
			"(I)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
	QAndroidJniObject SQLiteDatabase_OpenParams_Builder::setSynchronousMode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSynchronousMode",
			"(Ljava/lang/String;)Landroid/database/sqlite/SQLiteDatabase$OpenParams$Builder;",
			arg0
		);
	}
} // namespace android::database::sqlite

