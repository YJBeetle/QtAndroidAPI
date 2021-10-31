#include "../../io/File.hpp"
#include "../../io/InputStream.hpp"
#include "../../lang/ThreadLocal.hpp"
#include "../../lang/ref/SoftReference.hpp"
#include "../../net/URL.hpp"
#include "../../security/CodeSource.hpp"
#include "./JarEntry.hpp"
#include "./Manifest.hpp"
#include "../zip/ZipEntry.hpp"
#include "./JarFile.hpp"

namespace java::util::jar
{
	// Fields
	jstring JarFile::MANIFEST_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.jar.JarFile",
			"MANIFEST_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	JarFile::JarFile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JarFile::JarFile(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	JarFile::JarFile(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JarFile::JarFile(java::io::File arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	JarFile::JarFile(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2, __JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZILjava/lang/Runtime$Version;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JarFile::baseVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.JarFile",
			"baseVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	QAndroidJniObject JarFile::runtimeVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.jar.JarFile",
			"runtimeVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	QAndroidJniObject JarFile::entries()
	{
		return __thiz.callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject JarFile::getEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::getInputStream(java::util::zip::ZipEntry arg0)
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JarFile::getJarEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::getManifest()
	{
		return __thiz.callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarFile::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	jboolean JarFile::isMultiRelease()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiRelease",
			"()Z"
		);
	}
	QAndroidJniObject JarFile::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject JarFile::versionedStream()
	{
		return __thiz.callObjectMethod(
			"versionedStream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::jar

