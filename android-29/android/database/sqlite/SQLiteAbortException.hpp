#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteAbortException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteAbortException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteAbortException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteAbortException();
		SQLiteAbortException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

