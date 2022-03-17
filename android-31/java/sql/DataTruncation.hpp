#pragma once

#include "../../JThrowable.hpp"
#include "./DataTruncation.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline DataTruncation::DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4)
		: java::sql::SQLWarning(
			"java.sql.DataTruncation",
			"(IZZII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline DataTruncation::DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, JThrowable arg5)
		: java::sql::SQLWarning(
			"java.sql.DataTruncation",
			"(IZZIILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jthrowable>()
		) {}
	
	// Methods
	inline jint DataTruncation::getDataSize() const
	{
		return callMethod<jint>(
			"getDataSize",
			"()I"
		);
	}
	inline jint DataTruncation::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jboolean DataTruncation::getParameter() const
	{
		return callMethod<jboolean>(
			"getParameter",
			"()Z"
		);
	}
	inline jboolean DataTruncation::getRead() const
	{
		return callMethod<jboolean>(
			"getRead",
			"()Z"
		);
	}
	inline jint DataTruncation::getTransferSize() const
	{
		return callMethod<jint>(
			"getTransferSize",
			"()I"
		);
	}
} // namespace java::sql

// Base class headers
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLWarning.hpp"

