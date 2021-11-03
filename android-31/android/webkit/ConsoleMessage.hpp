#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class ConsoleMessage_MessageLevel;
}
class JString;

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
		ConsoleMessage(JString arg0, JString arg1, jint arg2, android::webkit::ConsoleMessage_MessageLevel arg3);
		
		// Methods
		jint lineNumber() const;
		JString message() const;
		android::webkit::ConsoleMessage_MessageLevel messageLevel() const;
		JString sourceId() const;
	};
} // namespace android::webkit

