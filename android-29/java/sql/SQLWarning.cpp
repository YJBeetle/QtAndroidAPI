#include "./SQLWarning.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLWarning::SQLWarning(QAndroidJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLWarning::SQLWarning()
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"()V"
		) {}
	SQLWarning::SQLWarning(jstring arg0)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLWarning::SQLWarning(jthrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SQLWarning::SQLWarning(jstring arg0, jstring arg1)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SQLWarning::SQLWarning(jstring arg0, jthrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	SQLWarning::SQLWarning(jstring arg0, jstring arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLWarning::SQLWarning(jstring arg0, jstring arg1, jthrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	SQLWarning::SQLWarning(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLWarning",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	QAndroidJniObject SQLWarning::getNextWarning()
	{
		return callObjectMethod(
			"getNextWarning",
			"()Ljava/sql/SQLWarning;"
		);
	}
	void SQLWarning::setNextWarning(java::sql::SQLWarning arg0)
	{
		callMethod<void>(
			"setNextWarning",
			"(Ljava/sql/SQLWarning;)V",
			arg0.object()
		);
	}
} // namespace java::sql

