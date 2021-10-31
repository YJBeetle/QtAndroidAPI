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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews_ActionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_ActionException(QAndroidJniObject obj);
		
		// Constructors
		RemoteViews_ActionException(java::lang::Exception arg0);
		RemoteViews_ActionException(jstring arg0);
		
		// Methods
	};
} // namespace android::widget

