#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ContactsContract_StatusUpdates.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_Presence : public __jni_impl::android::provider::ContactsContract_StatusUpdates
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
	void ContactsContract_Presence::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Presence",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Presence : public __jni_impl::android::provider::ContactsContract_Presence
	{
	public:
		ContactsContract_Presence(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Presence()
		{
			__constructor();
		}
	};
} // namespace android::provider

