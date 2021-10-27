#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteBindOrColumnIndexOutOfRangeException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteBindOrColumnIndexOutOfRangeException(QAndroidJniObject obj);
		// Constructors
		SQLiteBindOrColumnIndexOutOfRangeException();
		SQLiteBindOrColumnIndexOutOfRangeException(jstring &arg0);
		SQLiteBindOrColumnIndexOutOfRangeException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

