#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Matrix;
}

namespace android::view::animation
{
	class Transformation : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_ALPHA();
		static jint TYPE_BOTH();
		static jint TYPE_IDENTITY();
		static jint TYPE_MATRIX();
		
		Transformation(QAndroidJniObject obj);
		// Constructors
		Transformation();
		
		// Methods
		void clear();
		void compose(android::view::animation::Transformation arg0);
		jfloat getAlpha();
		QAndroidJniObject getMatrix();
		jint getTransformationType();
		void set(android::view::animation::Transformation arg0);
		void setAlpha(jfloat arg0);
		void setTransformationType(jint arg0);
		jstring toShortString();
		jstring toString();
	};
} // namespace android::view::animation

