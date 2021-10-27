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

