#pragma once

#include "../../__JniBaseClass.hpp"
#include "./JsResult.hpp"


namespace android::webkit
{
	class JsPromptResult : public android::webkit::JsResult
	{
	public:
		// Fields
		
		JsPromptResult(QAndroidJniObject obj);
		// Constructors
		JsPromptResult() = default;
		
		// Methods
		void confirm(jstring arg0);
	};
} // namespace android::webkit

