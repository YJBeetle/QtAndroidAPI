#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteReadOnlyDatabaseException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteReadOnlyDatabaseException(QAndroidJniObject obj);
		// Constructors
		SQLiteReadOnlyDatabaseException();
		SQLiteReadOnlyDatabaseException(jstring &arg0);
		SQLiteReadOnlyDatabaseException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

