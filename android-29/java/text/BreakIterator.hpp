#pragma once

#ifndef JAVA_TEXT_BREAKITERATOR
#define JAVA_TEXT_BREAKITERATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::text
{
	class BreakIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		jint next();
		jint next(jint arg0);
		jint last();
		jint first();
		jint current();
		static QAndroidJniObject getAvailableLocales();
		void setText(__jni_impl::__JniBaseClass arg0);
		void setText(jstring arg0);
		static QAndroidJniObject getWordInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getWordInstance();
		static QAndroidJniObject getLineInstance();
		static QAndroidJniObject getLineInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getCharacterInstance();
		static QAndroidJniObject getCharacterInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getSentenceInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getSentenceInstance();
		jint previous();
		QAndroidJniObject getText();
		jint following(jint arg0);
		jint preceding(jint arg0);
		jboolean isBoundary(jint arg0);
	};
} // namespace __jni_impl::java::text

#include "../util/Locale.hpp"

namespace __jni_impl::java::text
{
	// Fields
	jint BreakIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.BreakIterator",
			"DONE");
	}
	
	// Constructors
	void BreakIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.BreakIterator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BreakIterator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint BreakIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I");
	}
	jint BreakIterator::next(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"next",
			"(I)I",
			arg0);
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
			"java.text.BreakIterator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;");
	}
	void BreakIterator::setText(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/text/CharacterIterator;)V",
			arg0.__jniObject().object());
	}
	void BreakIterator::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject BreakIterator::getWordInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getWordInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getWordInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getWordInstance",
			"()Ljava/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getLineInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getLineInstance",
			"()Ljava/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getLineInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getLineInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getCharacterInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getCharacterInstance",
			"()Ljava/text/BreakIterator;");
	}
	QAndroidJniObject BreakIterator::getCharacterInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getCharacterInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getSentenceInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getSentenceInstance",
			"(Ljava/util/Locale;)Ljava/text/BreakIterator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BreakIterator::getSentenceInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.BreakIterator",
			"getSentenceInstance",
			"()Ljava/text/BreakIterator;");
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
} // namespace __jni_impl::java::text

namespace java::text
{
	class BreakIterator : public __jni_impl::java::text::BreakIterator
	{
	public:
		BreakIterator(QAndroidJniObject obj) { __thiz = obj; }
		BreakIterator()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_BREAKITERATOR

