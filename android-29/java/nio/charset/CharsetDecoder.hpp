#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class Charset;
}
namespace __jni_impl::java::nio::charset
{
	class CoderResult;
}
namespace __jni_impl::java::nio::charset
{
	class CodingErrorAction;
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
		jfloat averageCharsPerByte();
		QAndroidJniObject charset();
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0);
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::CharBuffer arg1, jboolean arg2);
		QAndroidJniObject detectedCharset();
		QAndroidJniObject flush(__jni_impl::java::nio::CharBuffer arg0);
		jboolean isAutoDetecting();
		jboolean isCharsetDetected();
		QAndroidJniObject malformedInputAction();
		jfloat maxCharsPerByte();
		QAndroidJniObject onMalformedInput(__jni_impl::java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject onUnmappableCharacter(__jni_impl::java::nio::charset::CodingErrorAction arg0);
		QAndroidJniObject replaceWith(jstring arg0);
		QAndroidJniObject replaceWith(const QString &arg0);
		jstring replacement();
		QAndroidJniObject reset();
		QAndroidJniObject unmappableCharacterAction();
	};
} // namespace __jni_impl::java::nio::charset

#include "../ByteBuffer.hpp"
#include "../CharBuffer.hpp"
#include "Charset.hpp"
#include "CoderResult.hpp"
#include "CodingErrorAction.hpp"

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
	jfloat CharsetDecoder::averageCharsPerByte()
	{
		return __thiz.callMethod<jfloat>(
			"averageCharsPerByte",
			"()F"
		);
	}
	QAndroidJniObject CharsetDecoder::charset()
	{
		return __thiz.callObjectMethod(
			"charset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetDecoder::decode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetDecoder::decode(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::CharBuffer arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CharsetDecoder::detectedCharset()
	{
		return __thiz.callObjectMethod(
			"detectedCharset",
			"()Ljava/nio/charset/Charset;"
		);
	}
	QAndroidJniObject CharsetDecoder::flush(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"flush",
			"(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;",
			arg0.__jniObject().object()
		);
	}
	jboolean CharsetDecoder::isAutoDetecting()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoDetecting",
			"()Z"
		);
	}
	jboolean CharsetDecoder::isCharsetDetected()
	{
		return __thiz.callMethod<jboolean>(
			"isCharsetDetected",
			"()Z"
		);
	}
	QAndroidJniObject CharsetDecoder::malformedInputAction()
	{
		return __thiz.callObjectMethod(
			"malformedInputAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
	}
	jfloat CharsetDecoder::maxCharsPerByte()
	{
		return __thiz.callMethod<jfloat>(
			"maxCharsPerByte",
			"()F"
		);
	}
	QAndroidJniObject CharsetDecoder::onMalformedInput(__jni_impl::java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onMalformedInput",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetDecoder::onUnmappableCharacter(__jni_impl::java::nio::charset::CodingErrorAction arg0)
	{
		return __thiz.callObjectMethod(
			"onUnmappableCharacter",
			"(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharsetDecoder::replaceWith(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			arg0
		);
	}
	QAndroidJniObject CharsetDecoder::replaceWith(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"replaceWith",
			"(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring CharsetDecoder::replacement()
	{
		return __thiz.callObjectMethod(
			"replacement",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CharsetDecoder::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/charset/CharsetDecoder;"
		);
	}
	QAndroidJniObject CharsetDecoder::unmappableCharacterAction()
	{
		return __thiz.callObjectMethod(
			"unmappableCharacterAction",
			"()Ljava/nio/charset/CodingErrorAction;"
		);
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

