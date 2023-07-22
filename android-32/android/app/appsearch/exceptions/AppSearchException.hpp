#pragma once

#include "../AppSearchResult.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JThrowable.hpp"
#include "./AppSearchException.def.hpp"

namespace android::app::appsearch::exceptions
{
	// Fields
	
	// Constructors
	inline AppSearchException::AppSearchException(jint arg0)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(I)V",
			arg0
		) {}
	inline AppSearchException::AppSearchException(jint arg0, JString arg1)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline AppSearchException::AppSearchException(jint arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jint AppSearchException::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline android::app::appsearch::AppSearchResult AppSearchException::toAppSearchResult() const
	{
		return callObjectMethod(
			"toAppSearchResult",
			"()Landroid/app/appsearch/AppSearchResult;"
		);
	}
} // namespace android::app::appsearch::exceptions

// Base class headers
#include "../../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch::exceptions;
#endif
