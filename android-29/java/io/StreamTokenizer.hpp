#pragma once

#ifndef JAVA_IO_STREAMTOKENIZER
#define JAVA_IO_STREAMTOKENIZER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class Reader;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::io
{
	class StreamTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		jint ttype();
		static jint TT_EOF();
		static jint TT_EOL();
		static jint TT_NUMBER();
		static jint TT_WORD();
		QAndroidJniObject sval();
		jdouble nval();
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0);
		void __constructor(__jni_impl::java::io::InputStream arg0);
		
		// Methods
		QAndroidJniObject toString();
		jint nextToken();
		void wordChars(jint arg0, jint arg1);
		void whitespaceChars(jint arg0, jint arg1);
		void commentChar(jint arg0);
		void quoteChar(jint arg0);
		void parseNumbers();
		void resetSyntax();
		void ordinaryChars(jint arg0, jint arg1);
		void ordinaryChar(jint arg0);
		void eolIsSignificant(jboolean arg0);
		void slashStarComments(jboolean arg0);
		void slashSlashComments(jboolean arg0);
		void lowerCaseMode(jboolean arg0);
		void pushBack();
		jint lineno();
	};
} // namespace __jni_impl::java::io

#include "Reader.hpp"
#include "InputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	jint StreamTokenizer::ttype()
	{
		return __thiz.getField<jint>(
			"ttype");
	}
	jint StreamTokenizer::TT_EOF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOF");
	}
	jint StreamTokenizer::TT_EOL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOL");
	}
	jint StreamTokenizer::TT_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_NUMBER");
	}
	jint StreamTokenizer::TT_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_WORD");
	}
	QAndroidJniObject StreamTokenizer::sval()
	{
		return __thiz.getObjectField(
			"sval",
			"Ljava/lang/String;");
	}
	jdouble StreamTokenizer::nval()
	{
		return __thiz.getField<jdouble>(
			"nval");
	}
	
	// Constructors
	void StreamTokenizer::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object());
	}
	void StreamTokenizer::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject StreamTokenizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint StreamTokenizer::nextToken()
	{
		return __thiz.callMethod<jint>(
			"nextToken",
			"()I");
	}
	void StreamTokenizer::wordChars(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"wordChars",
			"(II)V",
			arg0,
			arg1);
	}
	void StreamTokenizer::whitespaceChars(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"whitespaceChars",
			"(II)V",
			arg0,
			arg1);
	}
	void StreamTokenizer::commentChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"commentChar",
			"(I)V",
			arg0);
	}
	void StreamTokenizer::quoteChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"quoteChar",
			"(I)V",
			arg0);
	}
	void StreamTokenizer::parseNumbers()
	{
		__thiz.callMethod<void>(
			"parseNumbers",
			"()V");
	}
	void StreamTokenizer::resetSyntax()
	{
		__thiz.callMethod<void>(
			"resetSyntax",
			"()V");
	}
	void StreamTokenizer::ordinaryChars(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"ordinaryChars",
			"(II)V",
			arg0,
			arg1);
	}
	void StreamTokenizer::ordinaryChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"ordinaryChar",
			"(I)V",
			arg0);
	}
	void StreamTokenizer::eolIsSignificant(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"eolIsSignificant",
			"(Z)V",
			arg0);
	}
	void StreamTokenizer::slashStarComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"slashStarComments",
			"(Z)V",
			arg0);
	}
	void StreamTokenizer::slashSlashComments(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"slashSlashComments",
			"(Z)V",
			arg0);
	}
	void StreamTokenizer::lowerCaseMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"lowerCaseMode",
			"(Z)V",
			arg0);
	}
	void StreamTokenizer::pushBack()
	{
		__thiz.callMethod<void>(
			"pushBack",
			"()V");
	}
	jint StreamTokenizer::lineno()
	{
		return __thiz.callMethod<jint>(
			"lineno",
			"()I");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class StreamTokenizer : public __jni_impl::java::io::StreamTokenizer
	{
	public:
		StreamTokenizer(QAndroidJniObject obj) { __thiz = obj; }
		StreamTokenizer(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
		StreamTokenizer(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_STREAMTOKENIZER

