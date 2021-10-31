#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteDatabase_OpenParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabase_OpenParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getCursorFactory();
		__JniBaseClass getErrorHandler();
		jlong getIdleConnectionTimeout();
		jstring getJournalMode();
		jint getLookasideSlotCount();
		jint getLookasideSlotSize();
		jint getOpenFlags();
		jstring getSynchronousMode();
	};
} // namespace android::database::sqlite

