#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RequestToken : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RequestToken(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RequestToken(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::adservices::ondevicepersonalization

