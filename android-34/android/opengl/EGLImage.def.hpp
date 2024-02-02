#pragma once

#include "./EGLObjectHandle.def.hpp"

class JObject;

namespace android::opengl
{
	class EGLImage : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLImage(const char *className, const char *sig, Ts...agv) : android::opengl::EGLObjectHandle(className, sig, std::forward<Ts>(agv)...) {}
		EGLImage(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
	};
} // namespace android::opengl

