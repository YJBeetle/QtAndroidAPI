#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::net::wifi
{
	class WifiConfiguration_GroupCipher : public JObject
	{
	public:
		// Fields
		static jint CCMP();
		static jint GCMP_256();
		static jint SMS4();
		static jint TKIP();
		static jint WEP104();
		static jint WEP40();
		static JArray strings();
		static JString varName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_GroupCipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_GroupCipher(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

