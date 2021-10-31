#include "./SQLDataException.hpp"

namespace java::sql
{
	// Fields
	
	SQLDataException::SQLDataException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLDataException::SQLDataException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"()V"
		);
	}
	SQLDataException::SQLDataException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLDataException::SQLDataException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLDataException::SQLDataException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLDataException::SQLDataException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLDataException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

