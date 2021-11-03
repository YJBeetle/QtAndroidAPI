#include "../../../JString.hpp"
#include "./ZipException.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	ZipException::ZipException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ZipException::ZipException()
		: java::io::IOException(
			"java.util.zip.ZipException",
			"()V"
		) {}
	ZipException::ZipException(JString arg0)
		: java::io::IOException(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::zip

