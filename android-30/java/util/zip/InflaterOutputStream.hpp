#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.def.hpp"
#include "./Inflater.def.hpp"
#include "./InflaterOutputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline InflaterOutputStream::InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1, jint arg2)
		: java::io::FilterOutputStream(
			"java.util.zip.InflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Inflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void InflaterOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void InflaterOutputStream::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline void InflaterOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void InflaterOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void InflaterOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

// Base class headers
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"

