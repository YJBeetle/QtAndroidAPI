#include "../../JByteArray.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./CodeSource.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./SecureClassLoader.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	SecureClassLoader::SecureClassLoader(QJniObject obj) : java::lang::ClassLoader(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::security

