#pragma once

#include "../../../../JObject.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLConfig : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLConfig(QAndroidJniObject obj);
		
		// Constructors
		EGLConfig();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

