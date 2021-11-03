#pragma once

#include "./SQLTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLTransactionRollbackException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLTransactionRollbackException(const char *className, const char *sig, Ts...agv) : java::sql::SQLTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTransactionRollbackException(QAndroidJniObject obj);
		
		// Constructors
		SQLTransactionRollbackException();
		SQLTransactionRollbackException(JString arg0);
		SQLTransactionRollbackException(JThrowable arg0);
		SQLTransactionRollbackException(JString arg0, JString arg1);
		SQLTransactionRollbackException(JString arg0, JThrowable arg1);
		SQLTransactionRollbackException(JString arg0, JString arg1, jint arg2);
		SQLTransactionRollbackException(JString arg0, JString arg1, JThrowable arg2);
		SQLTransactionRollbackException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

