#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteAccessPermException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteAccessPermException(QAndroidJniObject obj);
		// Constructors
		SQLiteAccessPermException();
		SQLiteAccessPermException(jstring &arg0);
		SQLiteAccessPermException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

