#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::net::wifi
{
	class WifiManager_InterfaceCreationImpact : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_InterfaceCreationImpact(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_InterfaceCreationImpact(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiManager_InterfaceCreationImpact(jint arg0, JObject arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getInterfaceType() const;
		JObject getPackages() const;
		jint hashCode() const;
	};
} // namespace android::net::wifi

