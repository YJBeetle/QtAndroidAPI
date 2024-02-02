#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::adservices::common
{
	class AdServicesPermissions : public JObject
	{
	public:
		// Fields
		static JString ACCESS_ADSERVICES_AD_ID();
		static JString ACCESS_ADSERVICES_ATTRIBUTION();
		static JString ACCESS_ADSERVICES_CUSTOM_AUDIENCE();
		static JString ACCESS_ADSERVICES_TOPICS();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdServicesPermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdServicesPermissions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::adservices::common

