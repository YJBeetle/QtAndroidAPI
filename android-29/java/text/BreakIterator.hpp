#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Locale.def.hpp"
#include "./BreakIterator.def.hpp"

namespace java::text
{
	// Fields
	inline jint BreakIterator::DONE()
	{
		return getStaticField<jint>(
			"java.text.BreakIterator",
			"DONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray BreakIterator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	inline java::text::BreakIterator BreakIterator::getCharacterInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getCharacterInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	inline java::text::BreakIterator BreakIterator::getCharacterInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getCharacterInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	inline java::text::BreakIterator BreakIterator::getLineInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getLineInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	inline java::text::BreakIterator BreakIterator::getLineInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getLineInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	inline java::text::BreakIterator BreakIterator::getSentenceInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getSentenceInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	inline java::text::BreakIterator BreakIterator::getSentenceInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getSentenceInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	inline java::text::BreakIterator BreakIterator::getWordInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getWordInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	inline java::text::BreakIterator BreakIterator::getWordInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getWordInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	inline JObject BreakIterator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint BreakIterator::current() const
	{
		return callMethod<jint>(
			"current",
			"()I"
		);
	}
	inline jint BreakIterator::first() const
	{
		return callMethod<jint>(
			"first",
			"()I"
		);
	}
	inline jint BreakIterator::following(jint arg0) const
	{
		return callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	inline JObject BreakIterator::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/text/CharacterIterator;"
		);
	}
	inline jboolean BreakIterator::isBoundary(jint arg0) const
	{
		return callMethod<jboolean>(
			"isBoundary",
			"(I)Z",
			arg0
		);
	}
	inline jint BreakIterator::last() const
	{
		return callMethod<jint>(
			"last",
			"()I"
		);
	}
	inline jint BreakIterator::next() const
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	inline jint BreakIterator::next(jint arg0) const
	{
		return callMethod<jint>(
			"next",
			"(I)I",
			arg0
		);
	}
	inline jint BreakIterator::preceding(jint arg0) const
	{
		return callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	inline jint BreakIterator::previous() const
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	inline void BreakIterator::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void BreakIterator::setText(JObject arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace java::text

// Base class headers

