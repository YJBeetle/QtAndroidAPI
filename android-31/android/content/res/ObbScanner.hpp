#pragma once

#include "../../../JObject.hpp"

namespace android::content::res
{
	class ObbInfo;
}

namespace android::content::res
{
	class ObbScanner : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObbScanner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObbScanner(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::res::ObbInfo getObbInfo(jstring arg0);
	};
} // namespace android::content::res

