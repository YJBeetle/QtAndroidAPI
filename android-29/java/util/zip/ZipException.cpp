#include "./ZipException.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	ZipException::ZipException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ZipException::ZipException()
		: java::io::IOException(
			"java.util.zip.ZipException",
			"()V"
		) {}
	ZipException::ZipException(jstring arg0)
		: java::io::IOException(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::zip

