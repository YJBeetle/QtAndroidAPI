#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./BreakIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint BreakIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"DONE"
		);
	}
	jint BreakIterator::KIND_CHARACTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_CHARACTER"
		);
	}
	jint BreakIterator::KIND_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_LINE"
		);
	}
	jint BreakIterator::KIND_SENTENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_SENTENCE"
		);
	}
	jint BreakIterator::KIND_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_TITLE"
		);
	}
	jint BreakIterator::KIND_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_WORD"
		);
	}
	jint BreakIterator::WORD_IDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_IDEO"
		);
	}
	jint BreakIterator::WORD_IDEO_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_IDEO_LIMIT"
		);
	}
	jint BreakIterator::WORD_KANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_KANA"
		);
	}
	jint BreakIterator::WORD_KANA_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_KANA_LIMIT"
		);
	}
	jint BreakIterator::WORD_LETTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_LETTER"
		);
	}
	jint BreakIterator::WORD_LETTER_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_LETTER_LIMIT"
		);
	}
	jint BreakIterator::WORD_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NONE"
		);
	}
	jint BreakIterator::WORD_NONE_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NONE_LIMIT"
		);
	}
	jint BreakIterator::WORD_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NUMBER"
		);
	}
	jint BreakIterator::WORD_NUMBER_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NUMBER_LIMIT"
		);
	}
	
	// QAndroidJniObject forward
	BreakIterator::BreakIterator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray BreakIterator::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	android::icu::text::BreakIterator BreakIterator::getCharacterInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getCharacterInstance",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::BreakIterator BreakIterator::getCharacterInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getCharacterInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getCharacterInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getCharacterInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getLineInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getLineInstance",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::BreakIterator BreakIterator::getLineInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getLineInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getLineInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getLineInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getSentenceInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getSentenceInstance",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::BreakIterator BreakIterator::getSentenceInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getSentenceInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getSentenceInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getSentenceInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getTitleInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getTitleInstance",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::BreakIterator BreakIterator::getTitleInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getTitleInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getTitleInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getTitleInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getWordInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getWordInstance",
			"()Landroid/icu/text/BreakIterator;"
		);
	}
	android::icu::text::BreakIterator BreakIterator::getWordInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getWordInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.object()
		);
	}
	android::icu::text::BreakIterator BreakIterator::getWordInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getWordInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
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
	jint BreakIterator::getRuleStatus()
	{
		return callMethod<jint>(
			"getRuleStatus",
			"()I"
		);
	}
	jint BreakIterator::getRuleStatusVec(jintArray arg0)
	{
		return callMethod<jint>(
			"getRuleStatusVec",
			"([I)I",
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
			"(Ljava/lang/CharSequence;)V",
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
} // namespace android::icu::text

