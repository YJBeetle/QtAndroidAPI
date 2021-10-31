#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class ConsoleMessage_MessageLevel : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DEBUG();
		static QAndroidJniObject ERROR();
		static QAndroidJniObject LOG();
		static QAndroidJniObject TIP();
		static QAndroidJniObject WARNING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConsoleMessage_MessageLevel(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ConsoleMessage_MessageLevel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

