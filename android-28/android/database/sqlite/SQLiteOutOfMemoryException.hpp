#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteOutOfMemoryException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteOutOfMemoryException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteOutOfMemoryException(QJniObject obj);
		
		// Constructors
		SQLiteOutOfMemoryException();
		SQLiteOutOfMemoryException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

