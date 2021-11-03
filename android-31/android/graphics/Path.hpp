#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Path_Direction;
}
namespace android::graphics
{
	class Path_FillType;
}
namespace android::graphics
{
	class Path_Op;
}
namespace android::graphics
{
	class RectF;
}

namespace android::graphics
{
	class Path : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Path(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Path(QJniObject obj);
		
		// Constructors
		Path();
		Path(android::graphics::Path &arg0);
		
		// Methods
		void addArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2);
		void addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void addCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3);
		void addOval(android::graphics::RectF arg0, android::graphics::Path_Direction arg1);
		void addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4);
		void addPath(android::graphics::Path arg0);
		void addPath(android::graphics::Path arg0, android::graphics::Matrix arg1);
		void addPath(android::graphics::Path arg0, jfloat arg1, jfloat arg2);
		void addRect(android::graphics::RectF arg0, android::graphics::Path_Direction arg1);
		void addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4);
		void addRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::Path_Direction arg2);
		void addRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3);
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JFloatArray arg4, android::graphics::Path_Direction arg5);
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Path_Direction arg6);
		JFloatArray approximate(jfloat arg0);
		void arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2);
		void arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		void close();
		void computeBounds(android::graphics::RectF arg0, jboolean arg1);
		void cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		android::graphics::Path_FillType getFillType();
		void incReserve(jint arg0);
		jboolean isConvex();
		jboolean isEmpty();
		jboolean isInverseFillType();
		jboolean isRect(android::graphics::RectF arg0);
		void lineTo(jfloat arg0, jfloat arg1);
		void moveTo(jfloat arg0, jfloat arg1);
		void offset(jfloat arg0, jfloat arg1);
		void offset(jfloat arg0, jfloat arg1, android::graphics::Path arg2);
		jboolean op(android::graphics::Path arg0, android::graphics::Path_Op arg1);
		jboolean op(android::graphics::Path arg0, android::graphics::Path arg1, android::graphics::Path_Op arg2);
		void quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void rCubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void rLineTo(jfloat arg0, jfloat arg1);
		void rMoveTo(jfloat arg0, jfloat arg1);
		void rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void reset();
		void rewind();
		void set(android::graphics::Path arg0);
		void setFillType(android::graphics::Path_FillType arg0);
		void setLastPoint(jfloat arg0, jfloat arg1);
		void toggleInverseFillType();
		void transform(android::graphics::Matrix arg0);
		void transform(android::graphics::Matrix arg0, android::graphics::Path arg1);
	};
} // namespace android::graphics

