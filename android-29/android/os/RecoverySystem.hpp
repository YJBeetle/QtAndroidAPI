#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace java::io
{
	class File;
}

namespace android::os
{
	class RecoverySystem : public __JniBaseClass
	{
	public:
		// Fields
		
		RecoverySystem(QAndroidJniObject obj);
		// Constructors
		RecoverySystem() = default;
		
		// Methods
		static void installPackage(android::content::Context arg0, java::io::File arg1);
		static void rebootWipeCache(android::content::Context arg0);
		static void rebootWipeUserData(android::content::Context arg0);
		static void verifyPackage(java::io::File arg0, __JniBaseClass arg1, java::io::File arg2);
	};
} // namespace android::os

