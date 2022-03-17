#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::database::sqlite
{
	class SQLiteOpenHelper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteOpenHelper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteOpenHelper(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SQLiteOpenHelper(android::content::Context arg0, JString arg1, JObject arg2, jint arg3);
		SQLiteOpenHelper(android::content::Context arg0, JString arg1, jint arg2, android::database::sqlite::SQLiteDatabase_OpenParams arg3);
		SQLiteOpenHelper(android::content::Context arg0, JString arg1, JObject arg2, jint arg3, JObject arg4);
		
		// Methods
		void close() const;
		JString getDatabaseName() const;
		android::database::sqlite::SQLiteDatabase getReadableDatabase() const;
		android::database::sqlite::SQLiteDatabase getWritableDatabase() const;
		void onConfigure(android::database::sqlite::SQLiteDatabase arg0) const;
		void onCreate(android::database::sqlite::SQLiteDatabase arg0) const;
		void onDowngrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2) const;
		void onOpen(android::database::sqlite::SQLiteDatabase arg0) const;
		void onUpgrade(android::database::sqlite::SQLiteDatabase arg0, jint arg1, jint arg2) const;
		void setIdleConnectionTimeout(jlong arg0) const;
		void setLookasideConfig(jint arg0, jint arg1) const;
		void setOpenParams(android::database::sqlite::SQLiteDatabase_OpenParams arg0) const;
		void setWriteAheadLoggingEnabled(jboolean arg0) const;
	};
} // namespace android::database::sqlite

