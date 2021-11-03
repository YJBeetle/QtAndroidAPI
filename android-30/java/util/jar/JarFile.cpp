#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/File.hpp"
#include "../../io/InputStream.hpp"
#include "../../../JString.hpp"
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
	JString JarFile::MANIFEST_NAME()
	{
		return getStaticObjectField(
			"java.util.jar.JarFile",
			"MANIFEST_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	JarFile::JarFile(QJniObject obj) : java::util::zip::ZipFile(obj) {}
	
	// Constructors
	JarFile::JarFile(java::io::File arg0)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	JarFile::JarFile(JString arg0)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	JarFile::JarFile(java::io::File arg0, jboolean arg1)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	JarFile::JarFile(JString arg0, jboolean arg1)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
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
	JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2, JObject arg3)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZILjava/lang/Runtime$Version;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	JObject JarFile::baseVersion()
	{
		return callStaticObjectMethod(
			"java.util.jar.JarFile",
			"baseVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	JObject JarFile::runtimeVersion()
	{
		return callStaticObjectMethod(
			"java.util.jar.JarFile",
			"runtimeVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	JObject JarFile::entries() const
	{
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	java::util::zip::ZipEntry JarFile::getEntry(JString arg0) const
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0.object<jstring>()
		);
	}
	java::io::InputStream JarFile::getInputStream(java::util::zip::ZipEntry arg0) const
	{
		return callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	java::util::jar::JarEntry JarFile::getJarEntry(JString arg0) const
	{
		return callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			arg0.object<jstring>()
		);
	}
	java::util::jar::Manifest JarFile::getManifest() const
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	JObject JarFile::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	jboolean JarFile::isMultiRelease() const
	{
		return callMethod<jboolean>(
			"isMultiRelease",
			"()Z"
		);
	}
	JObject JarFile::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	JObject JarFile::versionedStream() const
	{
		return callObjectMethod(
			"versionedStream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::jar

