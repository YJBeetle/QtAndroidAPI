#pragma once

#include "../../JObject.hpp"

namespace android::opengl
{
	class EGLObjectHandle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLObjectHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLObjectHandle(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getHandle();
		jlong getNativeHandle();
		jint hashCode();
	};
} // namespace android::opengl

