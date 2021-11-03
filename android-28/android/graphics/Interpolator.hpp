#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class Interpolator_Result;
}

namespace android::graphics
{
	class Interpolator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Interpolator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Interpolator(QJniObject obj);
		
		// Constructors
		Interpolator(jint arg0);
		Interpolator(jint arg0, jint arg1);
		
		// Methods
		jint getKeyFrameCount();
		jint getValueCount();
		void reset(jint arg0);
		void reset(jint arg0, jint arg1);
		void setKeyFrame(jint arg0, jint arg1, JFloatArray arg2);
		void setKeyFrame(jint arg0, jint arg1, JFloatArray arg2, JFloatArray arg3);
		void setRepeatMirror(jfloat arg0, jboolean arg1);
		android::graphics::Interpolator_Result timeToValues(JFloatArray arg0);
		android::graphics::Interpolator_Result timeToValues(jint arg0, JFloatArray arg1);
	};
} // namespace android::graphics

