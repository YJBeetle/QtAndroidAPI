#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLFeatureNotSupportedException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		SQLFeatureNotSupportedException(QAndroidJniObject obj);
		// Constructors
		SQLFeatureNotSupportedException();
		SQLFeatureNotSupportedException(jstring &arg0);
		SQLFeatureNotSupportedException(const QString &arg0);
		SQLFeatureNotSupportedException(jthrowable &arg0);
		SQLFeatureNotSupportedException(jstring &arg0, jstring &arg1);
		SQLFeatureNotSupportedException(const QString &arg0, const QString &arg1);
		SQLFeatureNotSupportedException(jstring &arg0, jthrowable &arg1);
		SQLFeatureNotSupportedException(const QString &arg0, jthrowable &arg1);
		SQLFeatureNotSupportedException(jstring &arg0, jstring &arg1, jint &arg2);
		SQLFeatureNotSupportedException(const QString &arg0, const QString &arg1, jint &arg2);
		SQLFeatureNotSupportedException(jstring &arg0, jstring &arg1, jthrowable &arg2);
		SQLFeatureNotSupportedException(const QString &arg0, const QString &arg1, jthrowable &arg2);
		SQLFeatureNotSupportedException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3);
		SQLFeatureNotSupportedException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3);
		
		// Methods
	};
} // namespace java::sql

