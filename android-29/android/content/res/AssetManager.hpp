#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace java::io
{
	class InputStream;
}

namespace android::content::res
{
	class AssetManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCESS_BUFFER();
		static jint ACCESS_RANDOM();
		static jint ACCESS_STREAMING();
		static jint ACCESS_UNKNOWN();
		
		AssetManager(QAndroidJniObject obj);
		// Constructors
		AssetManager() = default;
		
		// Methods
		void close();
		jarray getLocales();
		jarray list(jstring arg0);
		QAndroidJniObject open(jstring arg0);
		QAndroidJniObject open(jstring arg0, jint arg1);
		QAndroidJniObject openFd(jstring arg0);
		QAndroidJniObject openNonAssetFd(jstring arg0);
		QAndroidJniObject openNonAssetFd(jint arg0, jstring arg1);
		QAndroidJniObject openXmlResourceParser(jstring arg0);
		QAndroidJniObject openXmlResourceParser(jint arg0, jstring arg1);
	};
} // namespace android::content::res

