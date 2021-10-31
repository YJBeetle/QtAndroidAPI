#include "../util/concurrent/atomic/AtomicReferenceFieldUpdater.hpp"
#include "./SQLException.hpp"

namespace java::sql
{
	// Fields
	
	SQLException::SQLException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLException::SQLException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"()V"
		);
	}
	SQLException::SQLException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLException::SQLException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLException::SQLException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLException::SQLException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLException::SQLException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLException::SQLException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLException::SQLException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jint SQLException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	QAndroidJniObject SQLException::getNextException()
	{
		return __thiz.callObjectMethod(
			"getNextException",
			"()Ljava/sql/SQLException;"
		);
	}
	jstring SQLException::getSQLState()
	{
		return __thiz.callObjectMethod(
			"getSQLState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SQLException::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	void SQLException::setNextException(java::sql::SQLException arg0)
	{
		__thiz.callMethod<void>(
			"setNextException",
			"(Ljava/sql/SQLException;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::sql

