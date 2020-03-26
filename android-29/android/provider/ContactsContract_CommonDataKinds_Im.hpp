#pragma once

#ifndef ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_IM
#define ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_IM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Im : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CUSTOM_PROTOCOL();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring PROTOCOL();
		static jint PROTOCOL_AIM();
		static jint PROTOCOL_CUSTOM();
		static jint PROTOCOL_GOOGLE_TALK();
		static jint PROTOCOL_ICQ();
		static jint PROTOCOL_JABBER();
		static jint PROTOCOL_MSN();
		static jint PROTOCOL_NETMEETING();
		static jint PROTOCOL_QQ();
		static jint PROTOCOL_SKYPE();
		static jint PROTOCOL_YAHOO();
		static jint TYPE_HOME();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getTypeLabelResource(jint arg0);
		static jstring getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getProtocolLabelResource(jint arg0);
		static jstring getProtocolLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2);
	};
} // namespace __jni_impl::android::provider

#include "../content/res/Resources.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Im::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Im::CUSTOM_PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"CUSTOM_PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Im::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Im::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Im::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Im::PROTOCOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_AIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_AIM"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_CUSTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_CUSTOM"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_GOOGLE_TALK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_GOOGLE_TALK"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_ICQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_ICQ"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_JABBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_JABBER"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_MSN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_MSN"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_NETMEETING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_NETMEETING"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_QQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_QQ"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_SKYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_SKYPE"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::PROTOCOL_YAHOO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"PROTOCOL_YAHOO"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::TYPE_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Im::TYPE_WORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"TYPE_WORK"
		);
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Im::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"(V)V");
	}
	
	// Methods
	jint ContactsContract_CommonDataKinds_Im::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
	jstring ContactsContract_CommonDataKinds_Im::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Im::getProtocolLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getProtocolLabelResource",
			"(I)I",
			arg0
		);
	}
	jstring ContactsContract_CommonDataKinds_Im::getProtocolLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Im",
			"getProtocolLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Im : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Im
	{
	public:
		ContactsContract_CommonDataKinds_Im(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Im()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTSCONTRACT_COMMONDATAKINDS_IM

