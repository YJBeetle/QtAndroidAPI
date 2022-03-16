#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Path;
}

namespace android::graphics
{
	class PathMeasure : public JObject
	{
	public:
		// Fields
		static jint POSITION_MATRIX_FLAG();
		static jint TANGENT_MATRIX_FLAG();
		
		// QJniObject forward
		template<typename ...Ts> explicit PathMeasure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PathMeasure(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PathMeasure();
		PathMeasure(android::graphics::Path arg0, jboolean arg1);
		
		// Methods
		jfloat getLength() const;
		jboolean getMatrix(jfloat arg0, android::graphics::Matrix arg1, jint arg2) const;
		jboolean getPosTan(jfloat arg0, JFloatArray arg1, JFloatArray arg2) const;
		jboolean getSegment(jfloat arg0, jfloat arg1, android::graphics::Path arg2, jboolean arg3) const;
		jboolean isClosed() const;
		jboolean nextContour() const;
		void setPath(android::graphics::Path arg0, jboolean arg1) const;
	};
} // namespace android::graphics

