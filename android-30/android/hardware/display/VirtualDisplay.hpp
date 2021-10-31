#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view
{
	class Display;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::display
{
	class VirtualDisplay : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDisplay(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDisplay(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::Display getDisplay();
		android::view::Surface getSurface();
		void release();
		void resize(jint arg0, jint arg1, jint arg2);
		void setSurface(android::view::Surface arg0);
		jstring toString();
	};
} // namespace android::hardware::display

