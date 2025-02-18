#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.def.hpp"
#include "./Deflater.def.hpp"
#include "./DeflaterOutputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, jboolean arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		) {}
	inline DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jboolean arg2)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline DeflaterOutputStream::DeflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Deflater arg1, jint arg2, jboolean arg3)
		: java::io::FilterOutputStream(
			"java.util.zip.DeflaterOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Deflater;IZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void DeflaterOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void DeflaterOutputStream::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline void DeflaterOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline void DeflaterOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	inline void DeflaterOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif
