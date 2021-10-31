#include "./AlteredCharSequence.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	AlteredCharSequence::AlteredCharSequence(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::text::AlteredCharSequence AlteredCharSequence::make(jstring arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.text.AlteredCharSequence",
			"make",
			"(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jchar AlteredCharSequence::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void AlteredCharSequence::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint AlteredCharSequence::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring AlteredCharSequence::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring AlteredCharSequence::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

