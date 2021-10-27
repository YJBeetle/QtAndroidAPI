#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams : public __JniBaseClass
	{
	public:
		// Fields
		
		SQLiteDatabase_OpenParams(QAndroidJniObject obj);
		// Constructors
		SQLiteDatabase_OpenParams() = default;
		
		// Methods
		QAndroidJniObject getCursorFactory();
		QAndroidJniObject getErrorHandler();
		jlong getIdleConnectionTimeout();
		jstring getJournalMode();
		jint getLookasideSlotCount();
		jint getLookasideSlotSize();
		jint getOpenFlags();
		jstring getSynchronousMode();
	};
} // namespace android::database::sqlite

