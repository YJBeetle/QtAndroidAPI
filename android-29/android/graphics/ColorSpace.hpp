#pragma once

#include "../../JObject.hpp"

class JFloatArray;
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
class JObject;
class JString;

namespace android::graphics
{
	class ColorSpace : public JObject
	{
	public:
		// Fields
		static JFloatArray ILLUMINANT_A();
		static JFloatArray ILLUMINANT_B();
		static JFloatArray ILLUMINANT_C();
		static JFloatArray ILLUMINANT_D50();
		static JFloatArray ILLUMINANT_D55();
		static JFloatArray ILLUMINANT_D60();
		static JFloatArray ILLUMINANT_D65();
		static JFloatArray ILLUMINANT_D75();
		static JFloatArray ILLUMINANT_E();
		static jint MAX_ID();
		static jint MIN_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace adapt(android::graphics::ColorSpace arg0, JFloatArray arg1);
		static android::graphics::ColorSpace adapt(android::graphics::ColorSpace arg0, JFloatArray arg1, android::graphics::ColorSpace_Adaptation arg2);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace_RenderIntent arg1);
		static android::graphics::ColorSpace_Connector connect(android::graphics::ColorSpace arg0, android::graphics::ColorSpace arg1, android::graphics::ColorSpace_RenderIntent arg2);
		static android::graphics::ColorSpace get(android::graphics::ColorSpace_Named arg0);
		static android::graphics::ColorSpace match(JFloatArray arg0, android::graphics::ColorSpace_Rgb_TransferParameters arg1);
		jboolean equals(JObject arg0);
		JFloatArray fromXyz(JFloatArray arg0);
		JFloatArray fromXyz(jfloat arg0, jfloat arg1, jfloat arg2);
		jint getComponentCount();
		jint getId();
		jfloat getMaxValue(jint arg0);
		jfloat getMinValue(jint arg0);
		android::graphics::ColorSpace_Model getModel();
		JString getName();
		jint hashCode();
		jboolean isSrgb();
		jboolean isWideGamut();
		JString toString();
		JFloatArray toXyz(JFloatArray arg0);
		JFloatArray toXyz(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::graphics

