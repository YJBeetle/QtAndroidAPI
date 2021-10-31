#include "./JarException.hpp"

namespace java::util::jar
{
	// Fields
	
	// QJniObject forward
	JarException::JarException(QJniObject obj) : java::util::zip::ZipException(obj) {}
	
	// Constructors
	JarException::JarException()
		: java::util::zip::ZipException(
			"java.util.jar.JarException",
			"()V"
		) {}
	JarException::JarException(jstring arg0)
		: java::util::zip::ZipException(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::jar

