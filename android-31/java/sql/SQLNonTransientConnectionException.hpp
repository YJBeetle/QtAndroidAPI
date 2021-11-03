#pragma once

#include "./SQLNonTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLNonTransientConnectionException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLNonTransientConnectionException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLNonTransientConnectionException(QJniObject obj);
		
		// Constructors
		SQLNonTransientConnectionException();
		SQLNonTransientConnectionException(JString arg0);
		SQLNonTransientConnectionException(JThrowable arg0);
		SQLNonTransientConnectionException(JString arg0, JString arg1);
		SQLNonTransientConnectionException(JString arg0, JThrowable arg1);
		SQLNonTransientConnectionException(JString arg0, JString arg1, jint arg2);
		SQLNonTransientConnectionException(JString arg0, JString arg1, JThrowable arg2);
		SQLNonTransientConnectionException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

