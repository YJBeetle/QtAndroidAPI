#include "./DataTruncation.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	DataTruncation::DataTruncation(QJniObject obj) : java::sql::SQLWarning(obj) {}
	
	// Constructors
	DataTruncation::DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4)
		: java::sql::SQLWarning(
			"java.sql.DataTruncation",
			"(IZZII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	DataTruncation::DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, jthrowable arg5)
		: java::sql::SQLWarning(
			"java.sql.DataTruncation",
			"(IZZIILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jint DataTruncation::getDataSize()
	{
		return callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	jint DataTruncation::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jboolean DataTruncation::getParameter()
	{
		return callMethod<jboolean>(
			"getParameter",
			"()Z"
		);
	}
	jboolean DataTruncation::getRead()
	{
		return callMethod<jboolean>(
			"getRead",
			"()Z"
		);
	}
	jint DataTruncation::getTransferSize()
	{
		return callMethod<jint>(
			"getTransferSize",
			"()I"
		);
	}
} // namespace java::sql

