#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLTransientException.hpp"


namespace java::sql
{
	class SQLTransactionRollbackException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLTransactionRollbackException(const char *className, const char *sig, Ts...agv) : java::sql::SQLTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTransactionRollbackException(QJniObject obj);
		
		// Constructors
		SQLTransactionRollbackException();
		SQLTransactionRollbackException(jstring arg0);
		SQLTransactionRollbackException(jthrowable arg0);
		SQLTransactionRollbackException(jstring arg0, jstring arg1);
		SQLTransactionRollbackException(jstring arg0, jthrowable arg1);
		SQLTransactionRollbackException(jstring arg0, jstring arg1, jint arg2);
		SQLTransactionRollbackException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLTransactionRollbackException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

