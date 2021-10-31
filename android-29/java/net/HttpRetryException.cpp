#include "./HttpRetryException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	HttpRetryException::HttpRetryException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	HttpRetryException::HttpRetryException(jstring arg0, jint arg1)
		: java::io::IOException(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	HttpRetryException::HttpRetryException(jstring arg0, jint arg1, jstring arg2)
		: java::io::IOException(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring HttpRetryException::getLocation()
	{
		return callObjectMethod(
			"getLocation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpRetryException::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint HttpRetryException::responseCode()
	{
		return callMethod<jint>(
			"responseCode",
			"()I"
		);
	}
} // namespace java::net

