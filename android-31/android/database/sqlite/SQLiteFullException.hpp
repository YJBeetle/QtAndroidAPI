#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteFullException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteFullException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteFullException(QAndroidJniObject obj);
		
		// Constructors
		SQLiteFullException();
		SQLiteFullException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

