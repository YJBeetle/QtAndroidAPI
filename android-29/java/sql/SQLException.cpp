#include "../util/concurrent/atomic/AtomicReferenceFieldUpdater.hpp"
#include "./SQLException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLException::SQLException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	SQLException::SQLException()
		: java::lang::Exception(
			"java.sql.SQLException",
			"()V"
		) {}
	SQLException::SQLException(jstring arg0)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLException::SQLException(jthrowable arg0)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLException::SQLException(jstring arg0, jstring arg1)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLException::SQLException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLException::SQLException(jstring arg0, jstring arg1, jint arg2)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLException::SQLException(jstring arg0, jstring arg1, jthrowable arg2)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLException::SQLException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint SQLException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	QAndroidJniObject SQLException::getNextException()
	{
		return callObjectMethod(
			"getNextException",
			"()Ljava/sql/SQLException;"
		);
	}
	jstring SQLException::getSQLState()
	{
		return callObjectMethod(
			"getSQLState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SQLException::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	void SQLException::setNextException(java::sql::SQLException arg0)
	{
		callMethod<void>(
			"setNextException",
			"(Ljava/sql/SQLException;)V",
			arg0.object()
		);
	}
} // namespace java::sql

