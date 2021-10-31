#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PictureInPictureParams;
}
namespace android::graphics
{
	class Rect;
}
namespace android::util
{
	class Rational;
}

namespace android::app
{
	class PictureInPictureParams_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PictureInPictureParams_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PictureInPictureParams_Builder(QAndroidJniObject obj);
		
		// Constructors
		PictureInPictureParams_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setActions(__JniBaseClass arg0);
		QAndroidJniObject setAspectRatio(android::util::Rational arg0);
		QAndroidJniObject setSourceRectHint(android::graphics::Rect arg0);
	};
} // namespace android::app

