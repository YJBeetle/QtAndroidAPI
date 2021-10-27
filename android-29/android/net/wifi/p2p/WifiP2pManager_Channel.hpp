#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pManager;
}
namespace __jni_impl::android::os
{
	class Binder;
}
namespace __jni_impl::android::os
{
	class Looper;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pManager_Channel : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "../../../content/Context.hpp"
#include "WifiP2pManager.hpp"
#include "../../../os/Binder.hpp"
#include "../../../os/Looper.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	void WifiP2pManager_Channel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pManager$Channel",
			"(V)V");
	}
	
	// Methods
	void WifiP2pManager_Channel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p

namespace android::net::wifi::p2p
{
	class WifiP2pManager_Channel : public __jni_impl::android::net::wifi::p2p::WifiP2pManager_Channel
	{
	public:
		WifiP2pManager_Channel(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pManager_Channel()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p

