#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class ColorSpace_Adaptation;
}
namespace android::graphics
{
	class ColorSpace_Connector;
}
namespace android::graphics
{
	class ColorSpace_Model;
}
namespace android::graphics
{
	class ColorSpace_Named;
}
namespace android::graphics
{
	class ColorSpace_RenderIntent;
}
namespace android::graphics
{
	class ColorSpace_Rgb_TransferParameters;
}

namespace android::graphics
{
	class ColorSpace : public JObject
	{
	public:
		// Fields
		static jfloatArray ILLUMINANT_A();
		static jfloatArray ILLUMINANT_B();
		static jfloatArray ILLUMINANT_C();
		static jfloatArray ILLUMINANT_D50();
		static jfloatArray ILLUMINANT_D55();
		static jfloatArray ILLUMINANT_D60();
		static jfloatArray ILLUMINANT_D65();
		static jfloatArray ILLUMINANT_D75();
		static jfloatArray ILLUMINANT_E();
		static jint MAX_ID();
		static jint MIN_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace adapt(android::graphics::ColorSpace arg0, jfloatArray arg1);
		static android::graphics::ColorSpace adapt(android::graphics::ColorSpace arg0, jfloatArray arg1, android::graphics::ColorSpace_Adaptation arg2);
		static jfloatArray cctToXyz(jint arg0);
		static jfloatArray chromaticAdaptation(android::graphics::ColorSpace_Adaptation arg0, jfloatArray arg1, jfloatArray arg2);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace_RenderIntent arg1);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1, android::graphics::ColorSpace_RenderIntent arg2);
		static android::graphics::ColorSpace get(android::graphics::ColorSpace_Named arg0);
		static android::graphics::ColorSpace match(jfloatArray arg0, android::graphics::ColorSpace_Rgb_TransferParameters arg1);
		jboolean equals(jobject arg0);
		jfloatArray fromXyz(jfloatArray arg0);
		jfloatArray fromXyz(jfloat arg0, jfloat arg1, jfloat arg2);
		jint getComponentCount();
		jint getId();
		jfloat getMaxValue(jint arg0);
		jfloat getMinValue(jint arg0);
		android::graphics::ColorSpace_Model getModel();
		jstring getName();
		jint hashCode();
		jboolean isSrgb();
		jboolean isWideGamut();
		jstring toString();
		jfloatArray toXyz(jfloatArray arg0);
		jfloatArray toXyz(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics

