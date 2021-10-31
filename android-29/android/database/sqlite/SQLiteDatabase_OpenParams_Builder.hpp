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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteDatabase_OpenParams_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabase_OpenParams_Builder(QAndroidJniObject obj);
		
		// Constructors
		SQLiteDatabase_OpenParams_Builder();
		SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		
		// Methods
		QAndroidJniObject addOpenFlags(jint arg0);
		QAndroidJniObject build();
		QAndroidJniObject removeOpenFlags(jint arg0);
		QAndroidJniObject setCursorFactory(__JniBaseClass arg0);
		QAndroidJniObject setErrorHandler(__JniBaseClass arg0);
		QAndroidJniObject setIdleConnectionTimeout(jlong arg0);
		QAndroidJniObject setJournalMode(jstring arg0);
		QAndroidJniObject setLookasideConfig(jint arg0, jint arg1);
		QAndroidJniObject setOpenFlags(jint arg0);
		QAndroidJniObject setSynchronousMode(jstring arg0);
	};
} // namespace android::database::sqlite

