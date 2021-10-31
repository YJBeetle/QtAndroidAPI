#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_Status : public __JniBaseClass
	{
	public:
		// Fields
		static jint CURRENT();
		static jint DISABLED();
		static jint ENABLED();
		static jarray strings();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_Status(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_Status(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

