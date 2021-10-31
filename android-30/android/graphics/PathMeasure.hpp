#pragma once

#include "../../__JniBaseClass.hpp"

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
	class PathMeasure : public __JniBaseClass
	{
	public:
		// Fields
		static jint POSITION_MATRIX_FLAG();
		static jint TANGENT_MATRIX_FLAG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathMeasure(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PathMeasure(QAndroidJniObject obj);
		
		// Constructors
		PathMeasure();
		PathMeasure(android::graphics::Path arg0, jboolean arg1);
		
		// Methods
		jfloat getLength();
		jboolean getMatrix(jfloat arg0, android::graphics::Matrix arg1, jint arg2);
		jboolean getPosTan(jfloat arg0, jfloatArray arg1, jfloatArray arg2);
		jboolean getSegment(jfloat arg0, jfloat arg1, android::graphics::Path arg2, jboolean arg3);
		jboolean isClosed();
		jboolean nextContour();
		void setPath(android::graphics::Path arg0, jboolean arg1);
	};
} // namespace android::graphics

