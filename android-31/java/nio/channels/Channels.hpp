#pragma once

#include "../../io/InputStream.def.hpp"
#include "../../io/OutputStream.def.hpp"
#include "../../io/Reader.def.hpp"
#include "../../io/Writer.def.hpp"
#include "../../../JString.hpp"
#include "../ByteBuffer.def.hpp"
#include "../charset/Charset.def.hpp"
#include "../charset/CharsetDecoder.def.hpp"
#include "../charset/CharsetEncoder.def.hpp"
#include "./Channels.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Channels::newChannel(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newChannel",
			"(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;",
			arg0.object()
		);
	}
	inline JObject Channels::newChannel(java::io::OutputStream arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newChannel",
			"(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;",
			arg0.object()
		);
	}
	inline java::io::InputStream Channels::newInputStream(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newInputStream",
			"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	inline java::io::OutputStream Channels::newOutputStream(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newOutputStream",
			"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/OutputStream;",
			arg0.object()
		);
	}
	inline java::io::Reader Channels::newReader(JObject arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::io::Reader Channels::newReader(JObject arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Reader;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::io::Reader Channels::newReader(JObject arg0, java::nio::charset::CharsetDecoder arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;I)Ljava/io/Reader;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline java::io::Writer Channels::newWriter(JObject arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::io::Writer Channels::newWriter(JObject arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Writer;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::io::Writer Channels::newWriter(JObject arg0, java::nio::charset::CharsetEncoder arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Ljava/io/Writer;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace java::nio::channels

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
