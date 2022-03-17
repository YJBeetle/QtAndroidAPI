#pragma once

#include "../../JCharArray.hpp"
#include "./InputStream.def.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "../nio/charset/CharsetDecoder.def.hpp"
#include "./InputStreamReader.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline InputStreamReader::InputStreamReader(java::io::InputStream arg0)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline InputStreamReader::InputStreamReader(java::io::InputStream arg0, JString arg1)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline InputStreamReader::InputStreamReader(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline InputStreamReader::InputStreamReader(java::io::InputStream arg0, java::nio::charset::CharsetDecoder arg1)
		: java::io::Reader(
			"java.io.InputStreamReader",
			"(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void InputStreamReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JString InputStreamReader::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline jint InputStreamReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	inline jint InputStreamReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean InputStreamReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace java::io

// Base class headers
#include "./Reader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
