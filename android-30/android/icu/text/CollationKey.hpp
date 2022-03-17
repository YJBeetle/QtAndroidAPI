#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CollationKey.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline CollationKey::CollationKey(JString arg0, JByteArray arg1)
		: JObject(
			"android.icu.text.CollationKey",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint CollationKey::compareTo(android::icu::text::CollationKey arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/text/CollationKey;)I",
			arg0.object()
		);
	}
	inline jint CollationKey::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean CollationKey::equals(android::icu::text::CollationKey arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/CollationKey;)Z",
			arg0.object()
		);
	}
	inline jboolean CollationKey::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::CollationKey CollationKey::getBound(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getBound",
			"(II)Landroid/icu/text/CollationKey;",
			arg0,
			arg1
		);
	}
	inline JString CollationKey::getSourceString() const
	{
		return callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		);
	}
	inline jint CollationKey::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::icu::text::CollationKey CollationKey::merge(android::icu::text::CollationKey arg0) const
	{
		return callObjectMethod(
			"merge",
			"(Landroid/icu/text/CollationKey;)Landroid/icu/text/CollationKey;",
			arg0.object()
		);
	}
	inline JByteArray CollationKey::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
} // namespace android::icu::text

// Base class headers

