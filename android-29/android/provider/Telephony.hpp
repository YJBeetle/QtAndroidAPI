#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Telephony : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void Telephony::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony : public __jni_impl::android::provider::Telephony
	{
	public:
		Telephony(QAndroidJniObject obj) { __thiz = obj; }
		Telephony()
		{
			__constructor();
		}
	};
} // namespace android::provider

