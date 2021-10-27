#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class AccessNetworkConstants : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void AccessNetworkConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.AccessNetworkConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class AccessNetworkConstants : public __jni_impl::android::telephony::AccessNetworkConstants
	{
	public:
		AccessNetworkConstants(QAndroidJniObject obj) { __thiz = obj; }
		AccessNetworkConstants()
		{
			__constructor();
		}
	};
} // namespace android::telephony

