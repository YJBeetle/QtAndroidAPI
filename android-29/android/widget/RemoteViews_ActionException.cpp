#include "../../java/lang/Exception.hpp"
#include "./RemoteViews_ActionException.hpp"

namespace android::widget
{
	// Fields
	
	RemoteViews_ActionException::RemoteViews_ActionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteViews_ActionException::RemoteViews_ActionException(java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	RemoteViews_ActionException::RemoteViews_ActionException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::widget

