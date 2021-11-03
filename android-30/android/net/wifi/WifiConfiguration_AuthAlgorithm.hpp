#pragma once

#include "../../../JObject.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_AuthAlgorithm : public JObject
	{
	public:
		// Fields
		static jint LEAP();
		static jint OPEN();
		static jint SAE();
		static jint SHARED();
		static jarray strings();
		static jstring varName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_AuthAlgorithm(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_AuthAlgorithm(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

