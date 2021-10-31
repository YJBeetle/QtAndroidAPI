#include "./InputStream.hpp"
#include "./Reader.hpp"
#include "./StreamTokenizer.hpp"

namespace java::io
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
	
	StreamTokenizer::StreamTokenizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StreamTokenizer::StreamTokenizer(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	StreamTokenizer::StreamTokenizer(java::io::Reader arg0)
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
} // namespace java::io

