#pragma once

#ifndef JAVA_SQL_BATCHUPDATEEXCEPTION
#define JAVA_SQL_BATCHUPDATEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::sql
{
	class BatchUpdateException : public __jni_impl::java::sql::SQLException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jintArray arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jintArray arg0, jthrowable arg1);
		void __constructor(jstring arg0, jintArray arg1);
		void __constructor(const QString &arg0, jintArray arg1);
		void __constructor(jstring arg0, jintArray arg1, jthrowable arg2);
		void __constructor(const QString &arg0, jintArray arg1, jthrowable arg2);
		void __constructor(jstring arg0, jstring arg1, jintArray arg2);
		void __constructor(const QString &arg0, const QString &arg1, jintArray arg2);
		void __constructor(jstring arg0, jstring arg1, jintArray arg2, jthrowable arg3);
		void __constructor(const QString &arg0, const QString &arg1, jintArray arg2, jthrowable arg3);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jintArray arg3);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jintArray arg3);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jintArray arg3, jthrowable arg4);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jintArray arg3, jthrowable arg4);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jlongArray arg3, jthrowable arg4);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, jlongArray arg3, jthrowable arg4);
		
		// Methods
		jlongArray getLargeUpdateCounts();
		jintArray getUpdateCounts();
	};
} // namespace __jni_impl::java::sql

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void BatchUpdateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"()V"
		);
	}
	void BatchUpdateException::__constructor(jintArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"([I)V",
			arg0
		);
	}
	void BatchUpdateException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void BatchUpdateException::__constructor(jintArray arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"([ILjava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void BatchUpdateException::__constructor(jstring arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			arg0,
			arg1
		);
	}
	void BatchUpdateException::__constructor(const QString &arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BatchUpdateException::__constructor(jstring arg0, jintArray arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BatchUpdateException::__constructor(const QString &arg0, jintArray arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;[ILjava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void BatchUpdateException::__constructor(jstring arg0, jstring arg1, jintArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BatchUpdateException::__constructor(const QString &arg0, const QString &arg1, jintArray arg2)
	{
		__thiz = QAndroidJniObject(
			"java.sql.BatchUpdateException",
			"(Ljava/lang/String;Ljava/lang/String;[I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void BatchUpdateException::__constructor(jstring arg0, jstring arg1, jintArray arg2, jthrowable arg3)
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
	void BatchUpdateException::__constructor(const QString &arg0, const QString &arg1, jintArray arg2, jthrowable arg3)
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
	void BatchUpdateException::__constructor(jstring arg0, jstring arg1, jint arg2, jintArray arg3)
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
	void BatchUpdateException::__constructor(const QString &arg0, const QString &arg1, jint arg2, jintArray arg3)
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
	void BatchUpdateException::__constructor(jstring arg0, jstring arg1, jint arg2, jintArray arg3, jthrowable arg4)
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
	void BatchUpdateException::__constructor(const QString &arg0, const QString &arg1, jint arg2, jintArray arg3, jthrowable arg4)
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
	void BatchUpdateException::__constructor(jstring arg0, jstring arg1, jint arg2, jlongArray arg3, jthrowable arg4)
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
	void BatchUpdateException::__constructor(const QString &arg0, const QString &arg1, jint arg2, jlongArray arg3, jthrowable arg4)
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
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class BatchUpdateException : public __jni_impl::java::sql::BatchUpdateException
	{
	public:
		BatchUpdateException(QAndroidJniObject obj) { __thiz = obj; }
		BatchUpdateException()
		{
			__constructor();
		}
		BatchUpdateException(jintArray arg0)
		{
			__constructor(
				arg0);
		}
		BatchUpdateException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		BatchUpdateException(jintArray arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BatchUpdateException(jstring arg0, jintArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BatchUpdateException(jstring arg0, jintArray arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BatchUpdateException(jstring arg0, jstring arg1, jintArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		BatchUpdateException(jstring arg0, jstring arg1, jintArray arg2, jthrowable arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jintArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jintArray arg3, jthrowable arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jlongArray arg3, jthrowable arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_BATCHUPDATEEXCEPTION

