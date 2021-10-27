#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLIntegrityConstraintViolationException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		SQLIntegrityConstraintViolationException(QAndroidJniObject obj);
		// Constructors
		SQLIntegrityConstraintViolationException();
		SQLIntegrityConstraintViolationException(jstring &arg0);
		SQLIntegrityConstraintViolationException(const QString &arg0);
		SQLIntegrityConstraintViolationException(jthrowable &arg0);
		SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1);
		SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1);
		SQLIntegrityConstraintViolationException(jstring &arg0, jthrowable &arg1);
		SQLIntegrityConstraintViolationException(const QString &arg0, jthrowable &arg1);
		SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1, jint &arg2);
		SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1, jint &arg2);
		SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1, jthrowable &arg2);
		SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1, jthrowable &arg2);
		SQLIntegrityConstraintViolationException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3);
		SQLIntegrityConstraintViolationException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3);
		
		// Methods
	};
} // namespace java::sql

