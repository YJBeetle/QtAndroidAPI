#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EGLContext(QJniObject obj);
		
		// Constructors
		EGLContext();
		
		// Methods
		static __JniBaseClass getEGL();
		__JniBaseClass getGL();
	};
} // namespace javax::microedition::khronos::egl

