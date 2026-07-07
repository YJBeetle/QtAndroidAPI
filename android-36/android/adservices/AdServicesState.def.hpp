#pragma once

#include "../../JObject.hpp"

namespace android::adservices
{
	class AdServicesState : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdServicesState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdServicesState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isAdServicesStateEnabled();
	};
} // namespace android::adservices

