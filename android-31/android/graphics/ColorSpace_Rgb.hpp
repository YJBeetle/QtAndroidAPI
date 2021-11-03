#pragma once

#include "../../JObject.hpp"
#include "./ColorSpace.hpp"

namespace android::graphics
{
	class ColorSpace_Rgb_TransferParameters;
}

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
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, android::graphics::ColorSpace_Rgb_TransferParameters arg2);
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jdouble arg2);
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jfloatArray arg2, android::graphics::ColorSpace_Rgb_TransferParameters arg3);
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jfloatArray arg2, jdouble arg3);
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, JObject arg2, JObject arg3);
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jfloatArray arg2, JObject arg3, JObject arg4, jfloat arg5, jfloat arg6);
		
		// Methods
		jboolean equals(jobject arg0);
		jfloatArray fromLinear(jfloatArray arg0);
		jfloatArray fromLinear(jfloat arg0, jfloat arg1, jfloat arg2);
		jfloatArray fromXyz(jfloatArray arg0);
		JObject getEotf();
		jfloatArray getInverseTransform();
		jfloatArray getInverseTransform(jfloatArray arg0);
		jfloat getMaxValue(jint arg0);
		jfloat getMinValue(jint arg0);
		JObject getOetf();
		jfloatArray getPrimaries();
		jfloatArray getPrimaries(jfloatArray arg0);
		android::graphics::ColorSpace_Rgb_TransferParameters getTransferParameters();
		jfloatArray getTransform();
		jfloatArray getTransform(jfloatArray arg0);
		jfloatArray getWhitePoint();
		jfloatArray getWhitePoint(jfloatArray arg0);
		jint hashCode();
		jboolean isSrgb();
		jboolean isWideGamut();
		jfloatArray toLinear(jfloatArray arg0);
		jfloatArray toLinear(jfloat arg0, jfloat arg1, jfloat arg2);
		jfloatArray toXyz(jfloatArray arg0);
	};
} // namespace android::graphics

