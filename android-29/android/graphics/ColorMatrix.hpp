#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class ColorMatrix : public __JniBaseClass
	{
	public:
		// Fields
		
		ColorMatrix(QAndroidJniObject obj);
		// Constructors
		ColorMatrix();
		ColorMatrix(jfloatArray arg0);
		ColorMatrix(android::graphics::ColorMatrix &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jfloatArray getArray();
		void postConcat(android::graphics::ColorMatrix arg0);
		void preConcat(android::graphics::ColorMatrix arg0);
		void reset();
		void set(jfloatArray arg0);
		void set(android::graphics::ColorMatrix arg0);
		void setConcat(android::graphics::ColorMatrix arg0, android::graphics::ColorMatrix arg1);
		void setRGB2YUV();
		void setRotate(jint arg0, jfloat arg1);
		void setSaturation(jfloat arg0);
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setYUV2RGB();
	};
} // namespace android::graphics

