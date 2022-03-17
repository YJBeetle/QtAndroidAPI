#pragma once

#include "./Normalizer_QuickCheckResult.def.hpp"
#include "./Normalizer2_Mode.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuilder.def.hpp"
#include "./Normalizer2.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::Normalizer2 Normalizer2::getInstance(java::io::InputStream arg0, JString arg1, android::icu::text::Normalizer2_Mode arg2)
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getInstance",
			"(Ljava/io/InputStream;Ljava/lang/String;Landroid/icu/text/Normalizer2$Mode;)Landroid/icu/text/Normalizer2;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::icu::text::Normalizer2 Normalizer2::getNFCInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFCInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	inline android::icu::text::Normalizer2 Normalizer2::getNFDInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFDInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	inline android::icu::text::Normalizer2 Normalizer2::getNFKCCasefoldInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKCCasefoldInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	inline android::icu::text::Normalizer2 Normalizer2::getNFKCInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKCInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	inline android::icu::text::Normalizer2 Normalizer2::getNFKDInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKDInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	inline java::lang::StringBuilder Normalizer2::append(java::lang::StringBuilder arg0, JString arg1) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint Normalizer2::composePair(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"composePair",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint Normalizer2::getCombiningClass(jint arg0) const
	{
		return callMethod<jint>(
			"getCombiningClass",
			"(I)I",
			arg0
		);
	}
	inline JString Normalizer2::getDecomposition(jint arg0) const
	{
		return callObjectMethod(
			"getDecomposition",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Normalizer2::getRawDecomposition(jint arg0) const
	{
		return callObjectMethod(
			"getRawDecomposition",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean Normalizer2::hasBoundaryAfter(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasBoundaryAfter",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Normalizer2::hasBoundaryBefore(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasBoundaryBefore",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Normalizer2::isInert(jint arg0) const
	{
		return callMethod<jboolean>(
			"isInert",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Normalizer2::isNormalized(JString arg0) const
	{
		return callMethod<jboolean>(
			"isNormalized",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject Normalizer2::normalize(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString Normalizer2::normalize(JString arg0) const
	{
		return callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::StringBuilder Normalizer2::normalize(JString arg0, java::lang::StringBuilder arg1) const
	{
		return callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::lang::StringBuilder Normalizer2::normalizeSecondAndAppend(java::lang::StringBuilder arg0, JString arg1) const
	{
		return callObjectMethod(
			"normalizeSecondAndAppend",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::icu::text::Normalizer_QuickCheckResult Normalizer2::quickCheck(JString arg0) const
	{
		return callObjectMethod(
			"quickCheck",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;",
			arg0.object<jstring>()
		);
	}
	inline jint Normalizer2::spanQuickCheckYes(JString arg0) const
	{
		return callMethod<jint>(
			"spanQuickCheckYes",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

// Base class headers

