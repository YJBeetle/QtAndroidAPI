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
		
		ConsoleMessage_MessageLevel(QAndroidJniObject obj);
		// Constructors
		ConsoleMessage_MessageLevel() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

