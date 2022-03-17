#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "./CRC32.def.hpp"
#include "./GZIPInputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	inline jint GZIPInputStream::GZIP_MAGIC()
	{
		return getStaticField<jint>(
			"java.util.zip.GZIPInputStream",
			"GZIP_MAGIC"
		);
	}
	
	// Constructors
	inline GZIPInputStream::GZIPInputStream(java::io::InputStream arg0)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline GZIPInputStream::GZIPInputStream(java::io::InputStream arg0, jint arg1)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void GZIPInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint GZIPInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

// Base class headers
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"
#include "./InflaterInputStream.hpp"

