#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::webkit
{
	class ConsoleMessage_MessageLevel : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::ConsoleMessage_MessageLevel DEBUG();
		static android::webkit::ConsoleMessage_MessageLevel ERROR();
		static android::webkit::ConsoleMessage_MessageLevel LOG();
		static android::webkit::ConsoleMessage_MessageLevel TIP();
		static android::webkit::ConsoleMessage_MessageLevel WARNING();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConsoleMessage_MessageLevel(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ConsoleMessage_MessageLevel(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::ConsoleMessage_MessageLevel valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::webkit

