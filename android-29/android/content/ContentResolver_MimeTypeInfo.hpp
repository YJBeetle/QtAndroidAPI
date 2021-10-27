#pragma once

#ifndef ANDROID_CONTENT_CONTENTRESOLVER_MIMETYPEINFO
#define ANDROID_CONTENT_CONTENTRESOLVER_MIMETYPEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::content
{
	class ContentResolver_MimeTypeInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getContentDescription();
		QAndroidJniObject getIcon();
		jstring getLabel();
	};
} // namespace __jni_impl::android::content

#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentResolver_MimeTypeInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentResolver$MimeTypeInfo",
			"(V)V");
	}
	
	// Methods
	jstring ContentResolver_MimeTypeInfo::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ContentResolver_MimeTypeInfo::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring ContentResolver_MimeTypeInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentResolver_MimeTypeInfo : public __jni_impl::android::content::ContentResolver_MimeTypeInfo
	{
	public:
		ContentResolver_MimeTypeInfo(QAndroidJniObject obj) { __thiz = obj; }
		ContentResolver_MimeTypeInfo()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTRESOLVER_MIMETYPEINFO

