#pragma once

#include "./SQLNonTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLDataException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLDataException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLDataException(QAndroidJniObject obj);
		
		// Constructors
		SQLDataException();
		SQLDataException(JString arg0);
		SQLDataException(JThrowable arg0);
		SQLDataException(JString arg0, JString arg1);
		SQLDataException(JString arg0, JThrowable arg1);
		SQLDataException(JString arg0, JString arg1, jint arg2);
		SQLDataException(JString arg0, JString arg1, JThrowable arg2);
		SQLDataException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

