#pragma once

#include "../../JObject.hpp"

namespace java::nio
{
	class IntBuffer;
}

namespace android::opengl
{
	class GLES10Ext : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLES10Ext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GLES10Ext(QAndroidJniObject obj);
		
		// Constructors
		GLES10Ext();
		
		// Methods
		static jint glQueryMatrixxOES(java::nio::IntBuffer arg0, java::nio::IntBuffer arg1);
		static jint glQueryMatrixxOES(jintArray arg0, jint arg1, jintArray arg2, jint arg3);
	};
} // namespace android::opengl

