#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		SQLiteCursor(QAndroidJniObject obj);
		// Constructors
		SQLiteCursor(__JniBaseClass &arg0, jstring &arg1, android::database::sqlite::SQLiteQuery &arg2);
		SQLiteCursor(__JniBaseClass &arg0, const QString &arg1, android::database::sqlite::SQLiteQuery &arg2);
		SQLiteCursor(android::database::sqlite::SQLiteDatabase &arg0, __JniBaseClass &arg1, jstring &arg2, android::database::sqlite::SQLiteQuery &arg3);
		SQLiteCursor(android::database::sqlite::SQLiteDatabase &arg0, __JniBaseClass &arg1, const QString &arg2, android::database::sqlite::SQLiteQuery &arg3);
		SQLiteCursor() = default;
		
		// Methods
		void close();
		void deactivate();
		jint getColumnIndex(jstring arg0);
		jint getColumnIndex(const QString &arg0);
		jarray getColumnNames();
		jint getCount();
		QAndroidJniObject getDatabase();
		jboolean onMove(jint arg0, jint arg1);
		jboolean requery();
		void setFillWindowForwardOnly(jboolean arg0);
		void setSelectionArguments(jarray arg0);
		void setWindow(android::database::CursorWindow arg0);
	};
} // namespace android::database::sqlite

