#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Matrix_ScaleToFit;
}
namespace android::graphics
{
	class RectF;
}

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Matrix(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Matrix(QJniObject obj);
		
		// Constructors
		Matrix();
		Matrix(android::graphics::Matrix &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		void getValues(jfloatArray arg0);
		jint hashCode();
		jboolean invert(android::graphics::Matrix arg0);
		jboolean isAffine();
		jboolean isIdentity();
		void mapPoints(jfloatArray arg0);
		void mapPoints(jfloatArray arg0, jfloatArray arg1);
		void mapPoints(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4);
		jfloat mapRadius(jfloat arg0);
		jboolean mapRect(android::graphics::RectF arg0);
		jboolean mapRect(android::graphics::RectF arg0, android::graphics::RectF arg1);
		void mapVectors(jfloatArray arg0);
		void mapVectors(jfloatArray arg0, jfloatArray arg1);
		void mapVectors(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4);
		jboolean postConcat(android::graphics::Matrix arg0);
		jboolean postRotate(jfloat arg0);
		jboolean postRotate(jfloat arg0, jfloat arg1, jfloat arg2);
		jboolean postScale(jfloat arg0, jfloat arg1);
		jboolean postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean postSkew(jfloat arg0, jfloat arg1);
		jboolean postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean postTranslate(jfloat arg0, jfloat arg1);
		jboolean preConcat(android::graphics::Matrix arg0);
		jboolean preRotate(jfloat arg0);
		jboolean preRotate(jfloat arg0, jfloat arg1, jfloat arg2);
		jboolean preScale(jfloat arg0, jfloat arg1);
		jboolean preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean preSkew(jfloat arg0, jfloat arg1);
		jboolean preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean preTranslate(jfloat arg0, jfloat arg1);
		jboolean rectStaysRect();
		void reset();
		void set(android::graphics::Matrix arg0);
		jboolean setConcat(android::graphics::Matrix arg0, android::graphics::Matrix arg1);
		jboolean setPolyToPoly(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4);
		jboolean setRectToRect(android::graphics::RectF arg0, android::graphics::RectF arg1, android::graphics::Matrix_ScaleToFit arg2);
		void setRotate(jfloat arg0);
		void setRotate(jfloat arg0, jfloat arg1, jfloat arg2);
		void setScale(jfloat arg0, jfloat arg1);
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setSinCos(jfloat arg0, jfloat arg1);
		void setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setSkew(jfloat arg0, jfloat arg1);
		void setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setTranslate(jfloat arg0, jfloat arg1);
		void setValues(jfloatArray arg0);
		jstring toShortString();
		jstring toString();
	};
} // namespace android::graphics

