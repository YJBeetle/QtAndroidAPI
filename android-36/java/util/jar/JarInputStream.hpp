#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "./JarEntry.def.hpp"
#include "./Manifest.def.hpp"
#include "../zip/ZipEntry.def.hpp"
#include "./JarInputStream.def.hpp"

namespace java::util::jar
{
	// Fields
	
	// Constructors
	inline JarInputStream::JarInputStream(java::io::InputStream arg0)
		: java::util::zip::ZipInputStream(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline JarInputStream::JarInputStream(java::io::InputStream arg0, jboolean arg1)
		: java::util::zip::ZipInputStream(
			"java.util.jar.JarInputStream",
			"(Ljava/io/InputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline java::util::jar::Manifest JarInputStream::getManifest() const
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
	inline java::util::zip::ZipEntry JarInputStream::getNextEntry() const
	{
		return callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	inline java::util::jar::JarEntry JarInputStream::getNextJarEntry() const
	{
		return callObjectMethod(
			"getNextJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	inline jint JarInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
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

// Base class headers
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "../zip/InflaterInputStream.hpp"
#include "../zip/ZipInputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::jar;
#endif
