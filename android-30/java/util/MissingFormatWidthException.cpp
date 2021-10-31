#include "./MissingFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	MissingFormatWidthException::MissingFormatWidthException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	MissingFormatWidthException::MissingFormatWidthException(jstring arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring MissingFormatWidthException::getFormatSpecifier()
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingFormatWidthException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

