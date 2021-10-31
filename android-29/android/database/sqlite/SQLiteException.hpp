#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"


namespace android::database::sqlite
{
	class SQLiteException : public android::database::SQLException
	{
	public:
		// Fields
		
		SQLiteException(QAndroidJniObject obj);
		// Constructors
		SQLiteException();
		SQLiteException(jstring arg0);
		SQLiteException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::database::sqlite

