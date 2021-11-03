#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteTableLockedException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteTableLockedException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteTableLockedException(QJniObject obj);
		
		// Constructors
		SQLiteTableLockedException();
		SQLiteTableLockedException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

