#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace android::net
{
	class NetworkRequest;
}
namespace android::net::nsd
{
	class NsdServiceInfo;
}
class JString;

namespace android::net::nsd
{
	class NsdManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_NSD_STATE_CHANGED();
		static JString EXTRA_NSD_STATE();
		static jint FAILURE_ALREADY_ACTIVE();
		static jint FAILURE_BAD_PARAMETERS();
		static jint FAILURE_INTERNAL_ERROR();
		static jint FAILURE_MAX_LIMIT();
		static jint FAILURE_OPERATION_NOT_RUNNING();
		static jint NSD_STATE_DISABLED();
		static jint NSD_STATE_ENABLED();
		static jint PROTOCOL_DNS_SD();
		
		// QJniObject forward
		template<typename ...Ts> explicit NsdManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NsdManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void discoverServices(JString arg0, jint arg1, JObject arg2) const;
		void discoverServices(JString arg0, jint arg1, android::net::Network arg2, JObject arg3, JObject arg4) const;
		void discoverServices(JString arg0, jint arg1, android::net::NetworkRequest arg2, JObject arg3, JObject arg4) const;
		void registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, JObject arg2) const;
		void registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, JObject arg2, JObject arg3) const;
		void registerServiceInfoCallback(android::net::nsd::NsdServiceInfo arg0, JObject arg1, JObject arg2) const;
		void resolveService(android::net::nsd::NsdServiceInfo arg0, JObject arg1) const;
		void resolveService(android::net::nsd::NsdServiceInfo arg0, JObject arg1, JObject arg2) const;
		void stopServiceDiscovery(JObject arg0) const;
		void stopServiceResolution(JObject arg0) const;
		void unregisterService(JObject arg0) const;
		void unregisterServiceInfoCallback(JObject arg0) const;
	};
} // namespace android::net::nsd

