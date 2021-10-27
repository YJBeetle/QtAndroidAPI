#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./BatchUpdateException.hpp"

namespace java::sql
{
	// Fields
	
	BatchUpdateException::BatchUpdateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BatchUpdateException::BatchUpdateException()
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"()V"
		);
	}
	BatchUpdateException::BatchUpdateException(jintArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"([I)V",
			arg0
		);
	}
	BatchUpdateException::BatchUpdateException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	BatchUpdateException::BatchUpdateException(jintArray &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"([ILjava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jintArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			arg0,
			arg1
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, jintArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jintArray &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, jintArray &arg1, jthrowable &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jstring &arg1, jintArray &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, const QString &arg1, jintArray &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jstring &arg1, jintArray &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, const QString &arg1, jintArray &arg2, jthrowable &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jstring &arg1, jint &arg2, jintArray &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[I)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, const QString &arg1, jint &arg2, jintArray &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jstring &arg1, jint &arg2, jintArray &arg3, jthrowable &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, const QString &arg1, jint &arg2, jintArray &arg3, jthrowable &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4
		);
	}
	BatchUpdateException::BatchUpdateException(jstring &arg0, jstring &arg1, jint &arg2, jlongArray &arg3, jthrowable &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[JLjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	BatchUpdateException::BatchUpdateException(const QString &arg0, const QString &arg1, jint &arg2, jlongArray &arg3, jthrowable &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;I[JLjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jlongArray BatchUpdateException::getLargeUpdateCounts()
	{
		return __thiz.callObjectMethod(
			"getLargeUpdateCounts",
			"()[J"
		).object<jlongArray>();
	}
	jintArray BatchUpdateException::getUpdateCounts()
	{
		return __thiz.callObjectMethod(
			"getUpdateCounts",
			"()[I"
		).object<jintArray>();
	}
} // namespace java::sql

