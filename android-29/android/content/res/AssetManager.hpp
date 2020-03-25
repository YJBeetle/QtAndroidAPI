#pragma once

#ifndef ANDROID_CONTENT_RES_ASSETMANAGER
#define ANDROID_CONTENT_RES_ASSETMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}

namespace __jni_impl::android::content::res
{
	class AssetManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCESS_BUFFER();
		static jint ACCESS_RANDOM();
		static jint ACCESS_STREAMING();
		static jint ACCESS_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject list(jstring arg0);
		void close();
		QAndroidJniObject open(jstring arg0, jint arg1);
		QAndroidJniObject open(jstring arg0);
		QAndroidJniObject openXmlResourceParser(jint arg0, jstring arg1);
		QAndroidJniObject openXmlResourceParser(jstring arg0);
		QAndroidJniObject openFd(jstring arg0);
		QAndroidJniObject openNonAssetFd(jint arg0, jstring arg1);
		QAndroidJniObject openNonAssetFd(jstring arg0);
		QAndroidJniObject getLocales();
	};
} // namespace __jni_impl::android::content::res

#include "../../../java/io/InputStream.hpp"
#include "AssetFileDescriptor.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	jint AssetManager::ACCESS_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_BUFFER");
	}
	jint AssetManager::ACCESS_RANDOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_RANDOM");
	}
	jint AssetManager::ACCESS_STREAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_STREAMING");
	}
	jint AssetManager::ACCESS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_UNKNOWN");
	}
	
	// Constructors
	void AssetManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AssetManager::list(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"list",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0);
	}
	void AssetManager::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject AssetManager::open(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"open",
			"(Ljava/lang/String;I)Ljava/io/InputStream;",
			arg0,
			arg1);
	}
	QAndroidJniObject AssetManager::open(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"open",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0);
	}
	QAndroidJniObject AssetManager::openXmlResourceParser(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openXmlResourceParser",
			"(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0,
			arg1);
	}
	QAndroidJniObject AssetManager::openXmlResourceParser(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openXmlResourceParser",
			"(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0);
	}
	QAndroidJniObject AssetManager::openFd(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0);
	}
	QAndroidJniObject AssetManager::openNonAssetFd(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openNonAssetFd",
			"(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1);
	}
	QAndroidJniObject AssetManager::openNonAssetFd(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openNonAssetFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0);
	}
	QAndroidJniObject AssetManager::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()[Ljava/lang/String;");
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class AssetManager : public __jni_impl::android::content::res::AssetManager
	{
	public:
		AssetManager(QAndroidJniObject obj) { __thiz = obj; }
		AssetManager()
		{
			__constructor();
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_ASSETMANAGER

