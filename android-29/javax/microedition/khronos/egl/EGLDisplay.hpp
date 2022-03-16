#pragma once

#include "../../../../JObject.hpp"

namespace javax::microedition::khronos::egl
{
	class EGLDisplay : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLDisplay(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLDisplay(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EGLDisplay();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

