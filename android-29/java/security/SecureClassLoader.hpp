#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/ClassLoader.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::security
{
	class SecureClassLoader : public java::lang::ClassLoader
	{
	public:
		// Fields
		
		SecureClassLoader(QAndroidJniObject obj);
		// Constructors
		SecureClassLoader() = default;
		
		// Methods
	};
} // namespace java::security

