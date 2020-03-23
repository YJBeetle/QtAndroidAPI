#pragma once

#ifndef JAVAX_CRYPTO_MACSPI
#define JAVAX_CRYPTO_MACSPI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::javax::crypto
{
	class MacSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void MacSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.MacSpi",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MacSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class MacSpi : public __jni_impl::javax::crypto::MacSpi
	{
	public:
		MacSpi(QAndroidJniObject obj) { __thiz = obj; }
		MacSpi()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_MACSPI

