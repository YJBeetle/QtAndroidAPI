#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLSyntaxErrorException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		SQLSyntaxErrorException(QAndroidJniObject obj);
		// Constructors
		SQLSyntaxErrorException();
		SQLSyntaxErrorException(jstring &arg0);
		SQLSyntaxErrorException(const QString &arg0);
		SQLSyntaxErrorException(jthrowable &arg0);
		SQLSyntaxErrorException(jstring &arg0, jstring &arg1);
		SQLSyntaxErrorException(const QString &arg0, const QString &arg1);
		SQLSyntaxErrorException(jstring &arg0, jthrowable &arg1);
		SQLSyntaxErrorException(const QString &arg0, jthrowable &arg1);
		SQLSyntaxErrorException(jstring &arg0, jstring &arg1, jint &arg2);
		SQLSyntaxErrorException(const QString &arg0, const QString &arg1, jint &arg2);
		SQLSyntaxErrorException(jstring &arg0, jstring &arg1, jthrowable &arg2);
		SQLSyntaxErrorException(const QString &arg0, const QString &arg1, jthrowable &arg2);
		SQLSyntaxErrorException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3);
		SQLSyntaxErrorException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3);
		
		// Methods
	};
} // namespace java::sql

