#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLContext : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLContext(const char *className, const char *sig, Ts...agv) : android::opengl::EGLObjectHandle(className, sig, std::forward<Ts>(agv)...) {}
		EGLContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

