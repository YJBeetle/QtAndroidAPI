#include "../../JIntArray.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES10Ext.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	GLES10Ext::GLES10Ext(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GLES10Ext::GLES10Ext()
		: JObject(
			"android.opengl.GLES10Ext",
			"()V"
		) {}
	
	// Methods
	jint GLES10Ext::glQueryMatrixxOES(java::nio::IntBuffer arg0, java::nio::IntBuffer arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint GLES10Ext::glQueryMatrixxOES(JIntArray arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"([II[II)I",
			arg0.object<jintArray>(),
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
} // namespace android::opengl

