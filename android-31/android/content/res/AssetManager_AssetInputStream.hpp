#pragma once

#include "../../../java/io/InputStream.hpp"

class JByteArray;
namespace android::content::res
{
	class AssetManager;
}

namespace android::content::res
{
	class AssetManager_AssetInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AssetManager_AssetInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		AssetManager_AssetInputStream(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint available();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0);
		jint read(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace android::content::res

