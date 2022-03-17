#pragma once

#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./BatchUpdateException.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline BatchUpdateException::BatchUpdateException()
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"()V"
		) {}
	inline BatchUpdateException::BatchUpdateException(JIntArray arg0)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JThrowable arg0)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JIntArray arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"([ILjava/lang/Throwable;)V",
			arg0.object<jintArray>(),
			arg1.object<jthrowable>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JIntArray arg1)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JIntArray arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>(),
			arg2.object<jthrowable>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, JIntArray arg2)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jintArray>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, JIntArray arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jintArray>(),
			arg3.object<jthrowable>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, jint arg2, JIntArray arg3)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jintArray>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, jint arg2, JIntArray arg3, JThrowable arg4)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jintArray>(),
			arg4.object<jthrowable>()
		) {}
	inline BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, jint arg2, JLongArray arg3, JThrowable arg4)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[JLjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jlongArray>(),
			arg4.object<jthrowable>()
		) {}
	
	// Methods
	inline JLongArray BatchUpdateException::getLargeUpdateCounts() const
	{
		return callObjectMethod(
			"getLargeUpdateCounts",
			"()[J"
		);
	}
	inline JIntArray BatchUpdateException::getUpdateCounts() const
	{
		return callObjectMethod(
			"getUpdateCounts",
			"()[I"
		);
	}
} // namespace java::sql

// Base class headers
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
