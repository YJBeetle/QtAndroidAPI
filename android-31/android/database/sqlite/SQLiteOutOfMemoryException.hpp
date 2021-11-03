#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


namespace android::database::sqlite
{
	class SQLiteOutOfMemoryException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteOutOfMemoryException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteOutOfMemoryException(QAndroidJniObject obj);
		
		// Constructors
		SQLiteOutOfMemoryException();
		SQLiteOutOfMemoryException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

