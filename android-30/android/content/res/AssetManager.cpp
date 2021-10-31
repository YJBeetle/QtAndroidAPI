#include "./AssetFileDescriptor.hpp"
#include "../../../java/io/InputStream.hpp"
#include "./AssetManager.hpp"

namespace android::content::res
{
	// Fields
	jint AssetManager::ACCESS_BUFFER()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_BUFFER"
		);
	}
	jint AssetManager::ACCESS_RANDOM()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_RANDOM"
		);
	}
	jint AssetManager::ACCESS_STREAMING()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_STREAMING"
		);
	}
	jint AssetManager::ACCESS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	AssetManager::AssetManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void AssetManager::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jarray AssetManager::getLocales()
	{
		return callObjectMethod(
			"getLocales",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray AssetManager::list(jstring arg0)
	{
		return callObjectMethod(
			"list",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	java::io::InputStream AssetManager::open(jstring arg0)
	{
		return callObjectMethod(
			"open",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	java::io::InputStream AssetManager::open(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"open",
			"(Ljava/lang/String;I)Ljava/io/InputStream;",
			arg0,
			arg1
		);
	}
	android::content::res::AssetFileDescriptor AssetManager::openFd(jstring arg0)
	{
		return callObjectMethod(
			"openFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	android::content::res::AssetFileDescriptor AssetManager::openNonAssetFd(jstring arg0)
	{
		return callObjectMethod(
			"openNonAssetFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	android::content::res::AssetFileDescriptor AssetManager::openNonAssetFd(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"openNonAssetFd",
			"(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1
		);
	}
	__JniBaseClass AssetManager::openXmlResourceParser(jstring arg0)
	{
		return callObjectMethod(
			"openXmlResourceParser",
			"(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	__JniBaseClass AssetManager::openXmlResourceParser(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"openXmlResourceParser",
			"(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0,
			arg1
		);
	}
} // namespace android::content::res

