#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteDatatypeMismatchException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteDatatypeMismatchException(QAndroidJniObject obj);
		// Constructors
		SQLiteDatatypeMismatchException();
		SQLiteDatatypeMismatchException(jstring &arg0);
		SQLiteDatatypeMismatchException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

