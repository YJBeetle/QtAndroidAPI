#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchResult.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint AppSearchResult::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_INTERNAL_ERROR"
		);
	}
	inline jint AppSearchResult::RESULT_INVALID_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_INVALID_ARGUMENT"
		);
	}
	inline jint AppSearchResult::RESULT_INVALID_SCHEMA()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_INVALID_SCHEMA"
		);
	}
	inline jint AppSearchResult::RESULT_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_IO_ERROR"
		);
	}
	inline jint AppSearchResult::RESULT_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_NOT_FOUND"
		);
	}
	inline jint AppSearchResult::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_OK"
		);
	}
	inline jint AppSearchResult::RESULT_OUT_OF_SPACE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_OUT_OF_SPACE"
		);
	}
	inline jint AppSearchResult::RESULT_SECURITY_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_SECURITY_ERROR"
		);
	}
	inline jint AppSearchResult::RESULT_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_UNKNOWN_ERROR"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::appsearch::AppSearchResult AppSearchResult::newFailedResult(jint arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.AppSearchResult",
			"newFailedResult",
			"(ILjava/lang/String;)Landroid/app/appsearch/AppSearchResult;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline android::app::appsearch::AppSearchResult AppSearchResult::newSuccessfulResult(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.AppSearchResult",
			"newSuccessfulResult",
			"(Ljava/lang/Object;)Landroid/app/appsearch/AppSearchResult;",
			arg0.object<jobject>()
		);
	}
	inline jboolean AppSearchResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AppSearchResult::getErrorMessage() const
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jint AppSearchResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline JObject AppSearchResult::getResultValue() const
	{
		return callObjectMethod(
			"getResultValue",
			"()Ljava/lang/Object;"
		);
	}
	inline jint AppSearchResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AppSearchResult::isSuccess() const
	{
		return callMethod<jboolean>(
			"isSuccess",
			"()Z"
		);
	}
	inline JString AppSearchResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
