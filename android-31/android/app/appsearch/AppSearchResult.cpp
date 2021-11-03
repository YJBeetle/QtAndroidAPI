#include "./AppSearchResult.hpp"

namespace android::app::appsearch
{
	// Fields
	jint AppSearchResult::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_INTERNAL_ERROR"
		);
	}
	jint AppSearchResult::RESULT_INVALID_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_INVALID_ARGUMENT"
		);
	}
	jint AppSearchResult::RESULT_INVALID_SCHEMA()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_INVALID_SCHEMA"
		);
	}
	jint AppSearchResult::RESULT_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_IO_ERROR"
		);
	}
	jint AppSearchResult::RESULT_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_NOT_FOUND"
		);
	}
	jint AppSearchResult::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_OK"
		);
	}
	jint AppSearchResult::RESULT_OUT_OF_SPACE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_OUT_OF_SPACE"
		);
	}
	jint AppSearchResult::RESULT_SECURITY_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_SECURITY_ERROR"
		);
	}
	jint AppSearchResult::RESULT_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchResult",
			"RESULT_UNKNOWN_ERROR"
		);
	}
	
	// QAndroidJniObject forward
	AppSearchResult::AppSearchResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::appsearch::AppSearchResult AppSearchResult::newFailedResult(jint arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.AppSearchResult",
			"newFailedResult",
			"(ILjava/lang/String;)Landroid/app/appsearch/AppSearchResult;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::AppSearchResult AppSearchResult::newSuccessfulResult(jobject arg0)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.AppSearchResult",
			"newSuccessfulResult",
			"(Ljava/lang/Object;)Landroid/app/appsearch/AppSearchResult;",
			arg0
		);
	}
	jboolean AppSearchResult::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AppSearchResult::getErrorMessage()
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppSearchResult::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	jobject AppSearchResult::getResultValue()
	{
		return callObjectMethod(
			"getResultValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint AppSearchResult::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AppSearchResult::isSuccess()
	{
		return callMethod<jboolean>(
			"isSuccess",
			"()Z"
		);
	}
	jstring AppSearchResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

