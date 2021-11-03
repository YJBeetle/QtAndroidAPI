#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class BlurMaskFilter_Blur : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::BlurMaskFilter_Blur INNER();
		static android::graphics::BlurMaskFilter_Blur NORMAL();
		static android::graphics::BlurMaskFilter_Blur OUTER();
		static android::graphics::BlurMaskFilter_Blur SOLID();
		
		// QJniObject forward
		template<typename ...Ts> explicit BlurMaskFilter_Blur(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		BlurMaskFilter_Blur(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::BlurMaskFilter_Blur valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

