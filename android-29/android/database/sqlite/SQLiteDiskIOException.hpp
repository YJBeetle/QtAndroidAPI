#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteDiskIOException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteDiskIOException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDiskIOException(QAndroidJniObject obj);
		
		// Constructors
		SQLiteDiskIOException();
		SQLiteDiskIOException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

