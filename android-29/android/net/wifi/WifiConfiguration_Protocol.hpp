#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::net::wifi
{
	class WifiConfiguration_Protocol : public JObject
	{
	public:
		// Fields
		static jint RSN();
		static jint WPA();
		static JArray strings();
		static JString varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_Protocol(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_Protocol(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

