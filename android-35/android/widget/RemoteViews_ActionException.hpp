#pragma once

#include "../../java/lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "./RemoteViews_ActionException.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RemoteViews_ActionException::RemoteViews_ActionException(java::lang::Exception arg0)
		: java::lang::RuntimeException(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline RemoteViews_ActionException::RemoteViews_ActionException(JString arg0)
		: java::lang::RuntimeException(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
