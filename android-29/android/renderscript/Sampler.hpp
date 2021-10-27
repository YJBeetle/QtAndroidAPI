#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Sampler_Value;
}

namespace android::renderscript
{
	class Sampler : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		Sampler(QAndroidJniObject obj);
		// Constructors
		Sampler() = default;
		
		// Methods
		static QAndroidJniObject CLAMP_LINEAR(android::renderscript::RenderScript arg0);
		static QAndroidJniObject CLAMP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0);
		static QAndroidJniObject CLAMP_NEAREST(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MIRRORED_REPEAT_LINEAR(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MIRRORED_REPEAT_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MIRRORED_REPEAT_NEAREST(android::renderscript::RenderScript arg0);
		static QAndroidJniObject WRAP_LINEAR(android::renderscript::RenderScript arg0);
		static QAndroidJniObject WRAP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0);
		static QAndroidJniObject WRAP_NEAREST(android::renderscript::RenderScript arg0);
		jfloat getAnisotropy();
		QAndroidJniObject getMagnification();
		QAndroidJniObject getMinification();
		QAndroidJniObject getWrapS();
		QAndroidJniObject getWrapT();
	};
} // namespace android::renderscript

