#pragma once

#include "../../../../JObject.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLDisplay : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLDisplay(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLDisplay(QJniObject obj);
		
		// Constructors
		EGLDisplay();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

