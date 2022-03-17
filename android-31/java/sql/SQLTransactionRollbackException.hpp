#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLTransactionRollbackException.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline SQLTransactionRollbackException::SQLTransactionRollbackException()
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"()V"
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JString arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JThrowable arg0)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JString arg0, JString arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JString arg0, JThrowable arg1)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	inline SQLTransactionRollbackException::SQLTransactionRollbackException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLTransientException(
			"java.sql.SQLTransactionRollbackException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

// Base class headers
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLTransientException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
