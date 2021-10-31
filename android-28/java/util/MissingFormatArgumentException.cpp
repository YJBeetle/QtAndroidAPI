#include "./MissingFormatArgumentException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	MissingFormatArgumentException::MissingFormatArgumentException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	MissingFormatArgumentException::MissingFormatArgumentException(jstring arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring MissingFormatArgumentException::getFormatSpecifier()
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingFormatArgumentException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

