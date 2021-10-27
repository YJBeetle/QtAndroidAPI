#pragma once

#ifndef JAVA_SQL_DATATRUNCATION
#define JAVA_SQL_DATATRUNCATION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "SQLException.hpp"
#include "SQLWarning.hpp"


namespace __jni_impl::java::sql
{
	class DataTruncation : public __jni_impl::java::sql::SQLWarning
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4);
		void __constructor(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, jthrowable arg5);
		
		// Methods
		jint getDataSize();
		jint getIndex();
		jboolean getParameter();
		jboolean getRead();
		jint getTransferSize();
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void DataTruncation::__constructor(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DataTruncation",
			"(IZZII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void DataTruncation::__constructor(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, jthrowable arg5)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DataTruncation",
			"(IZZIILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	jint DataTruncation::getDataSize()
	{
		return __thiz.callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	jint DataTruncation::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jboolean DataTruncation::getParameter()
	{
		return __thiz.callMethod<jboolean>(
			"getParameter",
			"()Z"
		);
	}
	jboolean DataTruncation::getRead()
	{
		return __thiz.callMethod<jboolean>(
			"getRead",
			"()Z"
		);
	}
	jint DataTruncation::getTransferSize()
	{
		return __thiz.callMethod<jint>(
			"getTransferSize",
			"()I"
		);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class DataTruncation : public __jni_impl::java::sql::DataTruncation
	{
	public:
		DataTruncation(QAndroidJniObject obj) { __thiz = obj; }
		DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, jthrowable arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_DATATRUNCATION

