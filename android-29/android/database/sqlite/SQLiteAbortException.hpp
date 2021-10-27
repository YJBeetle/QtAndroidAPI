#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteAbortException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteAbortException(QAndroidJniObject obj);
		// Constructors
		SQLiteAbortException();
		SQLiteAbortException(jstring &arg0);
		SQLiteAbortException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

