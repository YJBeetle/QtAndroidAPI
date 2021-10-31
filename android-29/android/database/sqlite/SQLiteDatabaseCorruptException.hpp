#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteDatabaseCorruptException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteDatabaseCorruptException(QAndroidJniObject obj);
		// Constructors
		SQLiteDatabaseCorruptException();
		SQLiteDatabaseCorruptException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

