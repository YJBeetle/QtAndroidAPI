#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class Reader;
}
namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetDecoder;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetEncoder;
}

namespace __jni_impl::java::nio::channels
{
	class Channels : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newChannel(__jni_impl::java::io::InputStream arg0);
		static QAndroidJniObject newChannel(__jni_impl::java::io::OutputStream arg0);
		static QAndroidJniObject newInputStream(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newOutputStream(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newReader(__jni_impl::__JniBaseClass arg0, jstring arg1);
		static QAndroidJniObject newReader(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		static QAndroidJniObject newReader(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		static QAndroidJniObject newReader(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::CharsetDecoder arg1, jint arg2);
		static QAndroidJniObject newWriter(__jni_impl::__JniBaseClass arg0, jstring arg1);
		static QAndroidJniObject newWriter(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		static QAndroidJniObject newWriter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		static QAndroidJniObject newWriter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::CharsetEncoder arg1, jint arg2);
	};
} // namespace __jni_impl::java::nio::channels

#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/Reader.hpp"
#include "../../io/Writer.hpp"
#include "../ByteBuffer.hpp"
#include "../charset/Charset.hpp"
#include "../charset/CharsetDecoder.hpp"
#include "../charset/CharsetEncoder.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void Channels::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.Channels",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Channels::newChannel(__jni_impl::java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newChannel",
			"(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Channels::newChannel(__jni_impl::java::io::OutputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newChannel",
			"(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Channels::newInputStream(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newInputStream",
			"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Channels::newOutputStream(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newOutputStream",
			"(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/OutputStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Channels::newReader(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Channels::newReader(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Channels::newReader(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Reader;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Channels::newReader(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::CharsetDecoder arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newReader",
			"(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;I)Ljava/io/Reader;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Channels::newWriter(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Channels::newWriter(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Channels::newWriter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Writer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Channels::newWriter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::CharsetEncoder arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Channels",
			"newWriter",
			"(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Ljava/io/Writer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class Channels : public __jni_impl::java::nio::channels::Channels
	{
	public:
		Channels(QAndroidJniObject obj) { __thiz = obj; }
		Channels()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

