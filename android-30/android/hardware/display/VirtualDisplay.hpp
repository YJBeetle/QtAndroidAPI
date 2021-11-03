#pragma once

#include "../../../JObject.hpp"

namespace android::view
{
	class Display;
}
namespace android::view
{
	class Surface;
}
class JString;

namespace android::hardware::display
{
	class VirtualDisplay : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VirtualDisplay(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDisplay(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::Display getDisplay();
		android::view::Surface getSurface();
		void release();
		void resize(jint arg0, jint arg1, jint arg2);
		void setSurface(android::view::Surface arg0);
		JString toString();
	};
} // namespace android::hardware::display

