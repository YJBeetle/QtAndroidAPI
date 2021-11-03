#include "../../../JString.hpp"
#include "./InvalidPathException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidPathException::InvalidPathException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	InvalidPathException::InvalidPathException(JString arg0, JString arg1)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	InvalidPathException::InvalidPathException(JString arg0, JString arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jint InvalidPathException::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString InvalidPathException::getInput()
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		);
	}
	JString InvalidPathException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JString InvalidPathException::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

