#include "./URISyntaxException.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	URISyntaxException::URISyntaxException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	URISyntaxException::URISyntaxException(jstring arg0, jstring arg1)
		: java::lang::Exception(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	URISyntaxException::URISyntaxException(jstring arg0, jstring arg1, jint arg2)
		: java::lang::Exception(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint URISyntaxException::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring URISyntaxException::getInput()
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URISyntaxException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URISyntaxException::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

