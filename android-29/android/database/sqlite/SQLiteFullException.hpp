#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteFullException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		SQLiteFullException(QAndroidJniObject obj);
		// Constructors
		SQLiteFullException();
		SQLiteFullException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

