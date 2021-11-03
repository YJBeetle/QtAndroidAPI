#pragma once

#include "../../../JObject.hpp"
#include "../AbstractCursor.hpp"
#include "../AbstractWindowedCursor.hpp"

namespace android::database
{
	class CursorWindow;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::database::sqlite
{
	class SQLiteQuery;
}

namespace android::database::sqlite
{
	class SQLiteCursor : public android::database::AbstractWindowedCursor
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractWindowedCursor(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteCursor(QJniObject obj);
		
		// Constructors
		SQLiteCursor(JObject arg0, jstring arg1, android::database::sqlite::SQLiteQuery arg2);
		SQLiteCursor(android::database::sqlite::SQLiteDatabase arg0, JObject arg1, jstring arg2, android::database::sqlite::SQLiteQuery arg3);
		
		// Methods
		void close();
		void deactivate();
		jint getColumnIndex(jstring arg0);
		jarray getColumnNames();
		jint getCount();
		android::database::sqlite::SQLiteDatabase getDatabase();
		jboolean onMove(jint arg0, jint arg1);
		jboolean requery();
		void setFillWindowForwardOnly(jboolean arg0);
		void setSelectionArguments(jarray arg0);
		void setWindow(android::database::CursorWindow arg0);
	};
} // namespace android::database::sqlite

