#pragma once

#include "../AbstractWindowedCursor.hpp"

class JArray;
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
class JString;

namespace android::database::sqlite
{
	class SQLiteCursor : public android::database::AbstractWindowedCursor
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractWindowedCursor(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteCursor(QAndroidJniObject obj) : android::database::AbstractWindowedCursor(obj) {}
		
		// Constructors
		SQLiteCursor(JObject arg0, JString arg1, android::database::sqlite::SQLiteQuery arg2);
		SQLiteCursor(android::database::sqlite::SQLiteDatabase arg0, JObject arg1, JString arg2, android::database::sqlite::SQLiteQuery arg3);
		
		// Methods
		void close() const;
		void deactivate() const;
		jint getColumnIndex(JString arg0) const;
		JArray getColumnNames() const;
		jint getCount() const;
		android::database::sqlite::SQLiteDatabase getDatabase() const;
		jboolean onMove(jint arg0, jint arg1) const;
		jboolean requery() const;
		void setFillWindowForwardOnly(jboolean arg0) const;
		void setSelectionArguments(JArray arg0) const;
		void setWindow(android::database::CursorWindow arg0) const;
	};
} // namespace android::database::sqlite

