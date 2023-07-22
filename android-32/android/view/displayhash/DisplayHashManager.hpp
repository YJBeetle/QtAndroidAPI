#pragma once

#include "./DisplayHash.def.hpp"
#include "./VerifiedDisplayHash.def.hpp"
#include "./DisplayHashManager.def.hpp"

namespace android::view::displayhash
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject DisplayHashManager::getSupportedHashAlgorithms() const
	{
		return callObjectMethod(
			"getSupportedHashAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	inline android::view::displayhash::VerifiedDisplayHash DisplayHashManager::verifyDisplayHash(android::view::displayhash::DisplayHash arg0) const
	{
		return callObjectMethod(
			"verifyDisplayHash",
			"(Landroid/view/displayhash/DisplayHash;)Landroid/view/displayhash/VerifiedDisplayHash;",
			arg0.object()
		);
	}
} // namespace android::view::displayhash

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::displayhash;
#endif
