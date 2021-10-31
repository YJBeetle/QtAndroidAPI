#include "../../../java/lang/StringBuffer.hpp"
#include "./UCharacterIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint UCharacterIterator::DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UCharacterIterator",
			"DONE"
		);
	}
	
	UCharacterIterator::UCharacterIterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UCharacterIterator::getInstance(jcharArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([C)Landroid/icu/text/UCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject UCharacterIterator::getInstance(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Landroid/icu/text/Replaceable;)Landroid/icu/text/UCharacterIterator;",
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
	QAndroidJniObject UCharacterIterator::getInstance(java::lang::StringBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/StringBuffer;)Landroid/icu/text/UCharacterIterator;",
			arg0.__jniObject().object()
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
	jobject UCharacterIterator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint UCharacterIterator::current()
	{
		return __thiz.callMethod<jint>(
			"current",
			"()I"
		);
	}
	jint UCharacterIterator::currentCodePoint()
	{
		return __thiz.callMethod<jint>(
			"currentCodePoint",
			"()I"
		);
	}
	QAndroidJniObject UCharacterIterator::getCharacterIterator()
	{
		return __thiz.callObjectMethod(
			"getCharacterIterator",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jint UCharacterIterator::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint UCharacterIterator::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
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
	jint UCharacterIterator::getText(jcharArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getText",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jstring UCharacterIterator::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UCharacterIterator::moveCodePointIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"moveCodePointIndex",
			"(I)I",
			arg0
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
	jint UCharacterIterator::next()
	{
		return __thiz.callMethod<jint>(
			"next",
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
	jint UCharacterIterator::previous()
	{
		return __thiz.callMethod<jint>(
			"previous",
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
	void UCharacterIterator::setIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
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
} // namespace android::icu::text

