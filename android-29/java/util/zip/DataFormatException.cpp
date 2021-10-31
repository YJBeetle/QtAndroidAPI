#include "./DataFormatException.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	DataFormatException::DataFormatException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	DataFormatException::DataFormatException()
		: java::lang::Exception(
			"java.util.zip.DataFormatException",
			"()V"
		) {}
	DataFormatException::DataFormatException(jstring arg0)
		: java::lang::Exception(
			"java.util.zip.DataFormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::zip
