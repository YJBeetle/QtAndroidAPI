#pragma once

#include "../../JIntArray.hpp"
#include "../../java/nio/IntBuffer.def.hpp"
#include "./GLES10Ext.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	inline GLES10Ext::GLES10Ext()
		: JObject(
			"android.opengl.GLES10Ext",
			"()V"
		) {}
	
	// Methods
	inline jint GLES10Ext::glQueryMatrixxOES(java::nio::IntBuffer arg0, java::nio::IntBuffer arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint GLES10Ext::glQueryMatrixxOES(JIntArray arg0, jint arg1, JIntArray arg2, jint arg3)
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
