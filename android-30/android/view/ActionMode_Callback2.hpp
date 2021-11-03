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
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionMode_Callback2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionMode_Callback2(QJniObject obj);
		
		// Constructors
		ActionMode_Callback2();
		
		// Methods
		void onGetContentRect(android::view::ActionMode arg0, android::view::View arg1, android::graphics::Rect arg2) const;
	};
} // namespace android::view

