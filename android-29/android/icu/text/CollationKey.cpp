#include "./CollationKey.hpp"

namespace android::icu::text
{
	// Fields
	
	CollationKey::CollationKey(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CollationKey::CollationKey(jstring arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CollationKey",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint CollationKey::compareTo(android::icu::text::CollationKey arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/CollationKey;)I",
			arg0.__jniObject().object()
		);
	}
	jint CollationKey::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean CollationKey::equals(android::icu::text::CollationKey arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/CollationKey;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CollationKey::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CollationKey::getBound(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBound",
			"(II)Landroid/icu/text/CollationKey;",
			arg0,
			arg1
		);
	}
	jstring CollationKey::getSourceString()
	{
		return __thiz.callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CollationKey::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject CollationKey::merge(android::icu::text::CollationKey arg0)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Landroid/icu/text/CollationKey;)Landroid/icu/text/CollationKey;",
			arg0.__jniObject().object()
		);
	}
	jbyteArray CollationKey::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace android::icu::text

