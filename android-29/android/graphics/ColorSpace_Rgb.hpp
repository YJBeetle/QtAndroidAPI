#pragma once

#include "./ColorSpace.hpp"

class JFloatArray;
namespace android::graphics
{
	class ColorSpace_Rgb_TransferParameters;
}
class JObject;
class JString;

namespace android::graphics
{
	class ColorSpace_Rgb : public android::graphics::ColorSpace
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Rgb(const char *className, const char *sig, Ts...agv) : android::graphics::ColorSpace(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Rgb(QAndroidJniObject obj);
		
		// Constructors
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, android::graphics::ColorSpace_Rgb_TransferParameters arg2);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, jdouble arg2);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, android::graphics::ColorSpace_Rgb_TransferParameters arg3);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, jdouble arg3);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JObject arg2, JObject arg3);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, JObject arg3, JObject arg4, jfloat arg5, jfloat arg6);
		
		// Methods
		jboolean equals(JObject arg0);
		JFloatArray fromLinear(JFloatArray arg0);
		JFloatArray fromLinear(jfloat arg0, jfloat arg1, jfloat arg2);
		JFloatArray fromXyz(JFloatArray arg0);
		JObject getEotf();
		JFloatArray getInverseTransform();
		JFloatArray getInverseTransform(JFloatArray arg0);
		jfloat getMaxValue(jint arg0);
		jfloat getMinValue(jint arg0);
		JObject getOetf();
		JFloatArray getPrimaries();
		JFloatArray getPrimaries(JFloatArray arg0);
		android::graphics::ColorSpace_Rgb_TransferParameters getTransferParameters();
		JFloatArray getTransform();
		JFloatArray getTransform(JFloatArray arg0);
		JFloatArray getWhitePoint();
		JFloatArray getWhitePoint(JFloatArray arg0);
		jint hashCode();
		jboolean isSrgb();
		jboolean isWideGamut();
		JFloatArray toLinear(JFloatArray arg0);
		JFloatArray toLinear(jfloat arg0, jfloat arg1, jfloat arg2);
		JFloatArray toXyz(JFloatArray arg0);
	};
} // namespace android::graphics

