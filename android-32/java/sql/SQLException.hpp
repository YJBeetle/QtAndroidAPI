#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../util/concurrent/atomic/AtomicReferenceFieldUpdater.def.hpp"
#include "./SQLException.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline SQLException::SQLException()
		: java::lang::Exception(
			"java.sql.SQLException",
			"()V"
		) {}
	inline SQLException::SQLException(JString arg0)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLException::SQLException(JThrowable arg0)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SQLException::SQLException(JString arg0, JString arg1)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline SQLException::SQLException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline SQLException::SQLException(JString arg0, JString arg1, jint arg2)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline SQLException::SQLException(JString arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	inline SQLException::SQLException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
	inline jint SQLException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline java::sql::SQLException SQLException::getNextException() const
	{
		return callObjectMethod(
			"getNextException",
			"()Ljava/sql/SQLException;"
		);
	}
	inline JString SQLException::getSQLState() const
	{
		return callObjectMethod(
			"getSQLState",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SQLException::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void SQLException::setNextException(java::sql::SQLException arg0) const
	{
		callMethod<void>(
			"setNextException",
			"(Ljava/sql/SQLException;)V",
			arg0.object()
		);
	}
} // namespace java::sql

// Base class headers
#include "../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
