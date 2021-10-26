#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class ContactsContract_SearchSnippets : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DEFERRED_SNIPPETING_KEY();
		static jstring SNIPPET();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_SearchSnippets::DEFERRED_SNIPPETING_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"DEFERRED_SNIPPETING_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_SearchSnippets::SNIPPET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"SNIPPET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContactsContract_SearchSnippets::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$SearchSnippets",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_SearchSnippets : public __jni_impl::android::provider::ContactsContract_SearchSnippets
	{
	public:
		ContactsContract_SearchSnippets(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_SearchSnippets()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_SEARCHSNIPPETS

