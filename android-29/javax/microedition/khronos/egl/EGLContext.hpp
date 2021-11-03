#pragma once

#include "../../../../JObject.hpp"

namespace javax::microedition::khronos::egl
{
	class EGLContext : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EGLContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EGLContext(QJniObject obj);
		
		// Constructors
		EGLContext();
		
		// Methods
		static JObject getEGL();
		JObject getGL() const;
	};
} // namespace javax::microedition::khronos::egl

