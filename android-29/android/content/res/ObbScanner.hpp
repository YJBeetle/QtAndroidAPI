#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class ObbInfo;
}

namespace android::content::res
{
	class ObbScanner : public __JniBaseClass
	{
	public:
		// Fields
		
		ObbScanner(QAndroidJniObject obj);
		// Constructors
		ObbScanner() = default;
		
		// Methods
		static QAndroidJniObject getObbInfo(jstring arg0);
	};
} // namespace android::content::res

