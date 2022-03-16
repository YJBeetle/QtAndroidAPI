#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::net::wifi
{
	class WifiConfiguration_PairwiseCipher : public JObject
	{
	public:
		// Fields
		static jint CCMP();
		static jint NONE();
		static jint TKIP();
		static JArray strings();
		static JString varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_PairwiseCipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_PairwiseCipher(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

