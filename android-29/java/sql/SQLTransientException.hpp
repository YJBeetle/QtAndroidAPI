#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"


namespace java::sql
{
	class SQLTransientException : public java::sql::SQLException
	{
	public:
		// Fields
		
		SQLTransientException(QAndroidJniObject obj);
		// Constructors
		SQLTransientException();
		SQLTransientException(jstring &arg0);
		SQLTransientException(const QString &arg0);
		SQLTransientException(jthrowable &arg0);
		SQLTransientException(jstring &arg0, jstring &arg1);
		SQLTransientException(const QString &arg0, const QString &arg1);
		SQLTransientException(jstring &arg0, jthrowable &arg1);
		SQLTransientException(const QString &arg0, jthrowable &arg1);
		SQLTransientException(jstring &arg0, jstring &arg1, jint &arg2);
		SQLTransientException(const QString &arg0, const QString &arg1, jint &arg2);
		SQLTransientException(jstring &arg0, jstring &arg1, jthrowable &arg2);
		SQLTransientException(const QString &arg0, const QString &arg1, jthrowable &arg2);
		SQLTransientException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3);
		SQLTransientException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3);
		
		// Methods
	};
} // namespace java::sql

