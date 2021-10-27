#include "./AssetFileDescriptor.hpp"
#include "../../../java/io/InputStream.hpp"
#include "./AssetManager.hpp"

namespace android::content::res
{
	// Fields
	jint AssetManager::ACCESS_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_BUFFER"
		);
	}
	jint AssetManager::ACCESS_RANDOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_RANDOM"
		);
	}
	jint AssetManager::ACCESS_STREAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_STREAMING"
		);
	}
	jint AssetManager::ACCESS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_UNKNOWN"
		);
	}
	
	AssetManager::AssetManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AssetManager::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jarray AssetManager::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray AssetManager::list(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"list",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray AssetManager::list(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"list",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject AssetManager::open(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"open",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject AssetManager::open(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"open",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AssetManager::open(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"open",
			"(Ljava/lang/String;I)Ljava/io/InputStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AssetManager::open(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"open",
			"(Ljava/lang/String;I)Ljava/io/InputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject AssetManager::openFd(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	QAndroidJniObject AssetManager::openFd(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"openFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AssetManager::openNonAssetFd(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openNonAssetFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	QAndroidJniObject AssetManager::openNonAssetFd(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"openNonAssetFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AssetManager::openNonAssetFd(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openNonAssetFd",
			"(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AssetManager::openNonAssetFd(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openNonAssetFd",
			"(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject AssetManager::openXmlResourceParser(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openXmlResourceParser",
			"(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject AssetManager::openXmlResourceParser(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"openXmlResourceParser",
			"(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AssetManager::openXmlResourceParser(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openXmlResourceParser",
			"(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AssetManager::openXmlResourceParser(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openXmlResourceParser",
			"(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::content::res

