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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProcessedData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProcessedData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getAccountId();
		JByteArray getData();
		JString getSubscriptionId();
	};
} // namespace android::drm

