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
		jboolean hasExtension(jstring arg0);
		QAndroidJniObject getExtensionFromMimeType(jstring arg0);
		static QAndroidJniObject getSingleton();
		static QAndroidJniObject getFileExtensionFromUrl(jstring arg0);
		jboolean hasMimeType(jstring arg0);
		QAndroidJniObject getMimeTypeFromExtension(jstring arg0);
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
	jboolean MimeTypeMap::hasExtension(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasExtension",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject MimeTypeMap::getExtensionFromMimeType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExtensionFromMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject MimeTypeMap::getSingleton()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getSingleton",
			"()Landroid/webkit/MimeTypeMap;");
	}
	QAndroidJniObject MimeTypeMap::getFileExtensionFromUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jboolean MimeTypeMap::hasMimeType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject MimeTypeMap::getMimeTypeFromExtension(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getMimeTypeFromExtension",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
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

