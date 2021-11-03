#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Attributes.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarEntry.hpp"

namespace java::util::jar
{
	// Fields
	
	// QJniObject forward
	JarEntry::JarEntry(QJniObject obj) : java::util::zip::ZipEntry(obj) {}
	
	// Constructors
	JarEntry::JarEntry(JString arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	java::util::jar::Attributes JarEntry::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	JArray JarEntry::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JArray JarEntry::getCodeSigners() const
	{
		return callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		);
	}
	JString JarEntry::getRealName() const
	{
		return callObjectMethod(
			"getRealName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::jar

