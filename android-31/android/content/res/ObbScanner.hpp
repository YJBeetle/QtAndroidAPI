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
		
		// QJniObject forward
		template<typename ...Ts> explicit ObbScanner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObbScanner(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::res::ObbInfo getObbInfo(JString arg0);
	};
} // namespace android::content::res

