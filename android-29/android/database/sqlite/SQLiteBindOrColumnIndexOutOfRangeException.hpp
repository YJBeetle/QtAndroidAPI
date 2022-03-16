#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteBindOrColumnIndexOutOfRangeException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteBindOrColumnIndexOutOfRangeException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteBindOrColumnIndexOutOfRangeException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteBindOrColumnIndexOutOfRangeException();
		SQLiteBindOrColumnIndexOutOfRangeException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

