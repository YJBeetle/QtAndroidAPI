#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class UserDictionary : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring UserDictionary::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UserDictionary::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.UserDictionary",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void UserDictionary::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.UserDictionary",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class UserDictionary : public __jni_impl::android::provider::UserDictionary
	{
	public:
		UserDictionary(QAndroidJniObject obj) { __thiz = obj; }
		UserDictionary()
		{
			__constructor();
		}
	};
} // namespace android::provider

