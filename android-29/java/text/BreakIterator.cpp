#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Locale.hpp"
#include "./BreakIterator.hpp"

namespace java::text
{
	// Fields
	jint BreakIterator::DONE()
	{
		return getStaticField<jint>(
			"java.text.BreakIterator",
			"DONE"
		);
	}
	
	// Constructors
	
	// Methods
	JArray BreakIterator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		);
	}
	java::text::BreakIterator BreakIterator::getCharacterInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getCharacterInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	java::text::BreakIterator BreakIterator::getCharacterInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getCharacterInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	java::text::BreakIterator BreakIterator::getLineInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getLineInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	java::text::BreakIterator BreakIterator::getLineInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getLineInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	java::text::BreakIterator BreakIterator::getSentenceInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getSentenceInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	java::text::BreakIterator BreakIterator::getSentenceInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getSentenceInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	java::text::BreakIterator BreakIterator::getWordInstance()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getWordInstance",
			"()Ljava/text/BreakIterator;"
		);
	}
	java::text::BreakIterator BreakIterator::getWordInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getWordInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.object()
		);
	}
	JObject BreakIterator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint BreakIterator::current() const
	{
		return callMethod<jint>(
			"current",
			"()I"
		);
	}
	jint BreakIterator::first() const
	{
		return callMethod<jint>(
			"first",
			"()I"
		);
	}
	jint BreakIterator::following(jint arg0) const
	{
		return callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	JObject BreakIterator::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jboolean BreakIterator::isBoundary(jint arg0) const
	{
		return callMethod<jboolean>(
			"isBoundary",
			"(I)Z",
			arg0
		);
	}
	jint BreakIterator::last() const
	{
		return callMethod<jint>(
			"last",
			"()I"
		);
	}
	jint BreakIterator::next() const
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint BreakIterator::next(jint arg0) const
	{
		return callMethod<jint>(
			"next",
			"(I)I",
			arg0
		);
	}
	jint BreakIterator::preceding(jint arg0) const
	{
		return callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	jint BreakIterator::previous() const
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void BreakIterator::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void BreakIterator::setText(JObject arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace java::text

