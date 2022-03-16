#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "./InputStream.def.hpp"
#include "./Reader.def.hpp"
#include "../../JString.hpp"
#include "./StreamTokenizer.def.hpp"

namespace java::io
{
	// Fields
	inline jint StreamTokenizer::TT_EOF()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOF"
		);
	}
	inline jint StreamTokenizer::TT_EOL()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_EOL"
		);
	}
	inline jint StreamTokenizer::TT_NUMBER()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_NUMBER"
		);
	}
	inline jint StreamTokenizer::TT_WORD()
	{
		return getStaticField<jint>(
			"java.io.StreamTokenizer",
			"TT_WORD"
		);
	}
	inline jdouble StreamTokenizer::nval()
	{
		return getField<jdouble>(
			"nval"
		);
	}
	inline JString StreamTokenizer::sval()
	{
		return getObjectField(
			"sval",
			"Ljava/lang/String;"
		);
	}
	inline jint StreamTokenizer::ttype()
	{
		return getField<jint>(
			"ttype"
		);
	}
	
	// Constructors
	inline StreamTokenizer::StreamTokenizer(java::io::InputStream arg0)
		: JObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline StreamTokenizer::StreamTokenizer(java::io::Reader arg0)
		: JObject(
			"java.io.StreamTokenizer",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void StreamTokenizer::commentChar(jint arg0) const
	{
		callMethod<void>(
			"commentChar",
			"(I)V",
			arg0
		);
	}
	inline void StreamTokenizer::eolIsSignificant(jboolean arg0) const
	{
		callMethod<void>(
			"eolIsSignificant",
			"(Z)V",
			arg0
		);
	}
	inline jint StreamTokenizer::lineno() const
	{
		return callMethod<jint>(
			"lineno",
			"()I"
		);
	}
	inline void StreamTokenizer::lowerCaseMode(jboolean arg0) const
	{
		callMethod<void>(
			"lowerCaseMode",
			"(Z)V",
			arg0
		);
	}
	inline jint StreamTokenizer::nextToken() const
	{
		return callMethod<jint>(
			"nextToken",
			"()I"
		);
	}
	inline void StreamTokenizer::ordinaryChar(jint arg0) const
	{
		callMethod<void>(
			"ordinaryChar",
			"(I)V",
			arg0
		);
	}
	inline void StreamTokenizer::ordinaryChars(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"ordinaryChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void StreamTokenizer::parseNumbers() const
	{
		callMethod<void>(
			"parseNumbers",
			"()V"
		);
	}
	inline void StreamTokenizer::pushBack() const
	{
		callMethod<void>(
			"pushBack",
			"()V"
		);
	}
	inline void StreamTokenizer::quoteChar(jint arg0) const
	{
		callMethod<void>(
			"quoteChar",
			"(I)V",
			arg0
		);
	}
	inline void StreamTokenizer::resetSyntax() const
	{
		callMethod<void>(
			"resetSyntax",
			"()V"
		);
	}
	inline void StreamTokenizer::slashSlashComments(jboolean arg0) const
	{
		callMethod<void>(
			"slashSlashComments",
			"(Z)V",
			arg0
		);
	}
	inline void StreamTokenizer::slashStarComments(jboolean arg0) const
	{
		callMethod<void>(
			"slashStarComments",
			"(Z)V",
			arg0
		);
	}
	inline JString StreamTokenizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void StreamTokenizer::whitespaceChars(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"whitespaceChars",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void StreamTokenizer::wordChars(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"wordChars",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace java::io

// Base class headers

