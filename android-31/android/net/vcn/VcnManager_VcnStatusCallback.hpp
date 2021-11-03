#pragma once

#include "../../../JObject.hpp"

class JString;
class JThrowable;

namespace android::net::vcn
{
	class VcnManager_VcnStatusCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnManager_VcnStatusCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnManager_VcnStatusCallback(QJniObject obj);
		
		// Constructors
		VcnManager_VcnStatusCallback();
		
		// Methods
		void onGatewayConnectionError(JString arg0, jint arg1, JThrowable arg2) const;
		void onStatusChanged(jint arg0) const;
	};
} // namespace android::net::vcn

