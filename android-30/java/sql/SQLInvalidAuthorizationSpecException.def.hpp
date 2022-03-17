#pragma once

#include "./SQLNonTransientException.def.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLInvalidAuthorizationSpecException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLInvalidAuthorizationSpecException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLInvalidAuthorizationSpecException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
		
		// Constructors
		SQLInvalidAuthorizationSpecException();
		SQLInvalidAuthorizationSpecException(JString arg0);
		SQLInvalidAuthorizationSpecException(JThrowable arg0);
		SQLInvalidAuthorizationSpecException(JString arg0, JString arg1);
		SQLInvalidAuthorizationSpecException(JString arg0, JThrowable arg1);
		SQLInvalidAuthorizationSpecException(JString arg0, JString arg1, jint arg2);
		SQLInvalidAuthorizationSpecException(JString arg0, JString arg1, JThrowable arg2);
		SQLInvalidAuthorizationSpecException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

