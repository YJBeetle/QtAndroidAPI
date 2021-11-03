#pragma once

#include "../../../JObject.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_Status : public JObject
	{
	public:
		// Fields
		static jint CURRENT();
		static jint DISABLED();
		static jint ENABLED();
		static jarray strings();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_Status(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_Status(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

