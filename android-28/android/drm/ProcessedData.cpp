#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./ProcessedData.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	ProcessedData::ProcessedData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ProcessedData::getAccountId() const
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		);
	}
	JByteArray ProcessedData::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	JString ProcessedData::getSubscriptionId() const
	{
		return callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::drm

