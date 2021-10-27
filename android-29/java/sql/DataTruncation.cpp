#include "./DataTruncation.hpp"

namespace java::sql
{
	// Fields
	
	DataTruncation::DataTruncation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DataTruncation::DataTruncation(jint &arg0, jboolean &arg1, jboolean &arg2, jint &arg3, jint &arg4)
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
	DataTruncation::DataTruncation(jint &arg0, jboolean &arg1, jboolean &arg2, jint &arg3, jint &arg4, jthrowable &arg5)
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
} // namespace java::sql

