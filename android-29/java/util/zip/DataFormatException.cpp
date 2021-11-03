#include "../../../JString.hpp"
#include "./DataFormatException.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	DataFormatException::DataFormatException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	DataFormatException::DataFormatException()
		: java::lang::Exception(
			"java.util.zip.DataFormatException",
			"()V"
		) {}
	DataFormatException::DataFormatException(JString arg0)
		: java::lang::Exception(
			"java.util.zip.DataFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::zip

