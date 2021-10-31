#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../SQLException.hpp"
#include "./SQLiteException.hpp"


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
		SQLiteBlobTooBigException(jstring arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

