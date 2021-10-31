#include "./URISyntaxException.hpp"

namespace java::net
{
	// Fields
	
	URISyntaxException::URISyntaxException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	URISyntaxException::URISyntaxException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	URISyntaxException::URISyntaxException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint URISyntaxException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring URISyntaxException::getInput()
	{
		return __thiz.callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URISyntaxException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URISyntaxException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

