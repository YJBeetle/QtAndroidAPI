#include "./TtsSpan_SemioticClassBuilder.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	TtsSpan_SemioticClassBuilder::TtsSpan_SemioticClassBuilder(QAndroidJniObject obj) : android::text::style::TtsSpan_Builder(obj) {}
	
	// Constructors
	TtsSpan_SemioticClassBuilder::TtsSpan_SemioticClassBuilder(jstring arg0)
		: android::text::style::TtsSpan_Builder(
			"android.text.style.TtsSpan$SemioticClassBuilder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setAnimacy(jstring arg0)
	{
		return callObjectMethod(
			"setAnimacy",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setCase(jstring arg0)
	{
		return callObjectMethod(
			"setCase",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setGender(jstring arg0)
	{
		return callObjectMethod(
			"setGender",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
	android::text::style::TtsSpan_SemioticClassBuilder TtsSpan_SemioticClassBuilder::setMultiplicity(jstring arg0)
	{
		return callObjectMethod(
			"setMultiplicity",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$SemioticClassBuilder;",
			arg0
		);
	}
} // namespace android::text::style

