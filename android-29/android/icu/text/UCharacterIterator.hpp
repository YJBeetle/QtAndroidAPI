#pragma once

#ifndef ANDROID_ICU_TEXT_UCHARACTERITERATOR
#define ANDROID_ICU_TEXT_UCHARACTERITERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}

namespace __jni_impl::android::icu::text
{
	class UCharacterIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject clone();
		jint getLength();
		jint next();
		static QAndroidJniObject getInstance(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::lang::StringBuffer arg0);
		static QAndroidJniObject getInstance(jcharArray arg0);
		static QAndroidJniObject getInstance(jcharArray arg0, jint arg1, jint arg2);
		jint current();
		jint getIndex();
		void setIndex(jint arg0);
		jint previous();
		jint getText(jcharArray arg0, jint arg1);
		jint getText(jcharArray arg0);
		jstring getText();
		QAndroidJniObject getCharacterIterator();
		jint currentCodePoint();
		jint nextCodePoint();
		jint previousCodePoint();
		void setToLimit();
		void setToStart();
		jint moveIndex(jint arg0);
		jint moveCodePointIndex(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/lang/StringBuffer.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint UCharacterIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UCharacterIterator",
			"DONE"
		);
	}
	
	// Constructors
	void UCharacterIterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UCharacterIterator",
			"(V)V");
	}
	
	// Methods
	jobject UCharacterIterator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint UCharacterIterator::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint UCharacterIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
			"()I"
		);
	}
	QAndroidJniObject UCharacterIterator::getInstance(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/text/CharacterIterator;)Landroid/icu/text/UCharacterIterator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UCharacterIterator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/UCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject UCharacterIterator::getInstance(__jni_impl::java::lang::StringBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/StringBuffer;)Landroid/icu/text/UCharacterIterator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject UCharacterIterator::getInstance(jcharArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([C)Landroid/icu/text/UCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject UCharacterIterator::getInstance(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([CII)Landroid/icu/text/UCharacterIterator;",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacterIterator::current()
	{
		return __thiz.callMethod<jint>(
			"current",
			"()I"
		);
	}
	jint UCharacterIterator::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	void UCharacterIterator::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	jint UCharacterIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
			"()I"
		);
	}
	jint UCharacterIterator::getText(jcharArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getText",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jint UCharacterIterator::getText(jcharArray arg0)
	{
		return __thiz.callMethod<jint>(
			"getText",
			"([C)I",
			arg0
		);
	}
	jstring UCharacterIterator::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UCharacterIterator::getCharacterIterator()
	{
		return __thiz.callObjectMethod(
			"getCharacterIterator",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jint UCharacterIterator::currentCodePoint()
	{
		return __thiz.callMethod<jint>(
			"currentCodePoint",
			"()I"
		);
	}
	jint UCharacterIterator::nextCodePoint()
	{
		return __thiz.callMethod<jint>(
			"nextCodePoint",
			"()I"
		);
	}
	jint UCharacterIterator::previousCodePoint()
	{
		return __thiz.callMethod<jint>(
			"previousCodePoint",
			"()I"
		);
	}
	void UCharacterIterator::setToLimit()
	{
		__thiz.callMethod<void>(
			"setToLimit",
			"()V"
		);
	}
	void UCharacterIterator::setToStart()
	{
		__thiz.callMethod<void>(
			"setToStart",
			"()V"
		);
	}
	jint UCharacterIterator::moveIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"moveIndex",
			"(I)I",
			arg0
		);
	}
	jint UCharacterIterator::moveCodePointIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"moveCodePointIndex",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class UCharacterIterator : public __jni_impl::android::icu::text::UCharacterIterator
	{
	public:
		UCharacterIterator(QAndroidJniObject obj) { __thiz = obj; }
		UCharacterIterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_UCHARACTERITERATOR

