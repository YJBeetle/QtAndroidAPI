#pragma once

#include "./SQLException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLRecoverableException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLRecoverableException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLRecoverableException(QJniObject obj);
		
		// Constructors
		SQLRecoverableException();
		SQLRecoverableException(JString arg0);
		SQLRecoverableException(JThrowable arg0);
		SQLRecoverableException(JString arg0, JString arg1);
		SQLRecoverableException(JString arg0, JThrowable arg1);
		SQLRecoverableException(JString arg0, JString arg1, jint arg2);
		SQLRecoverableException(JString arg0, JString arg1, JThrowable arg2);
		SQLRecoverableException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

