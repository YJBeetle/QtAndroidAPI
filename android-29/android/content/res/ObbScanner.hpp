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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObbScanner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ObbScanner(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::res::ObbInfo getObbInfo(jstring arg0);
	};
} // namespace android::content::res

