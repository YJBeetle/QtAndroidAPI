#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::vcn
{
	class VcnManager_VcnStatusCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnManager_VcnStatusCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VcnManager_VcnStatusCallback(QJniObject obj);
		
		// Constructors
		VcnManager_VcnStatusCallback();
		
		// Methods
		void onGatewayConnectionError(jstring arg0, jint arg1, jthrowable arg2);
		void onStatusChanged(jint arg0);
	};
} // namespace android::net::vcn

