#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Transliterator_Position.hpp"

namespace android::icu::text
{
	// Fields
	jint Transliterator_Position::contextLimit()
	{
		return getField<jint>(
			"contextLimit"
		);
	}
	jint Transliterator_Position::contextStart()
	{
		return getField<jint>(
			"contextStart"
		);
	}
	jint Transliterator_Position::limit()
	{
		return getField<jint>(
			"limit"
		);
	}
	jint Transliterator_Position::start()
	{
		return getField<jint>(
			"start"
		);
	}
	
	// Constructors
	Transliterator_Position::Transliterator_Position()
		: JObject(
			"android.icu.text.Transliterator$Position",
			"()V"
		) {}
	Transliterator_Position::Transliterator_Position(android::icu::text::Transliterator_Position &arg0)
		: JObject(
			"android.icu.text.Transliterator$Position",
			"(Landroid/icu/text/Transliterator$Position;)V",
			arg0.object()
		) {}
	Transliterator_Position::Transliterator_Position(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.icu.text.Transliterator$Position",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	Transliterator_Position::Transliterator_Position(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.icu.text.Transliterator$Position",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean Transliterator_Position::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Transliterator_Position::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Transliterator_Position::set(android::icu::text::Transliterator_Position arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/icu/text/Transliterator$Position;)V",
			arg0.object()
		);
	}
	JString Transliterator_Position::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Transliterator_Position::validate(jint arg0) const
	{
		callMethod<void>(
			"validate",
			"(I)V",
			arg0
		);
	}
} // namespace android::icu::text

