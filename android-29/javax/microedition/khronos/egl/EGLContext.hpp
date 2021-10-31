#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EGLContext(QAndroidJniObject obj);
		
		// Constructors
		EGLContext();
		
		// Methods
		static QAndroidJniObject getEGL();
		QAndroidJniObject getGL();
	};
} // namespace javax::microedition::khronos::egl

