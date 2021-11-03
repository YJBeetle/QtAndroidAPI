#include "../AppSearchResult.hpp"
#include "../../../../JString.hpp"
#include "../../../../JThrowable.hpp"
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
	AppSearchException::AppSearchException(jint arg0, JString arg1)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	AppSearchException::AppSearchException(jint arg0, JString arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.app.appsearch.exceptions.AppSearchException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	jint AppSearchException::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	android::app::appsearch::AppSearchResult AppSearchException::toAppSearchResult() const
	{
		return callObjectMethod(
			"toAppSearchResult",
			"()Landroid/app/appsearch/AppSearchResult;"
		);
	}
} // namespace android::app::appsearch::exceptions

