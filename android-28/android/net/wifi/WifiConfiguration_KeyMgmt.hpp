#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_KeyMgmt : public __JniBaseClass
	{
	public:
		// Fields
		static jint IEEE8021X();
		static jint NONE();
		static jint WPA_EAP();
		static jint WPA_PSK();
		static jarray strings();
		static jstring varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_KeyMgmt(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_KeyMgmt(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

