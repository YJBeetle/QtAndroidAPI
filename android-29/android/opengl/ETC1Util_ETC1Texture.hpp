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
		
		ETC1Util_ETC1Texture(QAndroidJniObject obj);
		// Constructors
		ETC1Util_ETC1Texture(jint &arg0, jint &arg1, java::nio::ByteBuffer &arg2);
		ETC1Util_ETC1Texture() = default;
		
		// Methods
		QAndroidJniObject getData();
		jint getHeight();
		jint getWidth();
	};
} // namespace android::opengl

