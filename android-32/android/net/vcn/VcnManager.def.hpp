#pragma once

#include "../../../JObject.hpp"

namespace android::net::vcn
{
	class VcnConfig;
}
namespace android::net::vcn
{
	class VcnManager_VcnStatusCallback;
}
namespace android::os
{
	class ParcelUuid;
}

namespace android::net::vcn
{
	class VcnManager : public JObject
	{
	public:
		// Fields
		static jint VCN_ERROR_CODE_CONFIG_ERROR();
		static jint VCN_ERROR_CODE_INTERNAL_ERROR();
		static jint VCN_ERROR_CODE_NETWORK_ERROR();
		static jint VCN_STATUS_CODE_ACTIVE();
		static jint VCN_STATUS_CODE_INACTIVE();
		static jint VCN_STATUS_CODE_NOT_CONFIGURED();
		static jint VCN_STATUS_CODE_SAFE_MODE();
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void clearVcnConfig(android::os::ParcelUuid arg0) const;
		JObject getConfiguredSubscriptionGroups() const;
		void registerVcnStatusCallback(android::os::ParcelUuid arg0, JObject arg1, android::net::vcn::VcnManager_VcnStatusCallback arg2) const;
		void setVcnConfig(android::os::ParcelUuid arg0, android::net::vcn::VcnConfig arg1) const;
		void unregisterVcnStatusCallback(android::net::vcn::VcnManager_VcnStatusCallback arg0) const;
	};
} // namespace android::net::vcn

