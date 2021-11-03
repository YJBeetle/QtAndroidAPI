#include "../../../JString.hpp"
#include "./JarException.hpp"

namespace java::util::jar
{
	// Fields
	
	// QAndroidJniObject forward
	JarException::JarException(QAndroidJniObject obj) : java::util::zip::ZipException(obj) {}
	
	// Constructors
	JarException::JarException()
		: java::util::zip::ZipException(
			"java.util.jar.JarException",
			"()V"
		) {}
	JarException::JarException(JString arg0)
		: java::util::zip::ZipException(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::jar

