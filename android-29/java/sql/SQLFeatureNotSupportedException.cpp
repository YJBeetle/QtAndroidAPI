#include "./SQLFeatureNotSupportedException.hpp"

namespace java::sql
{
	// Fields
	
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"()V"
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	SQLFeatureNotSupportedException::SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.SQLFeatureNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::sql

