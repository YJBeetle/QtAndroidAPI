#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}

namespace android::hardware::camera2::params
{
	class TonemapCurve : public JObject
	{
	public:
		// Fields
		static jint CHANNEL_BLUE();
		static jint CHANNEL_GREEN();
		static jint CHANNEL_RED();
		static jfloat LEVEL_BLACK();
		static jfloat LEVEL_WHITE();
		static jint POINT_SIZE();
		
		// QJniObject forward
		template<typename ...Ts> explicit TonemapCurve(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TonemapCurve(QJniObject obj);
		
		// Constructors
		TonemapCurve(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2);
		
		// Methods
		void copyColorCurve(jint arg0, jfloatArray arg1, jint arg2);
		jboolean equals(jobject arg0);
		android::graphics::PointF getPoint(jint arg0, jint arg1);
		jint getPointCount(jint arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

