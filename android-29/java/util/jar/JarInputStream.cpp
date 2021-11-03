#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "../../../JString.hpp"
#include "./JarEntry.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarInputStream.hpp"

namespace java::util::jar
{
	// Fields
	
	// QJniObject forward
	JarInputStream::JarInputStream(QJniObject obj) : java::util::zip::ZipInputStream(obj) {}
	
	// Constructors
	JarInputStream::JarInputStream(java::io::InputStream arg0)
		: java::util::zip::ZipInputStream(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	JarInputStream::JarInputStream(java::io::InputStream arg0, jboolean arg1)
		: java::util::zip::ZipInputStream(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	java::util::jar::Manifest JarInputStream::getManifest() const
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	java::util::zip::ZipEntry JarInputStream::getNextEntry() const
	{
		return callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	java::util::jar::JarEntry JarInputStream::getNextJarEntry() const
	{
		return callObjectMethod(
			"getNextJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	jint JarInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::jar

