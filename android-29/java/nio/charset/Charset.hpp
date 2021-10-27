#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ThreadLocal;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio
{
	class CharBuffer;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetDecoder;
}
namespace __jni_impl::java::nio::charset
{
	class CharsetEncoder;
}
namespace __jni_impl::java::nio::charset::spi
{
	class CharsetProvider;
}
namespace __jni_impl::java::util
{
	class Locale;
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
		static QAndroidJniObject availableCharsets();
		static QAndroidJniObject defaultCharset();
		static QAndroidJniObject forName(jstring arg0);
		static QAndroidJniObject forName(const QString &arg0);
		static jboolean isSupported(jstring arg0);
		static jboolean isSupported(const QString &arg0);
		QAndroidJniObject aliases();
		jboolean canEncode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::charset::Charset arg0);
		jboolean contains(__jni_impl::java::nio::charset::Charset arg0);
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0);
		jstring displayName();
		jstring displayName(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject encode(jstring arg0);
		QAndroidJniObject encode(const QString &arg0);
		QAndroidJniObject encode(__jni_impl::java::nio::CharBuffer arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean isRegistered();
		jstring name();
		QAndroidJniObject newDecoder();
		QAndroidJniObject newEncoder();
		jstring toString();
	};
} // namespace __jni_impl::java::nio::charset

#include "../../lang/ThreadLocal.hpp"
#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "CharsetDecoder.hpp"
#include "CharsetEncoder.hpp"
#include "spi/CharsetProvider.hpp"
#include "../../util/Locale.hpp"

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
	QAndroidJniObject Charset::availableCharsets()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"availableCharsets",
			"()Ljava/util/SortedMap;"
		);
	}
	QAndroidJniObject Charset::defaultCharset()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"defaultCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject Charset::forName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"forName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0
		);
	}
	QAndroidJniObject Charset::forName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.charset.Charset",
			"forName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Charset::isSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.charset.Charset",
			"isSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Charset::isSupported(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.charset.Charset",
			"isSupported",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Charset::aliases()
	{
		return __thiz.callObjectMethod(
			"aliases",
			"()Ljava/util/Set;"
		);
	}
	jboolean Charset::canEncode()
	{
		return __thiz.callMethod<jboolean>(
			"canEncode",
			"()Z"
		);
	}
	jint Charset::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Charset::compareTo(__jni_impl::java::nio::charset::Charset arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/charset/Charset;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean Charset::contains(__jni_impl::java::nio::charset::Charset arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/nio/charset/Charset;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Charset::decode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object()
		);
	}
	jstring Charset::displayName()
	{
		return __thiz.callObjectMethod(
			"displayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Charset::displayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"displayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Charset::encode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	QAndroidJniObject Charset::encode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Charset::encode(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	jboolean Charset::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Charset::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Charset::isRegistered()
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jstring Charset::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Charset::newDecoder()
	{
		return __thiz.callObjectMethod(
			"newDecoder",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	QAndroidJniObject Charset::newEncoder()
	{
		return __thiz.callObjectMethod(
			"newEncoder",
			"()Ljava/nio/charset/CharsetEncoder;"
		);
	}
	jstring Charset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

