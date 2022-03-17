#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLSyntaxErrorException.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline SQLSyntaxErrorException::SQLSyntaxErrorException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"()V"
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JString arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JThrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JString arg0, JString arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JString arg0, JThrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	inline SQLSyntaxErrorException::SQLSyntaxErrorException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLSyntaxErrorException",
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
#include "./SQLNonTransientException.hpp"

