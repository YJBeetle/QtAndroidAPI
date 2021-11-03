#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLClientInfoException.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	SQLClientInfoException::SQLClientInfoException(QAndroidJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLClientInfoException::SQLClientInfoException()
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"()V"
		) {}
	SQLClientInfoException::SQLClientInfoException(JObject arg0)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(JString arg0, JObject arg1)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(JObject arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jthrowable>()
		) {}
	SQLClientInfoException::SQLClientInfoException(JString arg0, JString arg1, JObject arg2)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(JString arg0, JObject arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	SQLClientInfoException::SQLClientInfoException(JString arg0, JString arg1, jint arg2, JObject arg3)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		) {}
	SQLClientInfoException::SQLClientInfoException(JString arg0, JString arg1, JObject arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jthrowable>()
		) {}
	SQLClientInfoException::SQLClientInfoException(JString arg0, JString arg1, jint arg2, JObject arg3, JThrowable arg4)
		: java::sql::SQLException(
			"java.sql.SQLClientInfoException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object(),
			arg4.object<jthrowable>()
		) {}
	
	// Methods
	JObject SQLClientInfoException::getFailedProperties() const
	{
		return callObjectMethod(
			"getFailedProperties",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::sql

