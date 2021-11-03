#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CollationKey.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	CollationKey::CollationKey(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CollationKey::CollationKey(JString arg0, JByteArray arg1)
		: JObject(
			"android.icu.text.CollationKey",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	jint CollationKey::compareTo(android::icu::text::CollationKey arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/CollationKey;)I",
			arg0.object()
		);
	}
	jint CollationKey::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean CollationKey::equals(android::icu::text::CollationKey arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/CollationKey;)Z",
			arg0.object()
		);
	}
	jboolean CollationKey::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::text::CollationKey CollationKey::getBound(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getBound",
			"(II)Landroid/icu/text/CollationKey;",
			arg0,
			arg1
		);
	}
	JString CollationKey::getSourceString() const
	{
		return callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		);
	}
	jint CollationKey::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::icu::text::CollationKey CollationKey::merge(android::icu::text::CollationKey arg0) const
	{
		return callObjectMethod(
			"merge",
			"(Landroid/icu/text/CollationKey;)Landroid/icu/text/CollationKey;",
			arg0.object()
		);
	}
	JByteArray CollationKey::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
} // namespace android::icu::text

