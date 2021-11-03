#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::net::wifi
{
	class WifiConfiguration_AuthAlgorithm : public JObject
	{
	public:
		// Fields
		static jint LEAP();
		static jint OPEN();
		static jint SHARED();
		static JArray strings();
		static JString varName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_AuthAlgorithm(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_AuthAlgorithm(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

