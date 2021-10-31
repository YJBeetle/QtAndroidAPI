#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteCantOpenDatabaseException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteCantOpenDatabaseException(QAndroidJniObject obj);
		// Constructors
		SQLiteCantOpenDatabaseException();
		SQLiteCantOpenDatabaseException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

