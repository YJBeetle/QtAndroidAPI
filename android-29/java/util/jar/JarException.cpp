#include "./JarException.hpp"

namespace java::util::jar
{
	// Fields
	
	JarException::JarException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JarException::JarException()
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarException",
			"()V"
		);
	}
	JarException::JarException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util::jar

