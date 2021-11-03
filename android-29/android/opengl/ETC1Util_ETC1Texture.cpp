#include "../../java/nio/ByteBuffer.hpp"
#include "./ETC1Util_ETC1Texture.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	ETC1Util_ETC1Texture::ETC1Util_ETC1Texture(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ETC1Util_ETC1Texture::ETC1Util_ETC1Texture(jint arg0, jint arg1, java::nio::ByteBuffer arg2)
		: JObject(
			"android.opengl.ETC1Util$ETC1Texture",
			"(IILjava/nio/ByteBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	java::nio::ByteBuffer ETC1Util_ETC1Texture::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ETC1Util_ETC1Texture::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ETC1Util_ETC1Texture::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::opengl

