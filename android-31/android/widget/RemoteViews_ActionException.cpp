#include "../../java/lang/Exception.hpp"
#include "./RemoteViews_ActionException.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteViews_ActionException::RemoteViews_ActionException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	RemoteViews_ActionException::RemoteViews_ActionException(java::lang::Exception arg0)
		: java::lang::RuntimeException(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	RemoteViews_ActionException::RemoteViews_ActionException(jstring arg0)
		: java::lang::RuntimeException(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::widget

