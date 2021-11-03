#pragma once

#include "../../../JObject.hpp"

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
	class AssetManager : public JObject
	{
	public:
		// Fields
		static jint ACCESS_BUFFER();
		static jint ACCESS_RANDOM();
		static jint ACCESS_STREAMING();
		static jint ACCESS_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit AssetManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssetManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jarray getLocales();
		jarray list(jstring arg0);
		java::io::InputStream open(jstring arg0);
		java::io::InputStream open(jstring arg0, jint arg1);
		android::content::res::AssetFileDescriptor openFd(jstring arg0);
		android::content::res::AssetFileDescriptor openNonAssetFd(jstring arg0);
		android::content::res::AssetFileDescriptor openNonAssetFd(jint arg0, jstring arg1);
		JObject openXmlResourceParser(jstring arg0);
		JObject openXmlResourceParser(jint arg0, jstring arg1);
	};
} // namespace android::content::res

