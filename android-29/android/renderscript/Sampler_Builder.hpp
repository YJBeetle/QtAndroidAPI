#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Sampler;
}
namespace android::renderscript
{
	class Sampler_Value;
}

namespace android::renderscript
{
	class Sampler_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Sampler_Builder(QAndroidJniObject obj);
		// Constructors
		Sampler_Builder(android::renderscript::RenderScript arg0);
		Sampler_Builder() = default;
		
		// Methods
		QAndroidJniObject create();
		void setAnisotropy(jfloat arg0);
		void setMagnification(android::renderscript::Sampler_Value arg0);
		void setMinification(android::renderscript::Sampler_Value arg0);
		void setWrapS(android::renderscript::Sampler_Value arg0);
		void setWrapT(android::renderscript::Sampler_Value arg0);
	};
} // namespace android::renderscript

