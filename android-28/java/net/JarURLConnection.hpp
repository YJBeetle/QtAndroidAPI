#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./URL.def.hpp"
#include "./URLConnection.def.hpp"
#include "../util/jar/Attributes.def.hpp"
#include "../util/jar/JarEntry.def.hpp"
#include "../util/jar/JarFile.def.hpp"
#include "../util/jar/Manifest.def.hpp"
#include "./JarURLConnection.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::jar::Attributes JarURLConnection::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	inline JArray JarURLConnection::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JString JarURLConnection::getEntryName() const
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::jar::JarEntry JarURLConnection::getJarEntry() const
	{
		return callObjectMethod(
			"getJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	inline java::util::jar::JarFile JarURLConnection::getJarFile() const
	{
		return callObjectMethod(
			"getJarFile",
			"()Ljava/util/jar/JarFile;"
		);
	}
	inline java::net::URL JarURLConnection::getJarFileURL() const
	{
		return callObjectMethod(
			"getJarFileURL",
			"()Ljava/net/URL;"
		);
	}
	inline java::util::jar::Attributes JarURLConnection::getMainAttributes() const
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	inline java::util::jar::Manifest JarURLConnection::getManifest() const
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
} // namespace java::net

// Base class headers
#include "./URLConnection.hpp"

