#pragma once

#include "./JsResult.hpp"

class JString;

namespace android::webkit
{
	class JsPromptResult : public android::webkit::JsResult
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JsPromptResult(const char *className, const char *sig, Ts...agv) : android::webkit::JsResult(className, sig, std::forward<Ts>(agv)...) {}
		JsPromptResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		void confirm(JString arg0);
	};
} // namespace android::webkit

