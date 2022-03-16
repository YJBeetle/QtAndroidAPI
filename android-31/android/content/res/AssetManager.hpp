#pragma once

#include "../../../JArray.hpp"
#include "./AssetFileDescriptor.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "./AssetManager.def.hpp"

namespace android::content::res
{
	// Fields
	inline jint AssetManager::ACCESS_BUFFER()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_BUFFER"
		);
	}
	inline jint AssetManager::ACCESS_RANDOM()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_RANDOM"
		);
	}
	inline jint AssetManager::ACCESS_STREAMING()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_STREAMING"
		);
	}
	inline jint AssetManager::ACCESS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.res.AssetManager",
			"ACCESS_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline void AssetManager::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JArray AssetManager::getLocales() const
	{
		return callObjectMethod(
			"getLocales",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray AssetManager::list(JString arg0) const
	{
		return callObjectMethod(
			"list",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream AssetManager::open(JString arg0) const
	{
		return callObjectMethod(
			"open",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream AssetManager::open(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"open",
			"(Ljava/lang/String;I)Ljava/io/InputStream;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::res::AssetFileDescriptor AssetManager::openFd(JString arg0) const
	{
		return callObjectMethod(
			"openFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object<jstring>()
		);
	}
	inline android::content::res::AssetFileDescriptor AssetManager::openNonAssetFd(JString arg0) const
	{
		return callObjectMethod(
			"openNonAssetFd",
			"(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object<jstring>()
		);
	}
	inline android::content::res::AssetFileDescriptor AssetManager::openNonAssetFd(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"openNonAssetFd",
			"(ILjava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline JObject AssetManager::openXmlResourceParser(JString arg0) const
	{
		return callObjectMethod(
			"openXmlResourceParser",
			"(Ljava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0.object<jstring>()
		);
	}
	inline JObject AssetManager::openXmlResourceParser(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"openXmlResourceParser",
			"(ILjava/lang/String;)Landroid/content/res/XmlResourceParser;",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::content::res

// Base class headers

