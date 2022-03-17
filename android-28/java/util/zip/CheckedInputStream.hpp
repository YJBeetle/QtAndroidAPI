#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "./CheckedInputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline CheckedInputStream::CheckedInputStream(java::io::InputStream arg0, JObject arg1)
		: java::io::FilterInputStream(
			"java.util.zip.CheckedInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject CheckedInputStream::getChecksum() const
	{
		return callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	inline jint CheckedInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint CheckedInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jlong CheckedInputStream::skip(jlong arg0) const
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

