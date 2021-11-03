#pragma once

#include "../../JObject.hpp"

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
	class Sampler_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Sampler_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Sampler_Builder(QJniObject obj);
		
		// Constructors
		Sampler_Builder(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::Sampler create();
		void setAnisotropy(jfloat arg0);
		void setMagnification(android::renderscript::Sampler_Value arg0);
		void setMinification(android::renderscript::Sampler_Value arg0);
		void setWrapS(android::renderscript::Sampler_Value arg0);
		void setWrapT(android::renderscript::Sampler_Value arg0);
	};
} // namespace android::renderscript

