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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PopupMenu(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PopupMenu(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PopupMenu(android::content::Context arg0, android::view::View arg1);
		PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2);
		PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		void dismiss() const;
		JObject getDragToOpenListener() const;
		jint getGravity() const;
		JObject getMenu() const;
		android::view::MenuInflater getMenuInflater() const;
		void inflate(jint arg0) const;
		void setForceShowIcon(jboolean arg0) const;
		void setGravity(jint arg0) const;
		void setOnDismissListener(JObject arg0) const;
		void setOnMenuItemClickListener(JObject arg0) const;
		void show() const;
	};
} // namespace android::widget

