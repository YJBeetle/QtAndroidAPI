#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class TimedText : public __JniBaseClass
	{
	public:
		// Fields
		
		TimedText(QAndroidJniObject obj);
		// Constructors
		TimedText() = default;
		
		// Methods
		QAndroidJniObject getBounds();
		jstring getText();
	};
} // namespace android::media

