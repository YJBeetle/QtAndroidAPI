#include "../../../JCharArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	UCharacterIterator::UCharacterIterator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JCharArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([C)Landroid/icu/text/UCharacterIterator;",
			arg0.object<jcharArray>()
		);
	}
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Landroid/icu/text/Replaceable;)Landroid/icu/text/UCharacterIterator;",
			arg0.object()
		);
	}
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/UCharacterIterator;",
			arg0.object<jstring>()
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
	android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([CII)Landroid/icu/text/UCharacterIterator;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	JObject UCharacterIterator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
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
	JObject UCharacterIterator::getCharacterIterator()
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
	jint UCharacterIterator::getText(JCharArray arg0)
	{
		return callMethod<jint>(
			"getText",
			"([C)I",
			arg0.object<jcharArray>()
		);
	}
	jint UCharacterIterator::getText(JCharArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"getText",
			"([CI)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	JString UCharacterIterator::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
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

