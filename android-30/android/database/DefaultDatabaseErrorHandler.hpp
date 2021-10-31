#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::database::sqlite
{
	class SQLiteDatabase;
}

namespace android::database
{
	class DefaultDatabaseErrorHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DefaultDatabaseErrorHandler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DefaultDatabaseErrorHandler(QAndroidJniObject obj);
		
		// Constructors
		DefaultDatabaseErrorHandler();
		
		// Methods
		void onCorruption(android::database::sqlite::SQLiteDatabase arg0);
	};
} // namespace android::database

