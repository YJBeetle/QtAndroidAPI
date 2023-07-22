#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::app::admin
{
	class PreferentialNetworkServiceConfig;
}

namespace android::app::admin
{
	class PreferentialNetworkServiceConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferentialNetworkServiceConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PreferentialNetworkServiceConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PreferentialNetworkServiceConfig_Builder();
		
		// Methods
		android::app::admin::PreferentialNetworkServiceConfig build() const;
		android::app::admin::PreferentialNetworkServiceConfig_Builder setEnabled(jboolean arg0) const;
		android::app::admin::PreferentialNetworkServiceConfig_Builder setExcludedUids(JIntArray arg0) const;
		android::app::admin::PreferentialNetworkServiceConfig_Builder setFallbackToDefaultConnectionAllowed(jboolean arg0) const;
		android::app::admin::PreferentialNetworkServiceConfig_Builder setIncludedUids(JIntArray arg0) const;
		android::app::admin::PreferentialNetworkServiceConfig_Builder setNetworkId(jint arg0) const;
	};
} // namespace android::app::admin

