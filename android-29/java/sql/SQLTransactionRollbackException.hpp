#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLTransientException.hpp"


namespace java::sql
{
	class SQLTransactionRollbackException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		SQLTransactionRollbackException(QAndroidJniObject obj);
		// Constructors
		SQLTransactionRollbackException();
		SQLTransactionRollbackException(jstring &arg0);
		SQLTransactionRollbackException(const QString &arg0);
		SQLTransactionRollbackException(jthrowable &arg0);
		SQLTransactionRollbackException(jstring &arg0, jstring &arg1);
		SQLTransactionRollbackException(const QString &arg0, const QString &arg1);
		SQLTransactionRollbackException(jstring &arg0, jthrowable &arg1);
		SQLTransactionRollbackException(const QString &arg0, jthrowable &arg1);
		SQLTransactionRollbackException(jstring &arg0, jstring &arg1, jint &arg2);
		SQLTransactionRollbackException(const QString &arg0, const QString &arg1, jint &arg2);
		SQLTransactionRollbackException(jstring &arg0, jstring &arg1, jthrowable &arg2);
		SQLTransactionRollbackException(const QString &arg0, const QString &arg1, jthrowable &arg2);
		SQLTransactionRollbackException(jstring &arg0, jstring &arg1, jint &arg2, jthrowable &arg3);
		SQLTransactionRollbackException(const QString &arg0, const QString &arg1, jint &arg2, jthrowable &arg3);
		
		// Methods
	};
} // namespace java::sql

