#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams;
}

namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteDatabase_OpenParams_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabase_OpenParams_Builder(QJniObject obj);
		
		// Constructors
		SQLiteDatabase_OpenParams_Builder();
		SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		
		// Methods
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder addOpenFlags(jint arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams build();
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder removeOpenFlags(jint arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setCursorFactory(__JniBaseClass arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setErrorHandler(__JniBaseClass arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setIdleConnectionTimeout(jlong arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setJournalMode(jstring arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setLookasideConfig(jint arg0, jint arg1);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setOpenFlags(jint arg0);
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setSynchronousMode(jstring arg0);
	};
} // namespace android::database::sqlite

