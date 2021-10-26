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
		static jstring getFileExtensionFromUrl(jstring arg0);
		static jstring getFileExtensionFromUrl(const QString &arg0);
		jboolean hasMimeType(jstring arg0);
		jboolean hasMimeType(const QString &arg0);
		jstring getMimeTypeFromExtension(jstring arg0);
		jstring getMimeTypeFromExtension(const QString &arg0);
		jboolean hasExtension(jstring arg0);
		jboolean hasExtension(const QString &arg0);
		jstring getExtensionFromMimeType(jstring arg0);
		jstring getExtensionFromMimeType(const QString &arg0);
		static QAndroidJniObject getSingleton();
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
	jstring MimeTypeMap::getFileExtensionFromUrl(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MimeTypeMap::getFileExtensionFromUrl(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.MimeTypeMap",
			"getFileExtensionFromUrl",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jboolean MimeTypeMap::hasMimeType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MimeTypeMap::hasMimeType(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring MimeTypeMap::getMimeTypeFromExtension(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getMimeTypeFromExtension",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean MimeTypeMap::hasExtension(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasExtension",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring MimeTypeMap::getExtensionFromMimeType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExtensionFromMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

