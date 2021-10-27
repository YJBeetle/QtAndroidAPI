#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteDatabaseLockedException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteDatabaseLockedException(QAndroidJniObject obj);
		// Constructors
		SQLiteDatabaseLockedException();
		SQLiteDatabaseLockedException(jstring &arg0);
		SQLiteDatabaseLockedException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

