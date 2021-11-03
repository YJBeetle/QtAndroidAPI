#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class ConsoleMessage_MessageLevel;
}

namespace android::webkit
{
	class ConsoleMessage : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConsoleMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConsoleMessage(QJniObject obj);
		
		// Constructors
		ConsoleMessage(jstring arg0, jstring arg1, jint arg2, android::webkit::ConsoleMessage_MessageLevel arg3);
		
		// Methods
		jint lineNumber();
		jstring message();
		android::webkit::ConsoleMessage_MessageLevel messageLevel();
		jstring sourceId();
	};
} // namespace android::webkit

