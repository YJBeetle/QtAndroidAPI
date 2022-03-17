#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLWarning.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline SQLWarning::SQLWarning()
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"()V"
		) {}
	inline SQLWarning::SQLWarning(JString arg0)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLWarning::SQLWarning(JThrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SQLWarning::SQLWarning(JString arg0, JString arg1)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline SQLWarning::SQLWarning(JString arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline SQLWarning::SQLWarning(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline SQLWarning::SQLWarning(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	inline SQLWarning::SQLWarning(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
	inline java::sql::SQLWarning SQLWarning::getNextWarning() const
	{
		return callObjectMethod(
			"getNextWarning",
			"()Ljava/sql/SQLWarning;"
		);
	}
	inline void SQLWarning::setNextWarning(java::sql::SQLWarning arg0) const
	{
		callMethod<void>(
			"setNextWarning",
			"(Ljava/sql/SQLWarning;)V",
			arg0.object()
		);
	}
} // namespace java::sql

// Base class headers
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
