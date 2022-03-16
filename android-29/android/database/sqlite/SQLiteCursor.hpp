#pragma once

#include "../../../JArray.hpp"
#include "../CursorWindow.def.hpp"
#include "./SQLiteDatabase.def.hpp"
#include "./SQLiteQuery.def.hpp"
#include "../../../JString.hpp"
#include "./SQLiteCursor.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteCursor::SQLiteCursor(JObject arg0, JString arg1, android::database::sqlite::SQLiteQuery arg2)
		: android::database::AbstractWindowedCursor(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline SQLiteCursor::SQLiteCursor(android::database::sqlite::SQLiteDatabase arg0, JObject arg1, JString arg2, android::database::sqlite::SQLiteQuery arg3)
		: android::database::AbstractWindowedCursor(
			"android.database.sqlite.SQLiteCursor",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline void SQLiteCursor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SQLiteCursor::deactivate() const
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	inline jint SQLiteCursor::getColumnIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JArray SQLiteCursor::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	inline jint SQLiteCursor::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::database::sqlite::SQLiteDatabase SQLiteCursor::getDatabase() const
	{
		return callObjectMethod(
			"getDatabase",
			"()Landroid/database/sqlite/SQLiteDatabase;"
		);
	}
	inline jboolean SQLiteCursor::onMove(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean SQLiteCursor::requery() const
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	inline void SQLiteCursor::setFillWindowForwardOnly(jboolean arg0) const
	{
		callMethod<void>(
			"setFillWindowForwardOnly",
			"(Z)V",
			arg0
		);
	}
	inline void SQLiteCursor::setSelectionArguments(JArray arg0) const
	{
		callMethod<void>(
			"setSelectionArguments",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void SQLiteCursor::setWindow(android::database::CursorWindow arg0) const
	{
		callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::database::sqlite

// Base class headers
#include "../AbstractCursor.hpp"
#include "../AbstractWindowedCursor.hpp"

