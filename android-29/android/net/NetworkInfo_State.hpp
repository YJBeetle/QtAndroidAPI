#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::net
{
	class NetworkInfo_State : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONNECTED();
		static QAndroidJniObject CONNECTING();
		static QAndroidJniObject DISCONNECTED();
		static QAndroidJniObject DISCONNECTING();
		static QAndroidJniObject SUSPENDED();
		static QAndroidJniObject UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInfo_State(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo_State(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::net

