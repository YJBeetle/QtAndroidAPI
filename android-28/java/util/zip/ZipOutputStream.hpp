#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/OutputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../nio/charset/Charset.def.hpp"
#include "../HashSet.def.hpp"
#include "../Vector.def.hpp"
#include "./CRC32.def.hpp"
#include "./ZipEntry.def.hpp"
#include "./ZipOutputStream.def.hpp"

namespace java::util::zip
{
	// Fields
	inline jint ZipOutputStream::DEFLATED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"DEFLATED"
		);
	}
	inline jint ZipOutputStream::STORED()
	{
		return getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"STORED"
		);
	}
	
	// Constructors
	inline ZipOutputStream::ZipOutputStream(java::io::OutputStream arg0)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline ZipOutputStream::ZipOutputStream(java::io::OutputStream arg0, java::nio::charset::Charset arg1)
		: java::util::zip::DeflaterOutputStream(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void ZipOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ZipOutputStream::closeEntry() const
	{
		callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	inline void ZipOutputStream::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline void ZipOutputStream::putNextEntry(java::util::zip::ZipEntry arg0) const
	{
		callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.object()
		);
	}
	inline void ZipOutputStream::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ZipOutputStream::setLevel(jint arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	inline void ZipOutputStream::setMethod(jint arg0) const
	{
		callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	inline void ZipOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
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
#include "./DeflaterOutputStream.hpp"

