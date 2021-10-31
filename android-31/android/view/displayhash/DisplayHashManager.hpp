#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::displayhash
{
	class DisplayHash;
}
namespace android::view::displayhash
{
	class VerifiedDisplayHash;
}

namespace android::view::displayhash
{
	class DisplayHashManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DisplayHashManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DisplayHashManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getSupportedHashAlgorithms();
		android::view::displayhash::VerifiedDisplayHash verifyDisplayHash(android::view::displayhash::DisplayHash arg0);
	};
} // namespace android::view::displayhash

