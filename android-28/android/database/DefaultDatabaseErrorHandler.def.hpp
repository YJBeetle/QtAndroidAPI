#pragma once

#include "../../JObject.hpp"

namespace android::database::sqlite
{
	class SQLiteDatabase;
}

namespace android::database
{
	class DefaultDatabaseErrorHandler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DefaultDatabaseErrorHandler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DefaultDatabaseErrorHandler(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DefaultDatabaseErrorHandler();
		
		// Methods
		void onCorruption(android::database::sqlite::SQLiteDatabase arg0) const;
	};
} // namespace android::database

