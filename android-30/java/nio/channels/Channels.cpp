#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/Reader.hpp"
#include "../../io/Writer.hpp"
#include "../ByteBuffer.hpp"
#include "../charset/Charset.hpp"
#include "../charset/CharsetDecoder.hpp"
#include "../charset/CharsetEncoder.hpp"
#include "./Channels.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	Channels::Channels(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Channels::newChannel(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newChannel",
			"(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;",
			arg0.object()
		);
	}
	__JniBaseClass Channels::newChannel(java::io::OutputStream arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newChannel",
			"(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;",
			arg0.object()
		);
	}
	java::io::InputStream Channels::newInputStream(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newInputStream",
			"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	java::io::OutputStream Channels::newOutputStream(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newOutputStream",
			"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/OutputStream;",
			arg0.object()
		);
	}
	java::io::Reader Channels::newReader(__JniBaseClass arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;",
			arg0.object(),
			arg1
		);
	}
	java::io::Reader Channels::newReader(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Reader;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::Reader Channels::newReader(__JniBaseClass arg0, java::nio::charset::CharsetDecoder arg1, jint arg2)
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
	java::io::Writer Channels::newWriter(__JniBaseClass arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;",
			arg0.object(),
			arg1
		);
	}
	java::io::Writer Channels::newWriter(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Writer;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::Writer Channels::newWriter(__JniBaseClass arg0, java::nio::charset::CharsetEncoder arg1, jint arg2)
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

