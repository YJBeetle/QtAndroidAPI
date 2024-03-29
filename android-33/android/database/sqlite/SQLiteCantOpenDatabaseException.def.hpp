#pragma once

#include "./SQLiteException.def.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteCantOpenDatabaseException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteCantOpenDatabaseException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteCantOpenDatabaseException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteCantOpenDatabaseException();
		SQLiteCantOpenDatabaseException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

