#include "../CursorWindow.hpp"
#include "./SQLiteDatabase.hpp"
#include "./SQLiteQuery.hpp"
#include "./SQLiteCursor.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteCursor::SQLiteCursor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteCursor::SQLiteCursor(__JniBaseClass arg0, jstring arg1, android::database::sqlite::SQLiteQuery arg2)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	SQLiteCursor::SQLiteCursor(android::database::sqlite::SQLiteDatabase arg0, __JniBaseClass arg1, jstring arg2, android::database::sqlite::SQLiteQuery arg3)
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void SQLiteCursor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SQLiteCursor::deactivate()
	{
		__thiz.callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jint SQLiteCursor::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jarray SQLiteCursor::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint SQLiteCursor::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject SQLiteCursor::getDatabase()
	{
		return __thiz.callObjectMethod(
			"getDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	jboolean SQLiteCursor::onMove(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean SQLiteCursor::requery()
	{
		return __thiz.callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	void SQLiteCursor::setFillWindowForwardOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillWindowForwardOnly",
			"(Z)V",
			arg0
		);
	}
	void SQLiteCursor::setSelectionArguments(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setSelectionArguments",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteCursor::setWindow(android::database::CursorWindow arg0)
	{
		__thiz.callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::database::sqlite

