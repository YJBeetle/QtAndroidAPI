#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "./UCharacterIterator.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint UCharacterIterator::DONE()
	{
		return getStaticField<jint>(
			"android.icu.text.UCharacterIterator",
			"DONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JCharArray arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"([C)Landroid/icu/text/UCharacterIterator;",
			arg0.object<jcharArray>()
		);
	}
	inline android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Landroid/icu/text/Replaceable;)Landroid/icu/text/UCharacterIterator;",
			arg0.object()
		);
	}
	inline android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/String;)Landroid/icu/text/UCharacterIterator;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::UCharacterIterator UCharacterIterator::getInstance(java::lang::StringBuffer arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UCharacterIterator",
			"getInstance",
			"(Ljava/lang/StringBuffer;)Landroid/icu/text/UCharacterIterator;",
			arg0.object()
		);
	}
	inline android::icu::text::UCharacterIterator UCharacterIterator::getInstance(JCharArray arg0, jint arg1, jint arg2)
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
	inline JObject UCharacterIterator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint UCharacterIterator::current() const
	{
		return callMethod<jint>(
			"current",
			"()I"
		);
	}
	inline jint UCharacterIterator::currentCodePoint() const
	{
		return callMethod<jint>(
			"currentCodePoint",
			"()I"
		);
	}
	inline JObject UCharacterIterator::getCharacterIterator() const
	{
		return callObjectMethod(
			"getCharacterIterator",
			"()Ljava/text/CharacterIterator;"
		);
	}
	inline jint UCharacterIterator::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jint UCharacterIterator::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint UCharacterIterator::getText(JCharArray arg0) const
	{
		return callMethod<jint>(
			"getText",
			"([C)I",
			arg0.object<jcharArray>()
		);
	}
	inline jint UCharacterIterator::getText(JCharArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getText",
			"([CI)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline JString UCharacterIterator::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	inline jint UCharacterIterator::moveCodePointIndex(jint arg0) const
	{
		return callMethod<jint>(
			"moveCodePointIndex",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacterIterator::moveIndex(jint arg0) const
	{
		return callMethod<jint>(
			"moveIndex",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacterIterator::next() const
	{
		return callMethod<jint>(
			"next",
			"()I"
		);
	}
	inline jint UCharacterIterator::nextCodePoint() const
	{
		return callMethod<jint>(
			"nextCodePoint",
			"()I"
		);
	}
	inline jint UCharacterIterator::previous() const
	{
		return callMethod<jint>(
			"previous",
			"()I"
		);
	}
	inline jint UCharacterIterator::previousCodePoint() const
	{
		return callMethod<jint>(
			"previousCodePoint",
			"()I"
		);
	}
	inline void UCharacterIterator::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	inline void UCharacterIterator::setToLimit() const
	{
		callMethod<void>(
			"setToLimit",
			"()V"
		);
	}
	inline void UCharacterIterator::setToStart() const
	{
		callMethod<void>(
			"setToStart",
			"()V"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
