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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Interpolator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Interpolator(QAndroidJniObject obj);
		
		// Constructors
		Interpolator(jint arg0);
		Interpolator(jint arg0, jint arg1);
		
		// Methods
		jint getKeyFrameCount();
		jint getValueCount();
		void reset(jint arg0);
		void reset(jint arg0, jint arg1);
		void setKeyFrame(jint arg0, jint arg1, jfloatArray arg2);
		void setKeyFrame(jint arg0, jint arg1, jfloatArray arg2, jfloatArray arg3);
		void setRepeatMirror(jfloat arg0, jboolean arg1);
		android::graphics::Interpolator_Result timeToValues(jfloatArray arg0);
		android::graphics::Interpolator_Result timeToValues(jint arg0, jfloatArray arg1);
	};
} // namespace android::graphics

