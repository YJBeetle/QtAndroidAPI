#pragma once

#include "../../JObject.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace android::opengl
{
	class ETC1Util_ETC1Texture : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ETC1Util_ETC1Texture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ETC1Util_ETC1Texture(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ETC1Util_ETC1Texture(jint arg0, jint arg1, java::nio::ByteBuffer arg2);
		
		// Methods
		java::nio::ByteBuffer getData() const;
		jint getHeight() const;
		jint getWidth() const;
	};
} // namespace android::opengl

