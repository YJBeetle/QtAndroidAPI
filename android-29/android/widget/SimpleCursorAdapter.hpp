#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseAdapter.hpp"
#include "./CursorAdapter.hpp"
#include "./ResourceCursorAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class ImageView;
}
namespace android::widget
{
	class TextView;
}

namespace android::widget
{
	class SimpleCursorAdapter : public android::widget::ResourceCursorAdapter
	{
	public:
		// Fields
		
		SimpleCursorAdapter(QAndroidJniObject obj);
		// Constructors
		SimpleCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jarray arg3, jintArray arg4);
		SimpleCursorAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2, jarray arg3, jintArray arg4, jint arg5);
		SimpleCursorAdapter() = default;
		
		// Methods
		void bindView(android::view::View arg0, android::content::Context arg1, __JniBaseClass arg2);
		void changeCursorAndColumns(__JniBaseClass arg0, jarray arg1, jintArray arg2);
		jstring convertToString(__JniBaseClass arg0);
		QAndroidJniObject getCursorToStringConverter();
		jint getStringConversionColumn();
		QAndroidJniObject getViewBinder();
		void setCursorToStringConverter(__JniBaseClass arg0);
		void setStringConversionColumn(jint arg0);
		void setViewBinder(__JniBaseClass arg0);
		void setViewImage(android::widget::ImageView arg0, jstring arg1);
		void setViewText(android::widget::TextView arg0, jstring arg1);
		QAndroidJniObject swapCursor(__JniBaseClass arg0);
	};
} // namespace android::widget

