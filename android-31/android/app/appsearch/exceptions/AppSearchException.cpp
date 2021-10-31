#include "../AppSearchResult.hpp"
#include "./AppSearchException.hpp"

namespace android::app::appsearch::exceptions
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchException::AppSearchException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	AppSearchException::AppSearchException(jint arg0)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(I)V",
			arg0
		) {}
	AppSearchException::AppSearchException(jint arg0, jstring arg1)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	AppSearchException::AppSearchException(jint arg0, jstring arg1, jthrowable arg2)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint AppSearchException::getResultCode()
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	android::app::appsearch::AppSearchResult AppSearchException::toAppSearchResult()
	{
		return callObjectMethod(
			"toAppSearchResult",
			"()Landroid/app/appsearch/AppSearchResult;"
		);
	}
} // namespace android::app::appsearch::exceptions

