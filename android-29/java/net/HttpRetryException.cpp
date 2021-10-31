#include "./HttpRetryException.hpp"

namespace java::net
{
	// Fields
	
	HttpRetryException::HttpRetryException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HttpRetryException::HttpRetryException(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	HttpRetryException::HttpRetryException(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring HttpRetryException::getLocation()
	{
		return __thiz.callObjectMethod(
			"getLocation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpRetryException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint HttpRetryException::responseCode()
	{
		return __thiz.callMethod<jint>(
			"responseCode",
			"()I"
		);
	}
} // namespace java::net

