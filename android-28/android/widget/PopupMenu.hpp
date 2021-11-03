#pragma once

#include "../../JObject.hpp"

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
	class PopupMenu : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PopupMenu(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PopupMenu(QJniObject obj);
		
		// Constructors
		PopupMenu(android::content::Context arg0, android::view::View arg1);
		PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2);
		PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		void dismiss();
		JObject getDragToOpenListener();
		jint getGravity();
		JObject getMenu();
		android::view::MenuInflater getMenuInflater();
		void inflate(jint arg0);
		void setGravity(jint arg0);
		void setOnDismissListener(JObject arg0);
		void setOnMenuItemClickListener(JObject arg0);
		void show();
	};
} // namespace android::widget

