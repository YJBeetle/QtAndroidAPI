#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class ContactsContract_Contacts_AggregationSuggestions_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject addNameParameter(jstring arg0);
		QAndroidJniObject addNameParameter(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject setContactId(jlong arg0);
		QAndroidJniObject setLimit(jint arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void ContactsContract_Contacts_AggregationSuggestions_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Contacts$AggregationSuggestions$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::addNameParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addNameParameter",
			"(Ljava/lang/String;)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::addNameParameter(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addNameParameter",
			"(Ljava/lang/String;)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::setContactId(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setContactId",
			"(J)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContactsContract_Contacts_AggregationSuggestions_Builder::setLimit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setLimit",
			"(I)Landroid/provider/ContactsContract$Contacts$AggregationSuggestions$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class ContactsContract_Contacts_AggregationSuggestions_Builder : public __jni_impl::android::provider::ContactsContract_Contacts_AggregationSuggestions_Builder
	{
	public:
		ContactsContract_Contacts_AggregationSuggestions_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ContactsContract_Contacts_AggregationSuggestions_Builder()
		{
			__constructor();
		}
	};
} // namespace android::provider

