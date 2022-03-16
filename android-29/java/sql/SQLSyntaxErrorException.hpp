#pragma once

#include "./SQLNonTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLSyntaxErrorException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLSyntaxErrorException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLSyntaxErrorException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
		
		// Constructors
		SQLSyntaxErrorException();
		SQLSyntaxErrorException(JString arg0);
		SQLSyntaxErrorException(JThrowable arg0);
		SQLSyntaxErrorException(JString arg0, JString arg1);
		SQLSyntaxErrorException(JString arg0, JThrowable arg1);
		SQLSyntaxErrorException(JString arg0, JString arg1, jint arg2);
		SQLSyntaxErrorException(JString arg0, JString arg1, JThrowable arg2);
		SQLSyntaxErrorException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

