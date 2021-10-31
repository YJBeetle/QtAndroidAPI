#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Matrix;
}

namespace android::graphics
{
	class Shader : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Shader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Shader(QJniObject obj);
		
		// Constructors
		Shader();
		
		// Methods
		jboolean getLocalMatrix(android::graphics::Matrix arg0);
		void setLocalMatrix(android::graphics::Matrix arg0);
	};
} // namespace android::graphics

