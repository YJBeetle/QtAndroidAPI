#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS
#define ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_PinnedPositions : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEMOTED();
		static jint UNPINNED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void undemote(__jni_impl::android::content::ContentResolver arg0, jlong arg1);
		static void pin(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jint arg2);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jint ContactsContract_PinnedPositions::DEMOTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"DEMOTED"
		);
	}
	jint ContactsContract_PinnedPositions::UNPINNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"UNPINNED"
		);
	}
	
	// Constructors
	void ContactsContract_PinnedPositions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$PinnedPositions",
			"()V"
		);
	}
	
	// Methods
	void ContactsContract_PinnedPositions::undemote(__jni_impl::android::content::ContentResolver arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$PinnedPositions",
			"undemote",
			"(Landroid/content/ContentResolver;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContactsContract_PinnedPositions::pin(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$PinnedPositions",
			"pin",
			"(Landroid/content/ContentResolver;JI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_PinnedPositions : public __jni_impl::android::provider::ContactsContract_PinnedPositions
	{
	public:
		ContactsContract_PinnedPositions(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_PinnedPositions()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_PINNEDPOSITIONS

