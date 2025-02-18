#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FederatedComputeInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FederatedComputeInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPopulationName() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

