#pragma once

#include "../../../JObject.hpp"

namespace android::content::res
{
	class ObbInfo;
}
class JString;

namespace android::content::res
{
	class ObbScanner : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObbScanner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObbScanner(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::res::ObbInfo getObbInfo(JString arg0);
	};
} // namespace android::content::res

