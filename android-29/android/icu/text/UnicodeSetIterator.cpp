#include "./UnicodeSet.hpp"
#include "./UnicodeSetIterator.hpp"

namespace android::icu::text
{
	// Fields
	jint UnicodeSetIterator::IS_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.UnicodeSetIterator",
			"IS_STRING"
		);
	}
	jint UnicodeSetIterator::codepoint()
	{
		return __thiz.getField<jint>(
			"codepoint"
		);
	}
	jint UnicodeSetIterator::codepointEnd()
	{
		return __thiz.getField<jint>(
			"codepointEnd"
		);
	}
	jstring UnicodeSetIterator::string()
	{
		return __thiz.getObjectField(
			"string",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	UnicodeSetIterator::UnicodeSetIterator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnicodeSetIterator::UnicodeSetIterator()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetIterator",
			"()V"
		);
	}
	UnicodeSetIterator::UnicodeSetIterator(android::icu::text::UnicodeSet &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.UnicodeSetIterator",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring UnicodeSetIterator::getString()
	{
		return __thiz.callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean UnicodeSetIterator::next()
	{
		return __thiz.callMethod<jboolean>(
			"next",
			"()Z"
		);
	}
	jboolean UnicodeSetIterator::nextRange()
	{
		return __thiz.callMethod<jboolean>(
			"nextRange",
			"()Z"
		);
	}
	void UnicodeSetIterator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void UnicodeSetIterator::reset(android::icu::text::UnicodeSet arg0)
	{
		__thiz.callMethod<void>(
			"reset",
			"(Landroid/icu/text/UnicodeSet;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::icu::text

