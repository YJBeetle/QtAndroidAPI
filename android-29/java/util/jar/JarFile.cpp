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
	
	// QAndroidJniObject forward
	JarFile::JarFile(QAndroidJniObject obj) : java::util::zip::ZipFile(obj) {}
	
	// Constructors
	JarFile::JarFile(java::io::File arg0)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	JarFile::JarFile(jstring arg0)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	JarFile::JarFile(java::io::File arg0, jboolean arg1)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	JarFile::JarFile(jstring arg0, jboolean arg1)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZI)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2, __JniBaseClass arg3)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZILjava/lang/Runtime$Version;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
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
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject JarFile::getEntry(jstring arg0)
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::getInputStream(java::util::zip::ZipEntry arg0)
	{
		return callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	QAndroidJniObject JarFile::getJarEntry(jstring arg0)
	{
		return callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			arg0
		);
	}
	QAndroidJniObject JarFile::getManifest()
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	QAndroidJniObject JarFile::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	jboolean JarFile::isMultiRelease()
	{
		return callMethod<jboolean>(
			"isMultiRelease",
			"()Z"
		);
	}
	QAndroidJniObject JarFile::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject JarFile::versionedStream()
	{
		return callObjectMethod(
			"versionedStream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::jar

