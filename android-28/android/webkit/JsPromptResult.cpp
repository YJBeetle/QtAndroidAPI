#include "../../JString.hpp"
#include "./JsPromptResult.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	void JsPromptResult::confirm(JString arg0) const
	{
		callMethod<void>(
			"confirm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

