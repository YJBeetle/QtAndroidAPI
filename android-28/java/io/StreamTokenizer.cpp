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
	
	// QAndroidJniObject forward
	StreamTokenizer::StreamTokenizer(QAndroidJniObject obj) : JObject(obj) {}
	
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
	void StreamTokenizer::commentChar(jint arg0) const
	{
		callMethod<void>(
			"commentChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::eolIsSignificant(jboolean arg0) const
	{
		callMethod<void>(
			"eolIsSignificant",
			"(Z)V",
			arg0
		);
	}
	jint StreamTokenizer::lineno() const
	{
		return callMethod<jint>(
			"lineno",
			"()I"
		);
	}
	void StreamTokenizer::lowerCaseMode(jboolean arg0) const
	{
		callMethod<void>(
			"lowerCaseMode",
			"(Z)V",
			arg0
		);
	}
	jint StreamTokenizer::nextToken() const
	{
		return callMethod<jint>(
			"nextToken",
			"()I"
		);
	}
	void StreamTokenizer::ordinaryChar(jint arg0) const
	{
		callMethod<void>(
			"ordinaryChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::ordinaryChars(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"ordinaryChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	void StreamTokenizer::parseNumbers() const
	{
		callMethod<void>(
			"parseNumbers",
			"()V"
		);
	}
	void StreamTokenizer::pushBack() const
	{
		callMethod<void>(
			"pushBack",
			"()V"
		);
	}
	void StreamTokenizer::quoteChar(jint arg0) const
	{
		callMethod<void>(
			"quoteChar",
			"(I)V",
			arg0
		);
	}
	void StreamTokenizer::resetSyntax() const
	{
		callMethod<void>(
			"resetSyntax",
			"()V"
		);
	}
	void StreamTokenizer::slashSlashComments(jboolean arg0) const
	{
		callMethod<void>(
			"slashSlashComments",
			"(Z)V",
			arg0
		);
	}
	void StreamTokenizer::slashStarComments(jboolean arg0) const
	{
		callMethod<void>(
			"slashStarComments",
			"(Z)V",
			arg0
		);
	}
	JString StreamTokenizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StreamTokenizer::whitespaceChars(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"whitespaceChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	void StreamTokenizer::wordChars(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"wordChars",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace java::io

