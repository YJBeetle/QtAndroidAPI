#include "../../../JString.hpp"
#include "./TtsSpan_DecimalBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DecimalBuilder",
			"()V"
		) {}
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(JString arg0, JString arg1)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	TtsSpan_DecimalBuilder::TtsSpan_DecimalBuilder(jdouble arg0, jint arg1, jint arg2)
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$DecimalBuilder",
			"(DII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"setArgumentsFromDouble",
			"(DII)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setFractionalPart(JString arg0)
	{
		return callObjectMethod(
			"setFractionalPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setIntegerPart(JString arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_DecimalBuilder TtsSpan_DecimalBuilder::setIntegerPart(jlong arg0)
	{
		return callObjectMethod(
			"setIntegerPart",
			"(J)Landroid/text/style/TtsSpan$DecimalBuilder;",
			arg0
		);
	}
} // namespace android::text::style

