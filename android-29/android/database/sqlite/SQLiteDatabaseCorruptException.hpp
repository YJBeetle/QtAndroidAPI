#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteDatabaseCorruptException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteDatabaseCorruptException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatabaseCorruptException(QJniObject obj);
		
		// Constructors
		SQLiteDatabaseCorruptException();
		SQLiteDatabaseCorruptException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

