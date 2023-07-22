#pragma once

#include "../../JObject.hpp"

namespace android::adservices
{
	class AdServicesVersion : public JObject
	{
	public:
		// Fields
		static jint API_VERSION();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdServicesVersion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdServicesVersion(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::adservices

