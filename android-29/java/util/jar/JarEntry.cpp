#include "./Attributes.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarEntry.hpp"

namespace java::util::jar
{
	// Fields
	
	JarEntry::JarEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JarEntry::JarEntry(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JarEntry::JarEntry(java::util::jar::JarEntry &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/util/jar/JarEntry;)V",
			arg0.__jniObject().object()
		);
	}
	JarEntry::JarEntry(java::util::zip::ZipEntry arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JarEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jarray JarEntry::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jarray JarEntry::getCodeSigners()
	{
		return __thiz.callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
	}
	jstring JarEntry::getRealName()
	{
		return __thiz.callObjectMethod(
			"getRealName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::jar

