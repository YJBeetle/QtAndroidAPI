#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class MenuInflater;
}
namespace android::view
{
	class View;
}
class JString;
class JObject;

namespace android::view
{
	class ActionMode : public JObject
	{
	public:
		// Fields
		static jint DEFAULT_HIDE_DURATION();
		static jint TYPE_FLOATING();
		static jint TYPE_PRIMARY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActionMode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionMode(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActionMode();
		
		// Methods
		void finish() const;
		android::view::View getCustomView() const;
		JObject getMenu() const;
		android::view::MenuInflater getMenuInflater() const;
		JString getSubtitle() const;
		JObject getTag() const;
		JString getTitle() const;
		jboolean getTitleOptionalHint() const;
		jint getType() const;
		void hide(jlong arg0) const;
		void invalidate() const;
		void invalidateContentRect() const;
		jboolean isTitleOptional() const;
		void onWindowFocusChanged(jboolean arg0) const;
		void setCustomView(android::view::View arg0) const;
		void setSubtitle(jint arg0) const;
		void setSubtitle(JString arg0) const;
		void setTag(JObject arg0) const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
		void setTitleOptionalHint(jboolean arg0) const;
		void setType(jint arg0) const;
	};
} // namespace android::view

