#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./BatchUpdateException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	BatchUpdateException::BatchUpdateException(QAndroidJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	BatchUpdateException::BatchUpdateException()
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"()V"
		) {}
	BatchUpdateException::BatchUpdateException(jintArray arg0)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"([I)V",
			arg0
		) {}
	BatchUpdateException::BatchUpdateException(jthrowable arg0)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	BatchUpdateException::BatchUpdateException(jintArray arg0, jthrowable arg1)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"([ILjava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jintArray arg1)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			arg0,
			arg1
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jintArray arg1, jthrowable arg2)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jstring arg1, jintArray arg2)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jstring arg1, jintArray arg2, jthrowable arg3)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jintArray arg3)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[I)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jintArray arg3, jthrowable arg4)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	BatchUpdateException::BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jlongArray arg3, jthrowable arg4)
		: java::sql::SQLException(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[JLjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jlongArray BatchUpdateException::getLargeUpdateCounts()
	{
		return callObjectMethod(
			"getLargeUpdateCounts",
			"()[J"
		).object<jlongArray>();
	}
	jintArray BatchUpdateException::getUpdateCounts()
	{
		return callObjectMethod(
			"getUpdateCounts",
			"()[I"
		).object<jintArray>();
	}
} // namespace java::sql

