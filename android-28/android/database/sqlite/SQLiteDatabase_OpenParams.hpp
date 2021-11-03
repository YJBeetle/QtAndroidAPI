#pragma once

#include "../../../JObject.hpp"

class JString;

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
		JString getJournalMode();
		jint getLookasideSlotCount();
		jint getLookasideSlotSize();
		jint getOpenFlags();
		JString getSynchronousMode();
	};
} // namespace android::database::sqlite

