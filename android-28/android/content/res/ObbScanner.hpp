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
		
		// QJniObject forward
		template<typename ...Ts> explicit ObbScanner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ObbScanner(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::res::ObbInfo getObbInfo(jstring arg0);
	};
} // namespace android::content::res

