#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseAdapter.hpp"
#include "./CursorAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::widget
{
	class ResourceCursorAdapter : public android::widget::CursorAdapter
	{
	public:
		// Fields
		
		ResourceCursorAdapter(QAndroidJniObject obj);
		// Constructors
		ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2);
		ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jboolean arg3);
		ResourceCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jint arg3);
		ResourceCursorAdapter() = default;
		
		// Methods
		QAndroidJniObject newDropDownView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2);
		QAndroidJniObject newView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2);
		void setDropDownViewResource(jint arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setViewResource(jint arg0);
	};
} // namespace android::widget

