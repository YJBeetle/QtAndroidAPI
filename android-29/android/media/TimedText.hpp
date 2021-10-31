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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimedText(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TimedText(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getBounds();
		jstring getText();
	};
} // namespace android::media

