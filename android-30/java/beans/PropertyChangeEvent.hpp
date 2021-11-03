#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PropertyChangeEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		PropertyChangeEvent(QJniObject obj);
		
		// Constructors
		PropertyChangeEvent(jobject arg0, jstring arg1, jobject arg2, jobject arg3);
		
		// Methods
		jobject getNewValue();
		jobject getOldValue();
		jobject getPropagationId();
		jstring getPropertyName();
		void setPropagationId(jobject arg0);
		jstring toString();
	};
} // namespace java::beans

