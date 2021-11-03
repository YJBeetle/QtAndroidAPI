#pragma once

#include "./SQLException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLNonTransientException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLNonTransientException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLNonTransientException(QJniObject obj);
		
		// Constructors
		SQLNonTransientException();
		SQLNonTransientException(JString arg0);
		SQLNonTransientException(JThrowable arg0);
		SQLNonTransientException(JString arg0, JString arg1);
		SQLNonTransientException(JString arg0, JThrowable arg1);
		SQLNonTransientException(JString arg0, JString arg1, jint arg2);
		SQLNonTransientException(JString arg0, JString arg1, JThrowable arg2);
		SQLNonTransientException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

