#include "../../../JArray.hpp"
#include "../CursorWindow.hpp"
#include "./SQLiteDatabase.hpp"
#include "./SQLiteQuery.hpp"
#include "../../../JString.hpp"
#include "./SQLiteCursor.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteCursor::SQLiteCursor(QJniObject obj) : android::database::AbstractWindowedCursor(obj) {}
	
	// Constructors
	SQLiteCursor::SQLiteCursor(JObject arg0, JString arg1, android::database::sqlite::SQLiteQuery arg2)
		: android::database::AbstractWindowedCursor(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	SQLiteCursor::SQLiteCursor(android::database::sqlite::SQLiteDatabase arg0, JObject arg1, JString arg2, android::database::sqlite::SQLiteQuery arg3)
		: android::database::AbstractWindowedCursor(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	void SQLiteCursor::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SQLiteCursor::deactivate()
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jint SQLiteCursor::getColumnIndex(JString arg0)
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JArray SQLiteCursor::getColumnNames()
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	jint SQLiteCursor::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::database::sqlite::SQLiteDatabase SQLiteCursor::getDatabase()
	{
		return callObjectMethod(
			"getDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	jboolean SQLiteCursor::onMove(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean SQLiteCursor::requery()
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	void SQLiteCursor::setFillWindowForwardOnly(jboolean arg0)
	{
		callMethod<void>(
			"setFillWindowForwardOnly",
			"(Z)V",
			arg0
		);
	}
	void SQLiteCursor::setSelectionArguments(JArray arg0)
	{
		callMethod<void>(
			"setSelectionArguments",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SQLiteCursor::setWindow(android::database::CursorWindow arg0)
	{
		callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::database::sqlite

