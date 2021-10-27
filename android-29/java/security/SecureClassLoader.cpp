#include "../lang/ClassLoader.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./CodeSource.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./SecureClassLoader.hpp"

namespace java::security
{
	// Fields
	
	SecureClassLoader::SecureClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::security

