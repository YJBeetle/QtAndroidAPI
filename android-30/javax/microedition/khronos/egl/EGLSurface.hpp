#pragma once

#include "../../../../JObject.hpp"

namespace javax::microedition::khronos::egl
{
	class EGLSurface : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLSurface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLSurface(QAndroidJniObject obj);
		
		// Constructors
		EGLSurface();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

