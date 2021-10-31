#include "./TtsSpan_ElectronicBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder(QJniObject obj) : android::text::style::TtsSpan_SemioticClassBuilder(obj) {}
	
	// Constructors
	TtsSpan_ElectronicBuilder::TtsSpan_ElectronicBuilder()
		: android::text::style::TtsSpan_SemioticClassBuilder(
			"android.text.style.TtsSpan$ElectronicBuilder",
			"()V"
		) {}
	
	// Methods
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setDomain(jstring arg0)
	{
		return callObjectMethod(
			"setDomain",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setEmailArguments(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setEmailArguments",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0,
			arg1
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setFragmentId(jstring arg0)
	{
		return callObjectMethod(
			"setFragmentId",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPassword(jstring arg0)
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setPath(jstring arg0)
	{
		return callObjectMethod(
			"setPath",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
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
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setProtocol(jstring arg0)
	{
		return callObjectMethod(
			"setProtocol",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setQueryString(jstring arg0)
	{
		return callObjectMethod(
			"setQueryString",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_ElectronicBuilder TtsSpan_ElectronicBuilder::setUsername(jstring arg0)
	{
		return callObjectMethod(
			"setUsername",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$ElectronicBuilder;",
			arg0
		);
	}
} // namespace android::text::style

