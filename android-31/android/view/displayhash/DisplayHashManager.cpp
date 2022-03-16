#include "./DisplayHash.hpp"
#include "./VerifiedDisplayHash.hpp"
#include "./DisplayHashManager.hpp"

namespace android::view::displayhash
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject DisplayHashManager::getSupportedHashAlgorithms() const
	{
		return callObjectMethod(
			"getSupportedHashAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	android::view::displayhash::VerifiedDisplayHash DisplayHashManager::verifyDisplayHash(android::view::displayhash::DisplayHash arg0) const
	{
		return callObjectMethod(
			"verifyDisplayHash",
			"(Landroid/view/displayhash/DisplayHash;)Landroid/view/displayhash/VerifiedDisplayHash;",
			arg0.object()
		);
	}
} // namespace android::view::displayhash

