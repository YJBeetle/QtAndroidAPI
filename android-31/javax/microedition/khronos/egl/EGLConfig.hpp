#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EGLConfig(QJniObject obj);
		
		// Constructors
		EGLConfig();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

