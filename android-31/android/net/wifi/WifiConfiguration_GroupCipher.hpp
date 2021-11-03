#pragma once

#include "../../../JObject.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_GroupCipher : public JObject
	{
	public:
		// Fields
		static jint CCMP();
		static jint GCMP_128();
		static jint GCMP_256();
		static jint SMS4();
		static jint TKIP();
		static jint WEP104();
		static jint WEP40();
		static jarray strings();
		static jstring varName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_GroupCipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_GroupCipher(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

