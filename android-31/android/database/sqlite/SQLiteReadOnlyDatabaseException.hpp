#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteReadOnlyDatabaseException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteReadOnlyDatabaseException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteReadOnlyDatabaseException(QJniObject obj);
		
		// Constructors
		SQLiteReadOnlyDatabaseException();
		SQLiteReadOnlyDatabaseException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

