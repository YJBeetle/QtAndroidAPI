#include "./CollationKey.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	CollationKey::CollationKey(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CollationKey::CollationKey(jstring arg0, jbyteArray arg1)
		: __JniBaseClass(
			"android.icu.text.CollationKey",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint CollationKey::compareTo(android::icu::text::CollationKey arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/CollationKey;)I",
			arg0.object()
		);
	}
	jint CollationKey::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean CollationKey::equals(android::icu::text::CollationKey arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/CollationKey;)Z",
			arg0.object()
		);
	}
	jboolean CollationKey::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::icu::text::CollationKey CollationKey::getBound(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getBound",
			"(II)Landroid/icu/text/CollationKey;",
			arg0,
			arg1
		);
	}
	jstring CollationKey::getSourceString()
	{
		return callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CollationKey::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::icu::text::CollationKey CollationKey::merge(android::icu::text::CollationKey arg0)
	{
		return callObjectMethod(
			"merge",
			"(Landroid/icu/text/CollationKey;)Landroid/icu/text/CollationKey;",
			arg0.object()
		);
	}
	jbyteArray CollationKey::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace android::icu::text

