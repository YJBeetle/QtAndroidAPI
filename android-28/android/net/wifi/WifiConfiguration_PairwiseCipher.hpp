#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_PairwiseCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint CCMP();
		static jint NONE();
		static jint TKIP();
		static jarray strings();
		static jstring varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_PairwiseCipher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_PairwiseCipher(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

