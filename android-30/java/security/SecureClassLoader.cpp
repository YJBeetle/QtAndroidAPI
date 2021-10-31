#include "../lang/ClassLoader.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./CodeSource.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./SecureClassLoader.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SecureClassLoader::SecureClassLoader(QAndroidJniObject obj) : java::lang::ClassLoader(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::security

