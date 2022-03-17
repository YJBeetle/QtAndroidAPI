#pragma once

#include "../SQLException.def.hpp"

class JString;
class JThrowable;

namespace android::database::sqlite
{
	class SQLiteException : public android::database::SQLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteException(const char *className, const char *sig, Ts...agv) : android::database::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteException(QAndroidJniObject obj) : android::database::SQLException(obj) {}
		
		// Constructors
		SQLiteException();
		SQLiteException(JString arg0);
		SQLiteException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::database::sqlite

