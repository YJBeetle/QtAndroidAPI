#include "./TtsSpan.hpp"
#include "../../../JString.hpp"
#include "./TtsSpan_Builder.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TtsSpan_Builder::TtsSpan_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TtsSpan_Builder::TtsSpan_Builder(JString arg0)
		: JObject(
			"android.text.style.TtsSpan$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::text::style::TtsSpan TtsSpan_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/style/TtsSpan;"
		);
	}
	android::text::style::TtsSpan_Builder TtsSpan_Builder::setIntArgument(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"setIntArgument",
			"(Ljava/lang/String;I)Landroid/text/style/TtsSpan$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::text::style::TtsSpan_Builder TtsSpan_Builder::setLongArgument(JString arg0, jlong arg1)
	{
		return callObjectMethod(
			"setLongArgument",
			"(Ljava/lang/String;J)Landroid/text/style/TtsSpan$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::text::style::TtsSpan_Builder TtsSpan_Builder::setStringArgument(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"setStringArgument",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/text/style/TtsSpan$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::text::style

