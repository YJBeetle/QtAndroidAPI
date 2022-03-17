#pragma once

#include "../../../JIntArray.hpp"
#include "../../io/File.def.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../nio/charset/Charset.def.hpp"
#include "../jar/JarEntry.def.hpp"
#include "./ZipEntry.def.hpp"
#include "./ZipFile.def.hpp"

namespace java::util::zip
{
	// Fields
	inline jint ZipFile::OPEN_DELETE()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipFile",
			"OPEN_DELETE"
		);
	}
	inline jint ZipFile::OPEN_READ()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipFile",
			"OPEN_READ"
		);
	}
	
	// Constructors
	inline ZipFile::ZipFile(java::io::File arg0)
		: JObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline ZipFile::ZipFile(JString arg0)
		: JObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ZipFile::ZipFile(java::io::File arg0, jint arg1)
		: JObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;I)V",
			arg0.object(),
			arg1
		) {}
	inline ZipFile::ZipFile(java::io::File arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ZipFile::ZipFile(JString arg0, java::nio::charset::Charset arg1)
		: JObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline ZipFile::ZipFile(java::io::File arg0, jint arg1, java::nio::charset::Charset arg2)
		: JObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;ILjava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline void ZipFile::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject ZipFile::entries() const
	{
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JString ZipFile::getComment() const
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::zip::ZipEntry ZipFile::getEntry(JString arg0) const
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream ZipFile::getInputStream(java::util::zip::ZipEntry arg0) const
	{
		return callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	inline JString ZipFile::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ZipFile::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject ZipFile::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::zip

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif
