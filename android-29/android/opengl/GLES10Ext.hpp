#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class IntBuffer;
}

namespace android::opengl
{
	class GLES10Ext : public __JniBaseClass
	{
	public:
		// Fields
		
		GLES10Ext(QAndroidJniObject obj);
		// Constructors
		GLES10Ext();
		
		// Methods
		static jint glQueryMatrixxOES(java::nio::IntBuffer arg0, java::nio::IntBuffer arg1);
		static jint glQueryMatrixxOES(jintArray arg0, jint arg1, jintArray arg2, jint arg3);
	};
} // namespace android::opengl

