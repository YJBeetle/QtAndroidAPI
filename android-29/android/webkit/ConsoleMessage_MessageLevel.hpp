#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConsoleMessage_MessageLevel(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ConsoleMessage_MessageLevel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::ConsoleMessage_MessageLevel valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

