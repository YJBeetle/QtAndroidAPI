#include "../../java/nio/ByteBuffer.hpp"
#include "./ETC1Util_ETC1Texture.hpp"

namespace android::opengl
{
	// Fields
	
	ETC1Util_ETC1Texture::ETC1Util_ETC1Texture(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ETC1Util_ETC1Texture::ETC1Util_ETC1Texture(jint arg0, jint arg1, java::nio::ByteBuffer arg2)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.ETC1Util$ETC1Texture",
			"(IILjava/nio/ByteBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ETC1Util_ETC1Texture::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ETC1Util_ETC1Texture::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ETC1Util_ETC1Texture::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::opengl

