#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Matrix;
}

namespace android::graphics
{
	class Shader : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Shader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Shader(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Shader();
		
		// Methods
		jboolean getLocalMatrix(android::graphics::Matrix arg0) const;
		void setLocalMatrix(android::graphics::Matrix arg0) const;
	};
} // namespace android::graphics

