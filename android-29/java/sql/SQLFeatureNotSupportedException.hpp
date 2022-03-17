#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLFeatureNotSupportedException.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException()
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"()V"
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JThrowable arg0)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JThrowable arg1)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	inline SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLNonTransientException(
			"java.sql.SQLFeatureNotSupportedException",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
