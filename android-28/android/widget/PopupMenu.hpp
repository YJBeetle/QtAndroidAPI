#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class MenuInflater;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class PopupMenu : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PopupMenu(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PopupMenu(QAndroidJniObject obj);
		
		// Constructors
		PopupMenu(android::content::Context arg0, android::view::View arg1);
		PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2);
		PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		void dismiss();
		__JniBaseClass getDragToOpenListener();
		jint getGravity();
		__JniBaseClass getMenu();
		android::view::MenuInflater getMenuInflater();
		void inflate(jint arg0);
		void setGravity(jint arg0);
		void setOnDismissListener(__JniBaseClass arg0);
		void setOnMenuItemClickListener(__JniBaseClass arg0);
		void show();
	};
} // namespace android::widget

