#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLInvalidAuthorizationSpecException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		SQLInvalidAuthorizationSpecException(QAndroidJniObject obj);
		// Constructors
		SQLInvalidAuthorizationSpecException();
		SQLInvalidAuthorizationSpecException(jstring arg0);
		SQLInvalidAuthorizationSpecException(jthrowable arg0);
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1);
		SQLInvalidAuthorizationSpecException(jstring arg0, jthrowable arg1);
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2);
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLInvalidAuthorizationSpecException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

