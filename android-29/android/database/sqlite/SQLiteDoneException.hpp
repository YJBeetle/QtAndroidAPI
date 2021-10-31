#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteDoneException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteDoneException(QAndroidJniObject obj);
		// Constructors
		SQLiteDoneException();
		SQLiteDoneException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

