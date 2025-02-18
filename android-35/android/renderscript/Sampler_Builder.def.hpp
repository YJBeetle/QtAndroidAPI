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
		Sampler_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Sampler_Builder(android::renderscript::RenderScript arg0);
		
		// Methods
		android::renderscript::Sampler create() const;
		void setAnisotropy(jfloat arg0) const;
		void setMagnification(android::renderscript::Sampler_Value arg0) const;
		void setMinification(android::renderscript::Sampler_Value arg0) const;
		void setWrapS(android::renderscript::Sampler_Value arg0) const;
		void setWrapT(android::renderscript::Sampler_Value arg0) const;
	};
} // namespace android::renderscript

