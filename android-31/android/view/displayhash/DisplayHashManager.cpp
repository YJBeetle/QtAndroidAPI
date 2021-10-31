#include "./DisplayHash.hpp"
#include "./VerifiedDisplayHash.hpp"
#include "./DisplayHashManager.hpp"

namespace android::view::displayhash
{
	// Fields
	
	// QJniObject forward
	DisplayHashManager::DisplayHashManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass DisplayHashManager::getSupportedHashAlgorithms()
	{
		return callObjectMethod(
			"getSupportedHashAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	android::view::displayhash::VerifiedDisplayHash DisplayHashManager::verifyDisplayHash(android::view::displayhash::DisplayHash arg0)
	{
		return callObjectMethod(
			"verifyDisplayHash",
			"(Landroid/view/displayhash/DisplayHash;)Landroid/view/displayhash/VerifiedDisplayHash;",
			arg0.object()
		);
	}
} // namespace android::view::displayhash

