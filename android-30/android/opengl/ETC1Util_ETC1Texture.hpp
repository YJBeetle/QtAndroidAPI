#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace android::opengl
{
	class ETC1Util_ETC1Texture : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ETC1Util_ETC1Texture(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ETC1Util_ETC1Texture(QAndroidJniObject obj);
		
		// Constructors
		ETC1Util_ETC1Texture(jint arg0, jint arg1, java::nio::ByteBuffer arg2);
		
		// Methods
		java::nio::ByteBuffer getData();
		jint getHeight();
		jint getWidth();
	};
} // namespace android::opengl

