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
		
		// QJniObject forward
		template<typename ...Ts> explicit AssetManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssetManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		JArray getLocales() const;
		JArray list(JString arg0) const;
		java::io::InputStream open(JString arg0) const;
		java::io::InputStream open(JString arg0, jint arg1) const;
		android::content::res::AssetFileDescriptor openFd(JString arg0) const;
		android::content::res::AssetFileDescriptor openNonAssetFd(JString arg0) const;
		android::content::res::AssetFileDescriptor openNonAssetFd(jint arg0, JString arg1) const;
		JObject openXmlResourceParser(JString arg0) const;
		JObject openXmlResourceParser(jint arg0, JString arg1) const;
	};
} // namespace android::content::res

