#pragma once

#include "./SQLTransientException.def.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLTransientConnectionException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLTransientConnectionException(const char *className, const char *sig, Ts...agv) : java::sql::SQLTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTransientConnectionException(QAndroidJniObject obj) : java::sql::SQLTransientException(obj) {}
		
		// Constructors
		SQLTransientConnectionException();
		SQLTransientConnectionException(JString arg0);
		SQLTransientConnectionException(JThrowable arg0);
		SQLTransientConnectionException(JString arg0, JString arg1);
		SQLTransientConnectionException(JString arg0, JThrowable arg1);
		SQLTransientConnectionException(JString arg0, JString arg1, jint arg2);
		SQLTransientConnectionException(JString arg0, JString arg1, JThrowable arg2);
		SQLTransientConnectionException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

