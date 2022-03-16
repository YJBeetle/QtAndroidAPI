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
		static jint GCMP_128();
		static jint GCMP_256();
		static jint NONE();
		static jint SMS4();
		static jint TKIP();
		static JArray strings();
		static JString varName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_PairwiseCipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_PairwiseCipher(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

