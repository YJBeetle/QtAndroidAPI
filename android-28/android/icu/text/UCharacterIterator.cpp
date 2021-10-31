#include "../../../java/lang/StringBuffer.hpp"
#include "./UCharacterIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint UCharacterIterator::DONE()
	{
		return getStaticField<jint>(
			"android.icu.text.UCharacterIterator",
			"DONE"
		);
	}
	
	// QJniObject forward
	UCharacterIterator::UCharacterIterator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(jcharArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([C)Landroid/icu/text/UCharacterIterator;",
			arg0
		);
	}
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Landroid/icu/text/Replaceable;)Landroid/icu/text/UCharacterIterator;",
			arg0.object()
		);
	}
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/UCharacterIterator;",
			arg0
		);
	}
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(java::lang::StringBuffer arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/StringBuffer;)Landroid/icu/text/UCharacterIterator;",
			arg0.object()
		);
	}
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(jcharArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
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
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint UCharacterIterator::current()
	{
		return callMethod<jint>(
			"current",
			"()I"
		);
	}
	jint UCharacterIterator::currentCodePoint()
	{
		return callMethod<jint>(
			"currentCodePoint",
			"()I"
		);
	}
	__JniBaseClass UCharacterIterator::getCharacterIterator()
	{
		return callObjectMethod(
			"getCharacterIterator",
			"()Ljava/text/CharacterIterator;"
		);
	}
	jint UCharacterIterator::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jint UCharacterIterator::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint UCharacterIterator::getText(jcharArray arg0)
	{
		return callMethod<jint>(
			"getText",
			"([C)I",
			arg0
		);
	}
	jint UCharacterIterator::getText(jcharArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"getText",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jstring UCharacterIterator::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint UCharacterIterator::moveCodePointIndex(jint arg0)
	{
		return callMethod<jint>(
			"moveCodePointIndex",
			"(I)I",
			arg0
		);
	}
	jint UCharacterIterator::moveIndex(jint arg0)
	{
		return callMethod<jint>(
			"moveIndex",
			"(I)I",
			arg0
		);
	}
	jint UCharacterIterator::next()
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	jint UCharacterIterator::nextCodePoint()
	{
		return callMethod<jint>(
			"nextCodePoint",
			"()I"
		);
	}
	jint UCharacterIterator::previous()
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	jint UCharacterIterator::previousCodePoint()
	{
		return callMethod<jint>(
			"previousCodePoint",
			"()I"
		);
	}
	void UCharacterIterator::setIndex(jint arg0)
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void UCharacterIterator::setToLimit()
	{
		callMethod<void>(
			"setToLimit",
			"()V"
		);
	}
	void UCharacterIterator::setToStart()
	{
		callMethod<void>(
			"setToStart",
			"()V"
		);
	}
} // namespace android::icu::text

