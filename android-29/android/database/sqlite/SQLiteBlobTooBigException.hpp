#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteBlobTooBigException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteBlobTooBigException(QAndroidJniObject obj);
		// Constructors
		SQLiteBlobTooBigException();
		SQLiteBlobTooBigException(jstring &arg0);
		SQLiteBlobTooBigException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

