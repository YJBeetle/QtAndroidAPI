#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"


namespace java::sql
{
	class SQLRecoverableException : public java::sql::SQLException
	{
	public:
		// Fields
		
		SQLRecoverableException(QAndroidJniObject obj);
		// Constructors
		SQLRecoverableException();
		SQLRecoverableException(jstring arg0);
		SQLRecoverableException(jthrowable arg0);
		SQLRecoverableException(jstring arg0, jstring arg1);
		SQLRecoverableException(jstring arg0, jthrowable arg1);
		SQLRecoverableException(jstring arg0, jstring arg1, jint arg2);
		SQLRecoverableException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLRecoverableException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

