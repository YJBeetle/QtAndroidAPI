#pragma once

#include "./UnicodeSet.def.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSetIterator.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint UnicodeSetIterator::IS_STRING()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSetIterator",
			"IS_STRING"
		);
	}
	inline jint UnicodeSetIterator::codepoint()
	{
		return getField<jint>(
			"codepoint"
		);
	}
	inline jint UnicodeSetIterator::codepointEnd()
	{
		return getField<jint>(
			"codepointEnd"
		);
	}
	inline JString UnicodeSetIterator::string()
	{
		return getObjectField(
			"string",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline UnicodeSetIterator::UnicodeSetIterator()
		: JObject(
			"android.icu.text.UnicodeSetIterator",
			"()V"
		) {}
	inline UnicodeSetIterator::UnicodeSetIterator(android::icu::text::UnicodeSet arg0)
		: JObject(
			"android.icu.text.UnicodeSetIterator",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JString UnicodeSetIterator::getString() const
	{
		return callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean UnicodeSetIterator::next() const
	{
		return callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	inline jboolean UnicodeSetIterator::nextRange() const
	{
		return callMethod<jboolean>(
			"nextRange",
			"()Z"
		);
	}
	inline void UnicodeSetIterator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void UnicodeSetIterator::reset(android::icu::text::UnicodeSet arg0) const
	{
		callMethod<void>(
			"reset",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers

