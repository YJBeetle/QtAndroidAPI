#include "../../../JString.hpp"
#include "./TtsSpan_ElectronicBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$ElectronicBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setDomain(JString arg0)
	{
		return callObjectMethod(
			"setDomain",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setEmailArguments(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"setEmailArguments",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setFragmentId(JString arg0)
	{
		return callObjectMethod(
			"setFragmentId",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPassword(JString arg0)
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPath(JString arg0)
	{
		return callObjectMethod(
			"setPath",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPort(jint arg0)
	{
		return callObjectMethod(
			"setPort",
			"(I)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setProtocol(JString arg0)
	{
		return callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setQueryString(JString arg0)
	{
		return callObjectMethod(
			"setQueryString",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setUsername(JString arg0)
	{
		return callObjectMethod(
			"setUsername",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::style

