#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::widget
{
	class RemoteViews_ActionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		RemoteViews_ActionException(QAndroidJniObject obj);
		// Constructors
		RemoteViews_ActionException(java::lang::Exception arg0);
		RemoteViews_ActionException(jstring arg0);
		RemoteViews_ActionException() = default;
		
		// Methods
	};
} // namespace android::widget

