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
	
	// QAndroidJniObject forward
	Transliterator_Position::Transliterator_Position(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Transliterator_Position::Transliterator_Position()
		: __JniBaseClass(
			"android.icu.text.Transliterator$Position",
			"()V"
		) {}
	Transliterator_Position::Transliterator_Position(android::icu::text::Transliterator_Position &arg0)
		: __JniBaseClass(
			"android.icu.text.Transliterator$Position",
			"(Landroid/icu/text/Transliterator$Position;)V",
			arg0.object()
		) {}
	Transliterator_Position::Transliterator_Position(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.icu.text.Transliterator$Position",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	Transliterator_Position::Transliterator_Position(jint arg0, jint arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.icu.text.Transliterator$Position",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean Transliterator_Position::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Transliterator_Position::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Transliterator_Position::set(android::icu::text::Transliterator_Position arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/icu/text/Transliterator$Position;)V",
			arg0.object()
		);
	}
	jstring Transliterator_Position::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Transliterator_Position::validate(jint arg0)
	{
		callMethod<void>(
			"validate",
			"(I)V",
			arg0
		);
	}
} // namespace android::icu::text
