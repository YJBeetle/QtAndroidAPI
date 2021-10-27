#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteOutOfMemoryException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteOutOfMemoryException(QAndroidJniObject obj);
		// Constructors
		SQLiteOutOfMemoryException();
		SQLiteOutOfMemoryException(jstring &arg0);
		SQLiteOutOfMemoryException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

