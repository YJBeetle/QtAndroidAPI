#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLTransientException.hpp"


namespace java::sql
{
	class SQLTransientConnectionException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		SQLTransientConnectionException(QAndroidJniObject obj);
		// Constructors
		SQLTransientConnectionException();
		SQLTransientConnectionException(jstring arg0);
		SQLTransientConnectionException(jthrowable arg0);
		SQLTransientConnectionException(jstring arg0, jstring arg1);
		SQLTransientConnectionException(jstring arg0, jthrowable arg1);
		SQLTransientConnectionException(jstring arg0, jstring arg1, jint arg2);
		SQLTransientConnectionException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLTransientConnectionException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

