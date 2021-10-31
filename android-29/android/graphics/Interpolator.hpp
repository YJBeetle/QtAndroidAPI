#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Interpolator_Result;
}

namespace android::graphics
{
	class Interpolator : public __JniBaseClass
	{
	public:
		// Fields
		
		Interpolator(QAndroidJniObject obj);
		// Constructors
		Interpolator(jint arg0);
		Interpolator(jint arg0, jint arg1);
		Interpolator() = default;
		
		// Methods
		jint getKeyFrameCount();
		jint getValueCount();
		void reset(jint arg0);
		void reset(jint arg0, jint arg1);
		void setKeyFrame(jint arg0, jint arg1, jfloatArray arg2);
		void setKeyFrame(jint arg0, jint arg1, jfloatArray arg2, jfloatArray arg3);
		void setRepeatMirror(jfloat arg0, jboolean arg1);
		QAndroidJniObject timeToValues(jfloatArray arg0);
		QAndroidJniObject timeToValues(jint arg0, jfloatArray arg1);
	};
} // namespace android::graphics

