#pragma once

#include "./ColorSpace.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpace_Rgb(const char *className, const char *sig, Ts...agv) : android::graphics::ColorSpace(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Rgb(QJniObject obj) : android::graphics::ColorSpace(obj) {}
		
		// Constructors
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, android::graphics::ColorSpace_Rgb_TransferParameters arg2);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, jdouble arg2);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, android::graphics::ColorSpace_Rgb_TransferParameters arg3);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, jdouble arg3);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JObject arg2, JObject arg3);
		ColorSpace_Rgb(JString arg0, JFloatArray arg1, JFloatArray arg2, JObject arg3, JObject arg4, jfloat arg5, jfloat arg6);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JFloatArray fromLinear(JFloatArray arg0) const;
		JFloatArray fromLinear(jfloat arg0, jfloat arg1, jfloat arg2) const;
		JFloatArray fromXyz(JFloatArray arg0) const;
		JObject getEotf() const;
		JFloatArray getInverseTransform() const;
		JFloatArray getInverseTransform(JFloatArray arg0) const;
		jfloat getMaxValue(jint arg0) const;
		jfloat getMinValue(jint arg0) const;
		JObject getOetf() const;
		JFloatArray getPrimaries() const;
		JFloatArray getPrimaries(JFloatArray arg0) const;
		android::graphics::ColorSpace_Rgb_TransferParameters getTransferParameters() const;
		JFloatArray getTransform() const;
		JFloatArray getTransform(JFloatArray arg0) const;
		JFloatArray getWhitePoint() const;
		JFloatArray getWhitePoint(JFloatArray arg0) const;
		jint hashCode() const;
		jboolean isSrgb() const;
		jboolean isWideGamut() const;
		JFloatArray toLinear(JFloatArray arg0) const;
		JFloatArray toLinear(jfloat arg0, jfloat arg1, jfloat arg2) const;
		JFloatArray toXyz(JFloatArray arg0) const;
	};
} // namespace android::graphics

