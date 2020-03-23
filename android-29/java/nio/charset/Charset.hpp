#pragma once

#ifndef JAVA_NIO_CHARSET_CHARSET
#define JAVA_NIO_CHARSET_CHARSET

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::charset::spi
{
	class CharsetProvider;
}
namespace __jni_impl::java::lang
{
	class ThreadLocal;
}
namespace __jni_impl::java::nio
{
	class CharBuffer;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetEncoder;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetDecoder;
}

namespace __jni_impl::java::nio::charset
{
	class Charset : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject name();
		static QAndroidJniObject forName(jstring arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::charset::Charset arg0);
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0);
		QAndroidJniObject encode(__jni_impl::java::nio::CharBuffer arg0);
		QAndroidJniObject encode(jstring arg0);
		jboolean canEncode();
		jboolean contains(__jni_impl::java::nio::charset::Charset arg0);
		jboolean isRegistered();
		static QAndroidJniObject defaultCharset();
		static jboolean isSupported(jstring arg0);
		QAndroidJniObject newEncoder();
		QAndroidJniObject aliases();
		static QAndroidJniObject availableCharsets();
		QAndroidJniObject displayName();
		QAndroidJniObject displayName(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject newDecoder();
	};
} // namespace __jni_impl::java::nio::charset

#include "spi/CharsetProvider.hpp"
#include "../../lang/ThreadLocal.hpp"
#include "../CharBuffer.hpp"
#include "../ByteBuffer.hpp"
#include "CharsetEncoder.hpp"
#include "../../util/Locale.hpp"
#include "CharsetDecoder.hpp"

namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void Charset::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.Charset",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Charset::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Charset::forName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"forName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0);
	}
	jboolean Charset::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Charset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Charset::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Charset::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint Charset::compareTo(__jni_impl::java::nio::charset::Charset arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/charset/Charset;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Charset::decode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Charset::encode(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Charset::encode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jboolean Charset::canEncode()
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"()Z");
	}
	jboolean Charset::contains(__jni_impl::java::nio::charset::Charset arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/nio/charset/Charset;)Z",
			arg0.__jniObject().object());
	}
	jboolean Charset::isRegistered()
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"()Z");
	}
	QAndroidJniObject Charset::defaultCharset()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"defaultCharset",
			"()Ljava/nio/charset/Charset;");
	}
	jboolean Charset::isSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.charset.Charset",
			"isSupported",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject Charset::newEncoder()
	{
		return __thiz.callObjectMethod(
			"newEncoder",
			"()Ljava/nio/charset/CharsetEncoder;");
	}
	QAndroidJniObject Charset::aliases()
	{
		return __thiz.callObjectMethod(
			"aliases",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject Charset::availableCharsets()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"availableCharsets",
			"()Ljava/util/SortedMap;");
	}
	QAndroidJniObject Charset::displayName()
	{
		return __thiz.callObjectMethod(
			"displayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Charset::displayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"displayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Charset::newDecoder()
	{
		return __thiz.callObjectMethod(
			"newDecoder",
			"()Ljava/nio/charset/CharsetDecoder;");
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class Charset : public __jni_impl::java::nio::charset::Charset
	{
	public:
		Charset(QAndroidJniObject obj) { __thiz = obj; }
		Charset()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_CHARSET

