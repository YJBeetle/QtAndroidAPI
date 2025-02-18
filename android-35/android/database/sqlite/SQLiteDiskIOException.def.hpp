#pragma once

#include "./SQLiteException.def.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteDiskIOException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteDiskIOException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDiskIOException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteDiskIOException();
		SQLiteDiskIOException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

