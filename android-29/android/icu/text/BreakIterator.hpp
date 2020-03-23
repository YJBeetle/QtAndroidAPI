#pragma once

#ifndef ANDROID_ICU_TEXT_BREAKITERATOR
#define ANDROID_ICU_TEXT_BREAKITERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}

namespace __jni_impl::android::icu::text
{
	class BreakIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		static jint KIND_CHARACTER();
		static jint KIND_LINE();
		static jint KIND_SENTENCE();
		static jint KIND_TITLE();
		static jint KIND_WORD();
		static jint WORD_IDEO();
		static jint WORD_IDEO_LIMIT();
		static jint WORD_KANA();
		static jint WORD_KANA_LIMIT();
		static jint WORD_LETTER();
		static jint WORD_LETTER_LIMIT();
		static jint WORD_NONE();
		static jint WORD_NONE_LIMIT();
		static jint WORD_NUMBER();
		static jint WORD_NUMBER_LIMIT();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		jint next(jint arg0);
		jint next();
		jint last();
		jint first();
		jint current();
		static QAndroidJniObject getAvailableLocales();
		void setText(jstring arg0);
		void setText(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getWordInstance();
		static QAndroidJniObject getWordInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getWordInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getLineInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getLineInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getLineInstance();
		static QAndroidJniObject getCharacterInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getCharacterInstance();
		static QAndroidJniObject getCharacterInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getSentenceInstance();
		static QAndroidJniObject getSentenceInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getSentenceInstance(__jni_impl::java::util::Locale arg0);
		jint previous();
		QAndroidJniObject getText();
		jint following(jint arg0);
		jint preceding(jint arg0);
		jboolean isBoundary(jint arg0);
		jint getRuleStatus();
		jint getRuleStatusVec(jintArray arg0);
		static QAndroidJniObject getTitleInstance();
		static QAndroidJniObject getTitleInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getTitleInstance(__jni_impl::java::util::Locale arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint BreakIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"DONE");
	}
	jint BreakIterator::KIND_CHARACTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_CHARACTER");
	}
	jint BreakIterator::KIND_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_LINE");
	}
	jint BreakIterator::KIND_SENTENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_SENTENCE");
	}
	jint BreakIterator::KIND_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_TITLE");
	}
	jint BreakIterator::KIND_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"KIND_WORD");
	}
	jint BreakIterator::WORD_IDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_IDEO");
	}
	jint BreakIterator::WORD_IDEO_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_IDEO_LIMIT");
	}
	jint BreakIterator::WORD_KANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_KANA");
	}
	jint BreakIterator::WORD_KANA_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_KANA_LIMIT");
	}
	jint BreakIterator::WORD_LETTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_LETTER");
	}
	jint BreakIterator::WORD_LETTER_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_LETTER_LIMIT");
	}
	jint BreakIterator::WORD_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NONE");
	}
	jint BreakIterator::WORD_NONE_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NONE_LIMIT");
	}
	jint BreakIterator::WORD_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NUMBER");
	}
	jint BreakIterator::WORD_NUMBER_LIMIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.BreakIterator",
			"WORD_NUMBER_LIMIT");
	}
	
	// Constructors
	void BreakIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.BreakIterator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BreakIterator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint BreakIterator::next(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"next",
			"(I)I",
			arg0);
	}
	jint BreakIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I");
	}
	jint BreakIterator::last()
	{
		return __thiz.callMethod<jint>(
			"last",
			"()I");
	}
	jint BreakIterator::first()
	{
		return __thiz.callMethod<jint>(
			"first",
			"()I");
	}
	jint BreakIterator::current()
	{
		return __thiz.callMethod<jint>(
			"current",
			"()I");
	}
	QAndroidJniObject BreakIterator::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;");
	}
	void BreakIterator::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void BreakIterator::setText(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getWordInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getWordInstance",
			"()Landroid/icu/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getWordInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getWordInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getWordInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getWordInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getLineInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getLineInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getLineInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getLineInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getLineInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getLineInstance",
			"()Landroid/icu/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getCharacterInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getCharacterInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getCharacterInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getCharacterInstance",
			"()Landroid/icu/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getCharacterInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getCharacterInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getSentenceInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getSentenceInstance",
			"()Landroid/icu/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getSentenceInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getSentenceInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getSentenceInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getSentenceInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	jint BreakIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I");
	}
	QAndroidJniObject BreakIterator::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/text/CharacterIterator;");
	}
	jint BreakIterator::following(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"following",
			"(I)I",
			arg0);
	}
	jint BreakIterator::preceding(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"preceding",
			"(I)I",
			arg0);
	}
	jboolean BreakIterator::isBoundary(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBoundary",
			"(I)Z",
			arg0);
	}
	jint BreakIterator::getRuleStatus()
	{
		return __thiz.callMethod<jint>(
			"getRuleStatus",
			"()I");
	}
	jint BreakIterator::getRuleStatusVec(jintArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getRuleStatusVec",
			"([I)I",
			arg0);
	}
	QAndroidJniObject BreakIterator::getTitleInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getTitleInstance",
			"()Landroid/icu/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getTitleInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getTitleInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getTitleInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.BreakIterator",
			"getTitleInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/BreakIterator;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class BreakIterator : public __jni_impl::android::icu::text::BreakIterator
	{
	public:
		BreakIterator(QAndroidJniObject obj) { __thiz = obj; }
		BreakIterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_BREAKITERATOR

