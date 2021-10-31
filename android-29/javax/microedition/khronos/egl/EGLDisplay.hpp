#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLDisplay : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLDisplay(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EGLDisplay(QJniObject obj);
		
		// Constructors
		EGLDisplay();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

