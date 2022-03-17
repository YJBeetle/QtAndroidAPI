#pragma once

#include "../../../JObject.hpp"

namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams;
}
class JString;

namespace android::database::sqlite
{
	class SQLiteDatabase_OpenParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteDatabase_OpenParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabase_OpenParams_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SQLiteDatabase_OpenParams_Builder();
		SQLiteDatabase_OpenParams_Builder(android::database::sqlite::SQLiteDatabase_OpenParams arg0);
		
		// Methods
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder addOpenFlags(jint arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams build() const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder removeOpenFlags(jint arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setCursorFactory(JObject arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setErrorHandler(JObject arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setIdleConnectionTimeout(jlong arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setJournalMode(JString arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setLookasideConfig(jint arg0, jint arg1) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setOpenFlags(jint arg0) const;
		android::database::sqlite::SQLiteDatabase_OpenParams_Builder setSynchronousMode(JString arg0) const;
	};
} // namespace android::database::sqlite

