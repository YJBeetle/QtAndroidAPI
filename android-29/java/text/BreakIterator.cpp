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
	
	// QAndroidJniObject forward
	BreakIterator::BreakIterator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray BreakIterator::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"java.text.BreakIterator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
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
	jobject BreakIterator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint BreakIterator::current()
	{
		return callMethod<jint>(
			"current",
			"()I"
		);
	}
	jint BreakIterator::first()
	{
		return callMethod<jint>(
			"first",
			"()I"
		);
	}
	jint BreakIterator::following(jint arg0)
	{
		return callMethod<jint>(
			"following",
			"(I)I",
			arg0
		);
	}
	__JniBaseClass BreakIterator::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jboolean BreakIterator::isBoundary(jint arg0)
	{
		return callMethod<jboolean>(
			"isBoundary",
			"(I)Z",
			arg0
		);
	}
	jint BreakIterator::last()
	{
		return callMethod<jint>(
			"last",
			"()I"
		);
	}
	jint BreakIterator::next()
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint BreakIterator::next(jint arg0)
	{
		return callMethod<jint>(
			"next",
			"(I)I",
			arg0
		);
	}
	jint BreakIterator::preceding(jint arg0)
	{
		return callMethod<jint>(
			"preceding",
			"(I)I",
			arg0
		);
	}
	jint BreakIterator::previous()
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	void BreakIterator::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BreakIterator::setText(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace java::text

