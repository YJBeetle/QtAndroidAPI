#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "./Inflater.def.hpp"
#include "./InflaterInputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline InflaterInputStream::InflaterInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline InflaterInputStream::InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1)
		: java::io::FilterInputStream(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline InflaterInputStream::InflaterInputStream(java::io::InputStream arg0, java::util::zip::Inflater arg1, jint arg2)
		: java::io::FilterInputStream(
			"java.util.zip.InflaterInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline jint InflaterInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	inline void InflaterInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void InflaterInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	inline jboolean InflaterInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	inline jint InflaterInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint InflaterInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void InflaterInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jlong InflaterInputStream::skip(jlong arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif
