#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteTableLockedException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteTableLockedException(QAndroidJniObject obj);
		// Constructors
		SQLiteTableLockedException();
		SQLiteTableLockedException(jstring &arg0);
		SQLiteTableLockedException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

