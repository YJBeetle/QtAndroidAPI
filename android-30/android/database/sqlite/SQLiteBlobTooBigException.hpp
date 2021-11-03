#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteBlobTooBigException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteBlobTooBigException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteBlobTooBigException(QAndroidJniObject obj);
		
		// Constructors
		SQLiteBlobTooBigException();
		SQLiteBlobTooBigException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

