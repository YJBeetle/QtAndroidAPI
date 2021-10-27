#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Radio : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ENTRY_CONTENT_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Audio_Radio::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Radio",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore_Audio_Radio::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Radio",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Radio : public __jni_impl::android::provider::MediaStore_Audio_Radio
	{
	public:
		MediaStore_Audio_Radio(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Radio()
		{
			__constructor();
		}
	};
} // namespace android::provider

