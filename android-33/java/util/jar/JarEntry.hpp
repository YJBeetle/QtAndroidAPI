#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Attributes.def.hpp"
#include "../zip/ZipEntry.def.hpp"
#include "./JarEntry.def.hpp"

namespace java::util::jar
{
	// Fields
	
	// Constructors
	inline JarEntry::JarEntry(JString arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline JarEntry::JarEntry(java::util::jar::JarEntry &arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/util/jar/JarEntry;)V",
			arg0.object()
		) {}
	inline JarEntry::JarEntry(java::util::zip::ZipEntry arg0)
		: java::util::zip::ZipEntry(
			"java.util.jar.JarEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::util::jar::Attributes JarEntry::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	inline JArray JarEntry::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JArray JarEntry::getCodeSigners() const
	{
		return callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		);
	}
	inline JString JarEntry::getRealName() const
	{
		return callObjectMethod(
			"getRealName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::jar

// Base class headers
#include "../zip/ZipEntry.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::jar;
#endif
