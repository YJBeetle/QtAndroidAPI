#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLNonTransientConnectionException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		SQLNonTransientConnectionException(QAndroidJniObject obj);
		// Constructors
		SQLNonTransientConnectionException();
		SQLNonTransientConnectionException(jstring &arg0);
		SQLNonTransientConnectionException(const QString &arg0);
		SQLNonTransientConnectionException(jthrowable &arg0);
		SQLNonTransientConnectionException(jstring &arg0, jstring &arg1);
		SQLNonTransientConnectionException(const QString &arg0, const QString &arg1);
		SQLNonTransientConnectionException(jstring &arg0, jthrowable &arg1);
		SQLNonTransientConnectionException(const QString &arg0, jthrowable &arg1);
		SQLNonTransientConnectionException(jstring &arg0, jstring &arg1, jint &arg2);
		SQLNonTransientConnectionException(const QString &arg0, const QString &arg1, jint &arg2);
		SQLNonTransientConnectionException(jstring &arg0, jstring &arg1, jthrowable &arg2);
		SQLNonTransientConnectionException(const QString &arg0, const QString &arg1, jthrowable &arg2);
		SQLNonTransientConnectionException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3);
		SQLNonTransientConnectionException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3);
		
		// Methods
	};
} // namespace java::sql

