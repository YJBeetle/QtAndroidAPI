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
		ActionMode(QAndroidJniObject obj);
		
		// Constructors
		ActionMode();
		
		// Methods
		void finish();
		android::view::View getCustomView();
		JObject getMenu();
		android::view::MenuInflater getMenuInflater();
		jstring getSubtitle();
		jobject getTag();
		jstring getTitle();
		jboolean getTitleOptionalHint();
		jint getType();
		void hide(jlong arg0);
		void invalidate();
		void invalidateContentRect();
		jboolean isTitleOptional();
		void onWindowFocusChanged(jboolean arg0);
		void setCustomView(android::view::View arg0);
		void setSubtitle(jint arg0);
		void setSubtitle(jstring arg0);
		void setTag(jobject arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setTitleOptionalHint(jboolean arg0);
		void setType(jint arg0);
	};
} // namespace android::view

