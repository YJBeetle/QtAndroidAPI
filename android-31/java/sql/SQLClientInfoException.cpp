#include "./SQLClientInfoException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLClientInfoException::SQLClientInfoException(QJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLClientInfoException::SQLClientInfoException()
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"()V"
		) {}
	SQLClientInfoException::SQLClientInfoException(__JniBaseClass arg0)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(jstring arg0, __JniBaseClass arg1)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(__JniBaseClass arg0, jthrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1
		) {}
	SQLClientInfoException::SQLClientInfoException(jstring arg0, jstring arg1, __JniBaseClass arg2)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(jstring arg0, __JniBaseClass arg1, jthrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	SQLClientInfoException::SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, __JniBaseClass arg3)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(jstring arg0, jstring arg1, __JniBaseClass arg2, jthrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	SQLClientInfoException::SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, __JniBaseClass arg3, jthrowable arg4)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		) {}
	
	// Methods
	__JniBaseClass SQLClientInfoException::getFailedProperties()
	{
		return callObjectMethod(
			"getFailedProperties",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::sql

