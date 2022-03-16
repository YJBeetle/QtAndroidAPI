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
		SQLiteDatabase_OpenParams(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getCursorFactory() const;
		JObject getErrorHandler() const;
		jlong getIdleConnectionTimeout() const;
		JString getJournalMode() const;
		jint getLookasideSlotCount() const;
		jint getLookasideSlotSize() const;
		jint getOpenFlags() const;
		JString getSynchronousMode() const;
	};
} // namespace android::database::sqlite

