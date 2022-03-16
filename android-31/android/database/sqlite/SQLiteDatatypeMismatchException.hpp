#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteDatatypeMismatchException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteDatatypeMismatchException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteDatatypeMismatchException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteDatatypeMismatchException();
		SQLiteDatatypeMismatchException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

