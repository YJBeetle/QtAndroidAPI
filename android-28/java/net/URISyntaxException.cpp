#include "../../JString.hpp"
#include "./URISyntaxException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URISyntaxException::URISyntaxException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	URISyntaxException::URISyntaxException(JString arg0, JString arg1)
		: java::lang::Exception(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	URISyntaxException::URISyntaxException(JString arg0, JString arg1, jint arg2)
		: java::lang::Exception(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jint URISyntaxException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString URISyntaxException::getInput() const
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		);
	}
	JString URISyntaxException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JString URISyntaxException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

