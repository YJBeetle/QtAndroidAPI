#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/File.def.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../lang/ThreadLocal.def.hpp"
#include "../../lang/ref/SoftReference.def.hpp"
#include "../../net/URL.def.hpp"
#include "../../security/CodeSource.def.hpp"
#include "./JarEntry.def.hpp"
#include "./Manifest.def.hpp"
#include "../zip/ZipEntry.def.hpp"
#include "./JarFile.def.hpp"

namespace java::util::jar
{
	// Fields
	inline JString JarFile::MANIFEST_NAME()
	{
		return getStaticObjectField(
			"java.util.jar.JarFile",
			"MANIFEST_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline JarFile::JarFile(java::io::File arg0)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline JarFile::JarFile(JString arg0)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline JarFile::JarFile(java::io::File arg0, jboolean arg1)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	inline JarFile::JarFile(JString arg0, jboolean arg1)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZI)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline JarFile::JarFile(java::io::File arg0, jboolean arg1, jint arg2, JObject arg3)
		: java::util::zip::ZipFile(
			"java.util.jar.JarFile",
			"(Ljava/io/File;ZILjava/lang/Runtime$Version;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline JObject JarFile::baseVersion()
	{
		return callStaticObjectMethod(
			"java.util.jar.JarFile",
			"baseVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	inline JObject JarFile::runtimeVersion()
	{
		return callStaticObjectMethod(
			"java.util.jar.JarFile",
			"runtimeVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	inline JObject JarFile::entries() const
	{
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	inline java::util::zip::ZipEntry JarFile::getEntry(JString arg0) const
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream JarFile::getInputStream(java::util::zip::ZipEntry arg0) const
	{
		return callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	inline java::util::jar::JarEntry JarFile::getJarEntry(JString arg0) const
	{
		return callObjectMethod(
			"getJarEntry",
			"(Ljava/lang/String;)Ljava/util/jar/JarEntry;",
			arg0.object<jstring>()
		);
	}
	inline java::util::jar::Manifest JarFile::getManifest() const
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	inline JObject JarFile::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/Runtime$Version;"
		);
	}
	inline jboolean JarFile::isMultiRelease() const
	{
		return callMethod<jboolean>(
			"isMultiRelease",
			"()Z"
		);
	}
	inline JObject JarFile::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline JObject JarFile::versionedStream() const
	{
		return callObjectMethod(
			"versionedStream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::jar

// Base class headers
#include "../zip/ZipFile.hpp"

