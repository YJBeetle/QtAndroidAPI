#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class NetworkSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void NetworkSpecifier::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkSpecifier",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::net

namespace android::net
{
	class NetworkSpecifier : public __jni_impl::android::net::NetworkSpecifier
	{
	public:
		NetworkSpecifier(QAndroidJniObject obj) { __thiz = obj; }
		NetworkSpecifier()
		{
			__constructor();
		}
	};
} // namespace android::net

