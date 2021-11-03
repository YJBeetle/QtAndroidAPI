#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "./InputStream.hpp"
#include "./Reader.hpp"
#include "../../JString.hpp"
#include "./StreamTokenizer.hpp"

namespace java::io
{
	// Fields
	jint StreamTokenizer::TT_EOF()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOF"
		);
	}
	jint StreamTokenizer::TT_EOL()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOL"
		);
	}
	jint StreamTokenizer::TT_NUMBER()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_NUMBER"
		);
	}
	jint StreamTokenizer::TT_WORD()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_WORD"
		);
	}
	jdouble StreamTokenizer::nval()
	{
		return getField<jdouble>(
			"nval"
		);
	}
	JString StreamTokenizer::sval()
	{
		return getObjectField(
			"sval",
			"Ljava/lang/String;"
		);
	}
	jint StreamTokenizer::ttype()
	{
		return getField<jint>(
			"ttype"
		);
	}
	
	// QJniObject forward
	StreamTokenizer::StreamTokenizer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StreamTokenizer::StreamTokenizer(java::io::InputStream arg0)
		: JObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	StreamTokenizer::StreamTokenizer(java::io::Reader arg0)
		: JObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	void StreamTokenizer::commentChar(jint arg0)
	{
		callMethod<void>(
			"commentChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::eolIsSignificant(jboolean arg0)
	{
		callMethod<void>(
			"eolIsSignificant",
			"(Z)V",
			arg0
		);
	}
	jint StreamTokenizer::lineno()
	{
		return callMethod<jint>(
			"lineno",
			"()I"
		);
	}
	void StreamTokenizer::lowerCaseMode(jboolean arg0)
	{
		callMethod<void>(
			"lowerCaseMode",
			"(Z)V",
			arg0
		);
	}
	jint StreamTokenizer::nextToken()
	{
		return callMethod<jint>(
			"nextToken",
			"()I"
		);
	}
	void StreamTokenizer::ordinaryChar(jint arg0)
	{
		callMethod<void>(
			"ordinaryChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::ordinaryChars(jint arg0, jint arg1)
	{
		callMethod<void>(
			"ordinaryChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	void StreamTokenizer::parseNumbers()
	{
		callMethod<void>(
			"parseNumbers",
			"()V"
		);
	}
	void StreamTokenizer::pushBack()
	{
		callMethod<void>(
			"pushBack",
			"()V"
		);
	}
	void StreamTokenizer::quoteChar(jint arg0)
	{
		callMethod<void>(
			"quoteChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::resetSyntax()
	{
		callMethod<void>(
			"resetSyntax",
			"()V"
		);
	}
	void StreamTokenizer::slashSlashComments(jboolean arg0)
	{
		callMethod<void>(
			"slashSlashComments",
			"(Z)V",
			arg0
		);
	}
	void StreamTokenizer::slashStarComments(jboolean arg0)
	{
		callMethod<void>(
			"slashStarComments",
			"(Z)V",
			arg0
		);
	}
	JString StreamTokenizer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StreamTokenizer::whitespaceChars(jint arg0, jint arg1)
	{
		callMethod<void>(
			"whitespaceChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	void StreamTokenizer::wordChars(jint arg0, jint arg1)
	{
		callMethod<void>(
			"wordChars",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace java::io

