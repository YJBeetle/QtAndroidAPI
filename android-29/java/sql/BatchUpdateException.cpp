#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./BatchUpdateException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	BatchUpdateException::BatchUpdateException(QJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	BatchUpdateException::BatchUpdateException()
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"()V"
		) {}
	BatchUpdateException::BatchUpdateException(JIntArray arg0)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	BatchUpdateException::BatchUpdateException(JThrowable arg0)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	BatchUpdateException::BatchUpdateException(JIntArray arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"([ILjava/lang/Throwable;)V",
			arg0.object<jintArray>(),
			arg1.object<jthrowable>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JIntArray arg1)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JIntArray arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>(),
			arg2.object<jthrowable>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, JIntArray arg2)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jintArray>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, JIntArray arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jintArray>(),
			arg3.object<jthrowable>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, jint arg2, JIntArray arg3)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jintArray>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, jint arg2, JIntArray arg3, JThrowable arg4)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jintArray>(),
			arg4.object<jthrowable>()
		) {}
	BatchUpdateException::BatchUpdateException(JString arg0, JString arg1, jint arg2, JLongArray arg3, JThrowable arg4)
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
	JLongArray BatchUpdateException::getLargeUpdateCounts()
	{
		return callObjectMethod(
			"getLargeUpdateCounts",
			"()[J"
		);
	}
	JIntArray BatchUpdateException::getUpdateCounts()
	{
		return callObjectMethod(
			"getUpdateCounts",
			"()[I"
		);
	}
} // namespace java::sql

