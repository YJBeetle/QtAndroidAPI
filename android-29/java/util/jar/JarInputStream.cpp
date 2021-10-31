#include "../../io/InputStream.hpp"
#include "./JarEntry.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarInputStream.hpp"

namespace java::util::jar
{
	// Fields
	
	// QAndroidJniObject forward
	JarInputStream::JarInputStream(QAndroidJniObject obj) : java::util::zip::ZipInputStream(obj) {}
	
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
	QAndroidJniObject JarInputStream::getManifest()
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarInputStream::getNextEntry()
	{
		return callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	QAndroidJniObject JarInputStream::getNextJarEntry()
	{
		return callObjectMethod(
			"getNextJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	jint JarInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::jar

