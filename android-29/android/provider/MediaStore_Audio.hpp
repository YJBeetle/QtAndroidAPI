#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class MediaStore_Audio : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring keyFor(jstring arg0);
		static jstring keyFor(const QString &arg0);
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void MediaStore_Audio::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio",
			"()V"
		);
	}
	
	// Methods
	jstring MediaStore_Audio::keyFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaStore_Audio::keyFor(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio : public __jni_impl::android::provider::MediaStore_Audio
	{
	public:
		MediaStore_Audio(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio()
		{
			__constructor();
		}
	};
} // namespace android::provider

