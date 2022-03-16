#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteOutOfMemoryException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteOutOfMemoryException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteOutOfMemoryException(QAndroidJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
		
		// Constructors
		SQLiteOutOfMemoryException();
		SQLiteOutOfMemoryException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

