#pragma once

#ifndef JAVA_IO_STREAMTOKENIZER
#define JAVA_IO_STREAMTOKENIZER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::java::io
{
	class StreamTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		static jint TT_EOF();
		static jint TT_EOL();
		static jint TT_NUMBER();
		static jint TT_WORD();
		jdouble nval();
		jstring sval();
		jint ttype();
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::Reader arg0);
		
		// Methods
		void commentChar(jint arg0);
		void eolIsSignificant(jboolean arg0);
		jint lineno();
		void lowerCaseMode(jboolean arg0);
		jint nextToken();
		void ordinaryChar(jint arg0);
		void ordinaryChars(jint arg0, jint arg1);
		void parseNumbers();
		void pushBack();
		void quoteChar(jint arg0);
		void resetSyntax();
		void slashSlashComments(jboolean arg0);
		void slashStarComments(jboolean arg0);
		jstring toString();
		void whitespaceChars(jint arg0, jint arg1);
		void wordChars(jint arg0, jint arg1);
	};
} // namespace __jni_impl::java::io

#include "InputStream.hpp"
#include "Reader.hpp"

namespace __jni_impl::java::io
{
	// Fields
	jint StreamTokenizer::TT_EOF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOF"
		);
	}
	jint StreamTokenizer::TT_EOL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOL"
		);
	}
	jint StreamTokenizer::TT_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_NUMBER"
		);
	}
	jint StreamTokenizer::TT_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_WORD"
		);
	}
	jdouble StreamTokenizer::nval()
	{
		return __thiz.getField<jdouble>(
			"nval"
		);
	}
	jstring StreamTokenizer::sval()
	{
		return __thiz.getObjectField(
			"sval",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint StreamTokenizer::ttype()
	{
		return __thiz.getField<jint>(
			"ttype"
		);
	}
	
	// Constructors
	void StreamTokenizer::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamTokenizer::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void StreamTokenizer::commentChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"commentChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::eolIsSignificant(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"eolIsSignificant",
			"(Z)V",
			arg0
		);
	}
	jint StreamTokenizer::lineno()
	{
		return __thiz.callMethod<jint>(
			"lineno",
			"()I"
		);
	}
	void StreamTokenizer::lowerCaseMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"lowerCaseMode",
			"(Z)V",
			arg0
		);
	}
	jint StreamTokenizer::nextToken()
	{
		return __thiz.callMethod<jint>(
			"nextToken",
			"()I"
		);
	}
	void StreamTokenizer::ordinaryChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"ordinaryChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::ordinaryChars(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"ordinaryChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	void StreamTokenizer::parseNumbers()
	{
		__thiz.callMethod<void>(
			"parseNumbers",
			"()V"
		);
	}
	void StreamTokenizer::pushBack()
	{
		__thiz.callMethod<void>(
			"pushBack",
			"()V"
		);
	}
	void StreamTokenizer::quoteChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"quoteChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::resetSyntax()
	{
		__thiz.callMethod<void>(
			"resetSyntax",
			"()V"
		);
	}
	void StreamTokenizer::slashSlashComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"slashSlashComments",
			"(Z)V",
			arg0
		);
	}
	void StreamTokenizer::slashStarComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"slashStarComments",
			"(Z)V",
			arg0
		);
	}
	jstring StreamTokenizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StreamTokenizer::whitespaceChars(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"whitespaceChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	void StreamTokenizer::wordChars(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"wordChars",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class StreamTokenizer : public __jni_impl::java::io::StreamTokenizer
	{
	public:
		StreamTokenizer(QAndroidJniObject obj) { __thiz = obj; }
		StreamTokenizer(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		StreamTokenizer(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_STREAMTOKENIZER

