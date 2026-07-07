#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit GLES10Ext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GLES10Ext(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GLES10Ext();
		
		// Methods
		static jint glQueryMatrixxOES(java::nio::IntBuffer arg0, java::nio::IntBuffer arg1);
		static jint glQueryMatrixxOES(JIntArray arg0, jint arg1, JIntArray arg2, jint arg3);
	};
} // namespace android::opengl

