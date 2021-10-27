#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ActionMode : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT_HIDE_DURATION();
		static jint TYPE_FLOATING();
		static jint TYPE_PRIMARY();
		
		ActionMode(QAndroidJniObject obj);
		// Constructors
		ActionMode();
		
		// Methods
		void finish();
		QAndroidJniObject getCustomView();
		QAndroidJniObject getMenu();
		QAndroidJniObject getMenuInflater();
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
		void setSubtitle(const QString &arg0);
		void setTag(jobject arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		void setTitleOptionalHint(jboolean arg0);
		void setType(jint arg0);
	};
} // namespace android::view

