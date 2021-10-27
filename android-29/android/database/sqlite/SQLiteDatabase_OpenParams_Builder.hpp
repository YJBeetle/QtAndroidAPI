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
		
		SQLiteDatabase_OpenParams_Builder(QAndroidJniObject obj);
		// Constructors
		SQLiteDatabase_OpenParams_Builder();
		SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams &arg0);
		
		// Methods
		QAndroidJniObject addOpenFlags(jint arg0);
		QAndroidJniObject build();
		QAndroidJniObject removeOpenFlags(jint arg0);
		QAndroidJniObject setCursorFactory(__JniBaseClass arg0);
		QAndroidJniObject setErrorHandler(__JniBaseClass arg0);
		QAndroidJniObject setIdleConnectionTimeout(jlong arg0);
		QAndroidJniObject setJournalMode(jstring arg0);
		QAndroidJniObject setJournalMode(const QString &arg0);
		QAndroidJniObject setLookasideConfig(jint arg0, jint arg1);
		QAndroidJniObject setOpenFlags(jint arg0);
		QAndroidJniObject setSynchronousMode(jstring arg0);
		QAndroidJniObject setSynchronousMode(const QString &arg0);
	};
} // namespace android::database::sqlite

