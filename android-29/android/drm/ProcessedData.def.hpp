#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;

namespace android::drm
{
	class ProcessedData : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProcessedData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProcessedData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getAccountId() const;
		JByteArray getData() const;
		JString getSubscriptionId() const;
	};
} // namespace android::drm

