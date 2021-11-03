#pragma once

#include "../../JObject.hpp"

class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FaceDetector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FaceDetector(QAndroidJniObject obj);
		
		// Constructors
		FaceDetector(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint findFaces(android::graphics::Bitmap arg0, JArray arg1) const;
	};
} // namespace android::media

