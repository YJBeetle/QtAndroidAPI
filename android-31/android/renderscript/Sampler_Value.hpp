#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::renderscript
{
	class Sampler_Value : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::Sampler_Value CLAMP();
		static android::renderscript::Sampler_Value LINEAR();
		static android::renderscript::Sampler_Value LINEAR_MIP_LINEAR();
		static android::renderscript::Sampler_Value LINEAR_MIP_NEAREST();
		static android::renderscript::Sampler_Value MIRRORED_REPEAT();
		static android::renderscript::Sampler_Value NEAREST();
		static android::renderscript::Sampler_Value WRAP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Sampler_Value(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Sampler_Value(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::Sampler_Value valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::renderscript

