#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../util/concurrent/atomic/AtomicReferenceFieldUpdater.hpp"
#include "./SQLException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLException::SQLException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	SQLException::SQLException()
		: java::lang::Exception(
			"java.sql.SQLException",
			"()V"
		) {}
	SQLException::SQLException(JString arg0)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLException::SQLException(JThrowable arg0)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLException::SQLException(JString arg0, JString arg1)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLException::SQLException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLException::SQLException(JString arg0, JString arg1, jint arg2)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLException::SQLException(JString arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLException::SQLException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::lang::Exception(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
	jint SQLException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	java::sql::SQLException SQLException::getNextException()
	{
		return callObjectMethod(
			"getNextException",
			"()Ljava/sql/SQLException;"
		);
	}
	JString SQLException::getSQLState()
	{
		return callObjectMethod(
			"getSQLState",
			"()Ljava/lang/String;"
		);
	}
	JObject SQLException::iterator()
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

