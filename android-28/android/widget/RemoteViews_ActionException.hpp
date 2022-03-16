#pragma once

#include "../../java/lang/RuntimeException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace android::widget
{
	class RemoteViews_ActionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews_ActionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_ActionException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		RemoteViews_ActionException(java::lang::Exception arg0);
		RemoteViews_ActionException(JString arg0);
		
		// Methods
	};
} // namespace android::widget

