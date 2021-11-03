#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace java::io
{
	class InputStream;
}
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssetManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssetManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		JArray getLocales();
		JArray list(JString arg0);
		java::io::InputStream open(JString arg0);
		java::io::InputStream open(JString arg0, jint arg1);
		android::content::res::AssetFileDescriptor openFd(JString arg0);
		android::content::res::AssetFileDescriptor openNonAssetFd(JString arg0);
		android::content::res::AssetFileDescriptor openNonAssetFd(jint arg0, JString arg1);
		JObject openXmlResourceParser(JString arg0);
		JObject openXmlResourceParser(jint arg0, JString arg1);
	};
} // namespace android::content::res

