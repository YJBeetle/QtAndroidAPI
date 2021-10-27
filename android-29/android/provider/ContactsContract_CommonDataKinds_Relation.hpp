#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_CommonDataKinds_Relation : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring NAME();
		static jint TYPE_ASSISTANT();
		static jint TYPE_BROTHER();
		static jint TYPE_CHILD();
		static jint TYPE_DOMESTIC_PARTNER();
		static jint TYPE_FATHER();
		static jint TYPE_FRIEND();
		static jint TYPE_MANAGER();
		static jint TYPE_MOTHER();
		static jint TYPE_PARENT();
		static jint TYPE_PARTNER();
		static jint TYPE_REFERRED_BY();
		static jint TYPE_RELATIVE();
		static jint TYPE_SISTER();
		static jint TYPE_SPOUSE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jstring getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, const QString &arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace __jni_impl::android::provider

#include "../content/res/Resources.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Relation::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_ASSISTANT"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_BROTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_BROTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_CHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_CHILD"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_DOMESTIC_PARTNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_DOMESTIC_PARTNER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_FATHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FATHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_FRIEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_FRIEND"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_MANAGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MANAGER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_MOTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_MOTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARENT"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_PARTNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_PARTNER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_REFERRED_BY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_REFERRED_BY"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_RELATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_RELATIVE"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_SISTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SISTER"
		);
	}
	jint ContactsContract_CommonDataKinds_Relation::TYPE_SPOUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"TYPE_SPOUSE"
		);
	}
	
	// Constructors
	void ContactsContract_CommonDataKinds_Relation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"(V)V");
	}
	
	// Methods
	jstring ContactsContract_CommonDataKinds_Relation::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Relation::getTypeLabel(__jni_impl::android::content::res::Resources arg0, jint arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Relation::getTypeLabelResource(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Relation",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Relation : public __jni_impl::android::provider::ContactsContract_CommonDataKinds_Relation
	{
	public:
		ContactsContract_CommonDataKinds_Relation(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_CommonDataKinds_Relation()
		{
			__constructor();
		}
	};
} // namespace android::provider

