#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteDoneException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteDoneException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDoneException(QJniObject obj);
		
		// Constructors
		SQLiteDoneException();
		SQLiteDoneException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

