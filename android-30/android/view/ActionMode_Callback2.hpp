#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ActionMode_Callback2 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionMode_Callback2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActionMode_Callback2(QJniObject obj);
		
		// Constructors
		ActionMode_Callback2();
		
		// Methods
		void onGetContentRect(android::view::ActionMode arg0, android::view::View arg1, android::graphics::Rect arg2);
	};
} // namespace android::view

