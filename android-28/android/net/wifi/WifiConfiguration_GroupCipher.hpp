#pragma once

#include "../../../JObject.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_GroupCipher : public JObject
	{
	public:
		// Fields
		static jint CCMP();
		static jint TKIP();
		static jint WEP104();
		static jint WEP40();
		static jarray strings();
		static jstring varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_GroupCipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_GroupCipher(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

