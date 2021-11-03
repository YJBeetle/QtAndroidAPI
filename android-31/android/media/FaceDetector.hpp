#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::media
{
	class FaceDetector : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FaceDetector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FaceDetector(QJniObject obj);
		
		// Constructors
		FaceDetector(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint findFaces(android::graphics::Bitmap arg0, jarray arg1);
	};
} // namespace android::media

