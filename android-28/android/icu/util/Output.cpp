#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Output.hpp"

namespace android::icu::util
{
	// Fields
	JObject Output::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	Output::Output()
		: JObject(
			"android.icu.util.Output",
			"()V"
		) {}
	Output::Output(JObject arg0)
		: JObject(
			"android.icu.util.Output",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	JString Output::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

