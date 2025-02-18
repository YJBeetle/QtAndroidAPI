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
	class PathIterator;
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
		Path(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Path();
		Path(android::graphics::Path &arg0);
		
		// Methods
		void addArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2) const;
		void addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const;
		void addCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3) const;
		void addOval(android::graphics::RectF arg0, android::graphics::Path_Direction arg1) const;
		void addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4) const;
		void addPath(android::graphics::Path arg0) const;
		void addPath(android::graphics::Path arg0, android::graphics::Matrix arg1) const;
		void addPath(android::graphics::Path arg0, jfloat arg1, jfloat arg2) const;
		void addRect(android::graphics::RectF arg0, android::graphics::Path_Direction arg1) const;
		void addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4) const;
		void addRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::Path_Direction arg2) const;
		void addRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3) const;
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JFloatArray arg4, android::graphics::Path_Direction arg5) const;
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Path_Direction arg6) const;
		JFloatArray approximate(jfloat arg0) const;
		void arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2) const;
		void arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3) const;
		void arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6) const;
		void close() const;
		void computeBounds(android::graphics::RectF arg0, jboolean arg1) const;
		void conicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const;
		void cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const;
		android::graphics::Path_FillType getFillType() const;
		jint getGenerationId() const;
		android::graphics::PathIterator getPathIterator() const;
		void incReserve(jint arg0) const;
		jboolean interpolate(android::graphics::Path arg0, jfloat arg1, android::graphics::Path arg2) const;
		jboolean isConvex() const;
		jboolean isEmpty() const;
		jboolean isInterpolatable(android::graphics::Path arg0) const;
		jboolean isInverseFillType() const;
		jboolean isRect(android::graphics::RectF arg0) const;
		void lineTo(jfloat arg0, jfloat arg1) const;
		void moveTo(jfloat arg0, jfloat arg1) const;
		void offset(jfloat arg0, jfloat arg1) const;
		void offset(jfloat arg0, jfloat arg1, android::graphics::Path arg2) const;
		jboolean op(android::graphics::Path arg0, android::graphics::Path_Op arg1) const;
		jboolean op(android::graphics::Path arg0, android::graphics::Path arg1, android::graphics::Path_Op arg2) const;
		void quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void rConicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const;
		void rCubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const;
		void rLineTo(jfloat arg0, jfloat arg1) const;
		void rMoveTo(jfloat arg0, jfloat arg1) const;
		void rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void reset() const;
		void rewind() const;
		void set(android::graphics::Path arg0) const;
		void setFillType(android::graphics::Path_FillType arg0) const;
		void setLastPoint(jfloat arg0, jfloat arg1) const;
		void toggleInverseFillType() const;
		void transform(android::graphics::Matrix arg0) const;
		void transform(android::graphics::Matrix arg0, android::graphics::Path arg1) const;
	};
} // namespace android::graphics

