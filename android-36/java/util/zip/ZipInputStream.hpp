#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../io/OutputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../nio/charset/Charset.def.hpp"
#include "./CRC32.def.hpp"
#include "./ZipEntry.def.hpp"
#include "./ZipInputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline ZipInputStream::ZipInputStream(java::io::InputStream arg0)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline ZipInputStream::ZipInputStream(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint ZipInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void ZipInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ZipInputStream::closeEntry() const
	{
		callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	inline java::util::zip::ZipEntry ZipInputStream::getNextEntry() const
	{
		return callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	inline jint ZipInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint ZipInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JByteArray ZipInputStream::readAllBytes() const
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		);
	}
	inline JByteArray ZipInputStream::readNBytes(jint arg0) const
	{
		return callObjectMethod(
			"readNBytes",
			"(I)[B",
			arg0
		);
	}
	inline jint ZipInputStream::readNBytes(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jlong ZipInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	inline void ZipInputStream::skipNBytes(jlong arg0) const
	{
		callMethod<void>(
			"skipNBytes",
			"(J)V",
			arg0
		);
	}
	inline jlong ZipInputStream::transferTo(java::io::OutputStream arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::util::zip

// Base class headers
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "./InflaterInputStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif
