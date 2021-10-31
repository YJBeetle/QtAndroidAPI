#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams;
}

namespace android::database::sqlite
{
	class SQLiteOpenHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		SQLiteOpenHelper(QAndroidJniObject obj);
		// Constructors
		SQLiteOpenHelper(android::content::Context arg0, jstring arg1, __JniBaseClass arg2, jint arg3);
		SQLiteOpenHelper(android::content::Context arg0, jstring arg1, jint arg2, android::database::sqlite::SQLiteDatabase_OpenParams arg3);
		SQLiteOpenHelper(android::content::Context arg0, jstring arg1, __JniBaseClass arg2, jint arg3, __JniBaseClass arg4);
		SQLiteOpenHelper() = default;
		
		// Methods
		void close();
		jstring getDatabaseName();
		QAndroidJniObject getReadableDatabase();
		QAndroidJniObject getWritableDatabase();
		void onConfigure(android::database::sqlite::SQLiteDatabase arg0);
		void onCreate(android::database::sqlite::SQLiteDatabase arg0);
		void onDowngrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2);
		void onOpen(android::database::sqlite::SQLiteDatabase arg0);
		void onUpgrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2);
		void setIdleConnectionTimeout(jlong arg0);
		void setLookasideConfig(jint arg0, jint arg1);
		void setOpenParams(android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		void setWriteAheadLoggingEnabled(jboolean arg0);
	};
} // namespace android::database::sqlite

