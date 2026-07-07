#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class TetheringManager_TetheringRequest;
}

namespace android::net
{
	class TetheringManager : public JObject
	{
	public:
		// Fields
		static jint CONNECTIVITY_SCOPE_GLOBAL();
		static jint TETHERING_WIFI();
		static jint TETHER_ERROR_DHCPSERVER_ERROR();
		static jint TETHER_ERROR_DISABLE_FORWARDING_ERROR();
		static jint TETHER_ERROR_DUPLICATE_REQUEST();
		static jint TETHER_ERROR_ENABLE_FORWARDING_ERROR();
		static jint TETHER_ERROR_ENTITLEMENT_UNKNOWN();
		static jint TETHER_ERROR_IFACE_CFG_ERROR();
		static jint TETHER_ERROR_INTERNAL_ERROR();
		static jint TETHER_ERROR_NO_ACCESS_TETHERING_PERMISSION();
		static jint TETHER_ERROR_NO_CHANGE_TETHERING_PERMISSION();
		static jint TETHER_ERROR_NO_ERROR();
		static jint TETHER_ERROR_PROVISIONING_FAILED();
		static jint TETHER_ERROR_SERVICE_UNAVAIL();
		static jint TETHER_ERROR_TETHER_IFACE_ERROR();
		static jint TETHER_ERROR_UNAVAIL_IFACE();
		static jint TETHER_ERROR_UNKNOWN_IFACE();
		static jint TETHER_ERROR_UNKNOWN_REQUEST();
		static jint TETHER_ERROR_UNKNOWN_TYPE();
		static jint TETHER_ERROR_UNSUPPORTED();
		static jint TETHER_ERROR_UNTETHER_IFACE_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TetheringManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TetheringManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void registerTetheringEventCallback(JObject arg0, JObject arg1) const;
		void startTethering(android::net::TetheringManager_TetheringRequest arg0, JObject arg1, JObject arg2) const;
		void stopTethering(android::net::TetheringManager_TetheringRequest arg0, JObject arg1, JObject arg2) const;
		void unregisterTetheringEventCallback(JObject arg0) const;
	};
} // namespace android::net

