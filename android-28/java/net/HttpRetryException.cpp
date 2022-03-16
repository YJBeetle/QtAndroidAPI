#include "../../JString.hpp"
#include "./HttpRetryException.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	HttpRetryException::HttpRetryException(JString arg0, jint arg1)
		: java::io::IOException(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	HttpRetryException::HttpRetryException(JString arg0, jint arg1, JString arg2)
		: java::io::IOException(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	JString HttpRetryException::getLocation() const
	{
		return callObjectMethod(
			"getLocation",
			"()Ljava/lang/String;"
		);
	}
	JString HttpRetryException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	jint HttpRetryException::responseCode() const
	{
		return callMethod<jint>(
			"responseCode",
			"()I"
		);
	}
} // namespace java::net

