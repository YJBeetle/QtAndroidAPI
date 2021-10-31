#include "./InvalidPathException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	InvalidPathException::InvalidPathException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	InvalidPathException::InvalidPathException(jstring arg0, jstring arg1)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	InvalidPathException::InvalidPathException(jstring arg0, jstring arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
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
	jstring InvalidPathException::getInput()
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InvalidPathException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InvalidPathException::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file

