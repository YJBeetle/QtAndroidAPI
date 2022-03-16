#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.def.hpp"
#include "./Manifest.def.hpp"
#include "../zip/ZipEntry.def.hpp"
#include "./JarOutputStream.def.hpp"

namespace java::util::jar
{
	// Fields
	
	// Constructors
	inline JarOutputStream::JarOutputStream(java::io::OutputStream arg0)
		: java::util::zip::ZipOutputStream(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline JarOutputStream::JarOutputStream(java::io::OutputStream arg0, java::util::jar::Manifest arg1)
		: java::util::zip::ZipOutputStream(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/jar/Manifest;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void JarOutputStream::putNextEntry(java::util::zip::ZipEntry arg0) const
	{
		callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		);
	}
} // namespace java::util::jar

// Base class headers
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"
#include "../zip/DeflaterOutputStream.hpp"
#include "../zip/ZipOutputStream.hpp"

