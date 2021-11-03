#pragma once

#include "../../../JObject.hpp"


namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteDatabase_OpenParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabase_OpenParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getCursorFactory();
		JObject getErrorHandler();
		jlong getIdleConnectionTimeout();
		jstring getJournalMode();
		jint getLookasideSlotCount();
		jint getLookasideSlotSize();
		jint getOpenFlags();
		jstring getSynchronousMode();
	};
} // namespace android::database::sqlite

