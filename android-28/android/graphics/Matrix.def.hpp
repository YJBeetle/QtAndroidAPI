#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class Matrix_ScaleToFit;
}
namespace android::graphics
{
	class RectF;
}
class JObject;
class JString;

namespace android::graphics
{
	class Matrix : public JObject
	{
	public:
		// Fields
		static jint MPERSP_0();
		static jint MPERSP_1();
		static jint MPERSP_2();
		static jint MSCALE_X();
		static jint MSCALE_Y();
		static jint MSKEW_X();
		static jint MSKEW_Y();
		static jint MTRANS_X();
		static jint MTRANS_Y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Matrix();
		Matrix(android::graphics::Matrix &arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		void getValues(JFloatArray arg0) const;
		jint hashCode() const;
		jboolean invert(android::graphics::Matrix arg0) const;
		jboolean isAffine() const;
		jboolean isIdentity() const;
		void mapPoints(JFloatArray arg0) const;
		void mapPoints(JFloatArray arg0, JFloatArray arg1) const;
		void mapPoints(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const;
		jfloat mapRadius(jfloat arg0) const;
		jboolean mapRect(android::graphics::RectF arg0) const;
		jboolean mapRect(android::graphics::RectF arg0, android::graphics::RectF arg1) const;
		void mapVectors(JFloatArray arg0) const;
		void mapVectors(JFloatArray arg0, JFloatArray arg1) const;
		void mapVectors(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const;
		jboolean postConcat(android::graphics::Matrix arg0) const;
		jboolean postRotate(jfloat arg0) const;
		jboolean postRotate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		jboolean postScale(jfloat arg0, jfloat arg1) const;
		jboolean postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean postSkew(jfloat arg0, jfloat arg1) const;
		jboolean postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean postTranslate(jfloat arg0, jfloat arg1) const;
		jboolean preConcat(android::graphics::Matrix arg0) const;
		jboolean preRotate(jfloat arg0) const;
		jboolean preRotate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		jboolean preScale(jfloat arg0, jfloat arg1) const;
		jboolean preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean preSkew(jfloat arg0, jfloat arg1) const;
		jboolean preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean preTranslate(jfloat arg0, jfloat arg1) const;
		jboolean rectStaysRect() const;
		void reset() const;
		void set(android::graphics::Matrix arg0) const;
		jboolean setConcat(android::graphics::Matrix arg0, android::graphics::Matrix arg1) const;
		jboolean setPolyToPoly(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const;
		jboolean setRectToRect(android::graphics::RectF arg0, android::graphics::RectF arg1, android::graphics::Matrix_ScaleToFit arg2) const;
		void setRotate(jfloat arg0) const;
		void setRotate(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void setScale(jfloat arg0, jfloat arg1) const;
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setSinCos(jfloat arg0, jfloat arg1) const;
		void setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setSkew(jfloat arg0, jfloat arg1) const;
		void setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setTranslate(jfloat arg0, jfloat arg1) const;
		void setValues(JFloatArray arg0) const;
		JString toShortString() const;
		JString toString() const;
	};
} // namespace android::graphics

