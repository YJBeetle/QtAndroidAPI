#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "./Deflater.def.hpp"
#include "./DeflaterInputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1)
		: java::io::FilterInputStream(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DeflaterInputStream::DeflaterInputStream(java::io::InputStream arg0, java::util::zip::Deflater arg1, jint arg2)
		: java::io::FilterInputStream(
			"java.util.zip.DeflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline jint DeflaterInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void DeflaterInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void DeflaterInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean DeflaterInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint DeflaterInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint DeflaterInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void DeflaterInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong DeflaterInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip

// Base class headers
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"

