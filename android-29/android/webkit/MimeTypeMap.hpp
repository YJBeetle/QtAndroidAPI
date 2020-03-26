#pragma once

#ifndef ANDROID_WEBKIT_MIMETYPEMAP
#define ANDROID_WEBKIT_MIMETYPEMAP

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class MimeTypeMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean hasMimeType(jstring arg0);
		jstring getMimeTypeFromExtension(jstring arg0);
		jboolean hasExtension(jstring arg0);
		jstring getExtensionFromMimeType(jstring arg0);
		static QAndroidJniObject getSingleton();
		static jstring getFileExtensionFromUrl(jstring arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void MimeTypeMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.MimeTypeMap",
			"(V)V");
	}
	
	// Methods
	jboolean MimeTypeMap::hasMimeType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring MimeTypeMap::getMimeTypeFromExtension(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getMimeTypeFromExtension",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean MimeTypeMap::hasExtension(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasExtension",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring MimeTypeMap::getExtensionFromMimeType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExtensionFromMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject MimeTypeMap::getSingleton()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getSingleton",
			"()Landroid/webkit/MimeTypeMap;"
		);
	}
	jstring MimeTypeMap::getFileExtensionFromUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class MimeTypeMap : public __jni_impl::android::webkit::MimeTypeMap
	{
	public:
		MimeTypeMap(QAndroidJniObject obj) { __thiz = obj; }
		MimeTypeMap()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_MIMETYPEMAP

