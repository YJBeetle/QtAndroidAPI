#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Sampler(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Sampler(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::Sampler CLAMP_LINEAR(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler CLAMP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler CLAMP_NEAREST(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler MIRRORED_REPEAT_LINEAR(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler MIRRORED_REPEAT_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler MIRRORED_REPEAT_NEAREST(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler WRAP_LINEAR(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler WRAP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0);
		static android::renderscript::Sampler WRAP_NEAREST(android::renderscript::RenderScript arg0);
		jfloat getAnisotropy();
		android::renderscript::Sampler_Value getMagnification();
		android::renderscript::Sampler_Value getMinification();
		android::renderscript::Sampler_Value getWrapS();
		android::renderscript::Sampler_Value getWrapT();
	};
} // namespace android::renderscript

