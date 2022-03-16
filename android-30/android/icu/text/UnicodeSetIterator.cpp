#include "./UnicodeSet.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSetIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint UnicodeSetIterator::IS_STRING()
	{
		return getStaticField<jint>(
			"android.icu.text.UnicodeSetIterator",
			"IS_STRING"
		);
	}
	jint UnicodeSetIterator::codepoint()
	{
		return getField<jint>(
			"codepoint"
		);
	}
	jint UnicodeSetIterator::codepointEnd()
	{
		return getField<jint>(
			"codepointEnd"
		);
	}
	JString UnicodeSetIterator::string()
	{
		return getObjectField(
			"string",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	UnicodeSetIterator::UnicodeSetIterator()
		: JObject(
			"android.icu.text.UnicodeSetIterator",
			"()V"
		) {}
	UnicodeSetIterator::UnicodeSetIterator(android::icu::text::UnicodeSet arg0)
		: JObject(
			"android.icu.text.UnicodeSetIterator",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		) {}
	
	// Methods
	JString UnicodeSetIterator::getString() const
	{
		return callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		);
	}
	jboolean UnicodeSetIterator::next() const
	{
		return callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	jboolean UnicodeSetIterator::nextRange() const
	{
		return callMethod<jboolean>(
			"nextRange",
			"()Z"
		);
	}
	void UnicodeSetIterator::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void UnicodeSetIterator::reset(android::icu::text::UnicodeSet arg0) const
	{
		callMethod<void>(
			"reset",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

