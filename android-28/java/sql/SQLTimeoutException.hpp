#pragma once

#include "./SQLTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLTimeoutException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLTimeoutException(const char *className, const char *sig, Ts...agv) : java::sql::SQLTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTimeoutException(QAndroidJniObject obj) : java::sql::SQLTransientException(obj) {}
		
		// Constructors
		SQLTimeoutException();
		SQLTimeoutException(JString arg0);
		SQLTimeoutException(JThrowable arg0);
		SQLTimeoutException(JString arg0, JString arg1);
		SQLTimeoutException(JString arg0, JThrowable arg1);
		SQLTimeoutException(JString arg0, JString arg1, jint arg2);
		SQLTimeoutException(JString arg0, JString arg1, JThrowable arg2);
		SQLTimeoutException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

