#include "../../io/OutputStream.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarOutputStream.hpp"

namespace java::util::jar
{
	// Fields
	
	JarOutputStream::JarOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JarOutputStream::JarOutputStream(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	JarOutputStream::JarOutputStream(java::io::OutputStream &arg0, java::util::jar::Manifest &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/jar/Manifest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void JarOutputStream::putNextEntry(java::util::zip::ZipEntry arg0)
	{
		__thiz.callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::jar

