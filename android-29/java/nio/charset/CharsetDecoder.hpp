#pragma once

#ifndef JAVA_NIO_CHARSET_CHARSETDECODER
#define JAVA_NIO_CHARSET_CHARSETDECODER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::nio::charset
{
	class CodingErrorAction;
}
namespace __jni_impl::java::nio::charset
{
	class CoderResult;
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
	class CharsetDecoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::CharBuffer arg1, jboolean arg2);
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0);
		QAndroidJniObject charset();
		QAndroidJniObject replacement();
		QAndroidJniObject flush(__jni_impl::java::nio::CharBuffer arg0);
		QAndroidJniObject reset();
		QAndroidJniObject onMalformedInput(__jni_impl::java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject onUnmappableCharacter(__jni_impl::java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject malformedInputAction();
		QAndroidJniObject unmappableCharacterAction();
		QAndroidJniObject replaceWith(jstring arg0);
		jfloat maxCharsPerByte();
		jfloat averageCharsPerByte();
		jboolean isAutoDetecting();
		jboolean isCharsetDetected();
		QAndroidJniObject detectedCharset();
	};
} // namespace __jni_impl::java::nio::charset

#include "Charset.hpp"
#include "CodingErrorAction.hpp"
#include "CoderResult.hpp"
#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"

namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void CharsetDecoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CharsetDecoder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CharsetDecoder::decode(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::CharBuffer arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject CharsetDecoder::decode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CharsetDecoder::charset()
	{
		return __thiz.callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;");
	}
	QAndroidJniObject CharsetDecoder::replacement()
	{
		return __thiz.callObjectMethod(
			"replacement",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CharsetDecoder::flush(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"flush",
			"(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CharsetDecoder::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetDecoder;");
	}
	QAndroidJniObject CharsetDecoder::onMalformedInput(__jni_impl::java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CharsetDecoder::onUnmappableCharacter(__jni_impl::java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CharsetDecoder::malformedInputAction()
	{
		return __thiz.callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;");
	}
	QAndroidJniObject CharsetDecoder::unmappableCharacterAction()
	{
		return __thiz.callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;");
	}
	QAndroidJniObject CharsetDecoder::replaceWith(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			arg0);
	}
	jfloat CharsetDecoder::maxCharsPerByte()
	{
		return __thiz.callMethod<jfloat>(
			"maxCharsPerByte",
			"()F");
	}
	jfloat CharsetDecoder::averageCharsPerByte()
	{
		return __thiz.callMethod<jfloat>(
			"averageCharsPerByte",
			"()F");
	}
	jboolean CharsetDecoder::isAutoDetecting()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoDetecting",
			"()Z");
	}
	jboolean CharsetDecoder::isCharsetDetected()
	{
		return __thiz.callMethod<jboolean>(
			"isCharsetDetected",
			"()Z");
	}
	QAndroidJniObject CharsetDecoder::detectedCharset()
	{
		return __thiz.callObjectMethod(
			"detectedCharset",
			"()Ljava/nio/charset/Charset;");
	}
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class CharsetDecoder : public __jni_impl::java::nio::charset::CharsetDecoder
	{
	public:
		CharsetDecoder(QAndroidJniObject obj) { __thiz = obj; }
		CharsetDecoder()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_CHARSETDECODER

