#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/EventObject.hpp"

namespace java::lang
{
	class StringBuilder;
}

namespace java::beans
{
	class PropertyChangeEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		PropertyChangeEvent(QAndroidJniObject obj);
		// Constructors
		PropertyChangeEvent(jobject &arg0, jstring &arg1, jobject &arg2, jobject &arg3);
		PropertyChangeEvent(jobject &arg0, const QString &arg1, jobject &arg2, jobject &arg3);
		PropertyChangeEvent() = default;
		
		// Methods
		jobject getNewValue();
		jobject getOldValue();
		jobject getPropagationId();
		jstring getPropertyName();
		void setPropagationId(jobject arg0);
		jstring toString();
	};
} // namespace java::beans

