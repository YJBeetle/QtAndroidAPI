#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class ActionMode;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ActionMode_Callback2 : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActionMode_Callback2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionMode_Callback2(QAndroidJniObject obj);
		
		// Constructors
		ActionMode_Callback2();
		
		// Methods
		void onGetContentRect(android::view::ActionMode arg0, android::view::View arg1, android::graphics::Rect arg2);
	};
} // namespace android::view

