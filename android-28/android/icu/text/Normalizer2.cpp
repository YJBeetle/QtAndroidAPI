#include "./Normalizer_QuickCheckResult.hpp"
#include "./Normalizer2_Mode.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "./Normalizer2.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	Normalizer2::Normalizer2(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::Normalizer2 Normalizer2::getInstance(java::io::InputStream arg0, JString arg1, android::icu::text::Normalizer2_Mode arg2)
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
	android::icu::text::Normalizer2 Normalizer2::getNFCInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFCInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	android::icu::text::Normalizer2 Normalizer2::getNFDInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFDInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	android::icu::text::Normalizer2 Normalizer2::getNFKCCasefoldInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKCCasefoldInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	android::icu::text::Normalizer2 Normalizer2::getNFKCInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKCInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	android::icu::text::Normalizer2 Normalizer2::getNFKDInstance()
	{
		return callStaticObjectMethod(
			"android.icu.text.Normalizer2",
			"getNFKDInstance",
			"()Landroid/icu/text/Normalizer2;"
		);
	}
	java::lang::StringBuilder Normalizer2::append(java::lang::StringBuilder arg0, JString arg1)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint Normalizer2::composePair(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"composePair",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Normalizer2::getCombiningClass(jint arg0)
	{
		return callMethod<jint>(
			"getCombiningClass",
			"(I)I",
			arg0
		);
	}
	JString Normalizer2::getDecomposition(jint arg0)
	{
		return callObjectMethod(
			"getDecomposition",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Normalizer2::getRawDecomposition(jint arg0)
	{
		return callObjectMethod(
			"getRawDecomposition",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jboolean Normalizer2::hasBoundaryAfter(jint arg0)
	{
		return callMethod<jboolean>(
			"hasBoundaryAfter",
			"(I)Z",
			arg0
		);
	}
	jboolean Normalizer2::hasBoundaryBefore(jint arg0)
	{
		return callMethod<jboolean>(
			"hasBoundaryBefore",
			"(I)Z",
			arg0
		);
	}
	jboolean Normalizer2::isInert(jint arg0)
	{
		return callMethod<jboolean>(
			"isInert",
			"(I)Z",
			arg0
		);
	}
	jboolean Normalizer2::isNormalized(JString arg0)
	{
		return callMethod<jboolean>(
			"isNormalized",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	JObject Normalizer2::normalize(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString Normalizer2::normalize(JString arg0)
	{
		return callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::lang::StringBuilder Normalizer2::normalize(JString arg0, java::lang::StringBuilder arg1)
	{
		return callObjectMethod(
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::lang::StringBuilder Normalizer2::normalizeSecondAndAppend(java::lang::StringBuilder arg0, JString arg1)
	{
		return callObjectMethod(
			"normalizeSecondAndAppend",
			"(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::icu::text::Normalizer_QuickCheckResult Normalizer2::quickCheck(JString arg0)
	{
		return callObjectMethod(
			"quickCheck",
			"(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;",
			arg0.object<jstring>()
		);
	}
	jint Normalizer2::spanQuickCheckYes(JString arg0)
	{
		return callMethod<jint>(
			"spanQuickCheckYes",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
} // namespace android::icu::text

