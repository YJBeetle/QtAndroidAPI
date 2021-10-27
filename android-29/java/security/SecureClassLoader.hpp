#pragma once

#ifndef JAVA_SECURITY_SECURECLASSLOADER
#define JAVA_SECURITY_SECURECLASSLOADER

#include "../../__JniBaseClass.hpp"
#include "../lang/ClassLoader.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::security
{
	class CodeSource;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}

namespace __jni_impl::java::security
{
	class SecureClassLoader : public __jni_impl::java::lang::ClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security

#include "../lang/ClassLoader.hpp"
#include "../nio/ByteBuffer.hpp"
#include "CodeSource.hpp"
#include "PermissionCollection.hpp"
#include "ProtectionDomain.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SecureClassLoader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.SecureClassLoader",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class SecureClassLoader : public __jni_impl::java::security::SecureClassLoader
	{
	public:
		SecureClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		SecureClassLoader()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SECURECLASSLOADER

