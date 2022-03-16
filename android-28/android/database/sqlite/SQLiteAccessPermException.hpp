#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteAccessPermException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteAccessPermException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteAccessPermException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteAccessPermException();
		SQLiteAccessPermException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

