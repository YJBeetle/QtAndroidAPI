#include "../../io/InputStream.hpp"
#include "./JarEntry.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarInputStream.hpp"

namespace java::util::jar
{
	// Fields
	
	JarInputStream::JarInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JarInputStream::JarInputStream(java::io::InputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	JarInputStream::JarInputStream(java::io::InputStream &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject JarInputStream::getManifest()
	{
		return __thiz.callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarInputStream::getNextEntry()
	{
		return __thiz.callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	QAndroidJniObject JarInputStream::getNextJarEntry()
	{
		return __thiz.callObjectMethod(
			"getNextJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	jint JarInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::jar

