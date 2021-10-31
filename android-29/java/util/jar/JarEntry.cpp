#include "./Attributes.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarEntry.hpp"

namespace java::util::jar
{
	// Fields
	
	// QAndroidJniObject forward
	JarEntry::JarEntry(QAndroidJniObject obj) : java::util::zip::ZipEntry(obj) {}
	
	// Constructors
	JarEntry::JarEntry(jstring arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	JarEntry::JarEntry(java::util::jar::JarEntry &arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/util/jar/JarEntry;)V",
			arg0.object()
		) {}
	JarEntry::JarEntry(java::util::zip::ZipEntry arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject JarEntry::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jarray JarEntry::getCertificates()
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jarray JarEntry::getCodeSigners()
	{
		return callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
	}
	jstring JarEntry::getRealName()
	{
		return callObjectMethod(
			"getRealName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::jar

