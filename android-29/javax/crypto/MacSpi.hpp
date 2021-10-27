#pragma once

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
		jobject clone();
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
			"()V"
		);
	}
	
	// Methods
	jobject MacSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
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

