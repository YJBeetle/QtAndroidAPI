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
		
		DefaultDatabaseErrorHandler(QAndroidJniObject obj);
		// Constructors
		DefaultDatabaseErrorHandler();
		
		// Methods
		void onCorruption(android::database::sqlite::SQLiteDatabase arg0);
	};
} // namespace android::database

